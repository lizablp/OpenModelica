/* Linear Systems */
#include "Motoreducteur_model.h"
#include "Motoreducteur_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 202
type: SIMPLE_ASSIGN
lossyGear.quadrant4.$pDERA.dummyVarA = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.tau_eta_p.$pDERA.dummyVarA + lossyGear.flange_a.tau * lossyGear.eta_mf2.$pDERA.dummyVarA / lossyGear.eta_mf2 ^ 2.0 - lossyGear.tau_bf2.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_202(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */);
  (parentJacobian->tmpVars[23]) /* lossyGear.quadrant4.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * ((parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) + ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) * (DIVISION((parentJacobian->tmpVars[9]) /* lossyGear.eta_mf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */,(tmp0 * tmp0),"lossyGear.eta_mf2 ^ 2.0")) - (parentJacobian->tmpVars[32]) /* lossyGear.tau_bf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
/*
equation index: 203
type: SIMPLE_ASSIGN
lossyGear.quadrant1.$pDERA.dummyVarA = (1.0 - lossyGear.eta_mf1) * lossyGear.tau_eta_p.$pDERA.dummyVarA + lossyGear.tau_bf1.$pDERA.dummyVarA - lossyGear.eta_mf1.$pDERA.dummyVarA * lossyGear.flange_a.tau
*/
void Motoreducteur_eqFunction_203(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  (parentJacobian->tmpVars[17]) /* lossyGear.quadrant1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * ((parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) + (parentJacobian->tmpVars[31]) /* lossyGear.tau_bf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ - (((parentJacobian->tmpVars[8]) /* lossyGear.eta_mf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)));
  TRACE_POP
}
/*
equation index: 204
type: SIMPLE_ASSIGN
lossyGear.quadrant3.$pDERA.dummyVarA = (1.0 - lossyGear.eta_mf1) * lossyGear.tau_eta_p.$pDERA.dummyVarA + (-lossyGear.eta_mf1.$pDERA.dummyVarA) * lossyGear.flange_a.tau - lossyGear.tau_bf1.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_204(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  (parentJacobian->tmpVars[21]) /* lossyGear.quadrant3.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * ((parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) + ((-(parentJacobian->tmpVars[8]) /* lossyGear.eta_mf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (parentJacobian->tmpVars[31]) /* lossyGear.tau_bf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
/*
equation index: 205
type: SIMPLE_ASSIGN
lossyGear.tauLossMin.$pDERA.dummyVarA = if lossyGear.tau_aPos then lossyGear.quadrant4.$pDERA.dummyVarA else lossyGear.quadrant3.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_205(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  (parentJacobian->tmpVars[29]) /* lossyGear.tauLossMin.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?(parentJacobian->tmpVars[23]) /* lossyGear.quadrant4.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:(parentJacobian->tmpVars[21]) /* lossyGear.quadrant3.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}
/*
equation index: 206
type: SIMPLE_ASSIGN
lossyGear.quadrant2.$pDERA.dummyVarA = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.tau_eta_p.$pDERA.dummyVarA + lossyGear.flange_a.tau * lossyGear.eta_mf2.$pDERA.dummyVarA / lossyGear.eta_mf2 ^ 2.0 + lossyGear.tau_bf2.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_206(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */);
  (parentJacobian->tmpVars[19]) /* lossyGear.quadrant2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * ((parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) + ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) * (DIVISION((parentJacobian->tmpVars[9]) /* lossyGear.eta_mf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */,(tmp0 * tmp0),"lossyGear.eta_mf2 ^ 2.0")) + (parentJacobian->tmpVars[32]) /* lossyGear.tau_bf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
/*
equation index: 207
type: SIMPLE_ASSIGN
lossyGear.tauLossMax.$pDERA.dummyVarA = if lossyGear.tau_aPos then lossyGear.quadrant1.$pDERA.dummyVarA else lossyGear.quadrant2.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_207(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  (parentJacobian->tmpVars[27]) /* lossyGear.tauLossMax.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?(parentJacobian->tmpVars[17]) /* lossyGear.quadrant1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:(parentJacobian->tmpVars[19]) /* lossyGear.quadrant2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}
/*
equation index: 208
type: SIMPLE_ASSIGN
lossyGear.tauLoss.$pDERA.dummyVarA = if lossyGear.ideal then 0.0 else if lossyGear.locked then lossyGear.sa.$pDERA.dummyVarA else if lossyGear.startForward or pre(lossyGear.mode) == 1 then lossyGear.tauLossMax.$pDERA.dummyVarA else lossyGear.tauLossMin.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_208(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  (parentJacobian->tmpVars[26]) /* lossyGear.tauLoss.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?(parentJacobian->tmpVars[25]) /* lossyGear.sa.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?(parentJacobian->tmpVars[27]) /* lossyGear.tauLossMax.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:(parentJacobian->tmpVars[29]) /* lossyGear.tauLossMin.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */)));
  TRACE_POP
}
/*
equation index: 209
type: SIMPLE_ASSIGN
$DER.inertia.w.$pDERA.dummyVarA = if lossyGear.locked then 0.0 else lossyGear.sa.$pDERA.dummyVarA - lossyGear.tauLoss.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_209(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  (parentJacobian->resultVars[0]) /* der(inertia.w.$pDERA.dummyVarA) JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:(parentJacobian->tmpVars[25]) /* lossyGear.sa.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ - (parentJacobian->tmpVars[26]) /* lossyGear.tauLoss.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

void residualFunc222(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,222};
  ANALYTIC_JACOBIAN* parentJacobian = data->simulationInfo->linearSystemData[0].parDynamicData[omc_get_thread_num()].parentJacobian;
  ANALYTIC_JACOBIAN* jacobian = NULL;
  (parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = xloc[0];
  (parentJacobian->tmpVars[25]) /* lossyGear.sa.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = xloc[1];
  /* local constraints */
  Motoreducteur_eqFunction_202(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_203(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_204(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_205(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_206(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_207(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_208(data, threadData, jacobian, parentJacobian);

  /* local constraints */
  Motoreducteur_eqFunction_209(data, threadData, jacobian, parentJacobian);
  res[0] = ((data->simulationInfo->realParameter[18] /* lossyGear.ratio PARAM */)) * ((parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ - (parentJacobian->tmpVars[26]) /* lossyGear.tauLoss.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);

  res[1] = (-(parentJacobian->tmpVars[2]) /* emf.tau.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) - (((data->simulationInfo->realParameter[10] /* inertia.J PARAM */)) * ((parentJacobian->resultVars[0]) /* der(inertia.w.$pDERA.dummyVarA) JACOBIAN_VAR */)) - (parentJacobian->tmpVars[36]) /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData222(DATA* data, threadData_t* threadData, LINEAR_SYSTEM_DATA* linearSystemData, modelica_boolean initSparsePattern)
{
  int i=0;
  /* static ls data for lossyGear.tau_eta_p.$pDERA.dummyVarA */
  linearSystemData->nominal[i] = data->modelData->realVarsData[36].attribute /* lossyGear.tau_eta_p.$pDERA.dummyVarA */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[36].attribute /* lossyGear.tau_eta_p.$pDERA.dummyVarA */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[36].attribute /* lossyGear.tau_eta_p.$pDERA.dummyVarA */.max;
  /* static ls data for lossyGear.sa.$pDERA.dummyVarA */
  linearSystemData->nominal[i] = data->modelData->realVarsData[25].attribute /* lossyGear.sa.$pDERA.dummyVarA */.nominal;
  linearSystemData->min[i]     = data->modelData->realVarsData[25].attribute /* lossyGear.sa.$pDERA.dummyVarA */.min;
  linearSystemData->max[i++]   = data->modelData->realVarsData[25].attribute /* lossyGear.sa.$pDERA.dummyVarA */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void Motoreducteur_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 222;
  linearSystemData[0].size = 2;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;   /* Symbolic Jacobian available */
  linearSystemData[0].residualFunc = residualFunc222;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = Motoreducteur_functionJacLSJac4_column;
  linearSystemData[0].initialAnalyticalJacobian = Motoreducteur_initialAnalyticJacobianLSJac4;
  linearSystemData[0].jacobianIndex = 8 /*jacInx*/;
  linearSystemData[0].setA = NULL;  //setLinearMatrixA222;
  linearSystemData[0].setb = NULL;  //setLinearVectorb222;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData222;
}

#if defined(__cplusplus)
}
#endif

