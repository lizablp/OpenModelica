import OMPython
from OMPython import OMCSessionZMQ
omc=OMPython.OMCSession()
model_file ='getInstallationDirectoryPath() + "/share/doc/omc/testmodels/BouncingBall.mo'
omc = OMCSessionZMQ()
cmds = [
  'loadFile(getInstallationDirectoryPath() + "/share/doc/omc/testmodels/BouncingBall.mo")',
  "simulate(BouncingBall)",
  "plot(h)"
  ]
for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))