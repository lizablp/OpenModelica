import LoadSimulate as ls
import FMU as fmu
import compilation as cmp
import openOpenModelica as oom
import ompython as op
from OMPython import OMCSessionZMQ

omc = OMCSessionZMQ()
model="Motoreducteur"

cmp.simulation(model)
fmu.ExtractFMU(model)
ls.loadModelAndCSVFile(model)
ls.plotAndSaveModel(model)
cmp.compilationFMU(model)
oom.open(model)
op.operationModel(model)
