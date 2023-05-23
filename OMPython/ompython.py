
from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem
import os

model_file ='Motoreducteur.mo'
omc = OMCSessionZMQ()
model_path=omc.sendExpression("getInstallationDirectoryPath()") + "/share/doc/omc/testmodels/"
cmds = [
  'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/Motoreducteur.mo")',
  "simulate(Motoreducteur)",
  "plot(inertia.a)"
  ]

for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))

#package_name = "Modelica.Fluid.Examples"
class_name = "Motoreducteur"
mod = ModelicaSystem(model_path + "Motoreducteur.mo", class_name)

#Set caracteristics of th model
#mod.setInputs(["inertia.a =1"])
#mod.setParameters(["heigth=-0.002"]) # e is radius and ig c
mod.setSimulationOptions(["stopTime=2.0","tolerance=1e-08"])

mod.setLinearizationOptions(["stopTime=2.0","tolerance=1e-06"])

mod.linearize()
mod.simulate() 

print(mod.getQuantities(["g","e"]))
print(mod.getInputs())
print(mod.getContinuous())
print(mod.getOutputs())
print(mod.getParameters())
print(mod.getSimulationOptions())

print(mod.getSolutions())
print(mod.getLinearizationOptions())
print(mod.getLinearInputs())
print(mod.getLinearOutputs())
print(mod.getLinearStates())
mod.simulate(resultfile="C:/Users/Lizab/workspace/OpenModelica/OMPython/HeatingSystemFunctional.mat")
#mod.simulate(simflags="-noEventEmit -noRestart -override=e=0.3,g=9.71") 
mod.buildModel()



