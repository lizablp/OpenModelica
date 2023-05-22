import OMPython
from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem
import zipfile
import subprocess
import os
model_file ='Motoreducteur.mo'
omc = OMCSessionZMQ()

'''subprocess.run(command)
subprocess.run(["cmake", "-E", "make_directory", build_dir], check=True)
subprocess.run(["cmake", source_dir], cwd=build_dir, check=True)
subprocess.run(["cmake", "--build", "."], cwd=build_dir, check=True)
'''

model_path=omc.sendExpression("getInstallationDirectoryPath()") + "/share/doc/omc/testmodels/"
cmds = [
  'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/Motoreducteur.mo")',
  "simulate(Motoreducteur)",
  "plot(h)"
  ]
for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))

zip_file_path = "C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Motoreducteur/Motoreducteur.fmu" #path to change
extract_path = "C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Motoreducteur/Motoreducteur_FMU" #Directory extracted

with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
    # Extract all the contents to the specified directory
    zip_ref.extractall(extract_path)

print("Extraction completed.")

source_dir = 'C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Motoreducteur/Motoreducteur_FMU/sources'
build_dir = 'build_cmake'

os.chdir(source_dir)
command = [
    'cmake',
    '-S',
    '.',
    '-B',
    'build_cmake',
    '-D',
    'RUNTIME_DEPENDENCIES_LEVEL=modelica',
    '-D',
    'CMAKE_C_COMPILER=clang',
    '-D',
    'CMAKE_CXX_COMPILER=clang++',
    '-D',
    'FMI_INTERFACE_HEADER_FILES_DIRECTORY=C:\\Programmes\\OpenModelica\\include\\omc\\c\\fmi'
]

modelica_script = """
list(OpenModelica.Scripting.importFMU, interfaceOnly=true);
"""
result = omc.execute(modelica_script)
print(result)

package_name = "Modelica.Fluid.Examples"
class_name = "Motoreducteur"
mod = ModelicaSystem(model_path + "Motoreducteur.mo", class_name)

#Set caracteristics of th model
#mod.setInputs(["cAi=1","Ti=2"])
#mod.setParameters(["e=14","g=0.5"]) # e is radius and ig c
#mod.setSimulationOptions(["stopTime=2.0","tolerance=1e-08"])
'''
mod.setLinearizationOptions(["stopTime=2.0","tolerance=1e-06"])

mod.linearize()

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
#mod.simulate(resultfile="C:/Users/Lizab/workspace/OpenModelica/HeatingSystemfonctional.mat")
#mod.simulate(simflags="-noEventEmit -noRestart -override=e=0.3,g=9.71") 
mod.buildModel()

#from OMPython import ModelicaSystem
from OMMatlab import *
#omc= OMMatlab()
'''

