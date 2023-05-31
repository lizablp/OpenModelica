/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Motoreducteur_model.h"
#include "simulation/solver/events.h"

/* FIXME these defines are ugly and hard to read, why not use direct function pointers instead? */
#define prefixedName_performSimulation Motoreducteur_performSimulation
#define prefixedName_updateContinuousSystem Motoreducteur_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation Motoreducteur_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Motoreducteur_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int Motoreducteur_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Motoreducteur_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 78
type: SIMPLE_ASSIGN
$DER.emf.phi = inertia.w
*/
void Motoreducteur_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[4] /* der(emf.phi) DUMMY_DER */) = (data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */);
  TRACE_POP
}
/*
equation index: 79
type: SIMPLE_ASSIGN
emf.w = inertia.w
*/
void Motoreducteur_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[8] /* emf.w variable */) = (data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */);
  TRACE_POP
}
/*
equation index: 80
type: SIMPLE_ASSIGN
emf.v = emf.k * inertia.w
*/
void Motoreducteur_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[7] /* emf.v variable */) = ((data->simulationInfo->realParameter[9] /* emf.k PARAM */)) * ((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */));
  TRACE_POP
}
/*
equation index: 81
type: SIMPLE_ASSIGN
resistor.v = constantVoltage.V - emf.v
*/
void Motoreducteur_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  (data->localData[0]->realVars[47] /* resistor.v variable */) = (data->simulationInfo->realParameter[2] /* constantVoltage.V PARAM */) - (data->localData[0]->realVars[7] /* emf.v variable */);
  TRACE_POP
}
/*
equation index: 82
type: SIMPLE_ASSIGN
resistor.i = resistor.v / resistor.R_actual
*/
void Motoreducteur_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  (data->localData[0]->realVars[46] /* resistor.i variable */) = DIVISION_SIM((data->localData[0]->realVars[47] /* resistor.v variable */),(data->localData[0]->realVars[45] /* resistor.R_actual variable */),"resistor.R_actual",equationIndexes);
  TRACE_POP
}
/*
equation index: 83
type: SIMPLE_ASSIGN
emf.tau = (-emf.k) * resistor.i
*/
void Motoreducteur_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[6] /* emf.tau variable */) = ((-(data->simulationInfo->realParameter[9] /* emf.k PARAM */))) * ((data->localData[0]->realVars[46] /* resistor.i variable */));
  TRACE_POP
}
/*
equation index: 84
type: SIMPLE_ASSIGN
inertia.flange_a.tau = const.k - emf.tau
*/
void Motoreducteur_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  (data->localData[0]->realVars[12] /* inertia.flange_a.tau variable */) = (data->simulationInfo->realParameter[0] /* const.k PARAM */) - (data->localData[0]->realVars[6] /* emf.tau variable */);
  TRACE_POP
}
/*
equation index: 85
type: SIMPLE_ASSIGN
resistor.LossPower = resistor.v * resistor.i
*/
void Motoreducteur_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  (data->localData[0]->realVars[44] /* resistor.LossPower variable */) = ((data->localData[0]->realVars[47] /* resistor.v variable */)) * ((data->localData[0]->realVars[46] /* resistor.i variable */));
  TRACE_POP
}
/*
equation index: 86
type: SIMPLE_ASSIGN
lossyGear.interpolation_result[1,1] = if lossyGear.ideal then 1.0 else Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,2], abs(inertia.w), 1)[1]
*/
void Motoreducteur_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  real_array tmp3;
  real_array tmp4;
  index_spec_t tmp5;
  real_array tmp6;
  real_array tmp7;
  index_spec_t tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  tmp9 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp9)
  {
    tmp10 = 1.0;
  }
  else
  {
    real_array_create(&tmp3, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp5, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp3, &tmp5, &tmp4);
    real_array_create(&tmp6, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp8, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 2)), 'S');
    index_alloc_real_array(&tmp6, &tmp8, &tmp7);
    tmp10 = omc_Modelica_Math_Vectors_interpolate(threadData, tmp4, tmp7, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), NULL);
  }
  (data->localData[0]->realVars[17] /* lossyGear.interpolation_result[1,1] variable */) = tmp10;
  TRACE_POP
}
/*
equation index: 87
type: SIMPLE_ASSIGN
lossyGear.eta_mf1 = if lossyGear.ideal then 1.0 else lossyGear.interpolation_result[1,1]
*/
void Motoreducteur_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  (data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */) = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?1.0:(data->localData[0]->realVars[17] /* lossyGear.interpolation_result[1,1] variable */));
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
lossyGear.interpolation_result[1,2] = if lossyGear.ideal then 1.0 else Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,3], abs(inertia.w), 1)[1]
*/
void Motoreducteur_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  real_array tmp11;
  real_array tmp12;
  index_spec_t tmp13;
  real_array tmp14;
  real_array tmp15;
  index_spec_t tmp16;
  modelica_boolean tmp17;
  modelica_real tmp18;
  tmp17 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp17)
  {
    tmp18 = 1.0;
  }
  else
  {
    real_array_create(&tmp11, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp13, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp11, &tmp13, &tmp12);
    real_array_create(&tmp14, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp16, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 3)), 'S');
    index_alloc_real_array(&tmp14, &tmp16, &tmp15);
    tmp18 = omc_Modelica_Math_Vectors_interpolate(threadData, tmp12, tmp15, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), NULL);
  }
  (data->localData[0]->realVars[18] /* lossyGear.interpolation_result[1,2] variable */) = tmp18;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
lossyGear.eta_mf2 = if lossyGear.ideal then 1.0 else lossyGear.interpolation_result[1,2]
*/
void Motoreducteur_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */) = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?1.0:(data->localData[0]->realVars[18] /* lossyGear.interpolation_result[1,2] variable */));
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
lossyGear.interpolation_result[1,3] = if lossyGear.ideal then 0.0 else Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,4], abs(inertia.w), 1)[1]
*/
void Motoreducteur_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  real_array tmp19;
  real_array tmp20;
  index_spec_t tmp21;
  real_array tmp22;
  real_array tmp23;
  index_spec_t tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  tmp25 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp25)
  {
    tmp26 = 0.0;
  }
  else
  {
    real_array_create(&tmp19, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp21, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp19, &tmp21, &tmp20);
    real_array_create(&tmp22, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp24, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 4)), 'S');
    index_alloc_real_array(&tmp22, &tmp24, &tmp23);
    tmp26 = omc_Modelica_Math_Vectors_interpolate(threadData, tmp20, tmp23, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), NULL);
  }
  (data->localData[0]->realVars[19] /* lossyGear.interpolation_result[1,3] variable */) = tmp26;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
lossyGear.tau_bf1 = if lossyGear.ideal then 0.0 else abs(lossyGear.interpolation_result[1,3])
*/
void Motoreducteur_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  (data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */) = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:fabs((data->localData[0]->realVars[19] /* lossyGear.interpolation_result[1,3] variable */)));
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
lossyGear.interpolation_result[1,4] = if lossyGear.ideal then 0.0 else Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,5], abs(inertia.w), 1)[1]
*/
void Motoreducteur_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  real_array tmp27;
  real_array tmp28;
  index_spec_t tmp29;
  real_array tmp30;
  real_array tmp31;
  index_spec_t tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  tmp33 = (modelica_boolean)(data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */);
  if(tmp33)
  {
    tmp34 = 0.0;
  }
  else
  {
    real_array_create(&tmp27, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp29, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
    index_alloc_real_array(&tmp27, &tmp29, &tmp28);
    real_array_create(&tmp30, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
    create_index_spec(&tmp32, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 5)), 'S');
    index_alloc_real_array(&tmp30, &tmp32, &tmp31);
    tmp34 = omc_Modelica_Math_Vectors_interpolate(threadData, tmp28, tmp31, fabs((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */)), ((modelica_integer) 1), NULL);
  }
  (data->localData[0]->realVars[20] /* lossyGear.interpolation_result[1,4] variable */) = tmp34;
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
lossyGear.tau_bf2 = if lossyGear.ideal then 0.0 else abs(lossyGear.interpolation_result[1,4])
*/
void Motoreducteur_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */) = ((data->localData[0]->booleanVars[0] /* lossyGear.ideal DISCRETE */)?0.0:fabs((data->localData[0]->realVars[20] /* lossyGear.interpolation_result[1,4] variable */)));
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
lossyGear.tau_bf_a = if noEvent(abs(lossyGear.eta_mf1 - 1.0) <= 1e-15) and noEvent(abs(lossyGear.eta_mf2 - 1.0) <= 1e-15) then 0.5 * lossyGear.tau_bf1 else (lossyGear.tau_bf1 - lossyGear.tau_bf2) / (lossyGear.eta_mf1 + (-1.0) / lossyGear.eta_mf2)
*/
void Motoreducteur_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  tmp35 = LessEq(fabs((data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */) - 1.0),1e-15);
  tmp36 = LessEq(fabs((data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */) - 1.0),1e-15);
  (data->localData[0]->realVars[40] /* lossyGear.tau_bf_a variable */) = ((tmp35 && tmp36)?(0.5) * ((data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */)):DIVISION_SIM((data->localData[0]->realVars[38] /* lossyGear.tau_bf1 variable */) - (data->localData[0]->realVars[39] /* lossyGear.tau_bf2 variable */),(data->localData[0]->realVars[14] /* lossyGear.eta_mf1 variable */) + DIVISION_SIM(-1.0,(data->localData[0]->realVars[15] /* lossyGear.eta_mf2 variable */),"lossyGear.eta_mf2",equationIndexes),"lossyGear.eta_mf1 + (-1.0) / lossyGear.eta_mf2",equationIndexes));
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
lossyGear.phi_b = lossyGear.phi_a / lossyGear.ratio
*/
void Motoreducteur_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[22] /* lossyGear.phi_b variable */) = DIVISION_SIM((data->localData[0]->realVars[1] /* lossyGear.phi_a STATE(1,inertia.w) */),(data->simulationInfo->realParameter[18] /* lossyGear.ratio PARAM */),"lossyGear.ratio",equationIndexes);
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
$DER.lossyGear.phi_a = inertia.w
*/
void Motoreducteur_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[3] /* der(lossyGear.phi_a) STATE_DER */) = (data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */);
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
torque2.tau = ramp.offset + (if time < ramp.startTime then 0.0 else if time < ramp.startTime + ramp.duration then (time - ramp.startTime) * ramp.height / ramp.duration else ramp.height)
*/
void Motoreducteur_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  relationhysteresis(data, &tmp37, data->localData[0]->timeValue, (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */), 0, Less, LessZC);
  tmp39 = (modelica_boolean)tmp37;
  if(tmp39)
  {
    tmp40 = 0.0;
  }
  else
  {
    relationhysteresis(data, &tmp38, data->localData[0]->timeValue, (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */) + (data->simulationInfo->realParameter[22] /* ramp.duration PARAM */), 1, Less, LessZC);
    tmp40 = (tmp38?DIVISION_SIM((data->localData[0]->timeValue - (data->simulationInfo->realParameter[25] /* ramp.startTime PARAM */)) * ((data->simulationInfo->realParameter[23] /* ramp.height PARAM */)),(data->simulationInfo->realParameter[22] /* ramp.duration PARAM */),"ramp.duration",equationIndexes):(data->simulationInfo->realParameter[23] /* ramp.height PARAM */));
  }
  (data->localData[0]->realVars[50] /* torque2.tau variable */) = (data->simulationInfo->realParameter[24] /* ramp.offset PARAM */) + tmp40;
  TRACE_POP
}
void Motoreducteur_eqFunction_98(DATA*, threadData_t*);
void Motoreducteur_eqFunction_99(DATA*, threadData_t*);
void Motoreducteur_eqFunction_100(DATA*, threadData_t*);
void Motoreducteur_eqFunction_101(DATA*, threadData_t*);
void Motoreducteur_eqFunction_102(DATA*, threadData_t*);
void Motoreducteur_eqFunction_103(DATA*, threadData_t*);
void Motoreducteur_eqFunction_104(DATA*, threadData_t*);
void Motoreducteur_eqFunction_105(DATA*, threadData_t*);
void Motoreducteur_eqFunction_106(DATA*, threadData_t*);
void Motoreducteur_eqFunction_107(DATA*, threadData_t*);
void Motoreducteur_eqFunction_108(DATA*, threadData_t*);
void Motoreducteur_eqFunction_109(DATA*, threadData_t*);
void Motoreducteur_eqFunction_110(DATA*, threadData_t*);
void Motoreducteur_eqFunction_111(DATA*, threadData_t*);
void Motoreducteur_eqFunction_112(DATA*, threadData_t*);
void Motoreducteur_eqFunction_113(DATA*, threadData_t*);
void Motoreducteur_eqFunction_114(DATA*, threadData_t*);
void Motoreducteur_eqFunction_115(DATA*, threadData_t*);
void Motoreducteur_eqFunction_116(DATA*, threadData_t*);
void Motoreducteur_eqFunction_117(DATA*, threadData_t*);
void Motoreducteur_eqFunction_118(DATA*, threadData_t*);
void Motoreducteur_eqFunction_120(DATA*, threadData_t*);
void Motoreducteur_eqFunction_119(DATA*, threadData_t*);
/*
equation index: 140
indexNonlinear: 1
type: NONLINEAR

vars: {lossyGear.flange_a.tau, lossyGear.sa}
eqns: {98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 120, 119}
*/
void Motoreducteur_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 140 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[32] /* lossyGear.sa variable */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,140};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 140 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[16] /* lossyGear.flange_a.tau variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[32] /* lossyGear.sa variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
lossyGear.mode = if lossyGear.ideal then 2 else if (pre(lossyGear.mode) == 1 or lossyGear.startForward) and inertia.w > 0.0 then 1 else if (pre(lossyGear.mode) == -1 or lossyGear.startBackward) and inertia.w < 0.0 then -1 else 0
*/
void Motoreducteur_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
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
    relationhysteresis(data, &tmp1, (data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */), 0.0, 5, Greater, GreaterZC);
    tmp4 = (modelica_boolean)((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) 1)) || (data->localData[0]->booleanVars[3] /* lossyGear.startForward DISCRETE */)) && tmp1);
    if(tmp4)
    {
      tmp5 = ((modelica_integer) 1);
    }
    else
    {
      relationhysteresis(data, &tmp3, (data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */), 0.0, 6, Less, LessZC);
      tmp5 = (((((data->simulationInfo->integerVarsPre[0] /* lossyGear.mode DISCRETE */) == ((modelica_integer) -1)) || (data->localData[0]->booleanVars[2] /* lossyGear.startBackward DISCRETE */)) && tmp3)?((modelica_integer) -1):((modelica_integer) 0));
    }
    tmp7 = tmp5;
  }
  (data->localData[0]->integerVars[0] /* lossyGear.mode DISCRETE */) = tmp7;
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
$DER.inertia.w = lossyGear.a_a
*/
void Motoreducteur_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[2] /* der(inertia.w) STATE_DER */) = (data->localData[0]->realVars[13] /* lossyGear.a_a variable */);
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
inertia.a = lossyGear.a_a
*/
void Motoreducteur_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[11] /* inertia.a variable */) = (data->localData[0]->realVars[13] /* lossyGear.a_a variable */);
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
lossyGear.lossPower = lossyGear.tauLoss * inertia.w
*/
void Motoreducteur_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[21] /* lossyGear.lossPower variable */) = ((data->localData[0]->realVars[33] /* lossyGear.tauLoss variable */)) * ((data->localData[0]->realVars[0] /* inertia.w STATE(1,lossyGear.a_a) */));
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
emf.phi = lossyGear.phi_a - emf.fixed.phi0
*/
void Motoreducteur_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[5] /* emf.phi DUMMY_STATE */) = (data->localData[0]->realVars[1] /* lossyGear.phi_a STATE(1,inertia.w) */) - (data->simulationInfo->realParameter[6] /* emf.fixed.phi0 PARAM */);
  TRACE_POP
}
/*
equation index: 147
type: ALGORITHM

  assert(abs(lossyGear.ratio) > 0.0, "Error in initialization of LossyGear: ratio may not be zero");
*/
void Motoreducteur_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
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
/*
equation index: 146
type: ALGORITHM

  assert(1.0 + resistor.alpha * (resistor.T - resistor.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Motoreducteur_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,35,"Temperature outside scope of model!");
  static int tmp13 = 0;
  {
    tmp11 = GreaterEq(1.0 + ((data->simulationInfo->realParameter[30] /* resistor.alpha PARAM */)) * ((data->simulationInfo->realParameter[27] /* resistor.T PARAM */) - (data->simulationInfo->realParameter[29] /* resistor.T_ref PARAM */)),1e-15);
    if(!tmp11)
    {
      {
        const char* assert_cond = "(1.0 + resistor.alpha * (resistor.T - resistor.T_ref) >= 1e-15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Basic/Resistor.mo",15,3,16,43,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp12)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Basic/Resistor.mo",15,3,16,43,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp12)));
        }
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int Motoreducteur_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Motoreducteur_functionLocalKnownVars(data, threadData);
  Motoreducteur_eqFunction_78(data, threadData);

  Motoreducteur_eqFunction_79(data, threadData);

  Motoreducteur_eqFunction_80(data, threadData);

  Motoreducteur_eqFunction_81(data, threadData);

  Motoreducteur_eqFunction_82(data, threadData);

  Motoreducteur_eqFunction_83(data, threadData);

  Motoreducteur_eqFunction_84(data, threadData);

  Motoreducteur_eqFunction_85(data, threadData);

  Motoreducteur_eqFunction_86(data, threadData);

  Motoreducteur_eqFunction_87(data, threadData);

  Motoreducteur_eqFunction_88(data, threadData);

  Motoreducteur_eqFunction_89(data, threadData);

  Motoreducteur_eqFunction_90(data, threadData);

  Motoreducteur_eqFunction_91(data, threadData);

  Motoreducteur_eqFunction_92(data, threadData);

  Motoreducteur_eqFunction_93(data, threadData);

  Motoreducteur_eqFunction_94(data, threadData);

  Motoreducteur_eqFunction_95(data, threadData);

  Motoreducteur_eqFunction_96(data, threadData);

  Motoreducteur_eqFunction_97(data, threadData);

  Motoreducteur_eqFunction_140(data, threadData);

  Motoreducteur_eqFunction_141(data, threadData);

  Motoreducteur_eqFunction_142(data, threadData);

  Motoreducteur_eqFunction_143(data, threadData);

  Motoreducteur_eqFunction_144(data, threadData);

  Motoreducteur_eqFunction_145(data, threadData);

  Motoreducteur_eqFunction_147(data, threadData);

  Motoreducteur_eqFunction_146(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int Motoreducteur_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void Motoreducteur_eqFunction_80(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_81(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_82(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_83(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_84(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_86(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_87(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_88(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_89(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_90(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_91(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_92(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_93(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_94(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_96(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_97(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_140(DATA* data, threadData_t *threadData);
extern void Motoreducteur_eqFunction_142(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    Motoreducteur_eqFunction_80(data, threadData);
    threadData->lastEquationSolved = 80;
  }
  {
    Motoreducteur_eqFunction_81(data, threadData);
    threadData->lastEquationSolved = 81;
  }
  {
    Motoreducteur_eqFunction_82(data, threadData);
    threadData->lastEquationSolved = 82;
  }
  {
    Motoreducteur_eqFunction_83(data, threadData);
    threadData->lastEquationSolved = 83;
  }
  {
    Motoreducteur_eqFunction_84(data, threadData);
    threadData->lastEquationSolved = 84;
  }
  {
    Motoreducteur_eqFunction_86(data, threadData);
    threadData->lastEquationSolved = 86;
  }
  {
    Motoreducteur_eqFunction_87(data, threadData);
    threadData->lastEquationSolved = 87;
  }
  {
    Motoreducteur_eqFunction_88(data, threadData);
    threadData->lastEquationSolved = 88;
  }
  {
    Motoreducteur_eqFunction_89(data, threadData);
    threadData->lastEquationSolved = 89;
  }
  {
    Motoreducteur_eqFunction_90(data, threadData);
    threadData->lastEquationSolved = 90;
  }
  {
    Motoreducteur_eqFunction_91(data, threadData);
    threadData->lastEquationSolved = 91;
  }
  {
    Motoreducteur_eqFunction_92(data, threadData);
    threadData->lastEquationSolved = 92;
  }
  {
    Motoreducteur_eqFunction_93(data, threadData);
    threadData->lastEquationSolved = 93;
  }
  {
    Motoreducteur_eqFunction_94(data, threadData);
    threadData->lastEquationSolved = 94;
  }
  {
    Motoreducteur_eqFunction_96(data, threadData);
    threadData->lastEquationSolved = 96;
  }
  {
    Motoreducteur_eqFunction_97(data, threadData);
    threadData->lastEquationSolved = 97;
  }
  {
    Motoreducteur_eqFunction_140(data, threadData);
    threadData->lastEquationSolved = 140;
  }
  {
    Motoreducteur_eqFunction_142(data, threadData);
    threadData->lastEquationSolved = 142;
  }
}

int Motoreducteur_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  Motoreducteur_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "Motoreducteur_12jac.h"
#include "Motoreducteur_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Motoreducteur_callback = {
   (int (*)(DATA *, threadData_t *, void *)) Motoreducteur_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) Motoreducteur_performQSSSimulation,    /* performQSSSimulation */
   Motoreducteur_updateContinuousSystem,    /* updateContinuousSystem */
   Motoreducteur_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   Motoreducteur_initialNonLinearSystem,    /* initialNonLinearSystem */
   NULL,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   Motoreducteur_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   Motoreducteur_initializeDAEmodeData,
   Motoreducteur_functionODE,
   Motoreducteur_functionAlgebraics,
   Motoreducteur_functionDAE,
   Motoreducteur_functionLocalKnownVars,
   Motoreducteur_input_function,
   Motoreducteur_input_function_init,
   Motoreducteur_input_function_updateStartValues,
   Motoreducteur_data_function,
   Motoreducteur_output_function,
   Motoreducteur_setc_function,
   Motoreducteur_setb_function,
   Motoreducteur_function_storeDelayed,
   Motoreducteur_function_storeSpatialDistribution,
   Motoreducteur_function_initSpatialDistribution,
   Motoreducteur_updateBoundVariableAttributes,
   Motoreducteur_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   NULL,
   Motoreducteur_functionRemovedInitialEquations,
   Motoreducteur_updateBoundParameters,
   Motoreducteur_checkForAsserts,
   Motoreducteur_function_ZeroCrossingsEquations,
   Motoreducteur_function_ZeroCrossings,
   Motoreducteur_function_updateRelations,
   Motoreducteur_zeroCrossingDescription,
   Motoreducteur_relationDescription,
   Motoreducteur_function_initSample,
   Motoreducteur_INDEX_JAC_A,
   Motoreducteur_INDEX_JAC_B,
   Motoreducteur_INDEX_JAC_C,
   Motoreducteur_INDEX_JAC_D,
   Motoreducteur_INDEX_JAC_F,
   Motoreducteur_INDEX_JAC_H,
   Motoreducteur_initialAnalyticJacobianA,
   Motoreducteur_initialAnalyticJacobianB,
   Motoreducteur_initialAnalyticJacobianC,
   Motoreducteur_initialAnalyticJacobianD,
   Motoreducteur_initialAnalyticJacobianF,
   Motoreducteur_initialAnalyticJacobianH,
   Motoreducteur_functionJacA_column,
   Motoreducteur_functionJacB_column,
   Motoreducteur_functionJacC_column,
   Motoreducteur_functionJacD_column,
   Motoreducteur_functionJacF_column,
   Motoreducteur_functionJacH_column,
   Motoreducteur_linear_model_frame,
   Motoreducteur_linear_model_datarecovery_frame,
   Motoreducteur_mayer,
   Motoreducteur_lagrange,
   Motoreducteur_pickUpBoundsForInputsInOptimization,
   Motoreducteur_setInputData,
   Motoreducteur_getTimeGrid,
   Motoreducteur_symbolicInlineSystem,
   Motoreducteur_function_initSynchronous,
   Motoreducteur_function_updateSynchronous,
   Motoreducteur_function_equationsSynchronous,
   Motoreducteur_inputNames,
   Motoreducteur_dataReconciliationInputNames,
   Motoreducteur_dataReconciliationUnmeasuredVariables,
   NULL,
   NULL,
   NULL,
   -1,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,77,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,78,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,86,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Motoreducteur"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Programmes/OpenModelica/share/doc/omc/testmodels"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,13,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,51,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void Motoreducteur_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Motoreducteur_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Motoreducteur";
  data->modelData->modelFilePrefix = "Motoreducteur";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Programmes/OpenModelica/share/doc/omc/testmodels";
  data->modelData->modelGUID = "{61f5839d-d787-4d73-b9e3-48aaaffbfb99}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "Motoreducteur_init.c"
    ;
  static const char contents_info[] =
    #include "Motoreducteur_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "Motoreducteur_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "Motoreducteur_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->modelDataXml.fileName = "Motoreducteur_info.json";
  data->modelData->resourcesDir = NULL;
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 2;
  data->modelData->nVariablesReal = 51;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 1;
  data->modelData->nVariablesBoolean = 5;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 34;
  data->modelData->nParametersInteger = 1;
  data->modelData->nParametersBoolean = 6;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  data->modelData->nAliasReal = 30;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 1;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 9;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 7;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 2;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 186;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 2;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 8;
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
  
    Motoreducteur_setupDataStruc(&data, threadData);
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


