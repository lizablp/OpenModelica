/* Linear Systems */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#include "Modelica_Fluid_Examples_HeatingSystem_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 847
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].h = $DER.pipe.mediums[2].u - (pipe.mediums[2].p * $DER.pipe.mediums[2].d - der(pipe.mediums[2].p) * pipe.mediums[2].d) / pipe.mediums[2].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */);
  (data->localData[0]->realVars[30] /* der(pipe.mediums[2].h) DUMMY_DER */) = (data->localData[0]->realVars[32] /* der(pipe.mediums[2].u) DUMMY_DER */) - (DIVISION_SIM(((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) * ((data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */)) - (((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */)) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */))),(tmp0 * tmp0),"pipe.mediums[2].d ^ 2.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 848
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].T = (-2.214479571349945e-07) * der(pipe.mediums[2].p) - $DER.pipe.mediums[2].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  (data->localData[0]->realVars[13] /* der(pipe.mediums[2].T) STATE_DER */) = (-2.214479571349945e-07) * ((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */)) - (DIVISION_SIM((data->localData[0]->realVars[30] /* der(pipe.mediums[2].h) DUMMY_DER */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}

void residualFunc853(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,853};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */) = xloc[0];
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_847(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_848(data, threadData);
  res[0] = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[13] /* der(pipe.mediums[2].T) STATE_DER */))) - (data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData853(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  int i=0;
  /* static ls data for der(pipe.mediums[2].p) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[15].attribute /* der(pipe.mediums[2].p) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[15].attribute /* der(pipe.mediums[2].p) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[15].attribute /* der(pipe.mediums[2].p) */.max;
}


/*
equation index: 837
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].h = $DER.pipe.mediums[1].u - (pipe.mediums[1].p * $DER.pipe.mediums[1].d - der(pipe.mediums[1].p) * pipe.mediums[1].d) / pipe.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[29] /* der(pipe.mediums[1].h) DUMMY_DER */) = (data->localData[0]->realVars[31] /* der(pipe.mediums[1].u) DUMMY_DER */) - (DIVISION_SIM(((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"pipe.mediums[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 838
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].T = (-2.214479571349945e-07) * der(pipe.mediums[1].p) - $DER.pipe.mediums[1].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  (data->localData[0]->realVars[12] /* der(pipe.mediums[1].T) STATE_DER */) = (-2.214479571349945e-07) * ((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */)) - (DIVISION_SIM((data->localData[0]->realVars[29] /* der(pipe.mediums[1].h) DUMMY_DER */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}

void residualFunc843(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,843};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */) = xloc[0];
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_837(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_838(data, threadData);
  res[0] = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[12] /* der(pipe.mediums[1].T) STATE_DER */))) - (data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData843(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  int i=0;
  /* static ls data for der(pipe.mediums[1].p) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[14].attribute /* der(pipe.mediums[1].p) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[14].attribute /* der(pipe.mediums[1].p) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[14].attribute /* der(pipe.mediums[1].p) */.max;
}


/*
equation index: 822
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].h = $DER.heater.mediums[1].u - (heater.mediums[1].p * $DER.heater.mediums[1].d - der(heater.mediums[1].p) * heater.mediums[1].d) / heater.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,822};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[22] /* der(heater.mediums[1].h) DUMMY_DER */) = (data->localData[0]->realVars[23] /* der(heater.mediums[1].u) DUMMY_DER */) - (DIVISION_SIM(((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"heater.mediums[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 823
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].T = (-2.214479571349945e-07) * der(heater.mediums[1].p) - $DER.heater.mediums[1].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,823};
  (data->localData[0]->realVars[10] /* der(heater.mediums[1].T) STATE_DER */) = (-2.214479571349945e-07) * ((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */)) - (DIVISION_SIM((data->localData[0]->realVars[22] /* der(heater.mediums[1].h) DUMMY_DER */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}

void residualFunc828(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,828};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */) = xloc[0];
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_822(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_823(data, threadData);
  res[0] = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[10] /* der(heater.mediums[1].T) STATE_DER */))) - (data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData828(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  int i=0;
  /* static ls data for der(heater.mediums[1].p) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[11].attribute /* der(heater.mediums[1].p) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[11].attribute /* der(heater.mediums[1].p) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[11].attribute /* der(heater.mediums[1].p) */.max;
}


/*
equation index: 795
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].h = $DER.radiator.mediums[1].u - (radiator.mediums[1].p * $DER.radiator.mediums[1].d - der(radiator.mediums[1].p) * radiator.mediums[1].d) / radiator.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[37] /* der(radiator.mediums[1].h) DUMMY_DER */) = (data->localData[0]->realVars[38] /* der(radiator.mediums[1].u) DUMMY_DER */) - (DIVISION_SIM(((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"radiator.mediums[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 796
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].T = 1.756077245136214e-06 * der(radiator.mediums[1].p) - $DER.radiator.mediums[1].d / 0.2563723580877598
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  (data->localData[0]->realVars[16] /* der(radiator.mediums[1].T) STATE_DER */) = (1.756077245136214e-06) * ((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */)) - (DIVISION_SIM((data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */),0.2563723580877598,"0.2563723580877598",equationIndexes));
  TRACE_POP
}

void residualFunc801(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,801};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */) = xloc[0];
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_795(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_796(data, threadData);
  res[0] = (0.0009260700016004721) * ((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */)) + (4181.885502948851) * ((data->localData[0]->realVars[16] /* der(radiator.mediums[1].T) STATE_DER */)) - (data->localData[0]->realVars[37] /* der(radiator.mediums[1].h) DUMMY_DER */);
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData801(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  int i=0;
  /* static ls data for der(radiator.mediums[1].p) */
  linearSystemData->nominal[i] = data->modelData->realVarsData[17].attribute /* der(radiator.mediums[1].p) */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[17].attribute /* der(radiator.mediums[1].p) */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[17].attribute /* der(radiator.mediums[1].p) */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Modelica_Fluid_Examples_HeatingSystem_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 3, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[3].equationIndex = 853;
  linearSystemData[3].size = 1;
  linearSystemData[3].nnz = 0;
  linearSystemData[3].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[3].residualFunc = residualFunc853;
  linearSystemData[3].strictTearingFunctionCall = NULL;
  linearSystemData[3].analyticalJacobianColumn = Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac19_column;
  linearSystemData[3].initialAnalyticalJacobian = Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac19;
  linearSystemData[3].jacobianIndex = 3 /*jacInx*/;
  linearSystemData[3].setA = NULL;  //setLinearMatrixA853;
  linearSystemData[3].setb = NULL;  //setLinearVectorb853;
  linearSystemData[3].initializeStaticLSData = initializeStaticLSData853;
  
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 843;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[2].residualFunc = residualFunc843;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac18_column;
  linearSystemData[2].initialAnalyticalJacobian = Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac18;
  linearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[2].setA = NULL;  //setLinearMatrixA843;
  linearSystemData[2].setb = NULL;  //setLinearVectorb843;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData843;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 828;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[1].residualFunc = residualFunc828;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac17_column;
  linearSystemData[1].initialAnalyticalJacobian = Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac17;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;  //setLinearMatrixA828;
  linearSystemData[1].setb = NULL;  //setLinearVectorb828;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData828;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 801;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc801;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac16_column;
  linearSystemData[0].initialAnalyticalJacobian = Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac16;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA801;
  linearSystemData[0].setb = NULL;  //setLinearVectorb801;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData801;
}

#if defined(__cplusplus)
}
#endif

