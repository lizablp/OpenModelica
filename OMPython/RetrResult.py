#!/usr/bin/python
import matplotlib.pyplot as plt
import pandas as pd
from OMPython import OMCSessionZMQ
import os

os.chdir(r'C:\Users\Lizab\workspace\OpenModelica\OMPython\CalledbyPython')
# Connect to OpenModelica
omc = OMCSessionZMQ()

model_name = "CalledbyPython.mo"  # Replace with your Modelica model name
omc.sendExpression(f'loadFile("{model_name}")')

# Set simulation options
omc.sendExpression(f'simulate(CalledbyPython, stopTime=10.0, numberOfIntervals=500)')

# Run the simulation and export results to a CSV file
omc.sendExpression(f'simulate(CalledbyPython, outputFormat="csv")')

# Read the CSV file
csv_file = "CalledbyPython_res.csv"  # Replace with the actual file name and path if necessary
results = pd.read_csv(csv_file)

# Inspect the column names
print(results.columns)

# Extract variables of interest
time = results["time"]
variable1 = results["x"]
variable2 = results["y"]


# Plot the variables
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
plt.savefig("CalledbyPython_res.jpg")

def zeros(n): 
    vec = [0.0]
    for i in range(int(n)-1): vec = vec + [0.0]
    return vec
res_file = open("CalledbyPython_res.plt",'r',1)
line = res_file.readline()
size = int(res_file.readline().split('=')[1])
time = zeros(size)
y = zeros(size)
while line != ['DataSet: time\n']:
    line = res_file.readline().split(',')[0:1]
for j in range(int(size)):
    time[j] = float(res_file.readline().split(',')[0])
while line != ['DataSet: y\n']:
    line=res_file.readline().split(',')[0:1]
for j in range(int(size)):
    y[j]=float(res_file.readline().split(',')[1])
res_file.close()
