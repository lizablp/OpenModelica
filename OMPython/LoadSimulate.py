from OMPython import OMCSessionZMQ
import pandas as pd
import matplotlib.pyplot as plt
import os

os.chdir('workspace/OpenModelica/Result')

omc = OMCSessionZMQ()

## LOAD AND EXECUTE A MODEL
def loadModelAndCSVFile(model):
    model_file = 'C:/Programmes/OpenModelica/share/omc/testmodels/'+model+'.mo'
    omc.loadFile(model_file)

    omc.execute("loadModel(Modelica)")
    omc.execute(f"loadFile(\"{model_file}\");")

    # Set up the simulation parameters
    omc.execute("setCommandLineOptions(\"-s=Motoreducteur.mo\")")
    omc.execute("setSimulationOptions(stopTime=10, method=\"dassl\")")

    # Simulate the model
    omc.execute("simulate(Motoreducteur.mo)")

    ## RUN THE SIMULATION AND EXPORT THE RESULT TO A CSV FILE

    omc.sendExpression(f'simulate(Motoreducteur, outputFormat="csv")')
    csv_file = model+"_res.csv"

    # Specify the folder path to save the CSV file
    output_folder = "CSV"
    output_path = os.path.join(os.getcwd(), output_folder, csv_file)


    results = pd.read_csv(csv_file)
    results.to_csv(output_path, index=False)

    # Access the saved CSV file
    saved_results = pd.read_csv(output_path)

    # Column names
    #print(results.columns)
    return results

def plotAndSaveModel(model):
    # Extract example of variable are in results.columns
    time = loadModelAndCSVFile.results["time"]
    variable1 = loadModelAndCSVFile.results["inertia.w"]
    variable2 = loadModelAndCSVFile.results["lossyGear.phi_a"]

    ## PLOT VARIABLES
    plt.plot(time, variable1, label="Variable 1")
    plt.plot(time, variable2, label="Variable 2")

    # Add labels and title
    plt.xlabel("Time")
    plt.ylabel("Value")
    plt.title("Simulation Results")

    # Add legend
    plt.legend()

    # Display the plot
    plt.show()
    plt.savefig("Image/"+model+"_res.jpg")
