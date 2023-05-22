#!/usr/bin/python
import os
global newb
newb= 0.5

os.chdir("C:/Users/Lizab/workspace/OpenModelica/OMPython")
with open('CreateMosFile.py', 'r') as file:
    code = compile(file.read(), 'CreateMosFile.py', 'exec')
    exec(code)

os.popen(r"omc CalledbyPython.mos").read()

with open('RetrResult.py', 'r') as file:
    code = compile(file.read(), 'RetrResult.py', 'exec')
    exec(code)

