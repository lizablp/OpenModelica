#!/usr/bin/python
mos_file = open('CalledbyPython.mos','w', 1)
mos_file.write('loadFile("CalledbyPython.mo");\n')
mos_file.write('setComponentModifierValue(CalledbyPython,b,$Code(="+str(newb)+"));\n')
mos_file.write('simulate(CalledbyPython,stopTime=10);\n')
mos_file.close()