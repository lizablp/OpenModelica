/* Jacobians 8 */
#include "Motoreducteur_model.h"
#include "Motoreducteur_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 50
type: SIMPLE_ASSIGN
lossyGear.quadrant4.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_50(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,50};
  jacobian->tmpVars[0] /* lossyGear.quadrant4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
lossyGear.tauLoss.$pDERNLSJac0.dummyVarNLSJac0 = lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,51};
  jacobian->tmpVars[1] /* lossyGear.tauLoss.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
lossyGear.quadrant1.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[2] /* lossyGear.quadrant1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
lossyGear.quadrant2.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,53};
  jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
lossyGear.quadrant3.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,54};
  jacobian->tmpVars[4] /* lossyGear.quadrant3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
inertia.a.$pDERNLSJac0.dummyVarNLSJac0 = (-lossyGear.flange_a.tau.SeedNLSJac0) / inertia.J
*/
void Motoreducteur_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,55};
  jacobian->tmpVars[5] /* inertia.a.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */),(data->simulationInfo->realParameter[10] /* inertia.J PARAM */),"inertia.J");
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,56};
  jacobian->tmpVars[6] /* lossyGear.quadrant1_p.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,57};
  jacobian->tmpVars[7] /* lossyGear.quadrant2_p.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
lossyGear.quadrant4_m.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,58};
  jacobian->tmpVars[8] /* lossyGear.quadrant4_m.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
lossyGear.quadrant3_m.$pDERNLSJac0.dummyVarNLSJac0 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac0
*/
void Motoreducteur_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,59};
  jacobian->tmpVars[9] /* lossyGear.quadrant3_m.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac0 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p.$pDERNLSJac0.dummyVarNLSJac0 = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p.$pDERNLSJac0.dummyVarNLSJac0 else lossyGear.quadrant2_p.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp3;
  tmp3 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  jacobian->tmpVars[11] /* lossyGear.tauLossMax_p.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (tmp3?jacobian->tmpVars[6] /* lossyGear.quadrant1_p.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[7] /* lossyGear.quadrant2_p.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m.$pDERNLSJac0.dummyVarNLSJac0 = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant4_m.$pDERNLSJac0.dummyVarNLSJac0 else lossyGear.quadrant3_m.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,61};
  modelica_boolean tmp4;
  tmp4 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  jacobian->tmpVars[14] /* lossyGear.tauLossMin_m.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = (tmp4?jacobian->tmpVars[8] /* lossyGear.quadrant4_m.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[9] /* lossyGear.quadrant3_m.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
lossyGear.a_a.$pDERNLSJac0.dummyVarNLSJac0 = if lossyGear.locked then 0.0 else lossyGear.sa.SeedNLSJac0 - lossyGear.tauLoss.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_62(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,62};
  jacobian->tmpVars[17] /* lossyGear.a_a.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac0 SEED_VAR */ - jacobian->tmpVars[1] /* lossyGear.tauLoss.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
lossyGear.tauLossMax.$pDERNLSJac0.dummyVarNLSJac0 = if lossyGear.tau_aPos then lossyGear.quadrant1.$pDERNLSJac0.dummyVarNLSJac0 else lossyGear.quadrant2.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_63(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,63};
  jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[2] /* lossyGear.quadrant1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
lossyGear.tauLossMin.$pDERNLSJac0.dummyVarNLSJac0 = if lossyGear.tau_aPos then lossyGear.quadrant4.$pDERNLSJac0.dummyVarNLSJac0 else lossyGear.quadrant3.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_64(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,64};
  jacobian->tmpVars[21] /* lossyGear.tauLossMin.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[0] /* lossyGear.quadrant4.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[4] /* lossyGear.quadrant3.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
$res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 = inertia.a.$pDERNLSJac0.dummyVarNLSJac0 - lossyGear.a_a.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_65(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,65};
  jacobian->resultVars[0] /* $res_NLSJac0_1.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* inertia.a.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[17] /* lossyGear.a_a.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
$res_NLSJac0_2.$pDERNLSJac0.dummyVarNLSJac0 = (if lossyGear.ideal then 0.0 else if lossyGear.locked then lossyGear.sa.SeedNLSJac0 else if lossyGear.startForward or $PRE.lossyGear.mode == 1 then lossyGear.tauLossMax.$pDERNLSJac0.dummyVarNLSJac0 else lossyGear.tauLossMin.$pDERNLSJac0.dummyVarNLSJac0) - lossyGear.tauLoss.$pDERNLSJac0.dummyVarNLSJac0
*/
void Motoreducteur_eqFunction_66(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,66};
  jacobian->resultVars[1] /* $res_NLSJac0_2.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac0 SEED_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[21] /* lossyGear.tauLossMin.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */))) - jacobian->tmpVars[1] /* lossyGear.tauLoss.$pDERNLSJac0.dummyVarNLSJac0 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Motoreducteur_functionJacNLSJac0_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac0;
  
  
  TRACE_POP
  return 0;
}

int Motoreducteur_functionJacNLSJac0_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac0;
  Motoreducteur_eqFunction_50(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_51(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_52(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_53(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_54(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_55(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_56(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_57(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_58(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_59(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_60(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_61(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_62(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_63(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_64(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_65(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_66(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 121
type: SIMPLE_ASSIGN
lossyGear.tauLoss.$pDERNLSJac1.dummyVarNLSJac1 = lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_121(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,121};
  jacobian->tmpVars[0] /* lossyGear.tauLoss.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
lossyGear.quadrant4.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_122(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,122};
  jacobian->tmpVars[1] /* lossyGear.quadrant4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
lossyGear.quadrant3.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_123(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,123};
  jacobian->tmpVars[2] /* lossyGear.quadrant3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
lossyGear.quadrant2.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_124(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,124};
  jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
lossyGear.quadrant1.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_125(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,125};
  jacobian->tmpVars[4] /* lossyGear.quadrant1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
lossyGear.a_a.$pDERNLSJac1.dummyVarNLSJac1 = (-lossyGear.flange_a.tau.SeedNLSJac1) / inertia.J
*/
void Motoreducteur_eqFunction_126(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,126};
  jacobian->tmpVars[5] /* lossyGear.a_a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */),(data->simulationInfo->realParameter[10] /* inertia.J PARAM */),"inertia.J");
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
lossyGear.quadrant3_m.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_127(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,127};
  jacobian->tmpVars[6] /* lossyGear.quadrant3_m.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
lossyGear.quadrant4_m.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_128(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,128};
  jacobian->tmpVars[7] /* lossyGear.quadrant4_m.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_129(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,129};
  jacobian->tmpVars[8] /* lossyGear.quadrant2_p.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p.$pDERNLSJac1.dummyVarNLSJac1 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac1
*/
void Motoreducteur_eqFunction_130(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,130};
  jacobian->tmpVars[9] /* lossyGear.quadrant1_p.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m.$pDERNLSJac1.dummyVarNLSJac1 = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant4_m.$pDERNLSJac1.dummyVarNLSJac1 else lossyGear.quadrant3_m.$pDERNLSJac1.dummyVarNLSJac1
*/
void Motoreducteur_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,131};
  modelica_boolean tmp6;
  tmp6 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  jacobian->tmpVars[11] /* lossyGear.tauLossMin_m.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (tmp6?jacobian->tmpVars[7] /* lossyGear.quadrant4_m.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[6] /* lossyGear.quadrant3_m.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
lossyGear.startBackward.$pDERNLSJac1.dummyVarNLSJac1 = pre(lossyGear.mode) == 0 and lossyGear.sa < lossyGear.tauLossMin_m
*/
void Motoreducteur_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp8;
  relationhysteresis(data, &tmp8, (data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */), 3, Less, LessZC);
  jacobian->tmpVars[12] /* lossyGear.startBackward.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp8);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p.$pDERNLSJac1.dummyVarNLSJac1 = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p.$pDERNLSJac1.dummyVarNLSJac1 else lossyGear.quadrant2_p.$pDERNLSJac1.dummyVarNLSJac1
*/
void Motoreducteur_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,133};
  modelica_boolean tmp9;
  tmp9 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  jacobian->tmpVars[14] /* lossyGear.tauLossMax_p.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (tmp9?jacobian->tmpVars[9] /* lossyGear.quadrant1_p.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[8] /* lossyGear.quadrant2_p.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
lossyGear.startForward.$pDERNLSJac1.dummyVarNLSJac1 = pre(lossyGear.mode) == 0 and lossyGear.sa > lossyGear.tauLossMax_p
*/
void Motoreducteur_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp11;
  relationhysteresis(data, &tmp11, (data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */), 2, Greater, GreaterZC);
  jacobian->tmpVars[15] /* lossyGear.startForward.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp11);
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
lossyGear.locked.$pDERNLSJac1.dummyVarNLSJac1 = not (lossyGear.ideal or pre(lossyGear.mode) == 1 or lossyGear.startForward or pre(lossyGear.mode) == -1 or lossyGear.startBackward)
*/
void Motoreducteur_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,135};
  jacobian->tmpVars[16] /* lossyGear.locked.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = (!(((((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1))) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1))) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)));
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
lossyGear.tauLossMin.$pDERNLSJac1.dummyVarNLSJac1 = if lossyGear.tau_aPos then lossyGear.quadrant4.$pDERNLSJac1.dummyVarNLSJac1 else lossyGear.quadrant3.$pDERNLSJac1.dummyVarNLSJac1
*/
void Motoreducteur_eqFunction_136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,136};
  jacobian->tmpVars[19] /* lossyGear.tauLossMin.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[1] /* lossyGear.quadrant4.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[2] /* lossyGear.quadrant3.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
lossyGear.tauLossMax.$pDERNLSJac1.dummyVarNLSJac1 = if lossyGear.tau_aPos then lossyGear.quadrant1.$pDERNLSJac1.dummyVarNLSJac1 else lossyGear.quadrant2.$pDERNLSJac1.dummyVarNLSJac1
*/
void Motoreducteur_eqFunction_137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,137};
  jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[4] /* lossyGear.quadrant1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 = (if lossyGear.ideal then 0.0 else if lossyGear.locked then lossyGear.sa.SeedNLSJac1 else if lossyGear.startForward or pre(lossyGear.mode) == 1 then lossyGear.tauLossMax.$pDERNLSJac1.dummyVarNLSJac1 else lossyGear.tauLossMin.$pDERNLSJac1.dummyVarNLSJac1) - lossyGear.tauLoss.$pDERNLSJac1.dummyVarNLSJac1
*/
void Motoreducteur_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,138};
  jacobian->resultVars[0] /* $res_NLSJac1_1.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac1 SEED_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[19] /* lossyGear.tauLossMin.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */))) - jacobian->tmpVars[0] /* lossyGear.tauLoss.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
$res_NLSJac1_2.$pDERNLSJac1.dummyVarNLSJac1 = (if lossyGear.locked then 0.0 else lossyGear.sa.SeedNLSJac1 - lossyGear.tauLoss.$pDERNLSJac1.dummyVarNLSJac1) - lossyGear.a_a.$pDERNLSJac1.dummyVarNLSJac1
*/
void Motoreducteur_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,139};
  jacobian->resultVars[1] /* $res_NLSJac1_2.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac1 SEED_VAR */ - jacobian->tmpVars[0] /* lossyGear.tauLoss.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[5] /* lossyGear.a_a.$pDERNLSJac1.dummyVarNLSJac1 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Motoreducteur_functionJacNLSJac1_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac1;
  
  
  TRACE_POP
  return 0;
}

int Motoreducteur_functionJacNLSJac1_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac1;
  Motoreducteur_eqFunction_121(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_122(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_123(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_124(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_125(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_126(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_127(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_128(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_129(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_130(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_131(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_132(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_133(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_134(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_135(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_136(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_137(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_138(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_139(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int Motoreducteur_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Motoreducteur_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Motoreducteur_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Motoreducteur_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Motoreducteur_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int Motoreducteur_functionJacA_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int Motoreducteur_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int Motoreducteur_initialAnalyticJacobianNLSJac0(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Motoreducteur_JacNLSJac0.bin");
  
  initAnalyticJacobian(jacobian, 2, 2, 24, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(2, 4, 2);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 2+1, pFile, FALSE);
  if (count != 2+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 2+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 4, pFile, FALSE);
  if (count != 4) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 2+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Motoreducteur_initialAnalyticJacobianNLSJac1(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Motoreducteur_JacNLSJac1.bin");
  
  initAnalyticJacobian(jacobian, 2, 2, 23, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(2, 4, 2);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 2+1, pFile, FALSE);
  if (count != 2+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 2+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 4, pFile, FALSE);
  if (count != 4) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 2+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
int Motoreducteur_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Motoreducteur_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Motoreducteur_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Motoreducteur_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Motoreducteur_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int Motoreducteur_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Motoreducteur_JacA.bin");
  
  initAnalyticJacobian(jacobian, 2, 2, 0, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(2, 2, 1);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 2+1, pFile, FALSE);
  if (count != 2+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 2+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 2, pFile, FALSE);
  if (count != 2) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 2+1, count);
  }
  
  /* write color array */
  /* color 1 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 2);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}



