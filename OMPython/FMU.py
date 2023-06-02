from OMPython import OMCSessionZMQ
import zipfile
import os

def ExtractFMU(model):
    path='C:/Users/Lizab/AppData/Local/Temp/OpenModelica/OMEdit/' +model + '/' #path to change if it is another model
    path_FMU='C:/Users/Lizab/workspace/OpenModelica/FMU/'+model+'_FMU/' #oath to the directory where the FMU file is located
    
    omc = OMCSessionZMQ()

    zip_file_path = path + model+".fmu" #directory where the contentes of the FMU is exported
    extract_path = path_FMU #Directory extracted

    with zipfile.ZipFile(zip_file_path, 'r') as zip_ref:
        # Extract all the contents to the specified directory
        zip_ref.extractall(extract_path) #extract all the contents of the FMU to the specified directory

    print("Extraction completed.")
