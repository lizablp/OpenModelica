import OMPython
from OMPython import OMCSessionZMQ
#omc=OMPython.OMCSession() # error with the command : locale.Error: unsupported locale setting OMC did not exit after being sent the quit() command; killing the process with pid=18336
model_file ='HeatingSystemfonctionall.mo'
omc = OMCSessionZMQ()
cmds = [
  'loadFile("HeatingSystemfonctional.mo")',
  "simulate(HeatingSystemfonctional)",
  "plot(h)"
  ]
for cmd in cmds:
  answer = omc.sendExpression(cmd)
  print("\n{}:\n{}".format(cmd, answer))