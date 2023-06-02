/* Jacobians 9 */
#include "Motoreducteur_model.h"
#include "Motoreducteur_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 50
type: SIMPLE_ASSIGN
lossyGear.quadrant4.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_50(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,50};
  jacobian->tmpVars[0] /* lossyGear.quadrant4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
lossyGear.tauLoss.$pDERNLSJac2.dummyVarNLSJac2 = lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,51};
  jacobian->tmpVars[1] /* lossyGear.tauLoss.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
lossyGear.quadrant1.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[2] /* lossyGear.quadrant1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
lossyGear.quadrant2.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,53};
  jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
lossyGear.quadrant3.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,54};
  jacobian->tmpVars[4] /* lossyGear.quadrant3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
inertia.a.$pDERNLSJac2.dummyVarNLSJac2 = (-lossyGear.flange_a.tau.SeedNLSJac2) / inertia.J
*/
void Motoreducteur_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,55};
  jacobian->tmpVars[5] /* inertia.a.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */),(data->simulationInfo->realParameter[10] /* inertia.J PARAM */),"inertia.J");
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,56};
  jacobian->tmpVars[6] /* lossyGear.quadrant1_p.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,57};
  jacobian->tmpVars[7] /* lossyGear.quadrant2_p.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
lossyGear.quadrant4_m.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,58};
  jacobian->tmpVars[8] /* lossyGear.quadrant4_m.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
lossyGear.quadrant3_m.$pDERNLSJac2.dummyVarNLSJac2 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac2
*/
void Motoreducteur_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,59};
  jacobian->tmpVars[9] /* lossyGear.quadrant3_m.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac2 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p.$pDERNLSJac2.dummyVarNLSJac2 = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p.$pDERNLSJac2.dummyVarNLSJac2 else lossyGear.quadrant2_p.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,60};
  modelica_boolean tmp3;
  tmp3 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  jacobian->tmpVars[11] /* lossyGear.tauLossMax_p.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp3?jacobian->tmpVars[6] /* lossyGear.quadrant1_p.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[7] /* lossyGear.quadrant2_p.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m.$pDERNLSJac2.dummyVarNLSJac2 = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant4_m.$pDERNLSJac2.dummyVarNLSJac2 else lossyGear.quadrant3_m.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,61};
  modelica_boolean tmp4;
  tmp4 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  jacobian->tmpVars[14] /* lossyGear.tauLossMin_m.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = (tmp4?jacobian->tmpVars[8] /* lossyGear.quadrant4_m.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[9] /* lossyGear.quadrant3_m.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
lossyGear.a_a.$pDERNLSJac2.dummyVarNLSJac2 = if lossyGear.locked then 0.0 else lossyGear.sa.SeedNLSJac2 - lossyGear.tauLoss.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_62(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,62};
  jacobian->tmpVars[17] /* lossyGear.a_a.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac2 SEED_VAR */ - jacobian->tmpVars[1] /* lossyGear.tauLoss.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
lossyGear.tauLossMax.$pDERNLSJac2.dummyVarNLSJac2 = if lossyGear.tau_aPos then lossyGear.quadrant1.$pDERNLSJac2.dummyVarNLSJac2 else lossyGear.quadrant2.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_63(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,63};
  jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[2] /* lossyGear.quadrant1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
lossyGear.tauLossMin.$pDERNLSJac2.dummyVarNLSJac2 = if lossyGear.tau_aPos then lossyGear.quadrant4.$pDERNLSJac2.dummyVarNLSJac2 else lossyGear.quadrant3.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_64(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,64};
  jacobian->tmpVars[21] /* lossyGear.tauLossMin.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[0] /* lossyGear.quadrant4.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[4] /* lossyGear.quadrant3.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
$res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 = inertia.a.$pDERNLSJac2.dummyVarNLSJac2 - lossyGear.a_a.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_65(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,65};
  jacobian->resultVars[0] /* $res_NLSJac2_1.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = jacobian->tmpVars[5] /* inertia.a.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[17] /* lossyGear.a_a.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
$res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 = (if lossyGear.ideal then 0.0 else if lossyGear.locked then lossyGear.sa.SeedNLSJac2 else if lossyGear.startForward or $PRE.lossyGear.mode == 1 then lossyGear.tauLossMax.$pDERNLSJac2.dummyVarNLSJac2 else lossyGear.tauLossMin.$pDERNLSJac2.dummyVarNLSJac2) - lossyGear.tauLoss.$pDERNLSJac2.dummyVarNLSJac2
*/
void Motoreducteur_eqFunction_66(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,66};
  jacobian->resultVars[1] /* $res_NLSJac2_2.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac2 SEED_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[21] /* lossyGear.tauLossMin.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */))) - jacobian->tmpVars[1] /* lossyGear.tauLoss.$pDERNLSJac2.dummyVarNLSJac2 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Motoreducteur_functionJacNLSJac2_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac2;
  
  
  TRACE_POP
  return 0;
}

int Motoreducteur_functionJacNLSJac2_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac2;
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
lossyGear.tauLoss.$pDERNLSJac3.dummyVarNLSJac3 = lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_121(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,121};
  jacobian->tmpVars[0] /* lossyGear.tauLoss.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
lossyGear.quadrant4.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_122(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,122};
  jacobian->tmpVars[1] /* lossyGear.quadrant4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
lossyGear.quadrant3.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_123(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,123};
  jacobian->tmpVars[2] /* lossyGear.quadrant3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
lossyGear.quadrant2.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_124(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,124};
  jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
lossyGear.quadrant1.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_125(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,125};
  jacobian->tmpVars[4] /* lossyGear.quadrant1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
lossyGear.a_a.$pDERNLSJac3.dummyVarNLSJac3 = (-lossyGear.flange_a.tau.SeedNLSJac3) / inertia.J
*/
void Motoreducteur_eqFunction_126(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,126};
  jacobian->tmpVars[5] /* lossyGear.a_a.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = DIVISION((-jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */),(data->simulationInfo->realParameter[10] /* inertia.J PARAM */),"inertia.J");
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
lossyGear.quadrant3_m.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_127(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,127};
  jacobian->tmpVars[6] /* lossyGear.quadrant3_m.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
lossyGear.quadrant4_m.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_128(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,128};
  jacobian->tmpVars[7] /* lossyGear.quadrant4_m.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_129(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,129};
  jacobian->tmpVars[8] /* lossyGear.quadrant2_p.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p.$pDERNLSJac3.dummyVarNLSJac3 = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau.SeedNLSJac3
*/
void Motoreducteur_eqFunction_130(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,130};
  jacobian->tmpVars[9] /* lossyGear.quadrant1_p.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->seedVars[0] /* lossyGear.flange_a.tau.SeedNLSJac3 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m.$pDERNLSJac3.dummyVarNLSJac3 = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant4_m.$pDERNLSJac3.dummyVarNLSJac3 else lossyGear.quadrant3_m.$pDERNLSJac3.dummyVarNLSJac3
*/
void Motoreducteur_eqFunction_131(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,131};
  modelica_boolean tmp6;
  tmp6 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  jacobian->tmpVars[11] /* lossyGear.tauLossMin_m.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (tmp6?jacobian->tmpVars[7] /* lossyGear.quadrant4_m.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[6] /* lossyGear.quadrant3_m.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
lossyGear.startBackward.$pDERNLSJac3.dummyVarNLSJac3 = pre(lossyGear.mode) == 0 and lossyGear.sa < lossyGear.tauLossMin_m
*/
void Motoreducteur_eqFunction_132(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp8;
  relationhysteresis(data, &tmp8, (data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */), 3, Less, LessZC);
  jacobian->tmpVars[12] /* lossyGear.startBackward.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp8);
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p.$pDERNLSJac3.dummyVarNLSJac3 = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p.$pDERNLSJac3.dummyVarNLSJac3 else lossyGear.quadrant2_p.$pDERNLSJac3.dummyVarNLSJac3
*/
void Motoreducteur_eqFunction_133(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,133};
  modelica_boolean tmp9;
  tmp9 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  jacobian->tmpVars[14] /* lossyGear.tauLossMax_p.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (tmp9?jacobian->tmpVars[9] /* lossyGear.quadrant1_p.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[8] /* lossyGear.quadrant2_p.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
lossyGear.startForward.$pDERNLSJac3.dummyVarNLSJac3 = pre(lossyGear.mode) == 0 and lossyGear.sa > lossyGear.tauLossMax_p
*/
void Motoreducteur_eqFunction_134(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp11;
  relationhysteresis(data, &tmp11, (data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */), 2, Greater, GreaterZC);
  jacobian->tmpVars[15] /* lossyGear.startForward.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp11);
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
lossyGear.locked.$pDERNLSJac3.dummyVarNLSJac3 = not (lossyGear.ideal or pre(lossyGear.mode) == 1 or lossyGear.startForward or pre(lossyGear.mode) == -1 or lossyGear.startBackward)
*/
void Motoreducteur_eqFunction_135(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,135};
  jacobian->tmpVars[16] /* lossyGear.locked.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = (!(((((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1))) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1))) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)));
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
lossyGear.tauLossMin.$pDERNLSJac3.dummyVarNLSJac3 = if lossyGear.tau_aPos then lossyGear.quadrant4.$pDERNLSJac3.dummyVarNLSJac3 else lossyGear.quadrant3.$pDERNLSJac3.dummyVarNLSJac3
*/
void Motoreducteur_eqFunction_136(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,136};
  jacobian->tmpVars[19] /* lossyGear.tauLossMin.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[1] /* lossyGear.quadrant4.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[2] /* lossyGear.quadrant3.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
lossyGear.tauLossMax.$pDERNLSJac3.dummyVarNLSJac3 = if lossyGear.tau_aPos then lossyGear.quadrant1.$pDERNLSJac3.dummyVarNLSJac3 else lossyGear.quadrant2.$pDERNLSJac3.dummyVarNLSJac3
*/
void Motoreducteur_eqFunction_137(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,137};
  jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[4] /* lossyGear.quadrant1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[3] /* lossyGear.quadrant2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
$res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 = (if lossyGear.ideal then 0.0 else if lossyGear.locked then lossyGear.sa.SeedNLSJac3 else if lossyGear.startForward or pre(lossyGear.mode) == 1 then lossyGear.tauLossMax.$pDERNLSJac3.dummyVarNLSJac3 else lossyGear.tauLossMin.$pDERNLSJac3.dummyVarNLSJac3) - lossyGear.tauLoss.$pDERNLSJac3.dummyVarNLSJac3
*/
void Motoreducteur_eqFunction_138(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,138};
  jacobian->resultVars[0] /* $res_NLSJac3_1.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac3 SEED_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?jacobian->tmpVars[20] /* lossyGear.tauLossMax.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[19] /* lossyGear.tauLossMin.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */))) - jacobian->tmpVars[0] /* lossyGear.tauLoss.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
$res_NLSJac3_2.$pDERNLSJac3.dummyVarNLSJac3 = (if lossyGear.locked then 0.0 else lossyGear.sa.SeedNLSJac3 - lossyGear.tauLoss.$pDERNLSJac3.dummyVarNLSJac3) - lossyGear.a_a.$pDERNLSJac3.dummyVarNLSJac3
*/
void Motoreducteur_eqFunction_139(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,139};
  jacobian->resultVars[1] /* $res_NLSJac3_2.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_VAR */ = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:jacobian->seedVars[1] /* lossyGear.sa.SeedNLSJac3 SEED_VAR */ - jacobian->tmpVars[0] /* lossyGear.tauLoss.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[5] /* lossyGear.a_a.$pDERNLSJac3.dummyVarNLSJac3 JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Motoreducteur_functionJacNLSJac3_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac3;
  
  
  TRACE_POP
  return 0;
}

int Motoreducteur_functionJacNLSJac3_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_NLSJac3;
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

/*
equation index: 186
type: SIMPLE_ASSIGN
$DER.lossyGear.phi_a.$pDERA.dummyVarA = inertia.w.SeedA
*/
void Motoreducteur_eqFunction_186(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,186};
  jacobian->resultVars[1] /* der(lossyGear.phi_a.$pDERA.dummyVarA) JACOBIAN_VAR */ = jacobian->seedVars[0] /* inertia.w.SeedA SEED_VAR */;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
lossyGear.startBackward.$pDERA.dummyVarA = pre(lossyGear.mode) == 0 and lossyGear.sa < lossyGear.tauLossMin_m
*/
void Motoreducteur_eqFunction_187(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,187};
  modelica_boolean tmp16;
  tmp16 = Less((data->localData[0]->realVars[32] /* lossyGear.sa variable */),(data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */));
  jacobian->tmpVars[43] /* lossyGear.startBackward.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp16);
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
lossyGear.locked.$pDERA.dummyVarA = not (lossyGear.ideal or pre(lossyGear.mode) == 1 or lossyGear.startForward or pre(lossyGear.mode) == -1 or lossyGear.startBackward)
*/
void Motoreducteur_eqFunction_188(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,188};
  jacobian->tmpVars[42] /* lossyGear.locked.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (!(((((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1))) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1))) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)));
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
lossyGear.startForward.$pDERA.dummyVarA = pre(lossyGear.mode) == 0 and lossyGear.sa > lossyGear.tauLossMax_p
*/
void Motoreducteur_eqFunction_189(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,189};
  modelica_boolean tmp20;
  tmp20 = Greater((data->localData[0]->realVars[32] /* lossyGear.sa variable */),(data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */));
  jacobian->tmpVars[44] /* lossyGear.startForward.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp20);
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
resistor.v.$pDERA.dummyVarA = (-emf.k) * inertia.w.SeedA
*/
void Motoreducteur_eqFunction_190(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,190};
  jacobian->tmpVars[39] /* resistor.v.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((-(data->simulationInfo->realParameter[9] /* emf.k PARAM */))) * (jacobian->seedVars[0] /* inertia.w.SeedA SEED_VAR */);
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
resistor.i.$pDERA.dummyVarA = resistor.v.$pDERA.dummyVarA / resistor.R_actual
*/
void Motoreducteur_eqFunction_191(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,191};
  jacobian->tmpVars[38] /* resistor.i.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[39] /* resistor.v.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */,(data->localData[0]->realVars[45] /* resistor.R_actual variable */),"resistor.R_actual");
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
emf.tau.$pDERA.dummyVarA = (-emf.k) * resistor.i.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_192(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,192};
  jacobian->tmpVars[2] /* emf.tau.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((-(data->simulationInfo->realParameter[9] /* emf.k PARAM */))) * (jacobian->tmpVars[38] /* resistor.i.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
lossyGear.interpolation_result.$pDERA.dummyVarA[1,1] = if lossyGear.ideal then 0.0 else sign(inertia.w) * inertia.w.SeedA * $DER$Modelica$PMath$PVectors$Pinterpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,2], abs(inertia.w), 1, {0.0}, {0.0}, 1.0)[1]
*/
void Motoreducteur_eqFunction_193(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,193};
  real_array tmp21;
  real_array tmp22;
  index_spec_t tmp23;
  real_array tmp24;
  real_array tmp25;
  index_spec_t tmp26;
  real_array tmp27;
  real_array tmp28;
  modelica_boolean tmp29;
  modelica_real tmp30;
  tmp29 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp29)
  {
    tmp30 = 0.0;
  }
  else
  {
    real_array_create(&tmp21, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp23, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp21, &tmp23, &tmp22);
    real_array_create(&tmp24, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp26, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 2)), 'S');
    index_alloc_real_array(&tmp24, &tmp26, &tmp25);
    array_alloc_scalar_real_array(&tmp27, 1, (modelica_real)0.0);
    array_alloc_scalar_real_array(&tmp28, 1, (modelica_real)0.0);
    tmp30 = ((sign((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */))) * (jacobian->seedVars[0] /* inertia.w.SeedA SEED_VAR */)) * (omc__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate(threadData, tmp22, tmp25, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), tmp27, tmp28, 1.0, NULL));
  }
  jacobian->tmpVars[11] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,1] JACOBIAN_DIFF_VAR */ = tmp30;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
lossyGear.eta_mf1.$pDERA.dummyVarA = if lossyGear.ideal then 0.0 else lossyGear.interpolation_result.$pDERA.dummyVarA[1,1]
*/
void Motoreducteur_eqFunction_194(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,194};
  jacobian->tmpVars[8] /* lossyGear.eta_mf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:jacobian->tmpVars[11] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,1] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
lossyGear.interpolation_result.$pDERA.dummyVarA[1,2] = if lossyGear.ideal then 0.0 else sign(inertia.w) * inertia.w.SeedA * $DER$Modelica$PMath$PVectors$Pinterpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,3], abs(inertia.w), 1, {0.0}, {0.0}, 1.0)[1]
*/
void Motoreducteur_eqFunction_195(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,195};
  real_array tmp31;
  real_array tmp32;
  index_spec_t tmp33;
  real_array tmp34;
  real_array tmp35;
  index_spec_t tmp36;
  real_array tmp37;
  real_array tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  tmp39 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp39)
  {
    tmp40 = 0.0;
  }
  else
  {
    real_array_create(&tmp31, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp33, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp31, &tmp33, &tmp32);
    real_array_create(&tmp34, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp36, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 3)), 'S');
    index_alloc_real_array(&tmp34, &tmp36, &tmp35);
    array_alloc_scalar_real_array(&tmp37, 1, (modelica_real)0.0);
    array_alloc_scalar_real_array(&tmp38, 1, (modelica_real)0.0);
    tmp40 = ((sign((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */))) * (jacobian->seedVars[0] /* inertia.w.SeedA SEED_VAR */)) * (omc__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate(threadData, tmp32, tmp35, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), tmp37, tmp38, 1.0, NULL));
  }
  jacobian->tmpVars[12] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,2] JACOBIAN_DIFF_VAR */ = tmp40;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
lossyGear.eta_mf2.$pDERA.dummyVarA = if lossyGear.ideal then 0.0 else lossyGear.interpolation_result.$pDERA.dummyVarA[1,2]
*/
void Motoreducteur_eqFunction_196(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 10;
  const int equationIndexes[2] = {1,196};
  jacobian->tmpVars[9] /* lossyGear.eta_mf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:jacobian->tmpVars[12] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,2] JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
lossyGear.interpolation_result.$pDERA.dummyVarA[1,3] = if lossyGear.ideal then 0.0 else sign(inertia.w) * inertia.w.SeedA * $DER$Modelica$PMath$PVectors$Pinterpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,4], abs(inertia.w), 1, {0.0}, {0.0}, 1.0)[1]
*/
void Motoreducteur_eqFunction_197(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 11;
  const int equationIndexes[2] = {1,197};
  real_array tmp41;
  real_array tmp42;
  index_spec_t tmp43;
  real_array tmp44;
  real_array tmp45;
  index_spec_t tmp46;
  real_array tmp47;
  real_array tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  tmp49 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp49)
  {
    tmp50 = 0.0;
  }
  else
  {
    real_array_create(&tmp41, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp43, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp41, &tmp43, &tmp42);
    real_array_create(&tmp44, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp46, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 4)), 'S');
    index_alloc_real_array(&tmp44, &tmp46, &tmp45);
    array_alloc_scalar_real_array(&tmp47, 1, (modelica_real)0.0);
    array_alloc_scalar_real_array(&tmp48, 1, (modelica_real)0.0);
    tmp50 = ((sign((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */))) * (jacobian->seedVars[0] /* inertia.w.SeedA SEED_VAR */)) * (omc__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate(threadData, tmp42, tmp45, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), tmp47, tmp48, 1.0, NULL));
  }
  jacobian->tmpVars[13] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,3] JACOBIAN_DIFF_VAR */ = tmp50;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
lossyGear.tau_bf1.$pDERA.dummyVarA = if lossyGear.ideal then 0.0 else sign(lossyGear.interpolation_result[1,3]) * lossyGear.interpolation_result.$pDERA.dummyVarA[1,3]
*/
void Motoreducteur_eqFunction_198(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 12;
  const int equationIndexes[2] = {1,198};
  jacobian->tmpVars[31] /* lossyGear.tau_bf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:(sign((data->localData[0]->realVars[19] /* lossyGear.interpolation_result[1,3] variable */))) * (jacobian->tmpVars[13] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,3] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
lossyGear.interpolation_result.$pDERA.dummyVarA[1,4] = if lossyGear.ideal then 0.0 else sign(inertia.w) * inertia.w.SeedA * $DER$Modelica$PMath$PVectors$Pinterpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,5], abs(inertia.w), 1, {0.0}, {0.0}, 1.0)[1]
*/
void Motoreducteur_eqFunction_199(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 13;
  const int equationIndexes[2] = {1,199};
  real_array tmp51;
  real_array tmp52;
  index_spec_t tmp53;
  real_array tmp54;
  real_array tmp55;
  index_spec_t tmp56;
  real_array tmp57;
  real_array tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  tmp59 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp59)
  {
    tmp60 = 0.0;
  }
  else
  {
    real_array_create(&tmp51, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp53, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp51, &tmp53, &tmp52);
    real_array_create(&tmp54, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp56, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 5)), 'S');
    index_alloc_real_array(&tmp54, &tmp56, &tmp55);
    array_alloc_scalar_real_array(&tmp57, 1, (modelica_real)0.0);
    array_alloc_scalar_real_array(&tmp58, 1, (modelica_real)0.0);
    tmp60 = ((sign((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */))) * (jacobian->seedVars[0] /* inertia.w.SeedA SEED_VAR */)) * (omc__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate(threadData, tmp52, tmp55, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), tmp57, tmp58, 1.0, NULL));
  }
  jacobian->tmpVars[14] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,4] JACOBIAN_DIFF_VAR */ = tmp60;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
lossyGear.tau_bf2.$pDERA.dummyVarA = if lossyGear.ideal then 0.0 else sign(lossyGear.interpolation_result[1,4]) * lossyGear.interpolation_result.$pDERA.dummyVarA[1,4]
*/
void Motoreducteur_eqFunction_200(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 14;
  const int equationIndexes[2] = {1,200};
  jacobian->tmpVars[32] /* lossyGear.tau_bf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:(sign((data->localData[0]->realVars[20] /* lossyGear.interpolation_result[1,4] variable */))) * (jacobian->tmpVars[14] /* lossyGear.interpolation_result.$pDERA.dummyVarA[1,4] JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
lossyGear.tau_bf_a.$pDERA.dummyVarA = if noEvent(abs(lossyGear.eta_mf1 - 1.0) <= 1e-15) and noEvent(abs(lossyGear.eta_mf2 - 1.0) <= 1e-15) then 0.5 * lossyGear.tau_bf1.$pDERA.dummyVarA else ((lossyGear.tau_bf1.$pDERA.dummyVarA - lossyGear.tau_bf2.$pDERA.dummyVarA) * (lossyGear.eta_mf1 + (-1.0) / lossyGear.eta_mf2) - (lossyGear.tau_bf1 - lossyGear.tau_bf2) * (lossyGear.eta_mf1.$pDERA.dummyVarA + lossyGear.eta_mf2.$pDERA.dummyVarA / lossyGear.eta_mf2 ^ 2.0)) / (lossyGear.eta_mf1 + (-1.0) / lossyGear.eta_mf2) ^ 2.0
*/
void Motoreducteur_eqFunction_201(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 15;
  const int equationIndexes[2] = {1,201};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  tmp61 = LessEq(fabs((data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */) - 1.0),1e-15);
  tmp62 = LessEq(fabs((data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */) - 1.0),1e-15);
  tmp65 = (modelica_boolean)(tmp61 && tmp62);
  if(tmp65)
  {
    tmp66 = (0.5) * (jacobian->tmpVars[31] /* lossyGear.tau_bf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  }
  else
  {
    tmp63 = (data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */);
    tmp64 = (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */) + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2");
    tmp66 = DIVISION((jacobian->tmpVars[31] /* lossyGear.tau_bf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[32] /* lossyGear.tau_bf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */) * ((data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */) + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) - (((data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */) - (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */)) * (jacobian->tmpVars[8] /* lossyGear.eta_mf1.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ + DIVISION(jacobian->tmpVars[9] /* lossyGear.eta_mf2.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */,(tmp63 * tmp63),"lossyGear.eta_mf2 ^ 2.0"))),(tmp64 * tmp64),"(lossyGear.eta_mf1 + (-1.0) / lossyGear.eta_mf2) ^ 2.0");
  }
  jacobian->tmpVars[33] /* lossyGear.tau_bf_a.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = tmp66;
  TRACE_POP
}

/*
equation index: 222
type: LINEAR

<var>lossyGear.tau_eta_p.$pDERA.dummyVarA</var>
<var>lossyGear.sa.$pDERA.dummyVarA</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Motoreducteur_eqFunction_222(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 16;
  const int equationIndexes[2] = {1,222};
  /* Linear equation system */
  int retValue;
  double aux_x[2] = { jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */,jacobian->tmpVars[25] /* lossyGear.sa.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 222 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  data->simulationInfo->linearSystemData[0].parDynamicData[omc_get_thread_num()].parentJacobian = jacobian;
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,222};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 222 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = aux_x[0];
  jacobian->tmpVars[25] /* lossyGear.sa.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = aux_x[1];

  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p.$pDERA.dummyVarA = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.tau_eta_p.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_223(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 17;
  const int equationIndexes[2] = {1,223};
  jacobian->tmpVars[20] /* lossyGear.quadrant2_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0")) * (jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p.$pDERA.dummyVarA = (1.0 - lossyGear.eta_mf1_0) * lossyGear.tau_eta_p.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_224(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 18;
  const int equationIndexes[2] = {1,224};
  jacobian->tmpVars[18] /* lossyGear.quadrant1_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * (jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p.$pDERA.dummyVarA = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p.$pDERA.dummyVarA else lossyGear.quadrant2_p.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_225(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 19;
  const int equationIndexes[2] = {1,225};
  modelica_boolean tmp67;
  tmp67 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  jacobian->tmpVars[28] /* lossyGear.tauLossMax_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (tmp67?jacobian->tmpVars[18] /* lossyGear.quadrant1_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:jacobian->tmpVars[20] /* lossyGear.quadrant2_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m.$pDERA.dummyVarA = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant2_p.$pDERA.dummyVarA else lossyGear.quadrant1_p.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_226(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 20;
  const int equationIndexes[2] = {1,226};
  modelica_boolean tmp68;
  tmp68 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  jacobian->tmpVars[30] /* lossyGear.tauLossMin_m.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = (tmp68?jacobian->tmpVars[20] /* lossyGear.quadrant2_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:jacobian->tmpVars[18] /* lossyGear.quadrant1_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
lossyGear.tau_eta.$pDERA.dummyVarA = if lossyGear.ideal then lossyGear.tau_eta_p.$pDERA.dummyVarA else if lossyGear.locked then lossyGear.tau_eta_p.$pDERA.dummyVarA else if lossyGear.startForward or pre(lossyGear.mode) == 1 then lossyGear.tau_eta_p.$pDERA.dummyVarA - lossyGear.tau_bf_a.$pDERA.dummyVarA else lossyGear.tau_eta_p.$pDERA.dummyVarA + lossyGear.tau_bf_a.$pDERA.dummyVarA
*/
void Motoreducteur_eqFunction_227(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 21;
  const int equationIndexes[2] = {1,227};
  jacobian->tmpVars[34] /* lossyGear.tau_eta.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ - jacobian->tmpVars[33] /* lossyGear.tau_bf_a.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */:jacobian->tmpVars[36] /* lossyGear.tau_eta_p.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */ + jacobian->tmpVars[33] /* lossyGear.tau_bf_a.$pDERA.dummyVarA JACOBIAN_DIFF_VAR */)));
  TRACE_POP
}

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
  Motoreducteur_eqFunction_186(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_187(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_188(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_189(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_190(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_191(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_192(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_193(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_194(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_195(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_196(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_197(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_198(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_199(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_200(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_201(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_222(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_223(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_224(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_225(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_226(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_227(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 212
type: SIMPLE_ASSIGN
lossyGear.quadrant4.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4
*/
void Motoreducteur_eqFunction_212(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,212};
  jacobian->tmpVars[0] /* lossyGear.quadrant4.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
lossyGear.quadrant1.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = (1.0 - lossyGear.eta_mf1) * lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4
*/
void Motoreducteur_eqFunction_213(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,213};
  jacobian->tmpVars[1] /* lossyGear.quadrant1.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
lossyGear.quadrant3.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = (1.0 - lossyGear.eta_mf1) * lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4
*/
void Motoreducteur_eqFunction_214(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,214};
  jacobian->tmpVars[2] /* lossyGear.quadrant3.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * (jacobian->seedVars[0] /* lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
lossyGear.tauLossMin.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = if lossyGear.tau_aPos then lossyGear.quadrant4.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 else lossyGear.quadrant3.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4
*/
void Motoreducteur_eqFunction_215(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 3;
  const int equationIndexes[2] = {1,215};
  jacobian->tmpVars[3] /* lossyGear.tauLossMin.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[0] /* lossyGear.quadrant4.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[2] /* lossyGear.quadrant3.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
lossyGear.quadrant2.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4
*/
void Motoreducteur_eqFunction_216(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 4;
  const int equationIndexes[2] = {1,216};
  jacobian->tmpVars[4] /* lossyGear.quadrant2.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = (1.0 + DIVISION(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2")) * (jacobian->seedVars[0] /* lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
lossyGear.tauLossMax.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = if lossyGear.tau_aPos then lossyGear.quadrant1.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 else lossyGear.quadrant2.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4
*/
void Motoreducteur_eqFunction_217(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 5;
  const int equationIndexes[2] = {1,217};
  jacobian->tmpVars[5] /* lossyGear.tauLossMax.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?jacobian->tmpVars[1] /* lossyGear.quadrant1.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[4] /* lossyGear.quadrant2.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
lossyGear.tauLoss.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = if lossyGear.ideal then 0.0 else if lossyGear.locked then lossyGear.sa.$pDERA.dummyVarA.SeedLSJac4 else if lossyGear.startForward or pre(lossyGear.mode) == 1 then lossyGear.tauLossMax.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 else lossyGear.tauLossMin.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4
*/
void Motoreducteur_eqFunction_218(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 6;
  const int equationIndexes[2] = {1,218};
  jacobian->tmpVars[6] /* lossyGear.tauLoss.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?jacobian->seedVars[1] /* lossyGear.sa.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */:(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?jacobian->tmpVars[5] /* lossyGear.tauLossMax.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */:jacobian->tmpVars[3] /* lossyGear.tauLossMin.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */)));
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
$DER.inertia.w.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 = if lossyGear.locked then 0.0 else lossyGear.sa.$pDERA.dummyVarA.SeedLSJac4 - lossyGear.tauLoss.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4
*/
void Motoreducteur_eqFunction_219(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 7;
  const int equationIndexes[2] = {1,219};
  jacobian->tmpVars[7] /* der(inertia.w.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4) JACOBIAN_DIFF_VAR */ = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:jacobian->seedVars[1] /* lossyGear.sa.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */ - jacobian->tmpVars[6] /* lossyGear.tauLoss.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
$res_LSJac4_1.$pDERLSJac4.dummyVarLSJac4 = lossyGear.ratio * (lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 - lossyGear.tauLoss.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4)
*/
void Motoreducteur_eqFunction_220(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 8;
  const int equationIndexes[2] = {1,220};
  jacobian->resultVars[0] /* $res_LSJac4_1.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((data->simulationInfo->realParameter[18] /* lossyGear.ratio PARAM */)) * (jacobian->seedVars[0] /* lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */ - jacobian->tmpVars[6] /* lossyGear.tauLoss.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_DIFF_VAR */);
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
$res_LSJac4_2.$pDERLSJac4.dummyVarLSJac4 = (-inertia.J) * $DER.inertia.w.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4 - lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4
*/
void Motoreducteur_eqFunction_221(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 9;
  const int equationIndexes[2] = {1,221};
  jacobian->resultVars[1] /* $res_LSJac4_2.$pDERLSJac4.dummyVarLSJac4 JACOBIAN_VAR */ = ((-(data->simulationInfo->realParameter[10] /* inertia.J PARAM */))) * (jacobian->tmpVars[7] /* der(inertia.w.$pDERA.dummyVarA.$pDERLSJac4.dummyVarLSJac4) JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* lossyGear.tau_eta_p.$pDERA.dummyVarA.SeedLSJac4 SEED_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Motoreducteur_functionJacLSJac4_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_LSJac4;
  
  
  TRACE_POP
  return 0;
}

int Motoreducteur_functionJacLSJac4_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Motoreducteur_INDEX_JAC_LSJac4;
  Motoreducteur_eqFunction_212(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_213(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_214(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_215(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_216(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_217(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_218(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_219(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_220(data, threadData, jacobian, parentJacobian);
  Motoreducteur_eqFunction_221(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int Motoreducteur_initialAnalyticJacobianNLSJac2(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Motoreducteur_JacNLSJac2.bin");
  
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
int Motoreducteur_initialAnalyticJacobianNLSJac3(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Motoreducteur_JacNLSJac3.bin");
  
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
  
  initAnalyticJacobian(jacobian, 2, 2, 48, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(2, 2, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
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
OMC_DISABLE_OPT
int Motoreducteur_initialAnalyticJacobianLSJac4(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Motoreducteur_JacLSJac4.bin");
  
  initAnalyticJacobian(jacobian, 2, 2, 10, NULL, jacobian->sparsePattern);
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



