/* Simulation code for CalledbyPython generated by the OpenModelica Compiler OpenModelica v1.21.0 (64-bit). */
#if !defined(CalledbyPython__MODEL_H)
#define CalledbyPython__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "util/parallel_helper.h"
#include "simulation/jacobian_util.h"
#include "simulation/simulation_omc_assert.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"
#include "simulation/solver/spatialDistribution.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "CalledbyPython_functions.h"


extern void CalledbyPython_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void CalledbyPython_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int CalledbyPython_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int CalledbyPython_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int CalledbyPython_function_storeSpatialDistribution(DATA *data, threadData_t *threadData);
extern int CalledbyPython_function_initSpatialDistribution(DATA *data, threadData_t *threadData);
extern int CalledbyPython_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int CalledbyPython_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int CalledbyPython_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int CalledbyPython_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int CalledbyPython_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int CalledbyPython_checkForAsserts(DATA *data, threadData_t *threadData);
extern int CalledbyPython_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int CalledbyPython_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int CalledbyPython_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* CalledbyPython_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* CalledbyPython_relationDescription(int i);
extern void CalledbyPython_function_initSample(DATA *data, threadData_t *threadData);
extern int CalledbyPython_initialAnalyticJacobianG(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int CalledbyPython_functionJacG_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int CalledbyPython_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int CalledbyPython_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int CalledbyPython_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int CalledbyPython_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int CalledbyPython_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int CalledbyPython_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* CalledbyPython_linear_model_frame(void);
extern const char* CalledbyPython_linear_model_datarecovery_frame(void);
extern int CalledbyPython_mayer(DATA* data, modelica_real** res, short *);
extern int CalledbyPython_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int CalledbyPython_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int CalledbyPython_setInputData(DATA *data, const modelica_boolean file);
extern int CalledbyPython_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void CalledbyPython_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void CalledbyPython_function_updateSynchronous(DATA * data, threadData_t *threadData, long base_idx);
extern int CalledbyPython_function_equationsSynchronous(DATA * data, threadData_t *threadData, long base_idx, long sub_idx);
extern void CalledbyPython_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void CalledbyPython_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int CalledbyPython_inputNames(DATA* data, char ** names);
extern int CalledbyPython_dataReconciliationInputNames(DATA* data, char ** names);
extern int CalledbyPython_dataReconciliationUnmeasuredVariables(DATA* data, char ** names);
extern int CalledbyPython_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int CalledbyPython_functionLocalKnownVars(DATA* data, threadData_t* threadData);
extern int CalledbyPython_symbolicInlineSystem(DATA* data, threadData_t* threadData);

#include "CalledbyPython_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(CalledbyPython__MODEL_H) */


