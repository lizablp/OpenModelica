/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "Motoreducteur_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void Motoreducteur_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *Motoreducteur_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "pre(lossyGear.mode) == 0 and lossyGear.sa > lossyGear.tauLossMax_p",
  "pre(lossyGear.mode) == 0 and lossyGear.sa < lossyGear.tauLossMin_m",
  "lossyGear.tau_eta >= 0.0",
  "(pre(lossyGear.mode) == 1 or lossyGear.startForward) and inertia.w > 0.0",
  "(pre(lossyGear.mode) == -1 or lossyGear.startBackward) and inertia.w < 0.0",
  "lossyGear.sa > lossyGear.tauLossMax_p",
  "lossyGear.sa < lossyGear.tauLossMin_m"};
  static const int occurEqs0[] = {1,97};
  static const int occurEqs1[] = {1,97};
  static const int occurEqs2[] = {1,-1};
  static const int occurEqs3[] = {1,-1};
  static const int occurEqs4[] = {1,-1};
  static const int occurEqs5[] = {1,141};
  static const int occurEqs6[] = {1,141};
  static const int occurEqs7[] = {1,93};
  static const int occurEqs8[] = {1,91};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Motoreducteur_eqFunction_80(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_81(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_82(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_83(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_84(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_86(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_87(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_88(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_89(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_90(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_91(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_92(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_93(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_94(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_97(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_140(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_142(DATA* data, threadData_t *threadData);

int Motoreducteur_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Motoreducteur_eqFunction_80(data, threadData);

  Motoreducteur_eqFunction_81(data, threadData);

  Motoreducteur_eqFunction_82(data, threadData);

  Motoreducteur_eqFunction_83(data, threadData);

  Motoreducteur_eqFunction_84(data, threadData);

  Motoreducteur_eqFunction_86(data, threadData);

  Motoreducteur_eqFunction_87(data, threadData);

  Motoreducteur_eqFunction_88(data, threadData);

  Motoreducteur_eqFunction_89(data, threadData);

  Motoreducteur_eqFunction_90(data, threadData);

  Motoreducteur_eqFunction_91(data, threadData);

  Motoreducteur_eqFunction_92(data, threadData);

  Motoreducteur_eqFunction_93(data, threadData);

  Motoreducteur_eqFunction_94(data, threadData);

  Motoreducteur_eqFunction_97(data, threadData);

  Motoreducteur_eqFunction_140(data, threadData);

  Motoreducteur_eqFunction_142(data, threadData);
  
  TRACE_POP
  return 0;
}

int Motoreducteur_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp57;
  modelica_boolean tmp58;
  modelica_boolean tmp60;
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  modelica_boolean tmp65;
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  modelica_boolean tmp69;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp57 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */), data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp57) ? 1 : -1;

  tmp58 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[22] /* ramp.duration PARAM */), data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp58) ? 1 : -1;

  tmp60 = GreaterZC((data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */), data->simulationInfo->storedRelations[2]);
  gout[2] = ((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp60)) ? 1 : -1;

  tmp62 = LessZC((data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */), data->simulationInfo->storedRelations[3]);
  gout[3] = ((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp62)) ? 1 : -1;

  tmp63 = GreaterEqZC((data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */), 0.0, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp63) ? 1 : -1;

  tmp65 = GreaterZC((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */), 0.0, data->simulationInfo->storedRelations[5]);
  gout[5] = (((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) && tmp65)) ? 1 : -1;

  tmp67 = LessZC((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */), 0.0, data->simulationInfo->storedRelations[6]);
  gout[6] = (((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1)) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)) && tmp67)) ? 1 : -1;

  tmp68 = GreaterZC((data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */), data->simulationInfo->storedRelations[2]);
  gout[7] = (tmp68) ? 1 : -1;

  tmp69 = LessZC((data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */), data->simulationInfo->storedRelations[3]);
  gout[8] = (tmp69) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *Motoreducteur_relationDescription(int i)
{
  const char *res[] = {"time < ramp.startTime",
  "time < ramp.startTime + ramp.duration",
  "lossyGear.sa > lossyGear.tauLossMax_p",
  "lossyGear.sa < lossyGear.tauLossMin_m",
  "lossyGear.tau_eta >= 0.0",
  "inertia.w > 0.0",
  "inertia.w < 0.0"};
  return res[i];
}

int Motoreducteur_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp70;
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  
  if(evalforZeroCross) {
    tmp70 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */), data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp70;

    tmp71 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[22] /* ramp.duration PARAM */), data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp71;

    tmp72 = GreaterZC((data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */), data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp72;

    tmp73 = LessZC((data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */), data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp73;

    tmp74 = GreaterEqZC((data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */), 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp74;

    tmp75 = GreaterZC((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */), 0.0, data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp75;

    tmp76 = LessZC((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */), 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp76;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */));

    data->simulationInfo->relations[1] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[22] /* ramp.duration PARAM */));

    data->simulationInfo->relations[2] = ((data->localData[0]->realVars[32] /* lossyGear.sa variable */) > (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */));

    data->simulationInfo->relations[3] = ((data->localData[0]->realVars[32] /* lossyGear.sa variable */) < (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */));

    data->simulationInfo->relations[4] = ((data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */) >= 0.0);

    data->simulationInfo->relations[5] = ((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */) > 0.0);

    data->simulationInfo->relations[6] = ((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */) < 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

