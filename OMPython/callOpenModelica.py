#!/usr/bin/python
import sys,os
global newb = 0.5
execfile('CreateMosFile.py')
os.popen(r"omc CalledbyPython.mos").read()
execfile('RetrResult.py')
