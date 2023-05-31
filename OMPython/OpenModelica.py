import LoadSimulate as ls
import FMU as fmu
import compilation as cmp
import openOpenModelica as oom
from OMPython import OMCSessionZMQ

omc = OMCSessionZMQ()
model="Motoreducteur"

ls.loadModelAndCSVFile(model)
ls.plotAndSaveModel(model)
fmu.ExtractFMU(model)
cmp.compilation(model)
oom.open()
