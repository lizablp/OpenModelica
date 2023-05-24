#if defined(__cplusplus)
  extern "C" {
#endif
  int Modelica_Fluid_Examples_HeatingSystem_mayer(DATA* data, modelica_real** res, short*);
  int Modelica_Fluid_Examples_HeatingSystem_lagrange(DATA* data, modelica_real** res, short *, short *);
  int Modelica_Fluid_Examples_HeatingSystem_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int Modelica_Fluid_Examples_HeatingSystem_setInputData(DATA *data, const modelica_boolean file);
  int Modelica_Fluid_Examples_HeatingSystem_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif