from OMPython import OMCSessionZMQ
import subprocess
import os
import shutil

def compilation(model):
    path_FMU='C:/Users/Lizab/workspace/OpenModelica/FMU/'+model+'_FMU/'
    source_dir = path_FMU + 'sources'
    build_dir = path_FMU + 'sources/build_cmake'


    omc = OMCSessionZMQ()
    source_dir = path_FMU + 'sources'
    build_dir = path_FMU + 'sources/build_cmake'

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
        'FMI_INTERFACE_HEADER_FILES_DIRECTORY=C:/Programmes/OpenModelica/include/omc/c/fmi/'
    ]

    modelica_script = """
    list(OpenModelica.Scripting.importFMU, interfaceOnly=true);
    """
    result = omc.execute(modelica_script)
    print(result)

    subprocess.run(command)
    subprocess.run(["cmake", "-E", "make_directory", build_dir], check=True)
    subprocess.run(["cmake", source_dir], cwd=build_dir, check=True)

#Does not work
'''
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

replace_word_in_file(source_dir + '/gc/omc_gc.h', 'pthread.h', 'thread')
replace_word_in_file(source_dir + '/gc/memory_pool.c', 'pthread.h', 'thread')
replace_word_in_file(source_dir + '/util/omc_init.h', 'pthread.h', 'thread')
replace_word_in_file(source_dir + '/external_solvers/ilaenv.c', 'name_len = strlen (name__);', 'name_len = (ftnlen)strlen(name__);')
replace_word_in_file(source_dir + '/external_solvers/ilaenv.c', 'opts_len = strlen (opts)', 'opts_len = (ftnlen)strlen (opts)')
replace_word_in_file(source_dir + '/external_solvers/iparmq.c', 'r__1 = log((real) nh) / log(2.f);', 'r__1 = (real)(log((double)nh) / log(2.0));')

subprocess.run(["cmake", "--build", ".", "--config", "Release", "--", "/p:CL_MPcount=1"], cwd=build_dir, check=True)
'''