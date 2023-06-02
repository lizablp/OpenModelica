
from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem
import os

def operationModel(model):
  omc = OMCSessionZMQ()
  model_path=omc.sendExpression("getInstallationDirectoryPath()") + "/share/doc/omc/testmodels/" #Retrieves the installation directory path of OpenModelica and appends the path to the test models

  #package_name = "Modelica.Fluid.Examples"
  class_name = model
  mod = ModelicaSystem(model_path + model+".mo", class_name) #That create an instance of ModelicaSystem, it is possible to had a package name

  #Set caracteristics of th model
  mod.setParameters(["const.k=-0.002"]) # e is radius and ig c
  mod.setSimulationOptions(["stopTime=2.0","tolerance=1e-08"])
  mod.setContinuous(["inertia.w=612.55", "lossyGear.a_a=-51", "constantVoltage.p.i=-0.46"])
  mod.setLinearizationOptions(["stopTime=2.0","tolerance=1e-06"])

  mod.linearize() #Performs linearization of the model
  mod.simulate() #Performs simulation  of the model, it is possible to specify the path, for example : mod.simulate(resultfile="C:/Users/Lizab/workspace/OpenModelica/OMPython/Motoreducteur.mat")

  #Display some caracteriscs of the model
  print("QUANTITIES :", mod.getQuantities(["g","e"]))
  print("\n INPUT :", mod.getInputs())
  print("\n CONTINUOUS :", mod.getContinuous())
  print("\n OUTPUT :",mod.getOutputs())
  print("\n PARAMETERS :", mod.getParameters())
  print("\n SIMULATION OPTIONS :",mod.getSimulationOptions())

  print("\n SOLUTIONS :",mod.getSolutions())
  print("\n LINEARIZATION OPTIONS :", mod.getLinearizationOptions())
  print("\n LINEARIZATION INPUTS :", mod.getLinearInputs())
  print("\n LINEARIZATION OUTPUTS :", mod.getLinearOutputs())
  print("\n LINEARIZATION STATES :", mod.getLinearStates())

  #mod.simulate(simflags="-noEventEmit -noRestart -override=e=0.3,g=9.71") 
  mod.buildModel() #Builds the model
  



