from OMPython import OMCSessionZMQ

omc = OMCSessionZMQ()
    
def open(model):
    # Load model
    omc.sendExpression("loadModel(Modelica)")

    # Compile the model Motoreducteur.mo
    omc.sendExpression("loadFile(getInstallationDirectoryPath() + \"/share/doc/omc/testmodels/{}.mo\")".format(model))
    omc.sendExpression('simulate("{0}.mo", outputFormat="csv")'.format(model))

    # Instantiate the model
    omc.sendExpression("instantiateModel(Motoreducteur)")

    # Simulate the model
    omc.sendExpression("simulate(Motoreducteur)")

    # Retrieve the simulation results
    result = omc.sendExpression("plot(inertia.a)")
    print(result)
open('Motoreducteur')
