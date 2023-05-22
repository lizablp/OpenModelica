/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "CalledbyPython_model.h"
#include "simulation/solver/events.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation CalledbyPython_performSimulation
#define prefixedName_updateContinuousSystem CalledbyPython_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation CalledbyPython_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int CalledbyPython_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int CalledbyPython_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CalledbyPython_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 5
type: SIMPLE_ASSIGN
$DER.y = x
*/
void CalledbyPython_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[3] /* der(y) STATE_DER */) = (data->localData[0]->realVars[0] /* x STATE(1) */);
  TRACE_POP
}
/*
equation index: 6
type: SIMPLE_ASSIGN
$DER.x = (-b) * y
*/
void CalledbyPython_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[2] /* der(x) STATE_DER */) = ((-(data->simulationInfo->realParameter[0] /* b PARAM */))) * ((data->localData[0]->realVars[1] /* y STATE(1,x) */));
  TRACE_POP
}

OMC_DISABLE_OPT
int CalledbyPython_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  CalledbyPython_functionLocalKnownVars(data, threadData);
  CalledbyPython_eqFunction_5(data, threadData);

  CalledbyPython_eqFunction_6(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int CalledbyPython_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void CalledbyPython_eqFunction_5(DATA* data, threadData_t *threadData);
extern void CalledbyPython_eqFunction_6(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    CalledbyPython_eqFunction_5(data, threadData);
    threadData->lastEquationSolved = 5;
  }
  {
    CalledbyPython_eqFunction_6(data, threadData);
    threadData->lastEquationSolved = 6;
  }
}

int CalledbyPython_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  CalledbyPython_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "CalledbyPython_12jac.h"
#include "CalledbyPython_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks CalledbyPython_callback = {
   (int (*)(DATA *, threadData_t *, void *)) CalledbyPython_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) CalledbyPython_performQSSSimulation,    /* performQSSSimulation */
   CalledbyPython_updateContinuousSystem,    /* updateContinuousSystem */
   CalledbyPython_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   NULL,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   CalledbyPython_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   CalledbyPython_initializeDAEmodeData,
   CalledbyPython_functionODE,
   CalledbyPython_functionAlgebraics,
   CalledbyPython_functionDAE,
   CalledbyPython_functionLocalKnownVars,
   CalledbyPython_input_function,
   CalledbyPython_input_function_init,
   CalledbyPython_input_function_updateStartValues,
   CalledbyPython_data_function,
   CalledbyPython_output_function,
   CalledbyPython_setc_function,
   CalledbyPython_setb_function,
   CalledbyPython_function_storeDelayed,
   CalledbyPython_function_storeSpatialDistribution,
   CalledbyPython_function_initSpatialDistribution,
   CalledbyPython_updateBoundVariableAttributes,
   CalledbyPython_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   CalledbyPython_functionRemovedInitialEquations,
   CalledbyPython_updateBoundParameters,
   CalledbyPython_checkForAsserts,
   CalledbyPython_function_ZeroCrossingsEquations,
   CalledbyPython_function_ZeroCrossings,
   CalledbyPython_function_updateRelations,
   CalledbyPython_zeroCrossingDescription,
   CalledbyPython_relationDescription,
   CalledbyPython_function_initSample,
   CalledbyPython_INDEX_JAC_A,
   CalledbyPython_INDEX_JAC_B,
   CalledbyPython_INDEX_JAC_C,
   CalledbyPython_INDEX_JAC_D,
   CalledbyPython_INDEX_JAC_F,
   CalledbyPython_INDEX_JAC_H,
   CalledbyPython_initialAnalyticJacobianA,
   CalledbyPython_initialAnalyticJacobianB,
   CalledbyPython_initialAnalyticJacobianC,
   CalledbyPython_initialAnalyticJacobianD,
   CalledbyPython_initialAnalyticJacobianF,
   CalledbyPython_initialAnalyticJacobianH,
   CalledbyPython_functionJacA_column,
   CalledbyPython_functionJacB_column,
   CalledbyPython_functionJacC_column,
   CalledbyPython_functionJacD_column,
   CalledbyPython_functionJacF_column,
   CalledbyPython_functionJacH_column,
   CalledbyPython_linear_model_frame,
   CalledbyPython_linear_model_datarecovery_frame,
   CalledbyPython_mayer,
   CalledbyPython_lagrange,
   CalledbyPython_pickUpBoundsForInputsInOptimization,
   CalledbyPython_setInputData,
   CalledbyPython_getTimeGrid,
   CalledbyPython_symbolicInlineSystem,
   CalledbyPython_function_initSynchronous,
   CalledbyPython_function_updateSynchronous,
   CalledbyPython_function_equationsSynchronous,
   CalledbyPython_inputNames,
   CalledbyPython_dataReconciliationInputNames,
   CalledbyPython_dataReconciliationUnmeasuredVariables,
   NULL,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "CalledbyPython"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/Lizab/workspace/OpenModelica/OMPython/CalledbyPython"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,14,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,61,_OMC_LIT_RESOURCE_0_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,2,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir)}};
void CalledbyPython_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &CalledbyPython_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "CalledbyPython";
  data->modelData->modelFilePrefix = "CalledbyPython";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/Lizab/workspace/OpenModelica/OMPython/CalledbyPython";
  data->modelData->modelGUID = "{3596e231-efab-4ffc-b19a-0056acd0126f}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "CalledbyPython_init.c"
    ;
  static const char contents_info[] =
    #include "CalledbyPython_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "CalledbyPython_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "CalledbyPython_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "CalledbyPython_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 2;
  data->modelData->nVariablesReal = 4;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 1;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 7;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 0;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  /*
    Set the error functions to be used for simulation.
    The default value for them is 'functions' version. Change it here to 'simulation' versions
  */
  omc_assert = omc_assert_simulation;
  omc_assert_withEquationIndexes = omc_assert_simulation_withEquationIndexes;

  omc_assert_warning_withEquationIndexes = omc_assert_warning_simulation_withEquationIndexes;
  omc_assert_warning = omc_assert_warning_simulation;
  omc_terminate = omc_terminate_simulation;
  omc_throw = omc_throw_simulation;

  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    CalledbyPython_setupDataStruc(&data, threadData);
    res = _main_initRuntimeAndSimulation(argc, argv, &data, threadData);
    if(res == 0) {
      res = _main_SimulationRuntime(argc, argv, &data, threadData);
    }
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


