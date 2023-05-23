from OMPython import OMCSessionZMQ
from OMPython import ModelicaSystem
import zipfile
import subprocess
import os
import shutil

model_file ='HeatingSystemfonctional.mo'
omc = OMCSessionZMQ()

model_path=omc.sendExpression("getInstallationDirectoryPath()") + "/share/doc/omc/testmodels/"
cmds = [
  'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/HeatingSystemfonctional.mo")',
  "simulate(HeatingSystemfonctional)",
  "plot(burner.alpha)"
  ]
for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))

zip_file_path = "C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/Modelica.Fluid.Examples.HeatingSystem.fmu" #path to change
extract_path = "C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU" #Directory extracted

with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
    # Extract all the contents to the specified directory
    zip_ref.extractall(extract_path)

print("Extraction completed.")

source_dir = 'C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources'
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
    'CMAKE_C_COMPILER=gcc',
    '-D',
    'FMI_INTERFACE_HEADER_FILES_DIRECTORY=C:\\Programmes\\OpenModelica\\include\\omc\\c\\fmi'
]

modelica_script = """
list(OpenModelica.Scripting.importFMU, interfaceOnly=true);
"""
result = omc.execute(modelica_script)
print(result)

# Path of the source file pthread
source_file = 'C:/Users/Lizab/workspace/OpenModelica/OMPython/pthread.h'
# Destination path where the file will be added
destination_path = 'C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources/meta/'

# Copy the file to the destination path
shutil.copy(source_file, destination_path)

# Destination path where the file will be added
destination_path2 = 'C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources/gc/'
destination_path3 = 'C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources/util/'

shutil.copy(source_file, destination_path2)
shutil.copy(source_file, destination_path3)

def replace_word_in_file(file_path, old_word, new_word):
    # Read the file content
    with open(file_path, 'r') as file:
        content = file.read()

    # Replace the word in the content
    modified_content = content.replace(old_word, new_word)

    # Write the modified content back to the file
    with open(file_path, 'w') as file:
        file.write(modified_content)

    print(f"Word '{old_word}' replaced with '{new_word}' in the file: {file_path}")

# Example usage
file_path = 'path/to/your/file.txt'
old_word = 'apple'
new_word = 'orange'

replace_word_in_file('C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources/gc/omc_gc.h', 'pthread.h', 'thread')
replace_word_in_file('C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources/gc/memory_pool.c', 'pthread.h', 'thread')
replace_word_in_file('C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Modelica.Fluid.Examples.HeatingSystem/HeatingSystemfonctional_FMU/sources/util/omc_init.h', 'pthread.h', 'thread')

subprocess.run(command)
subprocess.run(["cmake", "-E", "make_directory", build_dir], check=True)
subprocess.run(["cmake", source_dir], cwd=build_dir, check=True)
subprocess.run(["cmake", "--build", "."], cwd=build_dir, check=True)
