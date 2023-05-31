/* Non Linear Systems */
#include "Motoreducteur_model.h"
#include "Motoreducteur_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 26
type: SIMPLE_ASSIGN
lossyGear.quadrant4 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau - lossyGear.tau_bf2
*/
void Motoreducteur_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[30] /* lossyGear.quadrant4 variable */) = (1.0 + DIVISION_SIM(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */);
  TRACE_POP
}
/*
equation index: 27
type: SIMPLE_ASSIGN
lossyGear.tauLoss = torque2.tau / lossyGear.ratio + lossyGear.flange_a.tau
*/
void Motoreducteur_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */) = DIVISION_SIM((data->localData[0]->realVars[50] /* torque2.tau variable */),(data->simulationInfo->realParameter[18] /* lossyGear.ratio PARAM */),"lossyGear.ratio",equationIndexes) + (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */);
  TRACE_POP
}
/*
equation index: 28
type: SIMPLE_ASSIGN
lossyGear.quadrant1 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau + lossyGear.tau_bf1
*/
void Motoreducteur_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[24] /* lossyGear.quadrant1 variable */) = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */);
  TRACE_POP
}
/*
equation index: 29
type: SIMPLE_ASSIGN
lossyGear.quadrant2 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau + lossyGear.tau_bf2
*/
void Motoreducteur_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[26] /* lossyGear.quadrant2 variable */) = (1.0 + DIVISION_SIM(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */);
  TRACE_POP
}
/*
equation index: 30
type: SIMPLE_ASSIGN
lossyGear.quadrant3 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau - lossyGear.tau_bf1
*/
void Motoreducteur_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[28] /* lossyGear.quadrant3 variable */) = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */);
  TRACE_POP
}
/*
equation index: 31
type: SIMPLE_ASSIGN
inertia.a = (inertia.flange_a.tau - lossyGear.flange_a.tau) / inertia.J
*/
void Motoreducteur_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[11] /* inertia.a variable */) = DIVISION_SIM((data->localData[0]->realVars[12] /* inertia.flange_a.tau variable */) - (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */),(data->simulationInfo->realParameter[10] /* inertia.J PARAM */),"inertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 32
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau + lossyGear.tau_bf1_0
*/
void Motoreducteur_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[25] /* lossyGear.quadrant1_p variable */) = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */);
  TRACE_POP
}
/*
equation index: 33
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau + lossyGear.tau_bf2_0
*/
void Motoreducteur_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[27] /* lossyGear.quadrant2_p variable */) = (1.0 + DIVISION_SIM(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->simulationInfo->realParameter[20] /* lossyGear.tau_bf2_0 PARAM */);
  TRACE_POP
}
/*
equation index: 34
type: SIMPLE_ASSIGN
lossyGear.quadrant4_m = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau - lossyGear.tau_bf2_0
*/
void Motoreducteur_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[31] /* lossyGear.quadrant4_m variable */) = (1.0 + DIVISION_SIM(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->simulationInfo->realParameter[20] /* lossyGear.tau_bf2_0 PARAM */);
  TRACE_POP
}
/*
equation index: 35
type: SIMPLE_ASSIGN
lossyGear.quadrant3_m = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau - lossyGear.tau_bf1_0
*/
void Motoreducteur_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[29] /* lossyGear.quadrant3_m variable */) = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */);
  TRACE_POP
}
/*
equation index: 36
type: SIMPLE_ASSIGN
lossyGear.tau_eta_p = lossyGear.flange_a.tau - lossyGear.tau_bf_a_0
*/
void Motoreducteur_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */) = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) - (data->simulationInfo->realParameter[21] /* lossyGear.tau_bf_a_0 PARAM */);
  TRACE_POP
}
/*
equation index: 37
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p else lossyGear.quadrant2_p
*/
void Motoreducteur_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */) = (tmp0?(data->localData[0]->realVars[25] /* lossyGear.quadrant1_p variable */):(data->localData[0]->realVars[27] /* lossyGear.quadrant2_p variable */));
  TRACE_POP
}
/*
equation index: 38
type: SIMPLE_ASSIGN
lossyGear.startForward = $PRE.lossyGear.mode == 0 and lossyGear.sa > lossyGear.tauLossMax_p or inertia.w > 0.0
*/
void Motoreducteur_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp1 = Greater((data->localData[0]->realVars[32] /* lossyGear.sa variable */),(data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */));
  tmp2 = Greater((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */),0.0);
  (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) = ((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp1) || tmp2);
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
lossyGear.tau_eta_m = lossyGear.flange_a.tau + lossyGear.tau_bf_a_0
*/
void Motoreducteur_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */) = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) + (data->simulationInfo->realParameter[21] /* lossyGear.tau_bf_a_0 PARAM */);
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant4_m else lossyGear.quadrant3_m
*/
void Motoreducteur_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */) = (tmp0?(data->localData[0]->realVars[31] /* lossyGear.quadrant4_m variable */):(data->localData[0]->realVars[29] /* lossyGear.quadrant3_m variable */));
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
lossyGear.startBackward = $PRE.lossyGear.mode == 0 and lossyGear.sa < lossyGear.tauLossMin_m or inertia.w < 0.0
*/
void Motoreducteur_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp1 = Less((data->localData[0]->realVars[32] /* lossyGear.sa variable */),(data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */));
  tmp2 = Less((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */),0.0);
  (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */) = ((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp1) || tmp2);
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
lossyGear.locked = not (lossyGear.ideal or $PRE.lossyGear.mode == 1 or lossyGear.startForward or $PRE.lossyGear.mode == -1 or lossyGear.startBackward)
*/
void Motoreducteur_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */) = (!(((((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1))) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1))) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)));
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
lossyGear.a_a = if lossyGear.locked then 0.0 else lossyGear.sa - lossyGear.tauLoss
*/
void Motoreducteur_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[13] /* lossyGear.a_a variable */) = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:(data->localData[0]->realVars[32] /* lossyGear.sa variable */) - (data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */));
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
lossyGear.tau_eta = if lossyGear.ideal then lossyGear.flange_a.tau else if lossyGear.locked then lossyGear.flange_a.tau else if lossyGear.startForward or $PRE.lossyGear.mode == 1 then lossyGear.flange_a.tau - lossyGear.tau_bf_a else lossyGear.flange_a.tau + lossyGear.tau_bf_a
*/
void Motoreducteur_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */) = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */):((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */):(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) - (data->localData[0]->realVars[40] /* lossyGear.tau_bf_a variable */):(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) + (data->localData[0]->realVars[40] /* lossyGear.tau_bf_a variable */))));
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
lossyGear.tau_aPos = lossyGear.tau_eta >= 0.0
*/
void Motoreducteur_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  modelica_boolean tmp0;
  tmp0 = GreaterEq((data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */),0.0);
  (data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */) = tmp0;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
lossyGear.tauLossMax = if lossyGear.tau_aPos then lossyGear.quadrant1 else lossyGear.quadrant2
*/
void Motoreducteur_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[34] /* lossyGear.tauLossMax variable */) = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?(data->localData[0]->realVars[24] /* lossyGear.quadrant1 variable */):(data->localData[0]->realVars[26] /* lossyGear.quadrant2 variable */));
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
lossyGear.tauLossMin = if lossyGear.tau_aPos then lossyGear.quadrant4 else lossyGear.quadrant3
*/
void Motoreducteur_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[36] /* lossyGear.tauLossMin variable */) = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?(data->localData[0]->realVars[30] /* lossyGear.quadrant4 variable */):(data->localData[0]->realVars[28] /* lossyGear.quadrant3 variable */));
  TRACE_POP
}

void residualFunc67(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,67};
  int i,j;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc67: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc67 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) = xloc[0];
  (data->localData[0]->realVars[32] /* lossyGear.sa variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Motoreducteur_eqFunction_26(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_27(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_28(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_29(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_30(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_31(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_32(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_33(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_34(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_35(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_36(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_37(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_38(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_39(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_40(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_41(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_42(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_43(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_44(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_45(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_46(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_47(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[11] /* inertia.a variable */) - (data->localData[0]->realVars[13] /* lossyGear.a_a variable */);

  res[1] = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?(data->localData[0]->realVars[32] /* lossyGear.sa variable */):(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?(data->localData[0]->realVars[34] /* lossyGear.tauLossMax variable */):(data->localData[0]->realVars[36] /* lossyGear.tauLossMin variable */)))) - (data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS67(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(2, 4, 2);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (2+1)*sizeof(unsigned int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 4*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS67(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 2;
  inSysData->nonlinearPattern->numberOfEqns = 2;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((2+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((2+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+2] = {0,0,0};
  const int index_eqn[1+2] = {0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (2+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (2+1)*sizeof(unsigned int));
  for(i=2;i<2+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<2+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS67(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for lossyGear.flange_a.tau */
  sysData->nominal[i] = data->modelData->realVarsData[16].attribute /* lossyGear.flange_a.tau */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[16].attribute /* lossyGear.flange_a.tau */.min;
  sysData->max[i++]   = data->modelData->realVarsData[16].attribute /* lossyGear.flange_a.tau */.max;
  /* static nls data for lossyGear.sa */
  sysData->nominal[i] = data->modelData->realVarsData[32].attribute /* lossyGear.sa */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[32].attribute /* lossyGear.sa */.min;
  sysData->max[i++]   = data->modelData->realVarsData[32].attribute /* lossyGear.sa */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS67(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS67(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS67(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */);
  array[1] = (data->localData[0]->realVars[32] /* lossyGear.sa variable */);
}


/* inner equations */

/*
equation index: 98
type: SIMPLE_ASSIGN
lossyGear.tauLoss = torque2.tau / lossyGear.ratio + lossyGear.flange_a.tau
*/
void Motoreducteur_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */) = DIVISION_SIM((data->localData[0]->realVars[50] /* torque2.tau variable */),(data->simulationInfo->realParameter[18] /* lossyGear.ratio PARAM */),"lossyGear.ratio",equationIndexes) + (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */);
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
lossyGear.quadrant4 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau - lossyGear.tau_bf2
*/
void Motoreducteur_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[30] /* lossyGear.quadrant4 variable */) = (1.0 + DIVISION_SIM(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
lossyGear.quadrant3 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau - lossyGear.tau_bf1
*/
void Motoreducteur_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  (data->localData[0]->realVars[28] /* lossyGear.quadrant3 variable */) = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */);
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
lossyGear.quadrant2 = (1.0 + (-1.0) / lossyGear.eta_mf2) * lossyGear.flange_a.tau + lossyGear.tau_bf2
*/
void Motoreducteur_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[26] /* lossyGear.quadrant2 variable */) = (1.0 + DIVISION_SIM(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */);
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
lossyGear.quadrant1 = (1.0 - lossyGear.eta_mf1) * lossyGear.flange_a.tau + lossyGear.tau_bf1
*/
void Motoreducteur_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[24] /* lossyGear.quadrant1 variable */) = (1.0 - (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */);
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
lossyGear.a_a = (inertia.flange_a.tau - lossyGear.flange_a.tau) / inertia.J
*/
void Motoreducteur_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[13] /* lossyGear.a_a variable */) = DIVISION_SIM((data->localData[0]->realVars[12] /* inertia.flange_a.tau variable */) - (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */),(data->simulationInfo->realParameter[10] /* inertia.J PARAM */),"inertia.J",equationIndexes);
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
lossyGear.quadrant3_m = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau - lossyGear.tau_bf1_0
*/
void Motoreducteur_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[29] /* lossyGear.quadrant3_m variable */) = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
lossyGear.quadrant4_m = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau - lossyGear.tau_bf2_0
*/
void Motoreducteur_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[31] /* lossyGear.quadrant4_m variable */) = (1.0 + DIVISION_SIM(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) - (data->simulationInfo->realParameter[20] /* lossyGear.tau_bf2_0 PARAM */);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
lossyGear.quadrant2_p = (1.0 + (-1.0) / lossyGear.eta_mf2_0) * lossyGear.flange_a.tau + lossyGear.tau_bf2_0
*/
void Motoreducteur_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[27] /* lossyGear.quadrant2_p variable */) = (1.0 + DIVISION_SIM(-1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0",equationIndexes)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->simulationInfo->realParameter[20] /* lossyGear.tau_bf2_0 PARAM */);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
lossyGear.quadrant1_p = (1.0 - lossyGear.eta_mf1_0) * lossyGear.flange_a.tau + lossyGear.tau_bf1_0
*/
void Motoreducteur_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[25] /* lossyGear.quadrant1_p variable */) = (1.0 - (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */)) * ((data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */)) + (data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */);
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
lossyGear.tau_eta_m = lossyGear.flange_a.tau + lossyGear.tau_bf_a_0
*/
void Motoreducteur_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  (data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */) = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) + (data->simulationInfo->realParameter[21] /* lossyGear.tau_bf_a_0 PARAM */);
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
lossyGear.tauLossMin_m = if noEvent(lossyGear.tau_eta_m > 0.0) then lossyGear.quadrant4_m else lossyGear.quadrant3_m
*/
void Motoreducteur_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[42] /* lossyGear.tau_eta_m variable */),0.0);
  (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */) = (tmp0?(data->localData[0]->realVars[31] /* lossyGear.quadrant4_m variable */):(data->localData[0]->realVars[29] /* lossyGear.quadrant3_m variable */));
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
lossyGear.startBackward = pre(lossyGear.mode) == 0 and lossyGear.sa < lossyGear.tauLossMin_m
*/
void Motoreducteur_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  modelica_boolean tmp1;
  relationhysteresis(data, &tmp1, (data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[37] /* lossyGear.tauLossMin_m variable */), 3, Less, LessZC);
  (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */) = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp1);
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
lossyGear.tau_eta_p = lossyGear.flange_a.tau - lossyGear.tau_bf_a_0
*/
void Motoreducteur_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */) = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) - (data->simulationInfo->realParameter[21] /* lossyGear.tau_bf_a_0 PARAM */);
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
lossyGear.tauLossMax_p = if noEvent(lossyGear.tau_eta_p > 0.0) then lossyGear.quadrant1_p else lossyGear.quadrant2_p
*/
void Motoreducteur_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[43] /* lossyGear.tau_eta_p variable */),0.0);
  (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */) = (tmp0?(data->localData[0]->realVars[25] /* lossyGear.quadrant1_p variable */):(data->localData[0]->realVars[27] /* lossyGear.quadrant2_p variable */));
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
lossyGear.startForward = pre(lossyGear.mode) == 0 and lossyGear.sa > lossyGear.tauLossMax_p
*/
void Motoreducteur_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  modelica_boolean tmp1;
  relationhysteresis(data, &tmp1, (data->localData[0]->realVars[32] /* lossyGear.sa variable */), (data->localData[0]->realVars[35] /* lossyGear.tauLossMax_p variable */), 2, Greater, GreaterZC);
  (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) = (((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 0)) && tmp1);
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
lossyGear.locked = not (lossyGear.ideal or pre(lossyGear.mode) == 1 or lossyGear.startForward or pre(lossyGear.mode) == -1 or lossyGear.startBackward)
*/
void Motoreducteur_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */) = (!(((((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1))) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1))) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)));
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
lossyGear.tau_eta = if lossyGear.ideal then lossyGear.flange_a.tau else if lossyGear.locked then lossyGear.flange_a.tau else if lossyGear.startForward or pre(lossyGear.mode) == 1 then lossyGear.flange_a.tau - lossyGear.tau_bf_a else lossyGear.flange_a.tau + lossyGear.tau_bf_a
*/
void Motoreducteur_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  (data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */) = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */):((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */):(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) - (data->localData[0]->realVars[40] /* lossyGear.tau_bf_a variable */):(data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) + (data->localData[0]->realVars[40] /* lossyGear.tau_bf_a variable */))));
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
lossyGear.tau_aPos = lossyGear.tau_eta >= 0.0
*/
void Motoreducteur_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[41] /* lossyGear.tau_eta variable */), 0.0, 4, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */) = tmp0;
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
lossyGear.tauLossMin = if lossyGear.tau_aPos then lossyGear.quadrant4 else lossyGear.quadrant3
*/
void Motoreducteur_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[36] /* lossyGear.tauLossMin variable */) = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?(data->localData[0]->realVars[30] /* lossyGear.quadrant4 variable */):(data->localData[0]->realVars[28] /* lossyGear.quadrant3 variable */));
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
lossyGear.tauLossMax = if lossyGear.tau_aPos then lossyGear.quadrant1 else lossyGear.quadrant2
*/
void Motoreducteur_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[34] /* lossyGear.tauLossMax variable */) = ((data->localData[0]->booleanVars[4] /* lossyGear.tau_aPos DISCRETE */)?(data->localData[0]->realVars[24] /* lossyGear.quadrant1 variable */):(data->localData[0]->realVars[26] /* lossyGear.quadrant2 variable */));
  TRACE_POP
}

void residualFunc140(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,140};
  int i,j;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc140: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc140 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) = xloc[0];
  (data->localData[0]->realVars[32] /* lossyGear.sa variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Motoreducteur_eqFunction_98(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_99(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_100(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_101(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_102(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_103(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_104(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_105(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_106(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_107(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_108(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_109(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_110(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_111(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_112(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_113(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_114(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_115(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_116(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_117(data, threadData);

  /* local constraints */
  Motoreducteur_eqFunction_118(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?(data->localData[0]->realVars[32] /* lossyGear.sa variable */):(((data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */) || ((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)))?(data->localData[0]->realVars[34] /* lossyGear.tauLossMax variable */):(data->localData[0]->realVars[36] /* lossyGear.tauLossMin variable */)))) - (data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */);

  res[1] = ((data->localData[0]->booleanVars[1] /* lossyGear.locked DISCRETE */)?0.0:(data->localData[0]->realVars[32] /* lossyGear.sa variable */) - (data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */)) - (data->localData[0]->realVars[13] /* lossyGear.a_a variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS140(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(2, 4, 2);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (2+1)*sizeof(unsigned int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 4*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
}
OMC_DISABLE_OPT
void initializeNonlinearPatternNLS140(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  inSysData->nonlinearPattern = (NONLINEAR_PATTERN*) malloc(sizeof(NONLINEAR_PATTERN));
  inSysData->nonlinearPattern->numberOfVars = 2;
  inSysData->nonlinearPattern->numberOfEqns = 2;
  inSysData->nonlinearPattern->numberOfNonlinear = 0;
  inSysData->nonlinearPattern->indexVar = (unsigned int*) malloc((2+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->indexEqn = (unsigned int*) malloc((2+1)*sizeof(unsigned int));
  inSysData->nonlinearPattern->columns = (unsigned int*) malloc(0*sizeof(unsigned int));
  inSysData->nonlinearPattern->rows = (unsigned int*) malloc(0*sizeof(unsigned int));
  /* initialize and accumulate index vectors */
  const int index_var[1+2] = {0,0,0};
  const int index_eqn[1+2] = {0,0,0};
  memcpy(inSysData->nonlinearPattern->indexVar, index_var, (2+1)*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->indexEqn, index_eqn, (2+1)*sizeof(unsigned int));
  for(i=2;i<2+1;++i)
    inSysData->nonlinearPattern->indexVar[i] += inSysData->nonlinearPattern->indexVar[i-1];
  for(i=2;i<2+1;++i)
    inSysData->nonlinearPattern->indexEqn[i] += inSysData->nonlinearPattern->indexEqn[i-1];
  /* initialize columns and rows */
  const int columns[0] = {};
  const int rows[0] = {};
  memcpy(inSysData->nonlinearPattern->columns, columns, 0*sizeof(unsigned int));
  memcpy(inSysData->nonlinearPattern->rows, rows, 0*sizeof(unsigned int));
}

OMC_DISABLE_OPT
void initializeStaticDataNLS140(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for lossyGear.flange_a.tau */
  sysData->nominal[i] = data->modelData->realVarsData[16].attribute /* lossyGear.flange_a.tau */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[16].attribute /* lossyGear.flange_a.tau */.min;
  sysData->max[i++]   = data->modelData->realVarsData[16].attribute /* lossyGear.flange_a.tau */.max;
  /* static nls data for lossyGear.sa */
  sysData->nominal[i] = data->modelData->realVarsData[32].attribute /* lossyGear.sa */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[32].attribute /* lossyGear.sa */.min;
  sysData->max[i++]   = data->modelData->realVarsData[32].attribute /* lossyGear.sa */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS140(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS140(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS140(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */);
  array[1] = (data->localData[0]->realVars[32] /* lossyGear.sa variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Motoreducteur_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[1].equationIndex = 140;
  nonLinearSystemData[1].size = 2;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc140;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = Motoreducteur_functionJacNLSJac1_column;
  nonLinearSystemData[1].initialAnalyticalJacobian = Motoreducteur_initialAnalyticJacobianNLSJac1;
  nonLinearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS140;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS140;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 67;
  nonLinearSystemData[0].size = 2;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc67;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = Motoreducteur_functionJacNLSJac0_column;
  nonLinearSystemData[0].initialAnalyticalJacobian = Motoreducteur_initialAnalyticJacobianNLSJac0;
  nonLinearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS67;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS67;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

