import OMPython
from OMPython import OMCSessionZMQ
import zipfile
import subprocess
import os
model_file ='HeatingSystemfonctional.mo'
omc = OMCSessionZMQ()
cmds = [
  'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/HeatingSystemfonctional.mo")',
  "simulate(HeatingSystemfonctional)",
  "plot(h)"
  ]
for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))

zip_file_path = "C:\\Users\\Lizab\\AppData\\Local\\Temp\\OpenModelica\\OMEdit\\HeatingSystemfonctional\\HeatingSystemfonctional.fmu" #path to change
extract_path = "C:\\Users\\Lizab\\AppData\\Local\\Temp\\OpenModelica\\OMEdit\\HeatingSystemfonctional\\HeatingSystemfonctional_FMU" #Directory extracted

with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
    # Extract all the contents to the specified directory
    zip_ref.extractall(extract_path)

print("Extraction completed.")

source_dir = 'C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/HeatingSystemfonctional/HeatingSystemfonctional_FMU/sources'
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

'''subprocess.run(command)
subprocess.run(["cmake", "-E", "make_directory", build_dir], check=True)
subprocess.run(["cmake", source_dir], cwd=build_dir, check=True)
subprocess.run(["cmake", "--build", "."], cwd=build_dir, check=True)'''

modelica_script = """
list(OpenModelica.Scripting.importFMU, interfaceOnly=true);
"""
result = omc.execute(modelica_script)
print(result)