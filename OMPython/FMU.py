from OMPython import OMCSessionZMQ
import zipfile
import subprocess
import os
import shutil

def ExtractFMU(model):
   
    path='C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/Motoreducteur/' #path to change if is another model
    path_FMU='C:/Users/Lizab/workspace/OpenModelica/FMU/Motoreducteur_FMU/'
    os.chdir('C:/Users/Lizab/workspace/OpenModelica/Simulation') #To change

    omc = OMCSessionZMQ()

    model_path=omc.sendExpression("getInstallationDirectoryPath()") + "/share/doc/omc/testmodels/"
    cmds = [
        'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/Motoreducteur.mo")',
        "simulate(Motoreducteur)",
        "plot(inertia.a)" #plot an example of variable
    ]

    for cmd in cmds:
        answer = omc.sendExpression(cmd)
        print("\n{}:\n{}".format(cmd, answer))

    zip_file_path = path + model+".fmu" 
    extract_path = path_FMU #Directory extracted

    with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
        # Extract all the contents to the specified directory
        zip_ref.extractall(extract_path)

    print("Extraction completed.")

ExtractFMU("Motoreducteur")