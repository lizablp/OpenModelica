from OMPython import OMCSessionZMQ
import zipfile
import subprocess
import os
import shutil
import re
import fileinput

model_file ='Motoreducteur.mo'
omc = OMCSessionZMQ()

#plot(inertia.a)"

model_path=omc.sendExpression("getInstallationDirectoryPath()") + "/share/doc/omc/testmodels/"
cmds = [
  'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/Motoreducteur.mo")',
  "simulate(Motoreducteur)"
  ]
for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))

zip_file_path = "C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Motoreducteur/Motoreducteur.fmu" #path to change
extract_path = "C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU" #Directory extracted

with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
    # Extract all the contents to the specified directory
    zip_ref.extractall(extract_path)

print("Extraction completed.")

source_dir = 'C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources'
build_dir = 'C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake'

import os
os.environ["CXX"] = "g++"
os.environ["CC"] = "gcc"

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
    'CMAKE_C_COMPILER=cl',  # Use 'cl' for MSVC compiler
    '-D',
    'CMAKE_CXX_COMPILER=cl',  # Use 'cl' for MSVC compiler
    '-D',
    'FMI_INTERFACE_HEADER_FILES_DIRECTORY=C:/Programmes/OpenModelica/include/omc/c/fmi/',
    '-G',
    'Visual Studio 16 2019' 
]

modelica_script = """
list(OpenModelica.Scripting.importFMU, interfaceOnly=true);
"""
result = omc.execute(modelica_script)
print(result)

# Path of the source file pthread
source_file = 'C:/Users/Lizab/workspace/OpenModelica/OMPython/pthread.h'
# Destination path where the file will be added
destination_path = 'C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/meta/'

# Copy the file to the destination path
shutil.copy(source_file, destination_path)

# Destination path where the file will be added
destination_path2 = 'C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/gc/'
destination_path3 = 'C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/util/'

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

folder_path = '/path/to/folder'  # Replace with the actual folder path
word_to_add = '# New Word'

replace_word_in_file(source_dir + '/gc/omc_gc.h', 'pthread.h', 'thread')
replace_word_in_file(source_dir + '/gc/memory_pool.c', 'pthread.h', 'thread')
replace_word_in_file(source_dir + '/util/omc_init.h', 'pthread.h', 'thread')
replace_word_in_file(source_dir + '/external_solvers/ilaenv.c', 'name_len = strlen (name__);', 'name_len = (ftnlen)strlen(name__);')
replace_word_in_file(source_dir + '/external_solvers/ilaenv.c', 'opts_len = strlen (opts)', 'opts_len = (ftnlen)strlen (opts)')
replace_word_in_file(source_dir + '/external_solvers/iparmq.c', 'r__1 = log((real) nh) / log(2.f);', 'r__1 = (real)(log((double)nh) / log(2.0));')

with open("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/CMakeLists.txt", "a") as myfile:
    myfile.write("set(CMAKE_CXX_COMPILER g++)")   
    
folder =  source_dir + '/'
folder2 = source_dir + '/external_solvers'
folder3 = source_dir + '/gc'
folder4 = source_dir + '/math-support'
folder5 = source_dir + '/meta'
folder6 = source_dir + '/simulation'
folder7 = source_dir + '/simulation/solver'
folder8 = source_dir + '/simulation/solver/initialization'
folder9 = source_dir + '/util'

#subprocess.run(["cmake", "-E", "remove_directory", build_dir], check=True)
subprocess.run(command)
current_ext='.c'
new_ext='.cpp'

subprocess.run(["cmake", "-E", "make_directory", build_dir], check=True)
subprocess.run(["cmake", source_dir], cwd=build_dir, check=True)

def changeExtension(folder):
    for filename in os.listdir(folder):
        if filename.endswith(current_ext):
            base = os.path.splitext(filename)[0]
            os.rename(os.path.join(folder, filename), os.path.join(folder, base + new_ext))
            
'''changeExtension(folder)
changeExtension(folder2)
changeExtension(folder3)
changeExtension(folder4)
changeExtension(folder5)
changeExtension(folder6)
changeExtension(folder7)
changeExtension(folder8)
changeExtension(folder9)

# Example usage
replace_word_in_file(source_dir + '/build_cmake/Motoreducteur.vcxproj', '.c', '.cpp')  
replace_word_in_file(source_dir + '/build_cmake/Motoreducteur.vcxproj', 'http://schemas.microsoft.cppom/developer/msbuild/2003', 'http://schemas.microsoft.com/developer/msbuild/2003')                     
replace_word_in_file(source_dir + '/CMakeLists.txt', '*.c', '*.cpp')  
'''
def remove_word_from_file(file_path, target_word):
    with open(file_path, 'r') as file:
        content = file.read()

    modified_content = content.replace(target_word, '')

    with open(file_path, 'w') as file:
        file.write(modified_content)

    print(f"The word '{target_word}' has been removed from the file.")

# Usage example

#remove_word_from_file(folder, 'extern "C"')

# def addexternC(folder):
#     # Iterate over all files in the folder
#     for filename in os.listdir(folder2):
#         if filename.endswith('.cpp'):  # Check for files with the '.cpp' extension
#             file_path = os.path.join(folder2, filename)
            
#             # Read the contents of the file
#             with open(file_path, 'r') as file:
#                 file_contents = file.readlines()

#             # Insert the word on the first line
#             file_contents.insert(0, 'extern "C"{' + '\n')

#             # Write the modified contents back to the file
#             with open(file_path, 'w') as file:
#                 file.writelines(file_contents)
                        
#     for root, dirs, files in os.walk(folder):
#         for file in files:
#             if file.endswith('.cpp'):
#                 file_path = os.path.join(root, file)
#                 lines = list(fileinput.input(file_path, inplace=True))
                
#                 if len(lines) > 0:
#                     lines[-1] = lines[-1].rstrip() + ' ' + '}' + '\n'
                
#                 with open(file_path, 'w') as file:
#                     file.writelines(lines)


#subprocess.run(["cmake", "--build", "."], cwd=build_dir, check=True)

subprocess.run(["cmake", "--build", ".", "--config", "Release"], cwd=build_dir, check=True)



def change_file_extension(filename, new_extension):
    # Split the file name and current extension
    name, old_extension = os.path.splitext(filename)

    # Generate the new file name with the desired extension
    new_filename = name + new_extension

    # Rename the file
    os.rename(filename, new_filename)
# Example usage
'''change_file_extension("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/Modelica_Fluid_Examples_HeatingSystem.vcxproj", ".vcproj")
os.rename("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/ALL_BUILD.vcxproj.filters", "C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/ALL_BUILD.vcproj.filters")
change_file_extension("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/ALL_BUILD.vcxproj.filters", ".vcproj.filters")
change_file_extension("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/create_zip.vcxproj", ".vcproj")
change_file_extension("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/INSTALL.vcxproj", ".vcproj")
change_file_extension("C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/sources/build_cmake/ZERO_CHECK.vcxproj", ".vcproj")
'''            
            

