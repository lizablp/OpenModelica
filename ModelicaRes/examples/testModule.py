from modelicares import SimRes

# Load the simulation result file (.mat or .csv)
res = SimRes('examples\ChuaCircuit.mat') #make an error on natu librairie

# Get the names of all variables in the result file
variable_names = res.varNames()

# Print the variable names
for name in variable_names:
    print(name)

# Access a specific variable from the result file
variable = res['modelName.variableName']

# Get the time values for the variable
time = variable.time()

# Get the corresponding values of the variable
values = variable.values()

# Plot the variable over time
import matplotlib.pyplot as plt

plt.plot(time, values)
plt.xlabel('Time')
plt.ylabel('Variable Value')
plt.title('Variable over Time')
plt.show()