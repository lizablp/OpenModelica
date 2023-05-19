/* Initialization */
#include "CalledbyPython_model.h"
#include "CalledbyPython_11mix.h"
#include "CalledbyPython_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void CalledbyPython_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
y = $START.y
*/
void CalledbyPython_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[1] /* y STATE(1,x) */) = (data->modelData->realVarsData[1] /* y STATE(1,x) */).attribute .start;
  TRACE_POP
}
extern void CalledbyPython_eqFunction_6(DATA *data, threadData_t *threadData);


/*
equation index: 3
type: SIMPLE_ASSIGN
x = $START.x
*/
void CalledbyPython_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[0] /* x STATE(1) */) = (data->modelData->realVarsData[0] /* x STATE(1) */).attribute .start;
  TRACE_POP
}
extern void CalledbyPython_eqFunction_5(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void CalledbyPython_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  CalledbyPython_eqFunction_1(data, threadData);
  CalledbyPython_eqFunction_6(data, threadData);
  CalledbyPython_eqFunction_3(data, threadData);
  CalledbyPython_eqFunction_5(data, threadData);
  TRACE_POP
}

int CalledbyPython_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  CalledbyPython_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No CalledbyPython_functionInitialEquations_lambda0 function */

int CalledbyPython_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

