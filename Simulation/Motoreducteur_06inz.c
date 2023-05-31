/* Initialization */
#include "Motoreducteur_model.h"
#include "Motoreducteur_11mix.h"
#include "Motoreducteur_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Motoreducteur_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
torque.phi_support = 0.0
*/
void Motoreducteur_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[48] /* torque.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
torque2.phi_support = 0.0
*/
void Motoreducteur_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[49] /* torque2.phi_support variable */) = 0.0;
  TRACE_POP
}
extern void Motoreducteur_eqFunction_97(DATA *data, threadData_t *threadData);


/*
equation index: 4
type: SIMPLE_ASSIGN
inertia.w = $START.inertia.w
*/
void Motoreducteur_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */) = (data->modelData->realVarsData[0] /* inertia.w STATE(1,lossyGear.a_a) */).attribute .start;
  TRACE_POP
}
extern void Motoreducteur_eqFunction_96(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_79(DATA *data, threadData_t *threadData);


/*
equation index: 7
type: SIMPLE_ASSIGN
emf.v = emf.k * emf.w
*/
void Motoreducteur_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[7] /* emf.v variable */) = ((data->simulationInfo->realParameter[9] /* emf.k PARAM */)) * ((data->localData[0]->realVars[8] /* emf.w variable */));
  TRACE_POP
}
extern void Motoreducteur_eqFunction_81(DATA *data, threadData_t *threadData);


/*
equation index: 9
type: SIMPLE_ASSIGN
$DER.emf.phi = emf.w
*/
void Motoreducteur_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[4] /* der(emf.phi) DUMMY_DER */) = (data->localData[0]->realVars[8] /* emf.w variable */);
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
resistor.R_actual = resistor.R * (1.0 + resistor.alpha * (resistor.T - resistor.T_ref))
*/
void Motoreducteur_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[45] /* resistor.R_actual variable */) = ((data->simulationInfo->realParameter[26] /* resistor.R PARAM */)) * (1.0 + ((data->simulationInfo->realParameter[30] /* resistor.alpha PARAM */)) * ((data->simulationInfo->realParameter[27] /* resistor.T PARAM */) - (data->simulationInfo->realParameter[29] /* resistor.T_ref PARAM */)));
  TRACE_POP
}
extern void Motoreducteur_eqFunction_82(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_85(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_83(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_84(DATA *data, threadData_t *threadData);


/*
equation index: 15
type: SIMPLE_ASSIGN
lossyGear.ideal = Modelica.Math.Matrices.isEqual(lossyGear.lossTable, {{0.0, 1.0, 1.0, 0.0, 0.0}}, 1e-15)
*/
void Motoreducteur_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */)[(((modelica_integer) 1) - 1) * 5 + (((modelica_integer) 1)-1)])), 2, (_index_t)1, (_index_t)5);
  (data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */) = omc_Modelica_Math_Matrices_isEqual(threadData, tmp0, _OMC_LIT2, 1e-15);
  TRACE_POP
}
extern void Motoreducteur_eqFunction_92(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_93(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_90(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_91(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_88(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_89(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_86(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_87(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_94(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: SIMPLE_ASSIGN
$PRE.lossyGear.mode = 2
*/
void Motoreducteur_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) = ((modelica_integer) 2);
  TRACE_POP
}

void Motoreducteur_eqFunction_26(DATA*, threadData_t*);
void Motoreducteur_eqFunction_27(DATA*, threadData_t*);
void Motoreducteur_eqFunction_28(DATA*, threadData_t*);
void Motoreducteur_eqFunction_29(DATA*, threadData_t*);
void Motoreducteur_eqFunction_30(DATA*, threadData_t*);
void Motoreducteur_eqFunction_31(DATA*, threadData_t*);
void Motoreducteur_eqFunction_32(DATA*, threadData_t*);
void Motoreducteur_eqFunction_33(DATA*, threadData_t*);
void Motoreducteur_eqFunction_34(DATA*, threadData_t*);
void Motoreducteur_eqFunction_35(DATA*, threadData_t*);
void Motoreducteur_eqFunction_36(DATA*, threadData_t*);
void Motoreducteur_eqFunction_37(DATA*, threadData_t*);
void Motoreducteur_eqFunction_38(DATA*, threadData_t*);
void Motoreducteur_eqFunction_39(DATA*, threadData_t*);
void Motoreducteur_eqFunction_40(DATA*, threadData_t*);
void Motoreducteur_eqFunction_41(DATA*, threadData_t*);
void Motoreducteur_eqFunction_42(DATA*, threadData_t*);
void Motoreducteur_eqFunction_43(DATA*, threadData_t*);
void Motoreducteur_eqFunction_44(DATA*, threadData_t*);
void Motoreducteur_eqFunction_45(DATA*, threadData_t*);
void Motoreducteur_eqFunction_46(DATA*, threadData_t*);
void Motoreducteur_eqFunction_47(DATA*, threadData_t*);
void Motoreducteur_eqFunction_49(DATA*, threadData_t*);
void Motoreducteur_eqFunction_48(DATA*, threadData_t*);
/*
equation index: 67
indexNonlinear: 0
type: NONLINEAR

vars: {lossyGear.flange_a.tau, lossyGear.sa}
eqns: {26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 48}
*/
void Motoreducteur_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 67 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[32] /* lossyGear.sa variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,67};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 67 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[32] /* lossyGear.sa variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  TRACE_POP
}
extern void Motoreducteur_eqFunction_144(DATA *data, threadData_t *threadData);


/*
equation index: 69
type: SIMPLE_ASSIGN
lossyGear.mode = if lossyGear.ideal then 2 else if ($PRE.lossyGear.mode == 1 or lossyGear.startForward) and inertia.w > 0.0 then 1 else if ($PRE.lossyGear.mode == -1 or lossyGear.startBackward) and inertia.w < 0.0 then -1 else 0
*/
void Motoreducteur_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  modelica_boolean tmp1;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_integer tmp5;
  modelica_boolean tmp6;
  modelica_integer tmp7;
  tmp6 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp6)
  {
    tmp7 = ((modelica_integer) 2);
  }
  else
  {
    tmp1 = Greater((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */),0.0);
    tmp4 = (modelica_boolean)((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) && tmp1);
    if(tmp4)
    {
      tmp5 = ((modelica_integer) 1);
    }
    else
    {
      tmp3 = Less((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */),0.0);
      tmp5 = (((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1)) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)) && tmp3)?((modelica_integer) -1):((modelica_integer) 0));
    }
    tmp7 = tmp5;
  }
  (data->localData[0]->integerVars[0] /* lossyGear.mode DISCRETE */) = tmp7;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
$DER.inertia.w = inertia.a
*/
void Motoreducteur_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[2] /* der(inertia.w) STATE_DER */) = (data->localData[0]->realVars[11] /* inertia.a variable */);
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
ground.p.i = 0.0
*/
void Motoreducteur_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[9] /* ground.p.i variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
ground.p.v = 0.0
*/
void Motoreducteur_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[10] /* ground.p.v variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
lossyGear.phi_support = 0.0
*/
void Motoreducteur_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[23] /* lossyGear.phi_support variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
lossyGear.phi_a = $START.lossyGear.phi_a
*/
void Motoreducteur_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[1] /* lossyGear.phi_a STATE(1,inertia.w) */) = (data->modelData->realVarsData[1] /* lossyGear.phi_a STATE(1,inertia.w) */).attribute .start;
  TRACE_POP
}
extern void Motoreducteur_eqFunction_145(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_95(DATA *data, threadData_t *threadData);


/*
equation index: 77
type: ALGORITHM

  assert(abs(lossyGear.ratio) > 0.0, "Error in initialization of LossyGear: ratio may not be zero");
*/
void Motoreducteur_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,59,"Error in initialization of LossyGear: ratio may not be zero");
  static int tmp10 = 0;
  {
    tmp8 = Greater(fabs((data->simulationInfo->realParameter[18] /* lossyGear.ratio PARAM */)),0.0);
    if(!tmp8)
    {
      {
        const char* assert_cond = "(abs(lossyGear.ratio) > 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/LossyGear.mo",109,3,110,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp9)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/LossyGear.mo",109,3,110,67,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp9)));
        }
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void Motoreducteur_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Motoreducteur_eqFunction_1(data, threadData);
  Motoreducteur_eqFunction_2(data, threadData);
  Motoreducteur_eqFunction_97(data, threadData);
  Motoreducteur_eqFunction_4(data, threadData);
  Motoreducteur_eqFunction_96(data, threadData);
  Motoreducteur_eqFunction_79(data, threadData);
  Motoreducteur_eqFunction_7(data, threadData);
  Motoreducteur_eqFunction_81(data, threadData);
  Motoreducteur_eqFunction_9(data, threadData);
  Motoreducteur_eqFunction_10(data, threadData);
  Motoreducteur_eqFunction_82(data, threadData);
  Motoreducteur_eqFunction_85(data, threadData);
  Motoreducteur_eqFunction_83(data, threadData);
  Motoreducteur_eqFunction_84(data, threadData);
  Motoreducteur_eqFunction_15(data, threadData);
  Motoreducteur_eqFunction_92(data, threadData);
  Motoreducteur_eqFunction_93(data, threadData);
  Motoreducteur_eqFunction_90(data, threadData);
  Motoreducteur_eqFunction_91(data, threadData);
  Motoreducteur_eqFunction_88(data, threadData);
  Motoreducteur_eqFunction_89(data, threadData);
  Motoreducteur_eqFunction_86(data, threadData);
  Motoreducteur_eqFunction_87(data, threadData);
  Motoreducteur_eqFunction_94(data, threadData);
  Motoreducteur_eqFunction_25(data, threadData);
  Motoreducteur_eqFunction_67(data, threadData);
  Motoreducteur_eqFunction_144(data, threadData);
  Motoreducteur_eqFunction_69(data, threadData);
  Motoreducteur_eqFunction_70(data, threadData);
  Motoreducteur_eqFunction_71(data, threadData);
  Motoreducteur_eqFunction_72(data, threadData);
  Motoreducteur_eqFunction_73(data, threadData);
  Motoreducteur_eqFunction_74(data, threadData);
  Motoreducteur_eqFunction_145(data, threadData);
  Motoreducteur_eqFunction_95(data, threadData);
  Motoreducteur_eqFunction_77(data, threadData);
  TRACE_POP
}

int Motoreducteur_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Motoreducteur_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/* No Motoreducteur_functionInitialEquations_lambda0 function */

int Motoreducteur_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

