/* Algebraic */
#include "Motoreducteur_model.h"

#ifdef __cplusplus
extern "C" {
#endif


/* forwarded equations */
extern void Motoreducteur_eqFunction_78(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_79(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_85(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_95(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_141(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_143(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_144(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_145(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_146(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_147(DATA* data, threadData_t *threadData);

static void functionAlg_system0(DATA *data, threadData_t *threadData)
{
  {
    Motoreducteur_eqFunction_78(data, threadData);
    threadData->lastEquationSolved = 78;
  }
  {
    Motoreducteur_eqFunction_79(data, threadData);
    threadData->lastEquationSolved = 79;
  }
  {
    Motoreducteur_eqFunction_85(data, threadData);
    threadData->lastEquationSolved = 85;
  }
  {
    Motoreducteur_eqFunction_95(data, threadData);
    threadData->lastEquationSolved = 95;
  }
  {
    Motoreducteur_eqFunction_141(data, threadData);
    threadData->lastEquationSolved = 141;
  }
  {
    Motoreducteur_eqFunction_143(data, threadData);
    threadData->lastEquationSolved = 143;
  }
  {
    Motoreducteur_eqFunction_144(data, threadData);
    threadData->lastEquationSolved = 144;
  }
  {
    Motoreducteur_eqFunction_145(data, threadData);
    threadData->lastEquationSolved = 145;
  }
  {
    Motoreducteur_eqFunction_146(data, threadData);
    threadData->lastEquationSolved = 146;
  }
  {
    Motoreducteur_eqFunction_147(data, threadData);
    threadData->lastEquationSolved = 147;
  }
}
/* for continuous time variables */
int Motoreducteur_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ALGEBRAICS);
#endif
  data->simulationInfo->callStatistics.functionAlgebraics++;

  Motoreducteur_function_savePreSynchronous(data, threadData);
  
  functionAlg_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ALGEBRAICS);
#endif

  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
