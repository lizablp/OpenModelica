/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 865
type: SIMPLE_ASSIGN
$START.radiator.m_flows[1] = valve.m_flow_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,865};
  (data->modelData->realVarsData[300] /* radiator.m_flows[1] variable */).attribute .start = (data->simulationInfo->realParameter[308] /* valve.m_flow_start PARAM */);
    (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) = (data->modelData->realVarsData[300] /* radiator.m_flows[1] variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[300].info /* radiator.m_flows[1] */.name, (modelica_real) (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */));
  TRACE_POP
}

/*
equation index: 866
type: SIMPLE_ASSIGN
$START.sensor_m_flow.port_b.h_outflow = pump.h_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,866};
  (data->modelData->realVarsData[323] /* sensor_m_flow.port_b.h_outflow variable */).attribute .start = (data->simulationInfo->realParameter[161] /* pump.h_start PARAM */);
    (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) = (data->modelData->realVarsData[323] /* sensor_m_flow.port_b.h_outflow variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[323].info /* sensor_m_flow.port_b.h_outflow */.name, (modelica_real) (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */));
  TRACE_POP
}

/*
equation index: 867
type: SIMPLE_ASSIGN
$START.m_flow = pump.m_flow_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  (data->modelData->realVarsData[178] /* m_flow variable */).attribute .start = (data->simulationInfo->realParameter[168] /* pump.m_flow_start PARAM */);
    (data->localData[0]->realVars[178] /* m_flow variable */) = (data->modelData->realVarsData[178] /* m_flow variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[178].info /* m_flow */.name, (modelica_real) (data->localData[0]->realVars[178] /* m_flow variable */));
  TRACE_POP
}

/*
equation index: 868
type: SIMPLE_ASSIGN
$START.valve.dp = valve.dp_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,868};
  (data->modelData->realVarsData[361] /* valve.dp variable */).attribute .start = (data->simulationInfo->realParameter[303] /* valve.dp_start PARAM */);
    (data->localData[0]->realVars[361] /* valve.dp variable */) = (data->modelData->realVarsData[361] /* valve.dp variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[361].info /* valve.dp */.name, (modelica_real) (data->localData[0]->realVars[361] /* valve.dp variable */));
  TRACE_POP
}

/*
equation index: 869
type: SIMPLE_ASSIGN
$START.pump.N = pump.N_nominal
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,869};
  (data->modelData->realVarsData[240] /* pump.N variable */).attribute .start = (data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */);
    (data->localData[0]->realVars[240] /* pump.N variable */) = (data->modelData->realVarsData[240] /* pump.N variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[240].info /* pump.N */.name, (modelica_real) (data->localData[0]->realVars[240] /* pump.N variable */));
  TRACE_POP
}

/*
equation index: 870
type: SIMPLE_ASSIGN
$START.pump.V_flow_single = pump.m_flow_start / (pump.rho_nominal * (*Real*)(pump.nParallel))
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,870};
  (data->modelData->realVarsData[243] /* pump.V_flow_single variable */).attribute .start = DIVISION((data->simulationInfo->realParameter[168] /* pump.m_flow_start PARAM */),((data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */)) * (((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */))),"pump.rho_nominal * /*Real*/(pump.nParallel)");
    (data->localData[0]->realVars[243] /* pump.V_flow_single variable */) = (data->modelData->realVarsData[243] /* pump.V_flow_single variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[243].info /* pump.V_flow_single */.name, (modelica_real) (data->localData[0]->realVars[243] /* pump.V_flow_single variable */));
  TRACE_POP
}

/*
equation index: 871
type: SIMPLE_ASSIGN
$START.pump.heatTransfer.states[1].T = pump.T_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,871};
  (data->modelData->realVarsData[251] /* pump.heatTransfer.states[1].T variable */).attribute .start = (data->simulationInfo->realParameter[154] /* pump.T_start PARAM */);
    (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */) = (data->modelData->realVarsData[251] /* pump.heatTransfer.states[1].T variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[251].info /* pump.heatTransfer.states[1].T */.name, (modelica_real) (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */));
  TRACE_POP
}

/*
equation index: 872
type: SIMPLE_ASSIGN
$START.tank.s[2] = tank.fluidLevel_max
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,872};
  (data->modelData->realVarsData[356] /* tank.s[2] variable */).attribute .start = (data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */);
    (data->localData[0]->realVars[356] /* tank.s[2] variable */) = (data->modelData->realVarsData[356] /* tank.s[2] variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[356].info /* tank.s[2] */.name, (modelica_real) (data->localData[0]->realVars[356] /* tank.s[2] variable */));
  TRACE_POP
}

/*
equation index: 873
type: SIMPLE_ASSIGN
$START.tank.s[1] = tank.fluidLevel_max
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,873};
  (data->modelData->realVarsData[355] /* tank.s[1] variable */).attribute .start = (data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */);
    (data->localData[0]->realVars[355] /* tank.s[1] variable */) = (data->modelData->realVarsData[355] /* tank.s[1] variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[355].info /* tank.s[1] */.name, (modelica_real) (data->localData[0]->realVars[355] /* tank.s[1] variable */));
  TRACE_POP
}

/*
equation index: 874
type: SIMPLE_ASSIGN
$START.tank.heatTransfer.Ts[1] = tank.T_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,874};
  (data->modelData->realVarsData[330] /* tank.heatTransfer.Ts[1] variable */).attribute .start = (data->simulationInfo->realParameter[253] /* tank.T_start PARAM */);
    (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */) = (data->modelData->realVarsData[330] /* tank.heatTransfer.Ts[1] variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[330].info /* tank.heatTransfer.Ts[1] */.name, (modelica_real) (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */));
  TRACE_POP
}

/*
equation index: 875
type: SIMPLE_ASSIGN
$START.tank.ports[2].p = pump.p_a_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,875};
  (data->modelData->realVarsData[348] /* tank.ports[2].p variable */).attribute .start = (data->simulationInfo->realParameter[173] /* pump.p_a_start PARAM */);
    (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = (data->modelData->realVarsData[348] /* tank.ports[2].p variable */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[348].info /* tank.ports[2].p */.name, (modelica_real) (data->localData[0]->realVars[348] /* tank.ports[2].p variable */));
  TRACE_POP
}

/*
equation index: 876
type: SIMPLE_ASSIGN
$START.tank.medium.h = tank.h_start
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,876};
  (data->modelData->realVarsData[9] /* tank.medium.h STATE(1) */).attribute .start = (data->simulationInfo->realParameter[257] /* tank.h_start PARAM */);
    (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) = (data->modelData->realVarsData[9] /* tank.medium.h STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[9].info /* tank.medium.h */.name, (modelica_real) (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}

/*
equation index: 877
type: SIMPLE_ASSIGN
$START.tank.level = tank.level_start_eps
*/
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,877};
  (data->modelData->realVarsData[8] /* tank.level STATE(1) */).attribute .start = (data->simulationInfo->realParameter[263] /* tank.level_start_eps PARAM */);
    (data->localData[0]->realVars[8] /* tank.level STATE(1) */) = (data->modelData->realVarsData[8] /* tank.level STATE(1) */).attribute .start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[8].info /* tank.level */.name, (modelica_real) (data->localData[0]->realVars[8] /* tank.level STATE(1) */));
  TRACE_POP
}
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_865(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_866(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_867(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_868(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_869(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_870(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_871(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_872(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_873(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_874(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_875(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_876(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_877(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void Modelica_Fluid_Examples_HeatingSystem_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 878
type: SIMPLE_ASSIGN
tank.p_ambient = system.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,878};
  (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */) = (data->simulationInfo->realParameter[250] /* system.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 879
type: ALGORITHM

  $cse40 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(tank.p_ambient);
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,879};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */));
  (data->simulationInfo->booleanParameter[0] /* $cse40.region3boundary PARAM */) = tmp0._region3boundary;
  (data->simulationInfo->realParameter[0] /* $cse40.R_s PARAM */) = tmp0._R_s;
  (data->simulationInfo->realParameter[1] /* $cse40.T PARAM */) = tmp0._T;
  (data->simulationInfo->realParameter[4] /* $cse40.d PARAM */) = tmp0._d;
  (data->simulationInfo->realParameter[6] /* $cse40.h PARAM */) = tmp0._h;
  (data->simulationInfo->realParameter[9] /* $cse40.s PARAM */) = tmp0._s;
  (data->simulationInfo->realParameter[2] /* $cse40.cp PARAM */) = tmp0._cp;
  (data->simulationInfo->realParameter[3] /* $cse40.cv PARAM */) = tmp0._cv;
  (data->simulationInfo->realParameter[5] /* $cse40.dpT PARAM */) = tmp0._dpT;
  (data->simulationInfo->realParameter[8] /* $cse40.pt PARAM */) = tmp0._pt;
  (data->simulationInfo->realParameter[7] /* $cse40.pd PARAM */) = tmp0._pd;
  (data->simulationInfo->realParameter[11] /* $cse40.vt PARAM */) = tmp0._vt;
  (data->simulationInfo->realParameter[10] /* $cse40.vp PARAM */) = tmp0._vp;
  ;
  TRACE_POP
}

/*
equation index: 880
type: ALGORITHM

  $cse41 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(tank.p_ambient);
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,880};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp1;
  tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */));
  (data->simulationInfo->booleanParameter[1] /* $cse41.region3boundary PARAM */) = tmp1._region3boundary;
  (data->simulationInfo->realParameter[12] /* $cse41.R_s PARAM */) = tmp1._R_s;
  (data->simulationInfo->realParameter[13] /* $cse41.T PARAM */) = tmp1._T;
  (data->simulationInfo->realParameter[16] /* $cse41.d PARAM */) = tmp1._d;
  (data->simulationInfo->realParameter[18] /* $cse41.h PARAM */) = tmp1._h;
  (data->simulationInfo->realParameter[21] /* $cse41.s PARAM */) = tmp1._s;
  (data->simulationInfo->realParameter[14] /* $cse41.cp PARAM */) = tmp1._cp;
  (data->simulationInfo->realParameter[15] /* $cse41.cv PARAM */) = tmp1._cv;
  (data->simulationInfo->realParameter[17] /* $cse41.dpT PARAM */) = tmp1._dpT;
  (data->simulationInfo->realParameter[20] /* $cse41.pt PARAM */) = tmp1._pt;
  (data->simulationInfo->realParameter[19] /* $cse41.pd PARAM */) = tmp1._pd;
  (data->simulationInfo->realParameter[23] /* $cse41.vt PARAM */) = tmp1._vt;
  (data->simulationInfo->realParameter[22] /* $cse41.vp PARAM */) = tmp1._vp;
  ;
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_300(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_299(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_298(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_297(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_296(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_295(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_294(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_293(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_292(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_291(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_290(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_289(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_288(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_287(DATA *data, threadData_t *threadData);


/*
equation index: 895
type: SIMPLE_ASSIGN
pump.m_flow_set_internal = pump.m_flow_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_895(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,895};
  (data->simulationInfo->realParameter[167] /* pump.m_flow_set_internal PARAM */) = (data->simulationInfo->realParameter[166] /* pump.m_flow_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 896
type: SIMPLE_ASSIGN
heater.crossArea = 0.7853981633974483 * heater.diameter ^ 2.0
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[41] /* heater.diameter PARAM */);
  (data->simulationInfo->realParameter[35] /* heater.crossArea PARAM */) = (0.7853981633974483) * ((tmp2 * tmp2));
  TRACE_POP
}

/*
equation index: 897
type: SIMPLE_ASSIGN
heater.perimeter = 3.141592653589793 * heater.diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_897(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,897};
  (data->simulationInfo->realParameter[84] /* heater.perimeter PARAM */) = (3.141592653589793) * ((data->simulationInfo->realParameter[41] /* heater.diameter PARAM */));
  TRACE_POP
}

/*
equation index: 898
type: SIMPLE_ASSIGN
heater.dimensions[1] = 4.0 * heater.crossArea / heater.perimeter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_898(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,898};
  (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */) = (4.0) * (DIVISION_SIM((data->simulationInfo->realParameter[35] /* heater.crossArea PARAM */),(data->simulationInfo->realParameter[84] /* heater.perimeter PARAM */),"heater.perimeter",equationIndexes));
  TRACE_POP
}

/*
equation index: 899
type: SIMPLE_ASSIGN
heater.heatTransfer.dimensions[1] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_899(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,899};
  (data->simulationInfo->realParameter[73] /* heater.heatTransfer.dimensions[1] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 900
type: SIMPLE_ASSIGN
heater.roughnesses[1] = heater.roughness
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_900(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,900};
  (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[87] /* heater.roughness PARAM */);
  TRACE_POP
}

/*
equation index: 901
type: SIMPLE_ASSIGN
heater.heatTransfer.roughnesses[1] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_901(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,901};
  (data->simulationInfo->realParameter[76] /* heater.heatTransfer.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 902
type: SIMPLE_ASSIGN
radiator.crossArea = 0.7853981633974483 * radiator.diameter ^ 2.0
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_902(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,902};
  modelica_real tmp3;
  tmp3 = (data->simulationInfo->realParameter[189] /* radiator.diameter PARAM */);
  (data->simulationInfo->realParameter[183] /* radiator.crossArea PARAM */) = (0.7853981633974483) * ((tmp3 * tmp3));
  TRACE_POP
}

/*
equation index: 903
type: SIMPLE_ASSIGN
radiator.perimeter = 3.141592653589793 * radiator.diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_903(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,903};
  (data->simulationInfo->realParameter[231] /* radiator.perimeter PARAM */) = (3.141592653589793) * ((data->simulationInfo->realParameter[189] /* radiator.diameter PARAM */));
  TRACE_POP
}

/*
equation index: 904
type: SIMPLE_ASSIGN
radiator.dimensions[1] = 4.0 * radiator.crossArea / radiator.perimeter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_904(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,904};
  (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */) = (4.0) * (DIVISION_SIM((data->simulationInfo->realParameter[183] /* radiator.crossArea PARAM */),(data->simulationInfo->realParameter[231] /* radiator.perimeter PARAM */),"radiator.perimeter",equationIndexes));
  TRACE_POP
}

/*
equation index: 905
type: SIMPLE_ASSIGN
radiator.heatTransfer.dimensions[1] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_905(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,905};
  (data->simulationInfo->realParameter[220] /* radiator.heatTransfer.dimensions[1] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 906
type: SIMPLE_ASSIGN
radiator.roughnesses[1] = radiator.roughness
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_906(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,906};
  (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[233] /* radiator.roughness PARAM */);
  TRACE_POP
}

/*
equation index: 907
type: SIMPLE_ASSIGN
radiator.heatTransfer.roughnesses[1] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_907(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,907};
  (data->simulationInfo->realParameter[223] /* radiator.heatTransfer.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 908
type: SIMPLE_ASSIGN
pipe.crossArea = 0.7853981633974483 * pipe.diameter ^ 2.0
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_908(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,908};
  modelica_real tmp4;
  tmp4 = (data->simulationInfo->realParameter[104] /* pipe.diameter PARAM */);
  (data->simulationInfo->realParameter[97] /* pipe.crossArea PARAM */) = (0.7853981633974483) * ((tmp4 * tmp4));
  TRACE_POP
}

/*
equation index: 909
type: SIMPLE_ASSIGN
pipe.perimeter = 3.141592653589793 * pipe.diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_909(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,909};
  (data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */) = (3.141592653589793) * ((data->simulationInfo->realParameter[104] /* pipe.diameter PARAM */));
  TRACE_POP
}

/*
equation index: 910
type: SIMPLE_ASSIGN
pipe.dimensions[1] = 4.0 * pipe.crossArea / pipe.perimeter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  (data->simulationInfo->realParameter[105] /* pipe.dimensions[1] PARAM */) = (4.0) * (DIVISION_SIM((data->simulationInfo->realParameter[97] /* pipe.crossArea PARAM */),(data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */),"pipe.perimeter",equationIndexes));
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
pipe.heatTransfer.dimensions[1] = pipe.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  (data->simulationInfo->realParameter[131] /* pipe.heatTransfer.dimensions[1] PARAM */) = (data->simulationInfo->realParameter[105] /* pipe.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 912
type: SIMPLE_ASSIGN
pipe.dimensions[2] = 4.0 * pipe.crossArea / pipe.perimeter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  (data->simulationInfo->realParameter[106] /* pipe.dimensions[2] PARAM */) = (4.0) * (DIVISION_SIM((data->simulationInfo->realParameter[97] /* pipe.crossArea PARAM */),(data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */),"pipe.perimeter",equationIndexes));
  TRACE_POP
}

/*
equation index: 913
type: SIMPLE_ASSIGN
pipe.heatTransfer.dimensions[2] = pipe.dimensions[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  (data->simulationInfo->realParameter[132] /* pipe.heatTransfer.dimensions[2] PARAM */) = (data->simulationInfo->realParameter[106] /* pipe.dimensions[2] PARAM */);
  TRACE_POP
}

/*
equation index: 914
type: SIMPLE_ASSIGN
pipe.roughnesses[1] = pipe.roughness
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_914(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,914};
  (data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[148] /* pipe.roughness PARAM */);
  TRACE_POP
}

/*
equation index: 915
type: SIMPLE_ASSIGN
pipe.heatTransfer.roughnesses[1] = pipe.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  (data->simulationInfo->realParameter[135] /* pipe.heatTransfer.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 916
type: SIMPLE_ASSIGN
pipe.roughnesses[2] = pipe.roughness
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */) = (data->simulationInfo->realParameter[148] /* pipe.roughness PARAM */);
  TRACE_POP
}

/*
equation index: 917
type: SIMPLE_ASSIGN
pipe.heatTransfer.roughnesses[2] = pipe.roughnesses[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  (data->simulationInfo->realParameter[136] /* pipe.heatTransfer.roughnesses[2] PARAM */) = (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */);
  TRACE_POP
}

/*
equation index: 918
type: SIMPLE_ASSIGN
radiator.flowModel.diameters[2] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  (data->simulationInfo->realParameter[200] /* radiator.flowModel.diameters[2] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 919
type: SIMPLE_ASSIGN
radiator.flowModel.diameters[1] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  (data->simulationInfo->realParameter[199] /* radiator.flowModel.diameters[1] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 920
type: SIMPLE_ASSIGN
heater.flowModel.diameters[2] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  (data->simulationInfo->realParameter[52] /* heater.flowModel.diameters[2] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
heater.flowModel.diameters[1] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  (data->simulationInfo->realParameter[51] /* heater.flowModel.diameters[1] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 922
type: SIMPLE_ASSIGN
tank.portsData_diameter[1] = tank.portsData[1].diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  (data->simulationInfo->realParameter[281] /* tank.portsData_diameter[1] PARAM */) = (data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */);
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
tank.portsData_diameter_internal[1] = tank.portsData[1].diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  (data->simulationInfo->realParameter[283] /* tank.portsData_diameter_internal[1] PARAM */) = (data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */);
  TRACE_POP
}

/*
equation index: 924
type: SIMPLE_ASSIGN
tank.portsData_diameter[2] = tank.portsData[2].diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  (data->simulationInfo->realParameter[282] /* tank.portsData_diameter[2] PARAM */) = (data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */);
  TRACE_POP
}

/*
equation index: 925
type: SIMPLE_ASSIGN
tank.portsData_diameter_internal[2] = tank.portsData[2].diameter
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  (data->simulationInfo->realParameter[284] /* tank.portsData_diameter_internal[2] PARAM */) = (data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */);
  TRACE_POP
}

/*
equation index: 926
type: SIMPLE_ASSIGN
tank.portsData_height[1] = tank.portsData[1].height
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  (data->simulationInfo->realParameter[285] /* tank.portsData_height[1] PARAM */) = (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */);
  TRACE_POP
}

/*
equation index: 927
type: SIMPLE_ASSIGN
tank.portsData_height_internal[1] = tank.portsData[1].height
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  (data->simulationInfo->realParameter[287] /* tank.portsData_height_internal[1] PARAM */) = (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */);
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
tank.portsData_height[2] = tank.portsData[2].height
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  (data->simulationInfo->realParameter[286] /* tank.portsData_height[2] PARAM */) = (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */);
  TRACE_POP
}

/*
equation index: 929
type: SIMPLE_ASSIGN
tank.portsData_height_internal[2] = tank.portsData[2].height
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  (data->simulationInfo->realParameter[288] /* tank.portsData_height_internal[2] PARAM */) = (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */);
  TRACE_POP
}

/*
equation index: 930
type: SIMPLE_ASSIGN
tank.portsData_zeta_in[1] = tank.portsData[1].zeta_in
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  (data->simulationInfo->realParameter[289] /* tank.portsData_zeta_in[1] PARAM */) = (data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */);
  TRACE_POP
}

/*
equation index: 931
type: SIMPLE_ASSIGN
tank.portsData_zeta_in_internal[1] = tank.portsData[1].zeta_in
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  (data->simulationInfo->realParameter[291] /* tank.portsData_zeta_in_internal[1] PARAM */) = (data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */);
  TRACE_POP
}

/*
equation index: 932
type: SIMPLE_ASSIGN
tank.portsData_zeta_in[2] = tank.portsData[2].zeta_in
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  (data->simulationInfo->realParameter[290] /* tank.portsData_zeta_in[2] PARAM */) = (data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */);
  TRACE_POP
}

/*
equation index: 933
type: SIMPLE_ASSIGN
tank.portsData_zeta_in_internal[2] = tank.portsData[2].zeta_in
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  (data->simulationInfo->realParameter[292] /* tank.portsData_zeta_in_internal[2] PARAM */) = (data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */);
  TRACE_POP
}

/*
equation index: 934
type: SIMPLE_ASSIGN
tank.portsData_zeta_out[1] = tank.portsData[1].zeta_out
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  (data->simulationInfo->realParameter[293] /* tank.portsData_zeta_out[1] PARAM */) = (data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */);
  TRACE_POP
}

/*
equation index: 935
type: SIMPLE_ASSIGN
tank.portsData_zeta_out_internal[1] = tank.portsData[1].zeta_out
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  (data->simulationInfo->realParameter[295] /* tank.portsData_zeta_out_internal[1] PARAM */) = (data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */);
  TRACE_POP
}

/*
equation index: 936
type: SIMPLE_ASSIGN
tank.portsData_zeta_out[2] = tank.portsData[2].zeta_out
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  (data->simulationInfo->realParameter[294] /* tank.portsData_zeta_out[2] PARAM */) = (data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */);
  TRACE_POP
}

/*
equation index: 937
type: SIMPLE_ASSIGN
tank.portsData_zeta_out_internal[2] = tank.portsData[2].zeta_out
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  (data->simulationInfo->realParameter[296] /* tank.portsData_zeta_out_internal[2] PARAM */) = (data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */);
  TRACE_POP
}

/*
equation index: 938
type: SIMPLE_ASSIGN
tank.m_flow_small = system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */) = (data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 939
type: SIMPLE_ASSIGN
tank.m_flow_turbulent[1] = tank.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  (data->simulationInfo->realParameter[266] /* tank.m_flow_turbulent[1] PARAM */) = (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 940
type: SIMPLE_ASSIGN
tank.m_flow_turbulent[2] = tank.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  (data->simulationInfo->realParameter[267] /* tank.m_flow_turbulent[2] PARAM */) = (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 941
type: SIMPLE_ASSIGN
pump.p_set_internal = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  (data->simulationInfo->realParameter[176] /* pump.p_set_internal PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 942
type: SIMPLE_ASSIGN
T_ambient.T = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  (data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 943
type: SIMPLE_ASSIGN
wall.port_a.T = T_ambient.T
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  (data->simulationInfo->realParameter[314] /* wall.port_a.T PARAM */) = (data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */);
  TRACE_POP
}

/*
equation index: 944
type: SIMPLE_ASSIGN
T_ambient.port.T = T_ambient.T
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  (data->simulationInfo->realParameter[25] /* T_ambient.port.T PARAM */) = (data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */);
  TRACE_POP
}

/*
equation index: 945
type: SIMPLE_ASSIGN
heater.crossAreas[1] = heater.crossArea
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */) = (data->simulationInfo->realParameter[35] /* heater.crossArea PARAM */);
  TRACE_POP
}

/*
equation index: 946
type: SIMPLE_ASSIGN
heater.flowModel.crossAreas[1] = heater.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  (data->simulationInfo->realParameter[48] /* heater.flowModel.crossAreas[1] PARAM */) = (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 947
type: SIMPLE_ASSIGN
heater.crossAreasFM[1] = heater.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  (data->simulationInfo->realParameter[37] /* heater.crossAreasFM[1] PARAM */) = (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 948
type: SIMPLE_ASSIGN
heater.flowModel.crossAreas[2] = heater.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  (data->simulationInfo->realParameter[49] /* heater.flowModel.crossAreas[2] PARAM */) = (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 949
type: SIMPLE_ASSIGN
heater.crossAreasFM[2] = heater.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  (data->simulationInfo->realParameter[38] /* heater.crossAreasFM[2] PARAM */) = (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 950
type: SIMPLE_ASSIGN
heater.flowModel.crossAreas[3] = heater.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  (data->simulationInfo->realParameter[50] /* heater.flowModel.crossAreas[3] PARAM */) = (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 951
type: SIMPLE_ASSIGN
heater.crossAreasFM[3] = heater.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  (data->simulationInfo->realParameter[39] /* heater.crossAreasFM[3] PARAM */) = (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 952
type: SIMPLE_ASSIGN
heater.flowModel.dimensions[1] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  (data->simulationInfo->realParameter[53] /* heater.flowModel.dimensions[1] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 953
type: SIMPLE_ASSIGN
heater.dimensionsFM[1] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  (data->simulationInfo->realParameter[43] /* heater.dimensionsFM[1] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 954
type: SIMPLE_ASSIGN
heater.flowModel.dimensions[2] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  (data->simulationInfo->realParameter[54] /* heater.flowModel.dimensions[2] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 955
type: SIMPLE_ASSIGN
heater.dimensionsFM[2] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  (data->simulationInfo->realParameter[44] /* heater.dimensionsFM[2] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 956
type: SIMPLE_ASSIGN
heater.flowModel.dimensions[3] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  (data->simulationInfo->realParameter[55] /* heater.flowModel.dimensions[3] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 957
type: SIMPLE_ASSIGN
heater.dimensionsFM[3] = heater.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  (data->simulationInfo->realParameter[45] /* heater.dimensionsFM[3] PARAM */) = (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 958
type: SIMPLE_ASSIGN
heater.flowModel.roughnesses[1] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  (data->simulationInfo->realParameter[67] /* heater.flowModel.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 959
type: SIMPLE_ASSIGN
heater.roughnessesFM[1] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  (data->simulationInfo->realParameter[89] /* heater.roughnessesFM[1] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 960
type: SIMPLE_ASSIGN
heater.flowModel.roughnesses[2] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  (data->simulationInfo->realParameter[68] /* heater.flowModel.roughnesses[2] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 961
type: SIMPLE_ASSIGN
heater.roughnessesFM[2] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  (data->simulationInfo->realParameter[90] /* heater.roughnessesFM[2] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 962
type: SIMPLE_ASSIGN
heater.flowModel.roughnesses[3] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  (data->simulationInfo->realParameter[69] /* heater.flowModel.roughnesses[3] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 963
type: SIMPLE_ASSIGN
heater.roughnessesFM[3] = heater.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  (data->simulationInfo->realParameter[91] /* heater.roughnessesFM[3] PARAM */) = (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 964
type: SIMPLE_ASSIGN
radiator.crossAreas[1] = radiator.crossArea
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */) = (data->simulationInfo->realParameter[183] /* radiator.crossArea PARAM */);
  TRACE_POP
}

/*
equation index: 965
type: SIMPLE_ASSIGN
radiator.flowModel.crossAreas[1] = radiator.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  (data->simulationInfo->realParameter[196] /* radiator.flowModel.crossAreas[1] PARAM */) = (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 966
type: SIMPLE_ASSIGN
radiator.crossAreasFM[1] = radiator.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  (data->simulationInfo->realParameter[185] /* radiator.crossAreasFM[1] PARAM */) = (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 967
type: SIMPLE_ASSIGN
radiator.flowModel.crossAreas[2] = radiator.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  (data->simulationInfo->realParameter[197] /* radiator.flowModel.crossAreas[2] PARAM */) = (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 968
type: SIMPLE_ASSIGN
radiator.crossAreasFM[2] = radiator.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  (data->simulationInfo->realParameter[186] /* radiator.crossAreasFM[2] PARAM */) = (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 969
type: SIMPLE_ASSIGN
radiator.flowModel.crossAreas[3] = radiator.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  (data->simulationInfo->realParameter[198] /* radiator.flowModel.crossAreas[3] PARAM */) = (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 970
type: SIMPLE_ASSIGN
radiator.crossAreasFM[3] = radiator.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  (data->simulationInfo->realParameter[187] /* radiator.crossAreasFM[3] PARAM */) = (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 971
type: SIMPLE_ASSIGN
radiator.flowModel.dimensions[1] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  (data->simulationInfo->realParameter[201] /* radiator.flowModel.dimensions[1] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
radiator.dimensionsFM[1] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  (data->simulationInfo->realParameter[191] /* radiator.dimensionsFM[1] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
radiator.flowModel.dimensions[2] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  (data->simulationInfo->realParameter[202] /* radiator.flowModel.dimensions[2] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
radiator.dimensionsFM[2] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  (data->simulationInfo->realParameter[192] /* radiator.dimensionsFM[2] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
radiator.flowModel.dimensions[3] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  (data->simulationInfo->realParameter[203] /* radiator.flowModel.dimensions[3] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
radiator.dimensionsFM[3] = radiator.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  (data->simulationInfo->realParameter[193] /* radiator.dimensionsFM[3] PARAM */) = (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 977
type: SIMPLE_ASSIGN
radiator.flowModel.roughnesses[1] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  (data->simulationInfo->realParameter[215] /* radiator.flowModel.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
radiator.roughnessesFM[1] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  (data->simulationInfo->realParameter[235] /* radiator.roughnessesFM[1] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
radiator.flowModel.roughnesses[2] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  (data->simulationInfo->realParameter[216] /* radiator.flowModel.roughnesses[2] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
radiator.roughnessesFM[2] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  (data->simulationInfo->realParameter[236] /* radiator.roughnessesFM[2] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
radiator.flowModel.roughnesses[3] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  (data->simulationInfo->realParameter[217] /* radiator.flowModel.roughnesses[3] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
radiator.roughnessesFM[3] = radiator.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  (data->simulationInfo->realParameter[237] /* radiator.roughnessesFM[3] PARAM */) = (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
pipe.crossAreas[1] = pipe.crossArea
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  (data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) = (data->simulationInfo->realParameter[97] /* pipe.crossArea PARAM */);
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
pipe.flowModel.crossAreas[1] = pipe.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  (data->simulationInfo->realParameter[112] /* pipe.flowModel.crossAreas[1] PARAM */) = (data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
pipe.crossAreasFM[1] = pipe.crossAreas[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  (data->simulationInfo->realParameter[100] /* pipe.crossAreasFM[1] PARAM */) = (data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */);
  TRACE_POP
}

/*
equation index: 986
type: SIMPLE_ASSIGN
pipe.crossAreas[2] = pipe.crossArea
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */) = (data->simulationInfo->realParameter[97] /* pipe.crossArea PARAM */);
  TRACE_POP
}

/*
equation index: 987
type: SIMPLE_ASSIGN
pipe.flowModel.crossAreas[2] = pipe.crossAreas[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  (data->simulationInfo->realParameter[113] /* pipe.flowModel.crossAreas[2] PARAM */) = (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */);
  TRACE_POP
}

/*
equation index: 988
type: SIMPLE_ASSIGN
pipe.crossAreasFM[2] = pipe.crossAreas[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  (data->simulationInfo->realParameter[101] /* pipe.crossAreasFM[2] PARAM */) = (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */);
  TRACE_POP
}

/*
equation index: 989
type: SIMPLE_ASSIGN
pipe.flowModel.dimensions[1] = pipe.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  (data->simulationInfo->realParameter[114] /* pipe.flowModel.dimensions[1] PARAM */) = (data->simulationInfo->realParameter[105] /* pipe.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 990
type: SIMPLE_ASSIGN
pipe.dimensionsFM[1] = pipe.dimensions[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  (data->simulationInfo->realParameter[107] /* pipe.dimensionsFM[1] PARAM */) = (data->simulationInfo->realParameter[105] /* pipe.dimensions[1] PARAM */);
  TRACE_POP
}

/*
equation index: 991
type: SIMPLE_ASSIGN
pipe.flowModel.dimensions[2] = pipe.dimensions[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  (data->simulationInfo->realParameter[115] /* pipe.flowModel.dimensions[2] PARAM */) = (data->simulationInfo->realParameter[106] /* pipe.dimensions[2] PARAM */);
  TRACE_POP
}

/*
equation index: 992
type: SIMPLE_ASSIGN
pipe.dimensionsFM[2] = pipe.dimensions[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  (data->simulationInfo->realParameter[108] /* pipe.dimensionsFM[2] PARAM */) = (data->simulationInfo->realParameter[106] /* pipe.dimensions[2] PARAM */);
  TRACE_POP
}

/*
equation index: 993
type: SIMPLE_ASSIGN
pipe.flowModel.roughnesses[1] = pipe.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  (data->simulationInfo->realParameter[127] /* pipe.flowModel.roughnesses[1] PARAM */) = (data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 994
type: SIMPLE_ASSIGN
pipe.roughnessesFM[1] = pipe.roughnesses[1]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  (data->simulationInfo->realParameter[151] /* pipe.roughnessesFM[1] PARAM */) = (data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */);
  TRACE_POP
}

/*
equation index: 995
type: SIMPLE_ASSIGN
pipe.flowModel.roughnesses[2] = pipe.roughnesses[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  (data->simulationInfo->realParameter[128] /* pipe.flowModel.roughnesses[2] PARAM */) = (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */);
  TRACE_POP
}

/*
equation index: 996
type: SIMPLE_ASSIGN
pipe.roughnessesFM[2] = pipe.roughnesses[2]
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  (data->simulationInfo->realParameter[152] /* pipe.roughnessesFM[2] PARAM */) = (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */);
  TRACE_POP
}

/*
equation index: 997
type: SIMPLE_ASSIGN
tank.medium.sat.psat = tank.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  (data->simulationInfo->realParameter[269] /* tank.medium.sat.psat PARAM */) = (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 998
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].p = tank.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  (data->simulationInfo->realParameter[260] /* tank.heatTransfer.states[1].p PARAM */) = (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 999
type: SIMPLE_ASSIGN
tank.medium.state.p = tank.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  (data->simulationInfo->realParameter[270] /* tank.medium.state.p PARAM */) = (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
tank.medium.p = tank.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  (data->simulationInfo->realParameter[268] /* tank.medium.p PARAM */) = (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
valve.dp_small = system.dp_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  (data->simulationInfo->realParameter[302] /* valve.dp_small PARAM */) = (data->simulationInfo->realParameter[244] /* system.dp_small PARAM */);
  TRACE_POP
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
valve.dp_turbulent = valve.dp_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  (data->simulationInfo->realParameter[304] /* valve.dp_turbulent PARAM */) = (data->simulationInfo->realParameter[302] /* valve.dp_small PARAM */);
  TRACE_POP
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
pipe.heatTransfer.nParallel = pipe.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  (data->simulationInfo->realParameter[134] /* pipe.heatTransfer.nParallel PARAM */) = (data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */);
  TRACE_POP
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
pipe.heatTransfer.T_ambient = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  (data->simulationInfo->realParameter[130] /* pipe.heatTransfer.T_ambient PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
pipe.flowModel.m_flow_small = system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  (data->simulationInfo->realParameter[120] /* pipe.flowModel.m_flow_small PARAM */) = (data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
pipe.flowModel.m_flow_nominal = 100.0 * pipe.flowModel.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  (data->simulationInfo->realParameter[119] /* pipe.flowModel.m_flow_nominal PARAM */) = (100.0) * ((data->simulationInfo->realParameter[120] /* pipe.flowModel.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 1029
type: SIMPLE_ASSIGN
pipe.flowModel.g = system.g
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  (data->simulationInfo->realParameter[118] /* pipe.flowModel.g PARAM */) = (data->simulationInfo->realParameter[246] /* system.g PARAM */);
  TRACE_POP
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
pipe.flowModel.nParallel = pipe.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  (data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */) = (data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */);
  TRACE_POP
}

/*
equation index: 1066
type: SIMPLE_ASSIGN
pipe.V = 10.0 * pipe.crossArea * pipe.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  (data->simulationInfo->realParameter[95] /* pipe.V PARAM */) = (10.0) * (((data->simulationInfo->realParameter[97] /* pipe.crossArea PARAM */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)));
  TRACE_POP
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
radiator.heatTransfer.nParallel = radiator.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  (data->simulationInfo->realParameter[222] /* radiator.heatTransfer.nParallel PARAM */) = (data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */);
  TRACE_POP
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
radiator.heatTransfer.T_ambient = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  (data->simulationInfo->realParameter[219] /* radiator.heatTransfer.T_ambient PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
radiator.flowModel.m_flow_small = system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  (data->simulationInfo->realParameter[208] /* radiator.flowModel.m_flow_small PARAM */) = (data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
radiator.flowModel.m_flow_nominal = 100.0 * radiator.flowModel.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  (data->simulationInfo->realParameter[207] /* radiator.flowModel.m_flow_nominal PARAM */) = (100.0) * ((data->simulationInfo->realParameter[208] /* radiator.flowModel.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 1098
type: SIMPLE_ASSIGN
radiator.flowModel.g = system.g
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  (data->simulationInfo->realParameter[206] /* radiator.flowModel.g PARAM */) = (data->simulationInfo->realParameter[246] /* system.g PARAM */);
  TRACE_POP
}

/*
equation index: 1099
type: SIMPLE_ASSIGN
radiator.flowModel.nParallel = radiator.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  (data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */) = (data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */);
  TRACE_POP
}

/*
equation index: 1130
type: SIMPLE_ASSIGN
radiator.V = 10.0 * radiator.crossArea * radiator.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  (data->simulationInfo->realParameter[181] /* radiator.V PARAM */) = (10.0) * (((data->simulationInfo->realParameter[183] /* radiator.crossArea PARAM */)) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)));
  TRACE_POP
}

/*
equation index: 1138
type: SIMPLE_ASSIGN
heater.heatTransfer.nParallel = heater.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  (data->simulationInfo->realParameter[75] /* heater.heatTransfer.nParallel PARAM */) = (data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */);
  TRACE_POP
}

/*
equation index: 1139
type: SIMPLE_ASSIGN
heater.heatTransfer.T_ambient = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  (data->simulationInfo->realParameter[72] /* heater.heatTransfer.T_ambient PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1146
type: SIMPLE_ASSIGN
heater.flowModel.m_flow_small = system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  (data->simulationInfo->realParameter[60] /* heater.flowModel.m_flow_small PARAM */) = (data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 1147
type: SIMPLE_ASSIGN
heater.flowModel.m_flow_nominal = 100.0 * heater.flowModel.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  (data->simulationInfo->realParameter[59] /* heater.flowModel.m_flow_nominal PARAM */) = (100.0) * ((data->simulationInfo->realParameter[60] /* heater.flowModel.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 1162
type: SIMPLE_ASSIGN
heater.flowModel.g = system.g
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  (data->simulationInfo->realParameter[58] /* heater.flowModel.g PARAM */) = (data->simulationInfo->realParameter[246] /* system.g PARAM */);
  TRACE_POP
}

/*
equation index: 1163
type: SIMPLE_ASSIGN
heater.flowModel.nParallel = heater.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  (data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */) = (data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */);
  TRACE_POP
}

/*
equation index: 1194
type: SIMPLE_ASSIGN
heater.V = 2.0 * heater.crossArea * heater.nParallel
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  (data->simulationInfo->realParameter[33] /* heater.V PARAM */) = (2.0) * (((data->simulationInfo->realParameter[35] /* heater.crossArea PARAM */)) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)));
  TRACE_POP
}

/*
equation index: 1201
type: SIMPLE_ASSIGN
system.m_flow_nominal = 100.0 * system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  (data->simulationInfo->realParameter[247] /* system.m_flow_nominal PARAM */) = (100.0) * ((data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 1203
type: SIMPLE_ASSIGN
system.T_start = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  (data->simulationInfo->realParameter[243] /* system.T_start PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1204
type: SIMPLE_ASSIGN
system.p_start = system.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  (data->simulationInfo->realParameter[251] /* system.p_start PARAM */) = (data->simulationInfo->realParameter[250] /* system.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1212
type: SIMPLE_ASSIGN
sensor_m_flow.m_flow_small = system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  (data->simulationInfo->realParameter[239] /* sensor_m_flow.m_flow_small PARAM */) = (data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 1213
type: SIMPLE_ASSIGN
sensor_m_flow.m_flow_nominal = system.m_flow_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  (data->simulationInfo->realParameter[238] /* sensor_m_flow.m_flow_nominal PARAM */) = (data->simulationInfo->realParameter[247] /* system.m_flow_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1219
type: SIMPLE_ASSIGN
valve.minLimiter.uMin = valve.leakageOpening
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  (data->simulationInfo->realParameter[309] /* valve.minLimiter.uMin PARAM */) = (data->simulationInfo->realParameter[305] /* valve.leakageOpening PARAM */);
  TRACE_POP
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
valve.m_flow_small = system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */) = (data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */);
  TRACE_POP
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
valve.m_flow_start = valve.m_flow_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  (data->simulationInfo->realParameter[308] /* valve.m_flow_start PARAM */) = (data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
pump.g = system.g
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  (data->simulationInfo->realParameter[160] /* pump.g PARAM */) = (data->simulationInfo->realParameter[246] /* system.g PARAM */);
  TRACE_POP
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
pump.head_op = (pump.p_b_nominal - pump.p_a_nominal) / (pump.g * pump.rho_nominal)
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  (data->simulationInfo->realParameter[162] /* pump.head_op PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */) - (data->simulationInfo->realParameter[172] /* pump.p_a_nominal PARAM */),((data->simulationInfo->realParameter[160] /* pump.g PARAM */)) * ((data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */)),"pump.g * pump.rho_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
pump.V_flow_op = pump.m_flow_nominal / pump.rho_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  (data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[166] /* pump.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */),"pump.rho_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
pump.heatTransfer.T_ambient = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  (data->simulationInfo->realParameter[163] /* pump.heatTransfer.T_ambient PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
pump.p_start = pump.p_b_start
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  (data->simulationInfo->realParameter[177] /* pump.p_start PARAM */) = (data->simulationInfo->realParameter[175] /* pump.p_b_start PARAM */);
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
pump.h_start = Modelica.Fluid.Examples.HeatingSystem.pump.Medium.specificEnthalpy_pTX(pump.p_start, pump.T_start, pump.X_start)
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  real_array tmp5;
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[158] /* pump.X_start[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->simulationInfo->realParameter[161] /* pump.h_start PARAM */) = omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[177] /* pump.p_start PARAM */), (data->simulationInfo->realParameter[154] /* pump.T_start PARAM */), tmp5);
  TRACE_POP
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
pump.V_flow_single_init = pump.m_flow_start / ((*Real*)(pump.nParallel) * pump.rho_nominal)
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[168] /* pump.m_flow_start PARAM */),(((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */))) * ((data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */)),"/*Real*/(pump.nParallel) * pump.rho_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
pump.delta_head_init = Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single_init * 1.1, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0}) - Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single_init, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0})
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  real_array tmp6;
  real_array tmp7;
  real_array tmp8;
  real_array tmp9;
  array_alloc_scalar_real_array(&tmp6, 3, (modelica_real)0.0, (modelica_real)(data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */), (modelica_real)(1.5) * ((data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */)));
  array_alloc_scalar_real_array(&tmp7, 3, (modelica_real)(2.0) * ((data->simulationInfo->realParameter[162] /* pump.head_op PARAM */)), (modelica_real)(data->simulationInfo->realParameter[162] /* pump.head_op PARAM */), (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp8, 3, (modelica_real)0.0, (modelica_real)(data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */), (modelica_real)(1.5) * ((data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */)));
  array_alloc_scalar_real_array(&tmp9, 3, (modelica_real)(2.0) * ((data->simulationInfo->realParameter[162] /* pump.head_op PARAM */)), (modelica_real)(data->simulationInfo->realParameter[162] /* pump.head_op PARAM */), (modelica_real)0.0);
  (data->simulationInfo->realParameter[159] /* pump.delta_head_init PARAM */) = omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, ((data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)) * (1.1), tmp6, tmp7) - omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */), tmp8, tmp9);
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
tank.level_start_eps = max(tank.level_start, 1e-15)
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  (data->simulationInfo->realParameter[263] /* tank.level_start_eps PARAM */) = fmax((data->simulationInfo->realParameter[262] /* tank.level_start PARAM */),1e-15);
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
tank.vesselArea = tank.crossArea
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  (data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */) = (data->simulationInfo->realParameter[255] /* tank.crossArea PARAM */);
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
tank.fluidLevel_max = tank.height
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  (data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */) = (data->simulationInfo->realParameter[261] /* tank.height PARAM */);
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
tank.heatTransfer.T_ambient = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  (data->simulationInfo->realParameter[258] /* tank.heatTransfer.T_ambient PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1271
type: SIMPLE_ASSIGN
tank.m_flow_nominal = 100.0 * system.m_flow_small
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  (data->simulationInfo->realParameter[264] /* tank.m_flow_nominal PARAM */) = (100.0) * ((data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
tank.p_start = tank.p_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  (data->simulationInfo->realParameter[272] /* tank.p_start PARAM */) = (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
tank.h_start = Modelica.Fluid.Examples.HeatingSystem.tank.Medium.specificEnthalpy_pTX(tank.p_start, tank.T_start, tank.X_start, 0)
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  real_array tmp10;
  real_array_create(&tmp10, ((modelica_real*)&((&data->simulationInfo->realParameter[254] /* tank.X_start[1] PARAM */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->simulationInfo->realParameter[257] /* tank.h_start PARAM */) = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX(threadData, (data->simulationInfo->realParameter[272] /* tank.p_start PARAM */), (data->simulationInfo->realParameter[253] /* tank.T_start PARAM */), tmp10, ((modelica_integer) 0));
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
tank.T_ambient = system.T_ambient
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  (data->simulationInfo->realParameter[252] /* tank.T_ambient PARAM */) = (data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_286(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_285(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_284(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_283(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_282(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_281(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_280(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_41(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_40(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_279(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_278(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_277(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_276(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_275(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_274(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_273(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_272(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_271(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_270(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_39(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_269(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_268(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_267(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_266(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_265(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_264(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_263(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_262(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_38(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_261(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_260(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_259(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_258(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_37(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_36(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_257(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_34(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_256(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_35(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_33(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_32(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_31(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_30(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_29(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_28(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_27(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_26(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_25(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_24(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_23(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_22(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_21(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_20(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_19(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_18(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_17(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_16(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_15(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_14(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_13(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_12(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_11(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_10(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_9(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_8(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_7(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_6(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_5(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_4(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_3(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_2(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 1357
type: SIMPLE_ASSIGN
heater.flowModel.states[1].p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  (data->simulationInfo->realParameter[70] /* heater.flowModel.states[1].p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
heater.state_a.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  (data->simulationInfo->realParameter[92] /* heater.state_a.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
heater.port_a.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  (data->simulationInfo->realParameter[85] /* heater.port_a.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
sensor_m_flow.port_b.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  (data->simulationInfo->realParameter[241] /* sensor_m_flow.port_b.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
sensor_m_flow.port_a.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  (data->simulationInfo->realParameter[240] /* sensor_m_flow.port_a.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
pump.port_b.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  (data->simulationInfo->realParameter[178] /* pump.port_b.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
pump.medium.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  (data->simulationInfo->realParameter[169] /* pump.medium.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
pump.medium.state.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  (data->simulationInfo->realParameter[170] /* pump.medium.state.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
pump.monitoring.state.p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  (data->simulationInfo->realParameter[171] /* pump.monitoring.state.p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
pump.heatTransfer.states[1].p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  (data->simulationInfo->realParameter[165] /* pump.heatTransfer.states[1].p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
heater.statesFM[1].p = pump.p_b_nominal
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  (data->simulationInfo->realParameter[93] /* heater.statesFM[1].p PARAM */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  TRACE_POP
}

/*
equation index: 1368
type: ALGORITHM

  assert(system.p_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.p_ambient, has value: " + String(system.p_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,71,"Variable violating min constraint: 0.0 <= system.p_ambient, has value: ");
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  static int tmp15 = 0;
  if(!tmp15)
  {
    tmp11 = GreaterEq((data->simulationInfo->realParameter[250] /* system.p_ambient PARAM */),0.0);
    if(!tmp11)
    {
      tmp13 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[250] /* system.p_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta14 = stringAppend(MMC_REFSTRINGLIT(tmp12),tmp13);
      {
        const char* assert_cond = "(system.p_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",8,3,10,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",8,3,10,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta14));
        }
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1369
type: ALGORITHM

  assert(tank.p_ambient >= 611.657 and tank.p_ambient <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.p_ambient <= 100000000.0, has value: " + String(tank.p_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  modelica_boolean tmp16;
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,92,"Variable violating min/max constraint: 611.657 <= tank.p_ambient <= 100000000.0, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp16 = GreaterEq((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),611.657);
    tmp17 = LessEq((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),100000000.0);
    if(!(tmp16 && tmp17))
    {
      tmp19 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta20 = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        const char* assert_cond = "(tank.p_ambient >= 611.657 and tank.p_ambient <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",60,3,62,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",60,3,62,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        }
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1370
type: ALGORITHM

  assert(pump.p_b_nominal >= 0.0 and pump.p_b_nominal <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.p_b_nominal <= 100000000.0, has value: " + String(pump.p_b_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,90,"Variable violating min/max constraint: 0.0 <= pump.p_b_nominal <= 100000000.0, has value: ");
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  static int tmp27 = 0;
  if(!tmp27)
  {
    tmp22 = GreaterEq((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */),0.0);
    tmp23 = LessEq((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */),100000000.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta26 = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        const char* assert_cond = "(pump.p_b_nominal >= 0.0 and pump.p_b_nominal <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",154,5,155,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta26));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",154,5,155,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta26));
        }
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1371
type: ALGORITHM

  assert(pump.m_flow_nominal >= -100000.0 and pump.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pump.m_flow_nominal <= 100000.0, has value: " + String(pump.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,96,"Variable violating min/max constraint: -100000.0 <= pump.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp31;
  modelica_metatype tmpMeta32;
  static int tmp33 = 0;
  if(!tmp33)
  {
    tmp28 = GreaterEq((data->simulationInfo->realParameter[166] /* pump.m_flow_nominal PARAM */),-100000.0);
    tmp29 = LessEq((data->simulationInfo->realParameter[166] /* pump.m_flow_nominal PARAM */),100000.0);
    if(!(tmp28 && tmp29))
    {
      tmp31 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[166] /* pump.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta32 = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      {
        const char* assert_cond = "(pump.m_flow_nominal >= -100000.0 and pump.m_flow_nominal <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",156,5,157,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta32));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",156,5,157,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta32));
        }
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1372
type: ALGORITHM

  assert(heater.diameter >= 0.0, "Variable violating min constraint: 0.0 <= heater.diameter, has value: " + String(heater.diameter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,70,"Variable violating min constraint: 0.0 <= heater.diameter, has value: ");
  modelica_string tmp36;
  modelica_metatype tmpMeta37;
  static int tmp38 = 0;
  if(!tmp38)
  {
    tmp34 = GreaterEq((data->simulationInfo->realParameter[41] /* heater.diameter PARAM */),0.0);
    if(!tmp34)
    {
      tmp36 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[41] /* heater.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta37 = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        const char* assert_cond = "(heater.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",236,7,237,64,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta37));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",236,7,237,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta37));
        }
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1373
type: ALGORITHM

  assert(heater.perimeter >= 0.0, "Variable violating min constraint: 0.0 <= heater.perimeter, has value: " + String(heater.perimeter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  modelica_boolean tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,71,"Variable violating min constraint: 0.0 <= heater.perimeter, has value: ");
  modelica_string tmp41;
  modelica_metatype tmpMeta42;
  static int tmp43 = 0;
  if(!tmp43)
  {
    tmp39 = GreaterEq((data->simulationInfo->realParameter[84] /* heater.perimeter PARAM */),0.0);
    if(!tmp39)
    {
      tmp41 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[84] /* heater.perimeter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta42 = stringAppend(MMC_REFSTRINGLIT(tmp40),tmp41);
      {
        const char* assert_cond = "(heater.perimeter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",241,7,243,83,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",241,7,243,83,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta42));
        }
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1374
type: ALGORITHM

  assert(heater.roughness >= 0.0, "Variable violating min constraint: 0.0 <= heater.roughness, has value: " + String(heater.roughness, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,71,"Variable violating min constraint: 0.0 <= heater.roughness, has value: ");
  modelica_string tmp46;
  modelica_metatype tmpMeta47;
  static int tmp48 = 0;
  if(!tmp48)
  {
    tmp44 = GreaterEq((data->simulationInfo->realParameter[87] /* heater.roughness PARAM */),0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[87] /* heater.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta47 = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        const char* assert_cond = "(heater.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",244,7,246,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta47));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",244,7,246,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta47));
        }
      }
      tmp48 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1375
type: ALGORITHM

  assert(heater.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= heater.roughnesses[1], has value: " + String(heater.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,76,"Variable violating min constraint: 0.0 <= heater.roughnesses[1], has value: ");
  modelica_string tmp51;
  modelica_metatype tmpMeta52;
  static int tmp53 = 0;
  if(!tmp53)
  {
    tmp49 = GreaterEq((data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */),0.0);
    if(!tmp49)
    {
      tmp51 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta52 = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        const char* assert_cond = "(heater.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta52));
        }
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1376
type: ALGORITHM

  assert(heater.heatTransfer.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= heater.heatTransfer.roughnesses[1], has value: " + String(heater.heatTransfer.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  modelica_boolean tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,89,"Variable violating min constraint: 0.0 <= heater.heatTransfer.roughnesses[1], has value: ");
  modelica_string tmp56;
  modelica_metatype tmpMeta57;
  static int tmp58 = 0;
  if(!tmp58)
  {
    tmp54 = GreaterEq((data->simulationInfo->realParameter[76] /* heater.heatTransfer.roughnesses[1] PARAM */),0.0);
    if(!tmp54)
    {
      tmp56 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[76] /* heater.heatTransfer.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta57 = stringAppend(MMC_REFSTRINGLIT(tmp55),tmp56);
      {
        const char* assert_cond = "(heater.heatTransfer.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta57));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta57));
        }
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1377
type: ALGORITHM

  assert(radiator.diameter >= 0.0, "Variable violating min constraint: 0.0 <= radiator.diameter, has value: " + String(radiator.diameter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  modelica_boolean tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,72,"Variable violating min constraint: 0.0 <= radiator.diameter, has value: ");
  modelica_string tmp61;
  modelica_metatype tmpMeta62;
  static int tmp63 = 0;
  if(!tmp63)
  {
    tmp59 = GreaterEq((data->simulationInfo->realParameter[189] /* radiator.diameter PARAM */),0.0);
    if(!tmp59)
    {
      tmp61 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[189] /* radiator.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta62 = stringAppend(MMC_REFSTRINGLIT(tmp60),tmp61);
      {
        const char* assert_cond = "(radiator.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",236,7,237,64,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta62));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",236,7,237,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta62));
        }
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1378
type: ALGORITHM

  assert(radiator.perimeter >= 0.0, "Variable violating min constraint: 0.0 <= radiator.perimeter, has value: " + String(radiator.perimeter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,73,"Variable violating min constraint: 0.0 <= radiator.perimeter, has value: ");
  modelica_string tmp66;
  modelica_metatype tmpMeta67;
  static int tmp68 = 0;
  if(!tmp68)
  {
    tmp64 = GreaterEq((data->simulationInfo->realParameter[231] /* radiator.perimeter PARAM */),0.0);
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[231] /* radiator.perimeter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta67 = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        const char* assert_cond = "(radiator.perimeter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",241,7,243,83,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta67));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",241,7,243,83,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta67));
        }
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1379
type: ALGORITHM

  assert(radiator.roughness >= 0.0, "Variable violating min constraint: 0.0 <= radiator.roughness, has value: " + String(radiator.roughness, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,73,"Variable violating min constraint: 0.0 <= radiator.roughness, has value: ");
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  static int tmp73 = 0;
  if(!tmp73)
  {
    tmp69 = GreaterEq((data->simulationInfo->realParameter[233] /* radiator.roughness PARAM */),0.0);
    if(!tmp69)
    {
      tmp71 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[233] /* radiator.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta72 = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        const char* assert_cond = "(radiator.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",244,7,246,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",244,7,246,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta72));
        }
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1380
type: ALGORITHM

  assert(radiator.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.roughnesses[1], has value: " + String(radiator.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,78,"Variable violating min constraint: 0.0 <= radiator.roughnesses[1], has value: ");
  modelica_string tmp76;
  modelica_metatype tmpMeta77;
  static int tmp78 = 0;
  if(!tmp78)
  {
    tmp74 = GreaterEq((data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */),0.0);
    if(!tmp74)
    {
      tmp76 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta77 = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        const char* assert_cond = "(radiator.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        }
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1381
type: ALGORITHM

  assert(radiator.heatTransfer.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.heatTransfer.roughnesses[1], has value: " + String(radiator.heatTransfer.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,91,"Variable violating min constraint: 0.0 <= radiator.heatTransfer.roughnesses[1], has value: ");
  modelica_string tmp81;
  modelica_metatype tmpMeta82;
  static int tmp83 = 0;
  if(!tmp83)
  {
    tmp79 = GreaterEq((data->simulationInfo->realParameter[223] /* radiator.heatTransfer.roughnesses[1] PARAM */),0.0);
    if(!tmp79)
    {
      tmp81 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[223] /* radiator.heatTransfer.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta82 = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        const char* assert_cond = "(radiator.heatTransfer.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta82));
        }
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1382
type: ALGORITHM

  assert(pipe.diameter >= 0.0, "Variable violating min constraint: 0.0 <= pipe.diameter, has value: " + String(pipe.diameter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,68,"Variable violating min constraint: 0.0 <= pipe.diameter, has value: ");
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static int tmp88 = 0;
  if(!tmp88)
  {
    tmp84 = GreaterEq((data->simulationInfo->realParameter[104] /* pipe.diameter PARAM */),0.0);
    if(!tmp84)
    {
      tmp86 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[104] /* pipe.diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta87 = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        const char* assert_cond = "(pipe.diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",236,7,237,64,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",236,7,237,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta87));
        }
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1383
type: ALGORITHM

  assert(pipe.perimeter >= 0.0, "Variable violating min constraint: 0.0 <= pipe.perimeter, has value: " + String(pipe.perimeter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  modelica_boolean tmp89;
  static const MMC_DEFSTRINGLIT(tmp90,69,"Variable violating min constraint: 0.0 <= pipe.perimeter, has value: ");
  modelica_string tmp91;
  modelica_metatype tmpMeta92;
  static int tmp93 = 0;
  if(!tmp93)
  {
    tmp89 = GreaterEq((data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */),0.0);
    if(!tmp89)
    {
      tmp91 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta92 = stringAppend(MMC_REFSTRINGLIT(tmp90),tmp91);
      {
        const char* assert_cond = "(pipe.perimeter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",241,7,243,83,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",241,7,243,83,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        }
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1384
type: ALGORITHM

  assert(pipe.roughness >= 0.0, "Variable violating min constraint: 0.0 <= pipe.roughness, has value: " + String(pipe.roughness, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,69,"Variable violating min constraint: 0.0 <= pipe.roughness, has value: ");
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  static int tmp98 = 0;
  if(!tmp98)
  {
    tmp94 = GreaterEq((data->simulationInfo->realParameter[148] /* pipe.roughness PARAM */),0.0);
    if(!tmp94)
    {
      tmp96 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[148] /* pipe.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta97 = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      {
        const char* assert_cond = "(pipe.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",244,7,246,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",244,7,246,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        }
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1385
type: ALGORITHM

  assert(pipe.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.roughnesses[1], has value: " + String(pipe.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  modelica_boolean tmp99;
  static const MMC_DEFSTRINGLIT(tmp100,74,"Variable violating min constraint: 0.0 <= pipe.roughnesses[1], has value: ");
  modelica_string tmp101;
  modelica_metatype tmpMeta102;
  static int tmp103 = 0;
  if(!tmp103)
  {
    tmp99 = GreaterEq((data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */),0.0);
    if(!tmp99)
    {
      tmp101 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta102 = stringAppend(MMC_REFSTRINGLIT(tmp100),tmp101);
      {
        const char* assert_cond = "(pipe.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta102));
        }
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1386
type: ALGORITHM

  assert(pipe.heatTransfer.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.heatTransfer.roughnesses[1], has value: " + String(pipe.heatTransfer.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,87,"Variable violating min constraint: 0.0 <= pipe.heatTransfer.roughnesses[1], has value: ");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static int tmp108 = 0;
  if(!tmp108)
  {
    tmp104 = GreaterEq((data->simulationInfo->realParameter[135] /* pipe.heatTransfer.roughnesses[1] PARAM */),0.0);
    if(!tmp104)
    {
      tmp106 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[135] /* pipe.heatTransfer.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        const char* assert_cond = "(pipe.heatTransfer.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        }
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1387
type: ALGORITHM

  assert(pipe.roughnesses[2] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.roughnesses[2], has value: " + String(pipe.roughnesses[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,74,"Variable violating min constraint: 0.0 <= pipe.roughnesses[2], has value: ");
  modelica_string tmp111;
  modelica_metatype tmpMeta112;
  static int tmp113 = 0;
  if(!tmp113)
  {
    tmp109 = GreaterEq((data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */),0.0);
    if(!tmp109)
    {
      tmp111 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta112 = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        const char* assert_cond = "(pipe.roughnesses[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",304,7,306,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta112));
        }
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1388
type: ALGORITHM

  assert(pipe.heatTransfer.roughnesses[2] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.heatTransfer.roughnesses[2], has value: " + String(pipe.heatTransfer.roughnesses[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  modelica_boolean tmp114;
  static const MMC_DEFSTRINGLIT(tmp115,87,"Variable violating min constraint: 0.0 <= pipe.heatTransfer.roughnesses[2], has value: ");
  modelica_string tmp116;
  modelica_metatype tmpMeta117;
  static int tmp118 = 0;
  if(!tmp118)
  {
    tmp114 = GreaterEq((data->simulationInfo->realParameter[136] /* pipe.heatTransfer.roughnesses[2] PARAM */),0.0);
    if(!tmp114)
    {
      tmp116 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[136] /* pipe.heatTransfer.roughnesses[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta117 = stringAppend(MMC_REFSTRINGLIT(tmp115),tmp116);
      {
        const char* assert_cond = "(pipe.heatTransfer.roughnesses[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta117));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1553,7,1553,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta117));
        }
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1389
type: ALGORITHM

  assert(tank.portsData[1].diameter >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[1].diameter, has value: " + String(tank.portsData[1].diameter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  modelica_boolean tmp119;
  static const MMC_DEFSTRINGLIT(tmp120,81,"Variable violating min constraint: 0.0 <= tank.portsData[1].diameter, has value: ");
  modelica_string tmp121;
  modelica_metatype tmpMeta122;
  static int tmp123 = 0;
  if(!tmp123)
  {
    tmp119 = GreaterEq((data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */),0.0);
    if(!tmp119)
    {
      tmp121 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta122 = stringAppend(MMC_REFSTRINGLIT(tmp120),tmp121);
      {
        const char* assert_cond = "(tank.portsData[1].diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",535,7,536,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta122));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",535,7,536,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta122));
        }
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1390
type: ALGORITHM

  assert(tank.portsData[2].diameter >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[2].diameter, has value: " + String(tank.portsData[2].diameter, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,81,"Variable violating min constraint: 0.0 <= tank.portsData[2].diameter, has value: ");
  modelica_string tmp126;
  modelica_metatype tmpMeta127;
  static int tmp128 = 0;
  if(!tmp128)
  {
    tmp124 = GreaterEq((data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */),0.0);
    if(!tmp124)
    {
      tmp126 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta127 = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        const char* assert_cond = "(tank.portsData[2].diameter >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",535,7,536,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta127));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",535,7,536,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta127));
        }
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1391
type: ALGORITHM

  assert(tank.portsData[1].height >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[1].height, has value: " + String(tank.portsData[1].height, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  modelica_boolean tmp129;
  static const MMC_DEFSTRINGLIT(tmp130,79,"Variable violating min constraint: 0.0 <= tank.portsData[1].height, has value: ");
  modelica_string tmp131;
  modelica_metatype tmpMeta132;
  static int tmp133 = 0;
  if(!tmp133)
  {
    tmp129 = GreaterEq((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */),0.0);
    if(!tmp129)
    {
      tmp131 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta132 = stringAppend(MMC_REFSTRINGLIT(tmp130),tmp131);
      {
        const char* assert_cond = "(tank.portsData[1].height >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",537,7,537,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",537,7,537,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta132));
        }
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1392
type: ALGORITHM

  assert(tank.portsData[2].height >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[2].height, has value: " + String(tank.portsData[2].height, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,79,"Variable violating min constraint: 0.0 <= tank.portsData[2].height, has value: ");
  modelica_string tmp136;
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  if(!tmp138)
  {
    tmp134 = GreaterEq((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */),0.0);
    if(!tmp134)
    {
      tmp136 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta137 = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        const char* assert_cond = "(tank.portsData[2].height >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",537,7,537,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",537,7,537,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1393
type: ALGORITHM

  assert(tank.portsData[1].zeta_in >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[1].zeta_in, has value: " + String(tank.portsData[1].zeta_in, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  modelica_boolean tmp139;
  static const MMC_DEFSTRINGLIT(tmp140,80,"Variable violating min constraint: 0.0 <= tank.portsData[1].zeta_in, has value: ");
  modelica_string tmp141;
  modelica_metatype tmpMeta142;
  static int tmp143 = 0;
  if(!tmp143)
  {
    tmp139 = GreaterEq((data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */),0.0);
    if(!tmp139)
    {
      tmp141 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta142 = stringAppend(MMC_REFSTRINGLIT(tmp140),tmp141);
      {
        const char* assert_cond = "(tank.portsData[1].zeta_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",540,7,541,104,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",540,7,541,104,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta142));
        }
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1394
type: ALGORITHM

  assert(tank.portsData[2].zeta_in >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[2].zeta_in, has value: " + String(tank.portsData[2].zeta_in, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  modelica_boolean tmp144;
  static const MMC_DEFSTRINGLIT(tmp145,80,"Variable violating min constraint: 0.0 <= tank.portsData[2].zeta_in, has value: ");
  modelica_string tmp146;
  modelica_metatype tmpMeta147;
  static int tmp148 = 0;
  if(!tmp148)
  {
    tmp144 = GreaterEq((data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */),0.0);
    if(!tmp144)
    {
      tmp146 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta147 = stringAppend(MMC_REFSTRINGLIT(tmp145),tmp146);
      {
        const char* assert_cond = "(tank.portsData[2].zeta_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",540,7,541,104,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta147));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",540,7,541,104,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta147));
        }
      }
      tmp148 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1395
type: ALGORITHM

  assert(tank.portsData[1].zeta_out >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[1].zeta_out, has value: " + String(tank.portsData[1].zeta_out, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  modelica_boolean tmp149;
  static const MMC_DEFSTRINGLIT(tmp150,81,"Variable violating min constraint: 0.0 <= tank.portsData[1].zeta_out, has value: ");
  modelica_string tmp151;
  modelica_metatype tmpMeta152;
  static int tmp153 = 0;
  if(!tmp153)
  {
    tmp149 = GreaterEq((data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */),0.0);
    if(!tmp149)
    {
      tmp151 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta152 = stringAppend(MMC_REFSTRINGLIT(tmp150),tmp151);
      {
        const char* assert_cond = "(tank.portsData[1].zeta_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",538,7,539,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta152));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",538,7,539,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta152));
        }
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1396
type: ALGORITHM

  assert(tank.portsData[2].zeta_out >= 0.0, "Variable violating min constraint: 0.0 <= tank.portsData[2].zeta_out, has value: " + String(tank.portsData[2].zeta_out, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,81,"Variable violating min constraint: 0.0 <= tank.portsData[2].zeta_out, has value: ");
  modelica_string tmp156;
  modelica_metatype tmpMeta157;
  static int tmp158 = 0;
  if(!tmp158)
  {
    tmp154 = GreaterEq((data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */),0.0);
    if(!tmp154)
    {
      tmp156 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta157 = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        const char* assert_cond = "(tank.portsData[2].zeta_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",538,7,539,105,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta157));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",538,7,539,105,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta157));
        }
      }
      tmp158 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1397
type: ALGORITHM

  assert(system.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= system.m_flow_small, has value: " + String(system.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,74,"Variable violating min constraint: 0.0 <= system.m_flow_small, has value: ");
  modelica_string tmp161;
  modelica_metatype tmpMeta162;
  static int tmp163 = 0;
  if(!tmp163)
  {
    tmp159 = GreaterEq((data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */),0.0);
    if(!tmp159)
    {
      tmp161 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[248] /* system.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta162 = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        const char* assert_cond = "(system.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",63,3,65,83,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",63,3,65,83,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        }
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1398
type: ALGORITHM

  assert(tank.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= tank.m_flow_small, has value: " + String(tank.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,72,"Variable violating min constraint: 0.0 <= tank.m_flow_small, has value: ");
  modelica_string tmp166;
  modelica_metatype tmpMeta167;
  static int tmp168 = 0;
  if(!tmp168)
  {
    tmp164 = GreaterEq((data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */),0.0);
    if(!tmp164)
    {
      tmp166 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta167 = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        const char* assert_cond = "(tank.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",207,9,209,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",207,9,209,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta167));
        }
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1399
type: ALGORITHM

  assert(system.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.T_ambient, has value: " + String(system.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,71,"Variable violating min constraint: 0.0 <= system.T_ambient, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp169 = GreaterEq((data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */),0.0);
    if(!tmp169)
    {
      tmp171 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[242] /* system.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        const char* assert_cond = "(system.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",11,3,13,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",11,3,13,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1400
type: ALGORITHM

  assert(T_ambient.T >= 0.0, "Variable violating min constraint: 0.0 <= T_ambient.T, has value: " + String(T_ambient.T, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,66,"Variable violating min constraint: 0.0 <= T_ambient.T, has value: ");
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static int tmp178 = 0;
  if(!tmp178)
  {
    tmp174 = GreaterEq((data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */),0.0);
    if(!tmp174)
    {
      tmp176 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta177 = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        const char* assert_cond = "(T_ambient.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Sources/FixedTemperature.mo",4,3,4,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta177));
        }
      }
      tmp178 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1401
type: ALGORITHM

  assert(wall.port_a.T >= 0.0, "Variable violating min constraint: 0.0 <= wall.port_a.T, has value: " + String(wall.port_a.T, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,68,"Variable violating min constraint: 0.0 <= wall.port_a.T, has value: ");
  modelica_string tmp181;
  modelica_metatype tmpMeta182;
  static int tmp183 = 0;
  if(!tmp183)
  {
    tmp179 = GreaterEq((data->simulationInfo->realParameter[314] /* wall.port_a.T PARAM */),0.0);
    if(!tmp179)
    {
      tmp181 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[314] /* wall.port_a.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta182 = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        const char* assert_cond = "(wall.port_a.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta182));
        }
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1402
type: ALGORITHM

  assert(T_ambient.port.T >= 0.0, "Variable violating min constraint: 0.0 <= T_ambient.port.T, has value: " + String(T_ambient.port.T, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,71,"Variable violating min constraint: 0.0 <= T_ambient.port.T, has value: ");
  modelica_string tmp186;
  modelica_metatype tmpMeta187;
  static int tmp188 = 0;
  if(!tmp188)
  {
    tmp184 = GreaterEq((data->simulationInfo->realParameter[25] /* T_ambient.port.T PARAM */),0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[25] /* T_ambient.port.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta187 = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        const char* assert_cond = "(T_ambient.port.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta187));
        }
      }
      tmp188 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1403
type: ALGORITHM

  assert(heater.flowModel.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= heater.flowModel.roughnesses[1], has value: " + String(heater.flowModel.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,86,"Variable violating min constraint: 0.0 <= heater.flowModel.roughnesses[1], has value: ");
  modelica_string tmp191;
  modelica_metatype tmpMeta192;
  static int tmp193 = 0;
  if(!tmp193)
  {
    tmp189 = GreaterEq((data->simulationInfo->realParameter[67] /* heater.flowModel.roughnesses[1] PARAM */),0.0);
    if(!tmp189)
    {
      tmp191 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[67] /* heater.flowModel.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta192 = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        const char* assert_cond = "(heater.flowModel.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        }
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1404
type: ALGORITHM

  assert(heater.roughnessesFM[1] >= 0.0, "Variable violating min constraint: 0.0 <= heater.roughnessesFM[1], has value: " + String(heater.roughnessesFM[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,78,"Variable violating min constraint: 0.0 <= heater.roughnessesFM[1], has value: ");
  modelica_string tmp196;
  modelica_metatype tmpMeta197;
  static int tmp198 = 0;
  if(!tmp198)
  {
    tmp194 = GreaterEq((data->simulationInfo->realParameter[89] /* heater.roughnessesFM[1] PARAM */),0.0);
    if(!tmp194)
    {
      tmp196 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[89] /* heater.roughnessesFM[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta197 = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        const char* assert_cond = "(heater.roughnessesFM[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta197));
        }
      }
      tmp198 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1405
type: ALGORITHM

  assert(heater.flowModel.roughnesses[2] >= 0.0, "Variable violating min constraint: 0.0 <= heater.flowModel.roughnesses[2], has value: " + String(heater.flowModel.roughnesses[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  modelica_boolean tmp199;
  static const MMC_DEFSTRINGLIT(tmp200,86,"Variable violating min constraint: 0.0 <= heater.flowModel.roughnesses[2], has value: ");
  modelica_string tmp201;
  modelica_metatype tmpMeta202;
  static int tmp203 = 0;
  if(!tmp203)
  {
    tmp199 = GreaterEq((data->simulationInfo->realParameter[68] /* heater.flowModel.roughnesses[2] PARAM */),0.0);
    if(!tmp199)
    {
      tmp201 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[68] /* heater.flowModel.roughnesses[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta202 = stringAppend(MMC_REFSTRINGLIT(tmp200),tmp201);
      {
        const char* assert_cond = "(heater.flowModel.roughnesses[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta202));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta202));
        }
      }
      tmp203 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1406
type: ALGORITHM

  assert(heater.roughnessesFM[2] >= 0.0, "Variable violating min constraint: 0.0 <= heater.roughnessesFM[2], has value: " + String(heater.roughnessesFM[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  modelica_boolean tmp204;
  static const MMC_DEFSTRINGLIT(tmp205,78,"Variable violating min constraint: 0.0 <= heater.roughnessesFM[2], has value: ");
  modelica_string tmp206;
  modelica_metatype tmpMeta207;
  static int tmp208 = 0;
  if(!tmp208)
  {
    tmp204 = GreaterEq((data->simulationInfo->realParameter[90] /* heater.roughnessesFM[2] PARAM */),0.0);
    if(!tmp204)
    {
      tmp206 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[90] /* heater.roughnessesFM[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta207 = stringAppend(MMC_REFSTRINGLIT(tmp205),tmp206);
      {
        const char* assert_cond = "(heater.roughnessesFM[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta207));
        }
      }
      tmp208 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1407
type: ALGORITHM

  assert(heater.flowModel.roughnesses[3] >= 0.0, "Variable violating min constraint: 0.0 <= heater.flowModel.roughnesses[3], has value: " + String(heater.flowModel.roughnesses[3], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  modelica_boolean tmp209;
  static const MMC_DEFSTRINGLIT(tmp210,86,"Variable violating min constraint: 0.0 <= heater.flowModel.roughnesses[3], has value: ");
  modelica_string tmp211;
  modelica_metatype tmpMeta212;
  static int tmp213 = 0;
  if(!tmp213)
  {
    tmp209 = GreaterEq((data->simulationInfo->realParameter[69] /* heater.flowModel.roughnesses[3] PARAM */),0.0);
    if(!tmp209)
    {
      tmp211 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[69] /* heater.flowModel.roughnesses[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta212 = stringAppend(MMC_REFSTRINGLIT(tmp210),tmp211);
      {
        const char* assert_cond = "(heater.flowModel.roughnesses[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta212));
        }
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1408
type: ALGORITHM

  assert(heater.roughnessesFM[3] >= 0.0, "Variable violating min constraint: 0.0 <= heater.roughnessesFM[3], has value: " + String(heater.roughnessesFM[3], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,78,"Variable violating min constraint: 0.0 <= heater.roughnessesFM[3], has value: ");
  modelica_string tmp216;
  modelica_metatype tmpMeta217;
  static int tmp218 = 0;
  if(!tmp218)
  {
    tmp214 = GreaterEq((data->simulationInfo->realParameter[91] /* heater.roughnessesFM[3] PARAM */),0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[91] /* heater.roughnessesFM[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta217 = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        const char* assert_cond = "(heater.roughnessesFM[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta217));
        }
      }
      tmp218 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1409
type: ALGORITHM

  assert(radiator.flowModel.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.flowModel.roughnesses[1], has value: " + String(radiator.flowModel.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,88,"Variable violating min constraint: 0.0 <= radiator.flowModel.roughnesses[1], has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp219 = GreaterEq((data->simulationInfo->realParameter[215] /* radiator.flowModel.roughnesses[1] PARAM */),0.0);
    if(!tmp219)
    {
      tmp221 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[215] /* radiator.flowModel.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(radiator.flowModel.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1410
type: ALGORITHM

  assert(radiator.roughnessesFM[1] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.roughnessesFM[1], has value: " + String(radiator.roughnessesFM[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,80,"Variable violating min constraint: 0.0 <= radiator.roughnessesFM[1], has value: ");
  modelica_string tmp226;
  modelica_metatype tmpMeta227;
  static int tmp228 = 0;
  if(!tmp228)
  {
    tmp224 = GreaterEq((data->simulationInfo->realParameter[235] /* radiator.roughnessesFM[1] PARAM */),0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[235] /* radiator.roughnessesFM[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta227 = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        const char* assert_cond = "(radiator.roughnessesFM[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta227));
        }
      }
      tmp228 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1411
type: ALGORITHM

  assert(radiator.flowModel.roughnesses[2] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.flowModel.roughnesses[2], has value: " + String(radiator.flowModel.roughnesses[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,88,"Variable violating min constraint: 0.0 <= radiator.flowModel.roughnesses[2], has value: ");
  modelica_string tmp231;
  modelica_metatype tmpMeta232;
  static int tmp233 = 0;
  if(!tmp233)
  {
    tmp229 = GreaterEq((data->simulationInfo->realParameter[216] /* radiator.flowModel.roughnesses[2] PARAM */),0.0);
    if(!tmp229)
    {
      tmp231 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[216] /* radiator.flowModel.roughnesses[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta232 = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        const char* assert_cond = "(radiator.flowModel.roughnesses[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta232));
        }
      }
      tmp233 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1412
type: ALGORITHM

  assert(radiator.roughnessesFM[2] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.roughnessesFM[2], has value: " + String(radiator.roughnessesFM[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,80,"Variable violating min constraint: 0.0 <= radiator.roughnessesFM[2], has value: ");
  modelica_string tmp236;
  modelica_metatype tmpMeta237;
  static int tmp238 = 0;
  if(!tmp238)
  {
    tmp234 = GreaterEq((data->simulationInfo->realParameter[236] /* radiator.roughnessesFM[2] PARAM */),0.0);
    if(!tmp234)
    {
      tmp236 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[236] /* radiator.roughnessesFM[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta237 = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        const char* assert_cond = "(radiator.roughnessesFM[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta237));
        }
      }
      tmp238 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1413
type: ALGORITHM

  assert(radiator.flowModel.roughnesses[3] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.flowModel.roughnesses[3], has value: " + String(radiator.flowModel.roughnesses[3], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  modelica_boolean tmp239;
  static const MMC_DEFSTRINGLIT(tmp240,88,"Variable violating min constraint: 0.0 <= radiator.flowModel.roughnesses[3], has value: ");
  modelica_string tmp241;
  modelica_metatype tmpMeta242;
  static int tmp243 = 0;
  if(!tmp243)
  {
    tmp239 = GreaterEq((data->simulationInfo->realParameter[217] /* radiator.flowModel.roughnesses[3] PARAM */),0.0);
    if(!tmp239)
    {
      tmp241 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[217] /* radiator.flowModel.roughnesses[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta242 = stringAppend(MMC_REFSTRINGLIT(tmp240),tmp241);
      {
        const char* assert_cond = "(radiator.flowModel.roughnesses[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta242));
        }
      }
      tmp243 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1414
type: ALGORITHM

  assert(radiator.roughnessesFM[3] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.roughnessesFM[3], has value: " + String(radiator.roughnessesFM[3], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  modelica_boolean tmp244;
  static const MMC_DEFSTRINGLIT(tmp245,80,"Variable violating min constraint: 0.0 <= radiator.roughnessesFM[3], has value: ");
  modelica_string tmp246;
  modelica_metatype tmpMeta247;
  static int tmp248 = 0;
  if(!tmp248)
  {
    tmp244 = GreaterEq((data->simulationInfo->realParameter[237] /* radiator.roughnessesFM[3] PARAM */),0.0);
    if(!tmp244)
    {
      tmp246 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[237] /* radiator.roughnessesFM[3] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta247 = stringAppend(MMC_REFSTRINGLIT(tmp245),tmp246);
      {
        const char* assert_cond = "(radiator.roughnessesFM[3] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta247));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta247));
        }
      }
      tmp248 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1415
type: ALGORITHM

  assert(pipe.flowModel.roughnesses[1] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.flowModel.roughnesses[1], has value: " + String(pipe.flowModel.roughnesses[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,84,"Variable violating min constraint: 0.0 <= pipe.flowModel.roughnesses[1], has value: ");
  modelica_string tmp251;
  modelica_metatype tmpMeta252;
  static int tmp253 = 0;
  if(!tmp253)
  {
    tmp249 = GreaterEq((data->simulationInfo->realParameter[127] /* pipe.flowModel.roughnesses[1] PARAM */),0.0);
    if(!tmp249)
    {
      tmp251 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[127] /* pipe.flowModel.roughnesses[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta252 = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        const char* assert_cond = "(pipe.flowModel.roughnesses[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta252));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta252));
        }
      }
      tmp253 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1416
type: ALGORITHM

  assert(pipe.roughnessesFM[1] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.roughnessesFM[1], has value: " + String(pipe.roughnessesFM[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  modelica_boolean tmp254;
  static const MMC_DEFSTRINGLIT(tmp255,76,"Variable violating min constraint: 0.0 <= pipe.roughnessesFM[1], has value: ");
  modelica_string tmp256;
  modelica_metatype tmpMeta257;
  static int tmp258 = 0;
  if(!tmp258)
  {
    tmp254 = GreaterEq((data->simulationInfo->realParameter[151] /* pipe.roughnessesFM[1] PARAM */),0.0);
    if(!tmp254)
    {
      tmp256 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[151] /* pipe.roughnessesFM[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta257 = stringAppend(MMC_REFSTRINGLIT(tmp255),tmp256);
      {
        const char* assert_cond = "(pipe.roughnessesFM[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta257));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta257));
        }
      }
      tmp258 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1417
type: ALGORITHM

  assert(pipe.flowModel.roughnesses[2] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.flowModel.roughnesses[2], has value: " + String(pipe.flowModel.roughnesses[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,84,"Variable violating min constraint: 0.0 <= pipe.flowModel.roughnesses[2], has value: ");
  modelica_string tmp261;
  modelica_metatype tmpMeta262;
  static int tmp263 = 0;
  if(!tmp263)
  {
    tmp259 = GreaterEq((data->simulationInfo->realParameter[128] /* pipe.flowModel.roughnesses[2] PARAM */),0.0);
    if(!tmp259)
    {
      tmp261 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[128] /* pipe.flowModel.roughnesses[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta262 = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        const char* assert_cond = "(pipe.flowModel.roughnesses[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta262));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",933,13,934,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta262));
        }
      }
      tmp263 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1418
type: ALGORITHM

  assert(pipe.roughnessesFM[2] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.roughnessesFM[2], has value: " + String(pipe.roughnessesFM[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  modelica_boolean tmp264;
  static const MMC_DEFSTRINGLIT(tmp265,76,"Variable violating min constraint: 0.0 <= pipe.roughnessesFM[2], has value: ");
  modelica_string tmp266;
  modelica_metatype tmpMeta267;
  static int tmp268 = 0;
  if(!tmp268)
  {
    tmp264 = GreaterEq((data->simulationInfo->realParameter[152] /* pipe.roughnessesFM[2] PARAM */),0.0);
    if(!tmp264)
    {
      tmp266 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[152] /* pipe.roughnessesFM[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta267 = stringAppend(MMC_REFSTRINGLIT(tmp265),tmp266);
      {
        const char* assert_cond = "(pipe.roughnessesFM[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",401,7,401,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta267));
        }
      }
      tmp268 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1419
type: ALGORITHM

  assert(tank.medium.sat.psat >= 611.657 and tank.medium.sat.psat <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.medium.sat.psat <= 100000000.0, has value: " + String(tank.medium.sat.psat, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  modelica_boolean tmp269;
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,98,"Variable violating min/max constraint: 611.657 <= tank.medium.sat.psat <= 100000000.0, has value: ");
  modelica_string tmp272;
  modelica_metatype tmpMeta273;
  static int tmp274 = 0;
  if(!tmp274)
  {
    tmp269 = GreaterEq((data->simulationInfo->realParameter[269] /* tank.medium.sat.psat PARAM */),611.657);
    tmp270 = LessEq((data->simulationInfo->realParameter[269] /* tank.medium.sat.psat PARAM */),100000000.0);
    if(!(tmp269 && tmp270))
    {
      tmp272 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[269] /* tank.medium.sat.psat PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta273 = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        const char* assert_cond = "(tank.medium.sat.psat >= 611.657 and tank.medium.sat.psat <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",6650,7,6650,50,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",6650,7,6650,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta273));
        }
      }
      tmp274 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1420
type: ALGORITHM

  assert(tank.heatTransfer.states[1].p >= 611.657 and tank.heatTransfer.states[1].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.heatTransfer.states[1].p <= 100000000.0, has value: " + String(tank.heatTransfer.states[1].p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  modelica_boolean tmp275;
  modelica_boolean tmp276;
  static const MMC_DEFSTRINGLIT(tmp277,107,"Variable violating min/max constraint: 611.657 <= tank.heatTransfer.states[1].p <= 100000000.0, has value: ");
  modelica_string tmp278;
  modelica_metatype tmpMeta279;
  static int tmp280 = 0;
  if(!tmp280)
  {
    tmp275 = GreaterEq((data->simulationInfo->realParameter[260] /* tank.heatTransfer.states[1].p PARAM */),611.657);
    tmp276 = LessEq((data->simulationInfo->realParameter[260] /* tank.heatTransfer.states[1].p PARAM */),100000000.0);
    if(!(tmp275 && tmp276))
    {
      tmp278 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[260] /* tank.heatTransfer.states[1].p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta279 = stringAppend(MMC_REFSTRINGLIT(tmp277),tmp278);
      {
        const char* assert_cond = "(tank.heatTransfer.states[1].p >= 611.657 and tank.heatTransfer.states[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/package.mo",140,5,140,34,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/package.mo",140,5,140,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta279));
        }
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1421
type: ALGORITHM

  assert(tank.medium.state.p >= 611.657 and tank.medium.state.p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.medium.state.p <= 100000000.0, has value: " + String(tank.medium.state.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  modelica_boolean tmp281;
  modelica_boolean tmp282;
  static const MMC_DEFSTRINGLIT(tmp283,97,"Variable violating min/max constraint: 611.657 <= tank.medium.state.p <= 100000000.0, has value: ");
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static int tmp286 = 0;
  if(!tmp286)
  {
    tmp281 = GreaterEq((data->simulationInfo->realParameter[270] /* tank.medium.state.p PARAM */),611.657);
    tmp282 = LessEq((data->simulationInfo->realParameter[270] /* tank.medium.state.p PARAM */),100000000.0);
    if(!(tmp281 && tmp282))
    {
      tmp284 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[270] /* tank.medium.state.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta285 = stringAppend(MMC_REFSTRINGLIT(tmp283),tmp284);
      {
        const char* assert_cond = "(tank.medium.state.p >= 611.657 and tank.medium.state.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/package.mo",140,5,140,34,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/package.mo",140,5,140,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta285));
        }
      }
      tmp286 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1422
type: ALGORITHM

  assert(tank.medium.p >= 0.0, "Variable violating min constraint: 0.0 <= tank.medium.p, has value: " + String(tank.medium.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  modelica_boolean tmp287;
  static const MMC_DEFSTRINGLIT(tmp288,68,"Variable violating min constraint: 0.0 <= tank.medium.p, has value: ");
  modelica_string tmp289;
  modelica_metatype tmpMeta290;
  static int tmp291 = 0;
  if(!tmp291)
  {
    tmp287 = GreaterEq((data->simulationInfo->realParameter[268] /* tank.medium.p PARAM */),0.0);
    if(!tmp287)
    {
      tmp289 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[268] /* tank.medium.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta290 = stringAppend(MMC_REFSTRINGLIT(tmp288),tmp289);
      {
        const char* assert_cond = "(tank.medium.p >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta290));
        }
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1423
type: ALGORITHM

  assert(system.dp_small >= 0.0, "Variable violating min constraint: 0.0 <= system.dp_small, has value: " + String(system.dp_small, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  modelica_boolean tmp292;
  static const MMC_DEFSTRINGLIT(tmp293,70,"Variable violating min constraint: 0.0 <= system.dp_small, has value: ");
  modelica_string tmp294;
  modelica_metatype tmpMeta295;
  static int tmp296 = 0;
  if(!tmp296)
  {
    tmp292 = GreaterEq((data->simulationInfo->realParameter[244] /* system.dp_small PARAM */),0.0);
    if(!tmp292)
    {
      tmp294 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[244] /* system.dp_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta295 = stringAppend(MMC_REFSTRINGLIT(tmp293),tmp294);
      {
        const char* assert_cond = "(system.dp_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",60,3,62,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",60,3,62,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta295));
        }
      }
      tmp296 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1424
type: ALGORITHM

  assert(valve.dp_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= valve.dp_turbulent, has value: " + String(valve.dp_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,73,"Variable violating min constraint: 0.0 <= valve.dp_turbulent, has value: ");
  modelica_string tmp299;
  modelica_metatype tmpMeta300;
  static int tmp301 = 0;
  if(!tmp301)
  {
    tmp297 = GreaterEq((data->simulationInfo->realParameter[304] /* valve.dp_turbulent PARAM */),0.0);
    if(!tmp297)
    {
      tmp299 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[304] /* valve.dp_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta300 = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        const char* assert_cond = "(valve.dp_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",21,7,23,116,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta300));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",21,7,23,116,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta300));
        }
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1425
type: ALGORITHM

  assert(pipe.nParallel >= 1.0, "Variable violating min constraint: 1.0 <= pipe.nParallel, has value: " + String(pipe.nParallel, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  modelica_boolean tmp302;
  static const MMC_DEFSTRINGLIT(tmp303,69,"Variable violating min constraint: 1.0 <= pipe.nParallel, has value: ");
  modelica_string tmp304;
  modelica_metatype tmpMeta305;
  static int tmp306 = 0;
  if(!tmp306)
  {
    tmp302 = GreaterEq((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */),1.0);
    if(!tmp302)
    {
      tmp304 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta305 = stringAppend(MMC_REFSTRINGLIT(tmp303),tmp304);
      {
        const char* assert_cond = "(pipe.nParallel >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",229,7,230,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",229,7,230,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta305));
        }
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1426
type: ALGORITHM

  assert(pipe.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= pipe.heatTransfer.T_ambient, has value: " + String(pipe.heatTransfer.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,82,"Variable violating min constraint: 0.0 <= pipe.heatTransfer.T_ambient, has value: ");
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  static int tmp311 = 0;
  if(!tmp311)
  {
    tmp307 = GreaterEq((data->simulationInfo->realParameter[130] /* pipe.heatTransfer.T_ambient PARAM */),0.0);
    if(!tmp307)
    {
      tmp309 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[130] /* pipe.heatTransfer.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta310 = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        const char* assert_cond = "(pipe.heatTransfer.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        }
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1427
type: ALGORITHM

  assert(pipe.flowModel.mu_nominal >= 0.0, "Variable violating min constraint: 0.0 <= pipe.flowModel.mu_nominal, has value: " + String(pipe.flowModel.mu_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  modelica_boolean tmp312;
  static const MMC_DEFSTRINGLIT(tmp313,80,"Variable violating min constraint: 0.0 <= pipe.flowModel.mu_nominal, has value: ");
  modelica_string tmp314;
  modelica_metatype tmpMeta315;
  static int tmp316 = 0;
  if(!tmp316)
  {
    tmp312 = GreaterEq((data->simulationInfo->realParameter[122] /* pipe.flowModel.mu_nominal PARAM */),0.0);
    if(!tmp312)
    {
      tmp314 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[122] /* pipe.flowModel.mu_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta315 = stringAppend(MMC_REFSTRINGLIT(tmp313),tmp314);
      {
        const char* assert_cond = "(pipe.flowModel.mu_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1014,13,1018,74,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1014,13,1018,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta315));
        }
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1428
type: ALGORITHM

  assert(pipe.flowModel.rho_nominal >= 0.0, "Variable violating min constraint: 0.0 <= pipe.flowModel.rho_nominal, has value: " + String(pipe.flowModel.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,81,"Variable violating min constraint: 0.0 <= pipe.flowModel.rho_nominal, has value: ");
  modelica_string tmp319;
  modelica_metatype tmpMeta320;
  static int tmp321 = 0;
  if(!tmp321)
  {
    tmp317 = GreaterEq((data->simulationInfo->realParameter[126] /* pipe.flowModel.rho_nominal PARAM */),0.0);
    if(!tmp317)
    {
      tmp319 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[126] /* pipe.flowModel.rho_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta320 = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        const char* assert_cond = "(pipe.flowModel.rho_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1007,13,1009,75,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta320));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1007,13,1009,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta320));
        }
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1429
type: ALGORITHM

  assert(pipe.flowModel.p_b_start >= 0.0 and pipe.flowModel.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.p_b_start <= 100000000.0, has value: " + String(pipe.flowModel.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  modelica_boolean tmp322;
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,98,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static int tmp327 = 0;
  if(!tmp327)
  {
    tmp322 = GreaterEq((data->simulationInfo->realParameter[125] /* pipe.flowModel.p_b_start PARAM */),0.0);
    tmp323 = LessEq((data->simulationInfo->realParameter[125] /* pipe.flowModel.p_b_start PARAM */),100000000.0);
    if(!(tmp322 && tmp323))
    {
      tmp325 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[125] /* pipe.flowModel.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta326 = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        const char* assert_cond = "(pipe.flowModel.p_b_start >= 0.0 and pipe.flowModel.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",959,13,961,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",959,13,961,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        }
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1430
type: ALGORITHM

  assert(pipe.flowModel.p_a_start >= 0.0 and pipe.flowModel.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.p_a_start <= 100000000.0, has value: " + String(pipe.flowModel.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  static const MMC_DEFSTRINGLIT(tmp330,98,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp331;
  modelica_metatype tmpMeta332;
  static int tmp333 = 0;
  if(!tmp333)
  {
    tmp328 = GreaterEq((data->simulationInfo->realParameter[124] /* pipe.flowModel.p_a_start PARAM */),0.0);
    tmp329 = LessEq((data->simulationInfo->realParameter[124] /* pipe.flowModel.p_a_start PARAM */),100000000.0);
    if(!(tmp328 && tmp329))
    {
      tmp331 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[124] /* pipe.flowModel.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta332 = stringAppend(MMC_REFSTRINGLIT(tmp330),tmp331);
      {
        const char* assert_cond = "(pipe.flowModel.p_a_start >= 0.0 and pipe.flowModel.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",956,13,958,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",956,13,958,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        }
      }
      tmp333 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1431
type: ALGORITHM

  assert(pipe.flowModel.m_flow_start >= -100000.0 and pipe.flowModel.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pipe.flowModel.m_flow_start <= 100000.0, has value: " + String(pipe.flowModel.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  modelica_boolean tmp334;
  modelica_boolean tmp335;
  static const MMC_DEFSTRINGLIT(tmp336,104,"Variable violating min/max constraint: -100000.0 <= pipe.flowModel.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp337;
  modelica_metatype tmpMeta338;
  static int tmp339 = 0;
  if(!tmp339)
  {
    tmp334 = GreaterEq((data->simulationInfo->realParameter[121] /* pipe.flowModel.m_flow_start PARAM */),-100000.0);
    tmp335 = LessEq((data->simulationInfo->realParameter[121] /* pipe.flowModel.m_flow_start PARAM */),100000.0);
    if(!(tmp334 && tmp335))
    {
      tmp337 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[121] /* pipe.flowModel.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta338 = stringAppend(MMC_REFSTRINGLIT(tmp336),tmp337);
      {
        const char* assert_cond = "(pipe.flowModel.m_flow_start >= -100000.0 and pipe.flowModel.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",953,13,955,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",953,13,955,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta338));
        }
      }
      tmp339 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1432
type: ALGORITHM

  assert(pipe.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.flowModel.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  modelica_boolean tmp340;
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,180,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp343;
  modelica_metatype tmpMeta344;
  static int tmp345 = 0;
  if(!tmp345)
  {
    tmp340 = GreaterEq((data->simulationInfo->integerParameter[18] /* pipe.flowModel.momentumDynamics PARAM */),1);
    tmp341 = LessEq((data->simulationInfo->integerParameter[18] /* pipe.flowModel.momentumDynamics PARAM */),4);
    if(!(tmp340 && tmp341))
    {
      tmp343 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[18] /* pipe.flowModel.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta344 = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        const char* assert_cond = "(pipe.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",948,13,950,109,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",948,13,950,109,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta344));
        }
      }
      tmp345 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1433
type: ALGORITHM

  assert(pipe.modelStructure >= Modelica.Fluid.Types.ModelStructure.av_vb and pipe.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, "Variable violating min/max constraint: Modelica.Fluid.Types.ModelStructure.av_vb <= pipe.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, has value: " + String(pipe.modelStructure, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  modelica_boolean tmp346;
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,160,"Variable violating min/max constraint: Modelica.Fluid.Types.ModelStructure.av_vb <= pipe.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, has value: ");
  modelica_string tmp349;
  modelica_metatype tmpMeta350;
  static int tmp351 = 0;
  if(!tmp351)
  {
    tmp346 = GreaterEq((data->simulationInfo->integerParameter[23] /* pipe.modelStructure PARAM */),1);
    tmp347 = LessEq((data->simulationInfo->integerParameter[23] /* pipe.modelStructure PARAM */),4);
    if(!(tmp346 && tmp347))
    {
      tmp349 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[23] /* pipe.modelStructure PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta350 = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        const char* assert_cond = "(pipe.modelStructure >= Modelica.Fluid.Types.ModelStructure.av_vb and pipe.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",327,7,329,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",327,7,329,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta350));
        }
      }
      tmp351 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1434
type: ALGORITHM

  assert(pipe.nNodes >= 1, "Variable violating min constraint: 1 <= pipe.nNodes, has value: " + String(pipe.nNodes, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  modelica_boolean tmp352;
  static const MMC_DEFSTRINGLIT(tmp353,64,"Variable violating min constraint: 1 <= pipe.nNodes, has value: ");
  modelica_string tmp354;
  modelica_metatype tmpMeta355;
  static int tmp356 = 0;
  if(!tmp356)
  {
    tmp352 = GreaterEq((data->simulationInfo->integerParameter[29] /* pipe.nNodes PARAM */),((modelica_integer) 1));
    if(!tmp352)
    {
      tmp354 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[29] /* pipe.nNodes PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta355 = stringAppend(MMC_REFSTRINGLIT(tmp353),tmp354);
      {
        const char* assert_cond = "(pipe.nNodes >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",324,7,325,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta355));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",324,7,325,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta355));
        }
      }
      tmp356 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1435
type: ALGORITHM

  assert(pipe.m_flow_start >= -100000.0 and pipe.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pipe.m_flow_start <= 100000.0, has value: " + String(pipe.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,94,"Variable violating min/max constraint: -100000.0 <= pipe.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp360;
  modelica_metatype tmpMeta361;
  static int tmp362 = 0;
  if(!tmp362)
  {
    tmp357 = GreaterEq((data->simulationInfo->realParameter[141] /* pipe.m_flow_start PARAM */),-100000.0);
    tmp358 = LessEq((data->simulationInfo->realParameter[141] /* pipe.m_flow_start PARAM */),100000.0);
    if(!(tmp357 && tmp358))
    {
      tmp360 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[141] /* pipe.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta361 = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        const char* assert_cond = "(pipe.m_flow_start >= -100000.0 and pipe.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",319,7,321,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",319,7,321,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta361));
        }
      }
      tmp362 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1436
type: ALGORITHM

  assert(pipe.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  modelica_boolean tmp363;
  modelica_boolean tmp364;
  static const MMC_DEFSTRINGLIT(tmp365,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp366;
  modelica_metatype tmpMeta367;
  static int tmp368 = 0;
  if(!tmp368)
  {
    tmp363 = GreaterEq((data->simulationInfo->integerParameter[24] /* pipe.momentumDynamics PARAM */),1);
    tmp364 = LessEq((data->simulationInfo->integerParameter[24] /* pipe.momentumDynamics PARAM */),4);
    if(!(tmp363 && tmp364))
    {
      tmp366 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[24] /* pipe.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta367 = stringAppend(MMC_REFSTRINGLIT(tmp365),tmp366);
      {
        const char* assert_cond = "(pipe.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",314,7,316,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",314,7,316,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta367));
        }
      }
      tmp368 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1437
type: ALGORITHM

  assert(pipe.X_start[1] >= 0.0 and pipe.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= pipe.X_start[1] <= 1.0, has value: " + String(pipe.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  modelica_boolean tmp369;
  modelica_boolean tmp370;
  static const MMC_DEFSTRINGLIT(tmp371,81,"Variable violating min/max constraint: 0.0 <= pipe.X_start[1] <= 1.0, has value: ");
  modelica_string tmp372;
  modelica_metatype tmpMeta373;
  static int tmp374 = 0;
  if(!tmp374)
  {
    tmp369 = GreaterEq((data->simulationInfo->realParameter[96] /* pipe.X_start[1] PARAM */),0.0);
    tmp370 = LessEq((data->simulationInfo->realParameter[96] /* pipe.X_start[1] PARAM */),1.0);
    if(!(tmp369 && tmp370))
    {
      tmp372 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[96] /* pipe.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta373 = stringAppend(MMC_REFSTRINGLIT(tmp371),tmp372);
      {
        const char* assert_cond = "(pipe.X_start[1] >= 0.0 and pipe.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",834,3,836,69,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta373));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",834,3,836,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta373));
        }
      }
      tmp374 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1438
type: ALGORITHM

  assert(pipe.h_start >= -10000000000.0 and pipe.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= pipe.h_start <= 10000000000.0, has value: " + String(pipe.h_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,99,"Variable violating min/max constraint: -10000000000.0 <= pipe.h_start <= 10000000000.0, has value: ");
  modelica_string tmp378;
  modelica_metatype tmpMeta379;
  static int tmp380 = 0;
  if(!tmp380)
  {
    tmp375 = GreaterEq((data->simulationInfo->realParameter[129] /* pipe.h_start PARAM */),-10000000000.0);
    tmp376 = LessEq((data->simulationInfo->realParameter[129] /* pipe.h_start PARAM */),10000000000.0);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[129] /* pipe.h_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta379 = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        const char* assert_cond = "(pipe.h_start >= -10000000000.0 and pipe.h_start <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",828,3,833,88,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",828,3,833,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        }
      }
      tmp380 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1439
type: ALGORITHM

  assert(pipe.T_start >= 1.0 and pipe.T_start <= 10000.0, "Variable violating min/max constraint: 1.0 <= pipe.T_start <= 10000.0, has value: " + String(pipe.T_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  modelica_boolean tmp381;
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,82,"Variable violating min/max constraint: 1.0 <= pipe.T_start <= 10000.0, has value: ");
  modelica_string tmp384;
  modelica_metatype tmpMeta385;
  static int tmp386 = 0;
  if(!tmp386)
  {
    tmp381 = GreaterEq((data->simulationInfo->realParameter[94] /* pipe.T_start PARAM */),1.0);
    tmp382 = LessEq((data->simulationInfo->realParameter[94] /* pipe.T_start PARAM */),10000.0);
    if(!(tmp381 && tmp382))
    {
      tmp384 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[94] /* pipe.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta385 = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        const char* assert_cond = "(pipe.T_start >= 1.0 and pipe.T_start <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",822,3,827,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",822,3,827,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        }
      }
      tmp386 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1440
type: ALGORITHM

  assert(pipe.ps_start[2] >= 0.0 and pipe.ps_start[2] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.ps_start[2] <= 100000000.0, has value: " + String(pipe.ps_start[2], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,90,"Variable violating min/max constraint: 0.0 <= pipe.ps_start[2] <= 100000000.0, has value: ");
  modelica_string tmp390;
  modelica_metatype tmpMeta391;
  static int tmp392 = 0;
  if(!tmp392)
  {
    tmp387 = GreaterEq((data->simulationInfo->realParameter[147] /* pipe.ps_start[2] PARAM */),0.0);
    tmp388 = LessEq((data->simulationInfo->realParameter[147] /* pipe.ps_start[2] PARAM */),100000000.0);
    if(!(tmp387 && tmp388))
    {
      tmp390 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[147] /* pipe.ps_start[2] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta391 = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        const char* assert_cond = "(pipe.ps_start[2] >= 0.0 and pipe.ps_start[2] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta391));
        }
      }
      tmp392 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1441
type: ALGORITHM

  assert(pipe.ps_start[1] >= 0.0 and pipe.ps_start[1] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.ps_start[1] <= 100000000.0, has value: " + String(pipe.ps_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  modelica_boolean tmp393;
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,90,"Variable violating min/max constraint: 0.0 <= pipe.ps_start[1] <= 100000000.0, has value: ");
  modelica_string tmp396;
  modelica_metatype tmpMeta397;
  static int tmp398 = 0;
  if(!tmp398)
  {
    tmp393 = GreaterEq((data->simulationInfo->realParameter[146] /* pipe.ps_start[1] PARAM */),0.0);
    tmp394 = LessEq((data->simulationInfo->realParameter[146] /* pipe.ps_start[1] PARAM */),100000000.0);
    if(!(tmp393 && tmp394))
    {
      tmp396 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[146] /* pipe.ps_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta397 = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        const char* assert_cond = "(pipe.ps_start[1] >= 0.0 and pipe.ps_start[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta397));
        }
      }
      tmp398 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1442
type: ALGORITHM

  assert(pipe.p_b_start >= 0.0 and pipe.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.p_b_start <= 100000000.0, has value: " + String(pipe.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  static const MMC_DEFSTRINGLIT(tmp401,88,"Variable violating min/max constraint: 0.0 <= pipe.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp402;
  modelica_metatype tmpMeta403;
  static int tmp404 = 0;
  if(!tmp404)
  {
    tmp399 = GreaterEq((data->simulationInfo->realParameter[144] /* pipe.p_b_start PARAM */),0.0);
    tmp400 = LessEq((data->simulationInfo->realParameter[144] /* pipe.p_b_start PARAM */),100000000.0);
    if(!(tmp399 && tmp400))
    {
      tmp402 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[144] /* pipe.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta403 = stringAppend(MMC_REFSTRINGLIT(tmp401),tmp402);
      {
        const char* assert_cond = "(pipe.p_b_start >= 0.0 and pipe.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",812,3,814,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta403));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",812,3,814,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta403));
        }
      }
      tmp404 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1443
type: ALGORITHM

  assert(pipe.p_a_start >= 0.0 and pipe.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.p_a_start <= 100000000.0, has value: " + String(pipe.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,88,"Variable violating min/max constraint: 0.0 <= pipe.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp408;
  modelica_metatype tmpMeta409;
  static int tmp410 = 0;
  if(!tmp410)
  {
    tmp405 = GreaterEq((data->simulationInfo->realParameter[143] /* pipe.p_a_start PARAM */),0.0);
    tmp406 = LessEq((data->simulationInfo->realParameter[143] /* pipe.p_a_start PARAM */),100000000.0);
    if(!(tmp405 && tmp406))
    {
      tmp408 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[143] /* pipe.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta409 = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        const char* assert_cond = "(pipe.p_a_start >= 0.0 and pipe.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",809,3,811,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta409));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",809,3,811,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta409));
        }
      }
      tmp410 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1444
type: ALGORITHM

  assert(pipe.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,167,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp414;
  modelica_metatype tmpMeta415;
  static int tmp416 = 0;
  if(!tmp416)
  {
    tmp411 = GreaterEq((data->simulationInfo->integerParameter[31] /* pipe.traceDynamics PARAM */),1);
    tmp412 = LessEq((data->simulationInfo->integerParameter[31] /* pipe.traceDynamics PARAM */),4);
    if(!(tmp411 && tmp412))
    {
      tmp414 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[31] /* pipe.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta415 = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      {
        const char* assert_cond = "(pipe.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",804,3,806,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta415));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",804,3,806,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta415));
        }
      }
      tmp416 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1445
type: ALGORITHM

  assert(pipe.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp420;
  modelica_metatype tmpMeta421;
  static int tmp422 = 0;
  if(!tmp422)
  {
    tmp417 = GreaterEq((data->simulationInfo->integerParameter[30] /* pipe.substanceDynamics PARAM */),1);
    tmp418 = LessEq((data->simulationInfo->integerParameter[30] /* pipe.substanceDynamics PARAM */),4);
    if(!(tmp417 && tmp418))
    {
      tmp420 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[30] /* pipe.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta421 = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        const char* assert_cond = "(pipe.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",801,3,803,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",801,3,803,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta421));
        }
      }
      tmp422 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1446
type: ALGORITHM

  assert(pipe.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  static const MMC_DEFSTRINGLIT(tmp425,166,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp426;
  modelica_metatype tmpMeta427;
  static int tmp428 = 0;
  if(!tmp428)
  {
    tmp423 = GreaterEq((data->simulationInfo->integerParameter[22] /* pipe.massDynamics PARAM */),1);
    tmp424 = LessEq((data->simulationInfo->integerParameter[22] /* pipe.massDynamics PARAM */),4);
    if(!(tmp423 && tmp424))
    {
      tmp426 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[22] /* pipe.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta427 = stringAppend(MMC_REFSTRINGLIT(tmp425),tmp426);
      {
        const char* assert_cond = "(pipe.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",798,3,800,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta427));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",798,3,800,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta427));
        }
      }
      tmp428 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1447
type: ALGORITHM

  assert(pipe.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  static const MMC_DEFSTRINGLIT(tmp431,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp432;
  modelica_metatype tmpMeta433;
  static int tmp434 = 0;
  if(!tmp434)
  {
    tmp429 = GreaterEq((data->simulationInfo->integerParameter[16] /* pipe.energyDynamics PARAM */),1);
    tmp430 = LessEq((data->simulationInfo->integerParameter[16] /* pipe.energyDynamics PARAM */),4);
    if(!(tmp429 && tmp430))
    {
      tmp432 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[16] /* pipe.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta433 = stringAppend(MMC_REFSTRINGLIT(tmp431),tmp432);
      {
        const char* assert_cond = "(pipe.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",795,3,797,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta433));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",795,3,797,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta433));
        }
      }
      tmp434 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1448
type: ALGORITHM

  assert(radiator.nParallel >= 1.0, "Variable violating min constraint: 1.0 <= radiator.nParallel, has value: " + String(radiator.nParallel, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  modelica_boolean tmp435;
  static const MMC_DEFSTRINGLIT(tmp436,73,"Variable violating min constraint: 1.0 <= radiator.nParallel, has value: ");
  modelica_string tmp437;
  modelica_metatype tmpMeta438;
  static int tmp439 = 0;
  if(!tmp439)
  {
    tmp435 = GreaterEq((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */),1.0);
    if(!tmp435)
    {
      tmp437 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta438 = stringAppend(MMC_REFSTRINGLIT(tmp436),tmp437);
      {
        const char* assert_cond = "(radiator.nParallel >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",229,7,230,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta438));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",229,7,230,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta438));
        }
      }
      tmp439 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1449
type: ALGORITHM

  assert(radiator.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= radiator.heatTransfer.T_ambient, has value: " + String(radiator.heatTransfer.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,86,"Variable violating min constraint: 0.0 <= radiator.heatTransfer.T_ambient, has value: ");
  modelica_string tmp442;
  modelica_metatype tmpMeta443;
  static int tmp444 = 0;
  if(!tmp444)
  {
    tmp440 = GreaterEq((data->simulationInfo->realParameter[219] /* radiator.heatTransfer.T_ambient PARAM */),0.0);
    if(!tmp440)
    {
      tmp442 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[219] /* radiator.heatTransfer.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta443 = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        const char* assert_cond = "(radiator.heatTransfer.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta443));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta443));
        }
      }
      tmp444 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1450
type: ALGORITHM

  assert(radiator.flowModel.mu_nominal >= 0.0, "Variable violating min constraint: 0.0 <= radiator.flowModel.mu_nominal, has value: " + String(radiator.flowModel.mu_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  modelica_boolean tmp445;
  static const MMC_DEFSTRINGLIT(tmp446,84,"Variable violating min constraint: 0.0 <= radiator.flowModel.mu_nominal, has value: ");
  modelica_string tmp447;
  modelica_metatype tmpMeta448;
  static int tmp449 = 0;
  if(!tmp449)
  {
    tmp445 = GreaterEq((data->simulationInfo->realParameter[210] /* radiator.flowModel.mu_nominal PARAM */),0.0);
    if(!tmp445)
    {
      tmp447 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[210] /* radiator.flowModel.mu_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta448 = stringAppend(MMC_REFSTRINGLIT(tmp446),tmp447);
      {
        const char* assert_cond = "(radiator.flowModel.mu_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1014,13,1018,74,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta448));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1014,13,1018,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta448));
        }
      }
      tmp449 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1451
type: ALGORITHM

  assert(radiator.flowModel.rho_nominal >= 0.0, "Variable violating min constraint: 0.0 <= radiator.flowModel.rho_nominal, has value: " + String(radiator.flowModel.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,85,"Variable violating min constraint: 0.0 <= radiator.flowModel.rho_nominal, has value: ");
  modelica_string tmp452;
  modelica_metatype tmpMeta453;
  static int tmp454 = 0;
  if(!tmp454)
  {
    tmp450 = GreaterEq((data->simulationInfo->realParameter[214] /* radiator.flowModel.rho_nominal PARAM */),0.0);
    if(!tmp450)
    {
      tmp452 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[214] /* radiator.flowModel.rho_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta453 = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      {
        const char* assert_cond = "(radiator.flowModel.rho_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1007,13,1009,75,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta453));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1007,13,1009,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta453));
        }
      }
      tmp454 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1452
type: ALGORITHM

  assert(radiator.flowModel.p_b_start >= 0.0 and radiator.flowModel.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.p_b_start <= 100000000.0, has value: " + String(radiator.flowModel.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  static const MMC_DEFSTRINGLIT(tmp457,102,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp458;
  modelica_metatype tmpMeta459;
  static int tmp460 = 0;
  if(!tmp460)
  {
    tmp455 = GreaterEq((data->simulationInfo->realParameter[213] /* radiator.flowModel.p_b_start PARAM */),0.0);
    tmp456 = LessEq((data->simulationInfo->realParameter[213] /* radiator.flowModel.p_b_start PARAM */),100000000.0);
    if(!(tmp455 && tmp456))
    {
      tmp458 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[213] /* radiator.flowModel.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta459 = stringAppend(MMC_REFSTRINGLIT(tmp457),tmp458);
      {
        const char* assert_cond = "(radiator.flowModel.p_b_start >= 0.0 and radiator.flowModel.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",959,13,961,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta459));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",959,13,961,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta459));
        }
      }
      tmp460 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1453
type: ALGORITHM

  assert(radiator.flowModel.p_a_start >= 0.0 and radiator.flowModel.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.p_a_start <= 100000000.0, has value: " + String(radiator.flowModel.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  modelica_boolean tmp461;
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,102,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp464;
  modelica_metatype tmpMeta465;
  static int tmp466 = 0;
  if(!tmp466)
  {
    tmp461 = GreaterEq((data->simulationInfo->realParameter[212] /* radiator.flowModel.p_a_start PARAM */),0.0);
    tmp462 = LessEq((data->simulationInfo->realParameter[212] /* radiator.flowModel.p_a_start PARAM */),100000000.0);
    if(!(tmp461 && tmp462))
    {
      tmp464 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[212] /* radiator.flowModel.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta465 = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        const char* assert_cond = "(radiator.flowModel.p_a_start >= 0.0 and radiator.flowModel.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",956,13,958,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta465));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",956,13,958,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta465));
        }
      }
      tmp466 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1454
type: ALGORITHM

  assert(radiator.flowModel.m_flow_start >= -100000.0 and radiator.flowModel.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= radiator.flowModel.m_flow_start <= 100000.0, has value: " + String(radiator.flowModel.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  modelica_boolean tmp467;
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,108,"Variable violating min/max constraint: -100000.0 <= radiator.flowModel.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp470;
  modelica_metatype tmpMeta471;
  static int tmp472 = 0;
  if(!tmp472)
  {
    tmp467 = GreaterEq((data->simulationInfo->realParameter[209] /* radiator.flowModel.m_flow_start PARAM */),-100000.0);
    tmp468 = LessEq((data->simulationInfo->realParameter[209] /* radiator.flowModel.m_flow_start PARAM */),100000.0);
    if(!(tmp467 && tmp468))
    {
      tmp470 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[209] /* radiator.flowModel.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta471 = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      {
        const char* assert_cond = "(radiator.flowModel.m_flow_start >= -100000.0 and radiator.flowModel.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",953,13,955,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta471));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",953,13,955,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta471));
        }
      }
      tmp472 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1455
type: ALGORITHM

  assert(radiator.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(radiator.flowModel.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  modelica_boolean tmp473;
  modelica_boolean tmp474;
  static const MMC_DEFSTRINGLIT(tmp475,184,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp476;
  modelica_metatype tmpMeta477;
  static int tmp478 = 0;
  if(!tmp478)
  {
    tmp473 = GreaterEq((data->simulationInfo->integerParameter[41] /* radiator.flowModel.momentumDynamics PARAM */),1);
    tmp474 = LessEq((data->simulationInfo->integerParameter[41] /* radiator.flowModel.momentumDynamics PARAM */),4);
    if(!(tmp473 && tmp474))
    {
      tmp476 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[41] /* radiator.flowModel.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta477 = stringAppend(MMC_REFSTRINGLIT(tmp475),tmp476);
      {
        const char* assert_cond = "(radiator.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",948,13,950,109,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta477));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",948,13,950,109,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta477));
        }
      }
      tmp478 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1456
type: ALGORITHM

  assert(radiator.modelStructure >= Modelica.Fluid.Types.ModelStructure.av_vb and radiator.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, "Variable violating min/max constraint: Modelica.Fluid.Types.ModelStructure.av_vb <= radiator.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, has value: " + String(radiator.modelStructure, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  modelica_boolean tmp479;
  modelica_boolean tmp480;
  static const MMC_DEFSTRINGLIT(tmp481,164,"Variable violating min/max constraint: Modelica.Fluid.Types.ModelStructure.av_vb <= radiator.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, has value: ");
  modelica_string tmp482;
  modelica_metatype tmpMeta483;
  static int tmp484 = 0;
  if(!tmp484)
  {
    tmp479 = GreaterEq((data->simulationInfo->integerParameter[46] /* radiator.modelStructure PARAM */),1);
    tmp480 = LessEq((data->simulationInfo->integerParameter[46] /* radiator.modelStructure PARAM */),4);
    if(!(tmp479 && tmp480))
    {
      tmp482 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[46] /* radiator.modelStructure PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta483 = stringAppend(MMC_REFSTRINGLIT(tmp481),tmp482);
      {
        const char* assert_cond = "(radiator.modelStructure >= Modelica.Fluid.Types.ModelStructure.av_vb and radiator.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",327,7,329,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta483));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",327,7,329,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta483));
        }
      }
      tmp484 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1457
type: ALGORITHM

  assert(radiator.nNodes >= 1, "Variable violating min constraint: 1 <= radiator.nNodes, has value: " + String(radiator.nNodes, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  modelica_boolean tmp485;
  static const MMC_DEFSTRINGLIT(tmp486,68,"Variable violating min constraint: 1 <= radiator.nNodes, has value: ");
  modelica_string tmp487;
  modelica_metatype tmpMeta488;
  static int tmp489 = 0;
  if(!tmp489)
  {
    tmp485 = GreaterEq((data->simulationInfo->integerParameter[52] /* radiator.nNodes PARAM */),((modelica_integer) 1));
    if(!tmp485)
    {
      tmp487 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[52] /* radiator.nNodes PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta488 = stringAppend(MMC_REFSTRINGLIT(tmp486),tmp487);
      {
        const char* assert_cond = "(radiator.nNodes >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",324,7,325,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta488));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",324,7,325,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta488));
        }
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1458
type: ALGORITHM

  assert(radiator.m_flow_start >= -100000.0 and radiator.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= radiator.m_flow_start <= 100000.0, has value: " + String(radiator.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  static const MMC_DEFSTRINGLIT(tmp492,98,"Variable violating min/max constraint: -100000.0 <= radiator.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp493;
  modelica_metatype tmpMeta494;
  static int tmp495 = 0;
  if(!tmp495)
  {
    tmp490 = GreaterEq((data->simulationInfo->realParameter[227] /* radiator.m_flow_start PARAM */),-100000.0);
    tmp491 = LessEq((data->simulationInfo->realParameter[227] /* radiator.m_flow_start PARAM */),100000.0);
    if(!(tmp490 && tmp491))
    {
      tmp493 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[227] /* radiator.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta494 = stringAppend(MMC_REFSTRINGLIT(tmp492),tmp493);
      {
        const char* assert_cond = "(radiator.m_flow_start >= -100000.0 and radiator.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",319,7,321,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta494));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",319,7,321,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta494));
        }
      }
      tmp495 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1459
type: ALGORITHM

  assert(radiator.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(radiator.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  modelica_boolean tmp496;
  modelica_boolean tmp497;
  static const MMC_DEFSTRINGLIT(tmp498,174,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp499;
  modelica_metatype tmpMeta500;
  static int tmp501 = 0;
  if(!tmp501)
  {
    tmp496 = GreaterEq((data->simulationInfo->integerParameter[47] /* radiator.momentumDynamics PARAM */),1);
    tmp497 = LessEq((data->simulationInfo->integerParameter[47] /* radiator.momentumDynamics PARAM */),4);
    if(!(tmp496 && tmp497))
    {
      tmp499 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[47] /* radiator.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta500 = stringAppend(MMC_REFSTRINGLIT(tmp498),tmp499);
      {
        const char* assert_cond = "(radiator.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",314,7,316,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta500));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",314,7,316,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta500));
        }
      }
      tmp501 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1460
type: ALGORITHM

  assert(radiator.X_start[1] >= 0.0 and radiator.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= radiator.X_start[1] <= 1.0, has value: " + String(radiator.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  modelica_boolean tmp502;
  modelica_boolean tmp503;
  static const MMC_DEFSTRINGLIT(tmp504,85,"Variable violating min/max constraint: 0.0 <= radiator.X_start[1] <= 1.0, has value: ");
  modelica_string tmp505;
  modelica_metatype tmpMeta506;
  static int tmp507 = 0;
  if(!tmp507)
  {
    tmp502 = GreaterEq((data->simulationInfo->realParameter[182] /* radiator.X_start[1] PARAM */),0.0);
    tmp503 = LessEq((data->simulationInfo->realParameter[182] /* radiator.X_start[1] PARAM */),1.0);
    if(!(tmp502 && tmp503))
    {
      tmp505 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[182] /* radiator.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta506 = stringAppend(MMC_REFSTRINGLIT(tmp504),tmp505);
      {
        const char* assert_cond = "(radiator.X_start[1] >= 0.0 and radiator.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",834,3,836,69,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",834,3,836,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta506));
        }
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1461
type: ALGORITHM

  assert(radiator.h_start >= -10000000000.0 and radiator.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= radiator.h_start <= 10000000000.0, has value: " + String(radiator.h_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,103,"Variable violating min/max constraint: -10000000000.0 <= radiator.h_start <= 10000000000.0, has value: ");
  modelica_string tmp511;
  modelica_metatype tmpMeta512;
  static int tmp513 = 0;
  if(!tmp513)
  {
    tmp508 = GreaterEq((data->simulationInfo->realParameter[218] /* radiator.h_start PARAM */),-10000000000.0);
    tmp509 = LessEq((data->simulationInfo->realParameter[218] /* radiator.h_start PARAM */),10000000000.0);
    if(!(tmp508 && tmp509))
    {
      tmp511 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[218] /* radiator.h_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta512 = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      {
        const char* assert_cond = "(radiator.h_start >= -10000000000.0 and radiator.h_start <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",828,3,833,88,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta512));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",828,3,833,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta512));
        }
      }
      tmp513 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1462
type: ALGORITHM

  assert(radiator.T_start >= 1.0 and radiator.T_start <= 10000.0, "Variable violating min/max constraint: 1.0 <= radiator.T_start <= 10000.0, has value: " + String(radiator.T_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  modelica_boolean tmp514;
  modelica_boolean tmp515;
  static const MMC_DEFSTRINGLIT(tmp516,86,"Variable violating min/max constraint: 1.0 <= radiator.T_start <= 10000.0, has value: ");
  modelica_string tmp517;
  modelica_metatype tmpMeta518;
  static int tmp519 = 0;
  if(!tmp519)
  {
    tmp514 = GreaterEq((data->simulationInfo->realParameter[180] /* radiator.T_start PARAM */),1.0);
    tmp515 = LessEq((data->simulationInfo->realParameter[180] /* radiator.T_start PARAM */),10000.0);
    if(!(tmp514 && tmp515))
    {
      tmp517 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[180] /* radiator.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta518 = stringAppend(MMC_REFSTRINGLIT(tmp516),tmp517);
      {
        const char* assert_cond = "(radiator.T_start >= 1.0 and radiator.T_start <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",822,3,827,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",822,3,827,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        }
      }
      tmp519 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1463
type: ALGORITHM

  assert(radiator.ps_start[1] >= 0.0 and radiator.ps_start[1] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.ps_start[1] <= 100000000.0, has value: " + String(radiator.ps_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  modelica_boolean tmp520;
  modelica_boolean tmp521;
  static const MMC_DEFSTRINGLIT(tmp522,94,"Variable violating min/max constraint: 0.0 <= radiator.ps_start[1] <= 100000000.0, has value: ");
  modelica_string tmp523;
  modelica_metatype tmpMeta524;
  static int tmp525 = 0;
  if(!tmp525)
  {
    tmp520 = GreaterEq((data->simulationInfo->realParameter[232] /* radiator.ps_start[1] PARAM */),0.0);
    tmp521 = LessEq((data->simulationInfo->realParameter[232] /* radiator.ps_start[1] PARAM */),100000000.0);
    if(!(tmp520 && tmp521))
    {
      tmp523 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[232] /* radiator.ps_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta524 = stringAppend(MMC_REFSTRINGLIT(tmp522),tmp523);
      {
        const char* assert_cond = "(radiator.ps_start[1] >= 0.0 and radiator.ps_start[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta524));
        }
      }
      tmp525 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1464
type: ALGORITHM

  assert(radiator.p_b_start >= 0.0 and radiator.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.p_b_start <= 100000000.0, has value: " + String(radiator.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  modelica_boolean tmp526;
  modelica_boolean tmp527;
  static const MMC_DEFSTRINGLIT(tmp528,92,"Variable violating min/max constraint: 0.0 <= radiator.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp529;
  modelica_metatype tmpMeta530;
  static int tmp531 = 0;
  if(!tmp531)
  {
    tmp526 = GreaterEq((data->simulationInfo->realParameter[230] /* radiator.p_b_start PARAM */),0.0);
    tmp527 = LessEq((data->simulationInfo->realParameter[230] /* radiator.p_b_start PARAM */),100000000.0);
    if(!(tmp526 && tmp527))
    {
      tmp529 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[230] /* radiator.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta530 = stringAppend(MMC_REFSTRINGLIT(tmp528),tmp529);
      {
        const char* assert_cond = "(radiator.p_b_start >= 0.0 and radiator.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",812,3,814,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta530));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",812,3,814,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta530));
        }
      }
      tmp531 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1465
type: ALGORITHM

  assert(radiator.p_a_start >= 0.0 and radiator.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.p_a_start <= 100000000.0, has value: " + String(radiator.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  modelica_boolean tmp532;
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,92,"Variable violating min/max constraint: 0.0 <= radiator.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp535;
  modelica_metatype tmpMeta536;
  static int tmp537 = 0;
  if(!tmp537)
  {
    tmp532 = GreaterEq((data->simulationInfo->realParameter[229] /* radiator.p_a_start PARAM */),0.0);
    tmp533 = LessEq((data->simulationInfo->realParameter[229] /* radiator.p_a_start PARAM */),100000000.0);
    if(!(tmp532 && tmp533))
    {
      tmp535 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[229] /* radiator.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta536 = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        const char* assert_cond = "(radiator.p_a_start >= 0.0 and radiator.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",809,3,811,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",809,3,811,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta536));
        }
      }
      tmp537 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1466
type: ALGORITHM

  assert(radiator.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(radiator.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp541;
  modelica_metatype tmpMeta542;
  static int tmp543 = 0;
  if(!tmp543)
  {
    tmp538 = GreaterEq((data->simulationInfo->integerParameter[54] /* radiator.traceDynamics PARAM */),1);
    tmp539 = LessEq((data->simulationInfo->integerParameter[54] /* radiator.traceDynamics PARAM */),4);
    if(!(tmp538 && tmp539))
    {
      tmp541 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[54] /* radiator.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta542 = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        const char* assert_cond = "(radiator.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",804,3,806,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta542));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",804,3,806,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta542));
        }
      }
      tmp543 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1467
type: ALGORITHM

  assert(radiator.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(radiator.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  modelica_boolean tmp544;
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,175,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp547;
  modelica_metatype tmpMeta548;
  static int tmp549 = 0;
  if(!tmp549)
  {
    tmp544 = GreaterEq((data->simulationInfo->integerParameter[53] /* radiator.substanceDynamics PARAM */),1);
    tmp545 = LessEq((data->simulationInfo->integerParameter[53] /* radiator.substanceDynamics PARAM */),4);
    if(!(tmp544 && tmp545))
    {
      tmp547 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[53] /* radiator.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta548 = stringAppend(MMC_REFSTRINGLIT(tmp546),tmp547);
      {
        const char* assert_cond = "(radiator.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",801,3,803,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta548));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",801,3,803,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta548));
        }
      }
      tmp549 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1468
type: ALGORITHM

  assert(radiator.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(radiator.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  modelica_boolean tmp550;
  modelica_boolean tmp551;
  static const MMC_DEFSTRINGLIT(tmp552,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp553;
  modelica_metatype tmpMeta554;
  static int tmp555 = 0;
  if(!tmp555)
  {
    tmp550 = GreaterEq((data->simulationInfo->integerParameter[45] /* radiator.massDynamics PARAM */),1);
    tmp551 = LessEq((data->simulationInfo->integerParameter[45] /* radiator.massDynamics PARAM */),4);
    if(!(tmp550 && tmp551))
    {
      tmp553 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[45] /* radiator.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta554 = stringAppend(MMC_REFSTRINGLIT(tmp552),tmp553);
      {
        const char* assert_cond = "(radiator.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",798,3,800,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta554));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",798,3,800,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta554));
        }
      }
      tmp555 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1469
type: ALGORITHM

  assert(radiator.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(radiator.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  modelica_boolean tmp556;
  modelica_boolean tmp557;
  static const MMC_DEFSTRINGLIT(tmp558,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= radiator.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp559;
  modelica_metatype tmpMeta560;
  static int tmp561 = 0;
  if(!tmp561)
  {
    tmp556 = GreaterEq((data->simulationInfo->integerParameter[39] /* radiator.energyDynamics PARAM */),1);
    tmp557 = LessEq((data->simulationInfo->integerParameter[39] /* radiator.energyDynamics PARAM */),4);
    if(!(tmp556 && tmp557))
    {
      tmp559 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[39] /* radiator.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta560 = stringAppend(MMC_REFSTRINGLIT(tmp558),tmp559);
      {
        const char* assert_cond = "(radiator.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and radiator.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",795,3,797,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta560));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",795,3,797,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta560));
        }
      }
      tmp561 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1470
type: ALGORITHM

  assert(heater.nParallel >= 1.0, "Variable violating min constraint: 1.0 <= heater.nParallel, has value: " + String(heater.nParallel, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  modelica_boolean tmp562;
  static const MMC_DEFSTRINGLIT(tmp563,71,"Variable violating min constraint: 1.0 <= heater.nParallel, has value: ");
  modelica_string tmp564;
  modelica_metatype tmpMeta565;
  static int tmp566 = 0;
  if(!tmp566)
  {
    tmp562 = GreaterEq((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */),1.0);
    if(!tmp562)
    {
      tmp564 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta565 = stringAppend(MMC_REFSTRINGLIT(tmp563),tmp564);
      {
        const char* assert_cond = "(heater.nParallel >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",229,7,230,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta565));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",229,7,230,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta565));
        }
      }
      tmp566 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1471
type: ALGORITHM

  assert(heater.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= heater.heatTransfer.T_ambient, has value: " + String(heater.heatTransfer.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  modelica_boolean tmp567;
  static const MMC_DEFSTRINGLIT(tmp568,84,"Variable violating min constraint: 0.0 <= heater.heatTransfer.T_ambient, has value: ");
  modelica_string tmp569;
  modelica_metatype tmpMeta570;
  static int tmp571 = 0;
  if(!tmp571)
  {
    tmp567 = GreaterEq((data->simulationInfo->realParameter[72] /* heater.heatTransfer.T_ambient PARAM */),0.0);
    if(!tmp567)
    {
      tmp569 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[72] /* heater.heatTransfer.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta570 = stringAppend(MMC_REFSTRINGLIT(tmp568),tmp569);
      {
        const char* assert_cond = "(heater.heatTransfer.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta570));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta570));
        }
      }
      tmp571 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1472
type: ALGORITHM

  assert(heater.flowModel.mu_nominal >= 0.0, "Variable violating min constraint: 0.0 <= heater.flowModel.mu_nominal, has value: " + String(heater.flowModel.mu_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  modelica_boolean tmp572;
  static const MMC_DEFSTRINGLIT(tmp573,82,"Variable violating min constraint: 0.0 <= heater.flowModel.mu_nominal, has value: ");
  modelica_string tmp574;
  modelica_metatype tmpMeta575;
  static int tmp576 = 0;
  if(!tmp576)
  {
    tmp572 = GreaterEq((data->simulationInfo->realParameter[62] /* heater.flowModel.mu_nominal PARAM */),0.0);
    if(!tmp572)
    {
      tmp574 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[62] /* heater.flowModel.mu_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta575 = stringAppend(MMC_REFSTRINGLIT(tmp573),tmp574);
      {
        const char* assert_cond = "(heater.flowModel.mu_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1014,13,1018,74,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta575));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1014,13,1018,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta575));
        }
      }
      tmp576 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1473
type: ALGORITHM

  assert(heater.flowModel.rho_nominal >= 0.0, "Variable violating min constraint: 0.0 <= heater.flowModel.rho_nominal, has value: " + String(heater.flowModel.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  modelica_boolean tmp577;
  static const MMC_DEFSTRINGLIT(tmp578,83,"Variable violating min constraint: 0.0 <= heater.flowModel.rho_nominal, has value: ");
  modelica_string tmp579;
  modelica_metatype tmpMeta580;
  static int tmp581 = 0;
  if(!tmp581)
  {
    tmp577 = GreaterEq((data->simulationInfo->realParameter[66] /* heater.flowModel.rho_nominal PARAM */),0.0);
    if(!tmp577)
    {
      tmp579 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[66] /* heater.flowModel.rho_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta580 = stringAppend(MMC_REFSTRINGLIT(tmp578),tmp579);
      {
        const char* assert_cond = "(heater.flowModel.rho_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1007,13,1009,75,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta580));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",1007,13,1009,75,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta580));
        }
      }
      tmp581 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1474
type: ALGORITHM

  assert(heater.flowModel.p_b_start >= 0.0 and heater.flowModel.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.p_b_start <= 100000000.0, has value: " + String(heater.flowModel.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  modelica_boolean tmp582;
  modelica_boolean tmp583;
  static const MMC_DEFSTRINGLIT(tmp584,100,"Variable violating min/max constraint: 0.0 <= heater.flowModel.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp585;
  modelica_metatype tmpMeta586;
  static int tmp587 = 0;
  if(!tmp587)
  {
    tmp582 = GreaterEq((data->simulationInfo->realParameter[65] /* heater.flowModel.p_b_start PARAM */),0.0);
    tmp583 = LessEq((data->simulationInfo->realParameter[65] /* heater.flowModel.p_b_start PARAM */),100000000.0);
    if(!(tmp582 && tmp583))
    {
      tmp585 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[65] /* heater.flowModel.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta586 = stringAppend(MMC_REFSTRINGLIT(tmp584),tmp585);
      {
        const char* assert_cond = "(heater.flowModel.p_b_start >= 0.0 and heater.flowModel.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",959,13,961,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta586));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",959,13,961,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta586));
        }
      }
      tmp587 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1475
type: ALGORITHM

  assert(heater.flowModel.p_a_start >= 0.0 and heater.flowModel.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.p_a_start <= 100000000.0, has value: " + String(heater.flowModel.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  modelica_boolean tmp588;
  modelica_boolean tmp589;
  static const MMC_DEFSTRINGLIT(tmp590,100,"Variable violating min/max constraint: 0.0 <= heater.flowModel.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp591;
  modelica_metatype tmpMeta592;
  static int tmp593 = 0;
  if(!tmp593)
  {
    tmp588 = GreaterEq((data->simulationInfo->realParameter[64] /* heater.flowModel.p_a_start PARAM */),0.0);
    tmp589 = LessEq((data->simulationInfo->realParameter[64] /* heater.flowModel.p_a_start PARAM */),100000000.0);
    if(!(tmp588 && tmp589))
    {
      tmp591 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[64] /* heater.flowModel.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta592 = stringAppend(MMC_REFSTRINGLIT(tmp590),tmp591);
      {
        const char* assert_cond = "(heater.flowModel.p_a_start >= 0.0 and heater.flowModel.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",956,13,958,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta592));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",956,13,958,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta592));
        }
      }
      tmp593 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1476
type: ALGORITHM

  assert(heater.flowModel.m_flow_start >= -100000.0 and heater.flowModel.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= heater.flowModel.m_flow_start <= 100000.0, has value: " + String(heater.flowModel.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  static const MMC_DEFSTRINGLIT(tmp596,106,"Variable violating min/max constraint: -100000.0 <= heater.flowModel.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp597;
  modelica_metatype tmpMeta598;
  static int tmp599 = 0;
  if(!tmp599)
  {
    tmp594 = GreaterEq((data->simulationInfo->realParameter[61] /* heater.flowModel.m_flow_start PARAM */),-100000.0);
    tmp595 = LessEq((data->simulationInfo->realParameter[61] /* heater.flowModel.m_flow_start PARAM */),100000.0);
    if(!(tmp594 && tmp595))
    {
      tmp597 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[61] /* heater.flowModel.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta598 = stringAppend(MMC_REFSTRINGLIT(tmp596),tmp597);
      {
        const char* assert_cond = "(heater.flowModel.m_flow_start >= -100000.0 and heater.flowModel.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",953,13,955,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta598));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",953,13,955,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta598));
        }
      }
      tmp599 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1477
type: ALGORITHM

  assert(heater.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(heater.flowModel.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  modelica_boolean tmp600;
  modelica_boolean tmp601;
  static const MMC_DEFSTRINGLIT(tmp602,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp603;
  modelica_metatype tmpMeta604;
  static int tmp605 = 0;
  if(!tmp605)
  {
    tmp600 = GreaterEq((data->simulationInfo->integerParameter[2] /* heater.flowModel.momentumDynamics PARAM */),1);
    tmp601 = LessEq((data->simulationInfo->integerParameter[2] /* heater.flowModel.momentumDynamics PARAM */),4);
    if(!(tmp600 && tmp601))
    {
      tmp603 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[2] /* heater.flowModel.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta604 = stringAppend(MMC_REFSTRINGLIT(tmp602),tmp603);
      {
        const char* assert_cond = "(heater.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",948,13,950,109,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta604));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",948,13,950,109,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta604));
        }
      }
      tmp605 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1478
type: ALGORITHM

  assert(heater.modelStructure >= Modelica.Fluid.Types.ModelStructure.av_vb and heater.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, "Variable violating min/max constraint: Modelica.Fluid.Types.ModelStructure.av_vb <= heater.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, has value: " + String(heater.modelStructure, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  modelica_boolean tmp606;
  modelica_boolean tmp607;
  static const MMC_DEFSTRINGLIT(tmp608,162,"Variable violating min/max constraint: Modelica.Fluid.Types.ModelStructure.av_vb <= heater.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb, has value: ");
  modelica_string tmp609;
  modelica_metatype tmpMeta610;
  static int tmp611 = 0;
  if(!tmp611)
  {
    tmp606 = GreaterEq((data->simulationInfo->integerParameter[7] /* heater.modelStructure PARAM */),1);
    tmp607 = LessEq((data->simulationInfo->integerParameter[7] /* heater.modelStructure PARAM */),4);
    if(!(tmp606 && tmp607))
    {
      tmp609 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[7] /* heater.modelStructure PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta610 = stringAppend(MMC_REFSTRINGLIT(tmp608),tmp609);
      {
        const char* assert_cond = "(heater.modelStructure >= Modelica.Fluid.Types.ModelStructure.av_vb and heater.modelStructure <= Modelica.Fluid.Types.ModelStructure.a_vb)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",327,7,329,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta610));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",327,7,329,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta610));
        }
      }
      tmp611 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1479
type: ALGORITHM

  assert(heater.nNodes >= 1, "Variable violating min constraint: 1 <= heater.nNodes, has value: " + String(heater.nNodes, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  modelica_boolean tmp612;
  static const MMC_DEFSTRINGLIT(tmp613,66,"Variable violating min constraint: 1 <= heater.nNodes, has value: ");
  modelica_string tmp614;
  modelica_metatype tmpMeta615;
  static int tmp616 = 0;
  if(!tmp616)
  {
    tmp612 = GreaterEq((data->simulationInfo->integerParameter[13] /* heater.nNodes PARAM */),((modelica_integer) 1));
    if(!tmp612)
    {
      tmp614 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[13] /* heater.nNodes PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta615 = stringAppend(MMC_REFSTRINGLIT(tmp613),tmp614);
      {
        const char* assert_cond = "(heater.nNodes >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",324,7,325,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta615));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",324,7,325,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta615));
        }
      }
      tmp616 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1480
type: ALGORITHM

  assert(heater.m_flow_start >= -100000.0 and heater.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= heater.m_flow_start <= 100000.0, has value: " + String(heater.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  modelica_boolean tmp617;
  modelica_boolean tmp618;
  static const MMC_DEFSTRINGLIT(tmp619,96,"Variable violating min/max constraint: -100000.0 <= heater.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp620;
  modelica_metatype tmpMeta621;
  static int tmp622 = 0;
  if(!tmp622)
  {
    tmp617 = GreaterEq((data->simulationInfo->realParameter[80] /* heater.m_flow_start PARAM */),-100000.0);
    tmp618 = LessEq((data->simulationInfo->realParameter[80] /* heater.m_flow_start PARAM */),100000.0);
    if(!(tmp617 && tmp618))
    {
      tmp620 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[80] /* heater.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta621 = stringAppend(MMC_REFSTRINGLIT(tmp619),tmp620);
      {
        const char* assert_cond = "(heater.m_flow_start >= -100000.0 and heater.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",319,7,321,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta621));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",319,7,321,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta621));
        }
      }
      tmp622 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1481
type: ALGORITHM

  assert(heater.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(heater.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  modelica_boolean tmp623;
  modelica_boolean tmp624;
  static const MMC_DEFSTRINGLIT(tmp625,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp626;
  modelica_metatype tmpMeta627;
  static int tmp628 = 0;
  if(!tmp628)
  {
    tmp623 = GreaterEq((data->simulationInfo->integerParameter[8] /* heater.momentumDynamics PARAM */),1);
    tmp624 = LessEq((data->simulationInfo->integerParameter[8] /* heater.momentumDynamics PARAM */),4);
    if(!(tmp623 && tmp624))
    {
      tmp626 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[8] /* heater.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta627 = stringAppend(MMC_REFSTRINGLIT(tmp625),tmp626);
      {
        const char* assert_cond = "(heater.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",314,7,316,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta627));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",314,7,316,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta627));
        }
      }
      tmp628 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1482
type: ALGORITHM

  assert(heater.X_start[1] >= 0.0 and heater.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= heater.X_start[1] <= 1.0, has value: " + String(heater.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  static const MMC_DEFSTRINGLIT(tmp631,83,"Variable violating min/max constraint: 0.0 <= heater.X_start[1] <= 1.0, has value: ");
  modelica_string tmp632;
  modelica_metatype tmpMeta633;
  static int tmp634 = 0;
  if(!tmp634)
  {
    tmp629 = GreaterEq((data->simulationInfo->realParameter[34] /* heater.X_start[1] PARAM */),0.0);
    tmp630 = LessEq((data->simulationInfo->realParameter[34] /* heater.X_start[1] PARAM */),1.0);
    if(!(tmp629 && tmp630))
    {
      tmp632 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[34] /* heater.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta633 = stringAppend(MMC_REFSTRINGLIT(tmp631),tmp632);
      {
        const char* assert_cond = "(heater.X_start[1] >= 0.0 and heater.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",834,3,836,69,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta633));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",834,3,836,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta633));
        }
      }
      tmp634 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1483
type: ALGORITHM

  assert(heater.h_start >= -10000000000.0 and heater.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= heater.h_start <= 10000000000.0, has value: " + String(heater.h_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  modelica_boolean tmp635;
  modelica_boolean tmp636;
  static const MMC_DEFSTRINGLIT(tmp637,101,"Variable violating min/max constraint: -10000000000.0 <= heater.h_start <= 10000000000.0, has value: ");
  modelica_string tmp638;
  modelica_metatype tmpMeta639;
  static int tmp640 = 0;
  if(!tmp640)
  {
    tmp635 = GreaterEq((data->simulationInfo->realParameter[71] /* heater.h_start PARAM */),-10000000000.0);
    tmp636 = LessEq((data->simulationInfo->realParameter[71] /* heater.h_start PARAM */),10000000000.0);
    if(!(tmp635 && tmp636))
    {
      tmp638 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[71] /* heater.h_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta639 = stringAppend(MMC_REFSTRINGLIT(tmp637),tmp638);
      {
        const char* assert_cond = "(heater.h_start >= -10000000000.0 and heater.h_start <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",828,3,833,88,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta639));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",828,3,833,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta639));
        }
      }
      tmp640 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1484
type: ALGORITHM

  assert(heater.T_start >= 1.0 and heater.T_start <= 10000.0, "Variable violating min/max constraint: 1.0 <= heater.T_start <= 10000.0, has value: " + String(heater.T_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1484};
  modelica_boolean tmp641;
  modelica_boolean tmp642;
  static const MMC_DEFSTRINGLIT(tmp643,84,"Variable violating min/max constraint: 1.0 <= heater.T_start <= 10000.0, has value: ");
  modelica_string tmp644;
  modelica_metatype tmpMeta645;
  static int tmp646 = 0;
  if(!tmp646)
  {
    tmp641 = GreaterEq((data->simulationInfo->realParameter[32] /* heater.T_start PARAM */),1.0);
    tmp642 = LessEq((data->simulationInfo->realParameter[32] /* heater.T_start PARAM */),10000.0);
    if(!(tmp641 && tmp642))
    {
      tmp644 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[32] /* heater.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta645 = stringAppend(MMC_REFSTRINGLIT(tmp643),tmp644);
      {
        const char* assert_cond = "(heater.T_start >= 1.0 and heater.T_start <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",822,3,827,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta645));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",822,3,827,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta645));
        }
      }
      tmp646 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1485
type: ALGORITHM

  assert(heater.ps_start[1] >= 0.0 and heater.ps_start[1] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.ps_start[1] <= 100000000.0, has value: " + String(heater.ps_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1485};
  modelica_boolean tmp647;
  modelica_boolean tmp648;
  static const MMC_DEFSTRINGLIT(tmp649,92,"Variable violating min/max constraint: 0.0 <= heater.ps_start[1] <= 100000000.0, has value: ");
  modelica_string tmp650;
  modelica_metatype tmpMeta651;
  static int tmp652 = 0;
  if(!tmp652)
  {
    tmp647 = GreaterEq((data->simulationInfo->realParameter[86] /* heater.ps_start[1] PARAM */),0.0);
    tmp648 = LessEq((data->simulationInfo->realParameter[86] /* heater.ps_start[1] PARAM */),100000000.0);
    if(!(tmp647 && tmp648))
    {
      tmp650 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[86] /* heater.ps_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta651 = stringAppend(MMC_REFSTRINGLIT(tmp649),tmp650);
      {
        const char* assert_cond = "(heater.ps_start[1] >= 0.0 and heater.ps_start[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta651));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",815,3,817,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta651));
        }
      }
      tmp652 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1486
type: ALGORITHM

  assert(heater.p_b_start >= 0.0 and heater.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.p_b_start <= 100000000.0, has value: " + String(heater.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1486};
  modelica_boolean tmp653;
  modelica_boolean tmp654;
  static const MMC_DEFSTRINGLIT(tmp655,90,"Variable violating min/max constraint: 0.0 <= heater.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp656;
  modelica_metatype tmpMeta657;
  static int tmp658 = 0;
  if(!tmp658)
  {
    tmp653 = GreaterEq((data->simulationInfo->realParameter[83] /* heater.p_b_start PARAM */),0.0);
    tmp654 = LessEq((data->simulationInfo->realParameter[83] /* heater.p_b_start PARAM */),100000000.0);
    if(!(tmp653 && tmp654))
    {
      tmp656 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[83] /* heater.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta657 = stringAppend(MMC_REFSTRINGLIT(tmp655),tmp656);
      {
        const char* assert_cond = "(heater.p_b_start >= 0.0 and heater.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",812,3,814,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta657));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",812,3,814,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta657));
        }
      }
      tmp658 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1487
type: ALGORITHM

  assert(heater.p_a_start >= 0.0 and heater.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.p_a_start <= 100000000.0, has value: " + String(heater.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1487};
  modelica_boolean tmp659;
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,90,"Variable violating min/max constraint: 0.0 <= heater.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp662;
  modelica_metatype tmpMeta663;
  static int tmp664 = 0;
  if(!tmp664)
  {
    tmp659 = GreaterEq((data->simulationInfo->realParameter[82] /* heater.p_a_start PARAM */),0.0);
    tmp660 = LessEq((data->simulationInfo->realParameter[82] /* heater.p_a_start PARAM */),100000000.0);
    if(!(tmp659 && tmp660))
    {
      tmp662 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[82] /* heater.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta663 = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        const char* assert_cond = "(heater.p_a_start >= 0.0 and heater.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",809,3,811,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta663));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",809,3,811,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta663));
        }
      }
      tmp664 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1488
type: ALGORITHM

  assert(heater.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(heater.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  modelica_boolean tmp665;
  modelica_boolean tmp666;
  static const MMC_DEFSTRINGLIT(tmp667,169,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp668;
  modelica_metatype tmpMeta669;
  static int tmp670 = 0;
  if(!tmp670)
  {
    tmp665 = GreaterEq((data->simulationInfo->integerParameter[15] /* heater.traceDynamics PARAM */),1);
    tmp666 = LessEq((data->simulationInfo->integerParameter[15] /* heater.traceDynamics PARAM */),4);
    if(!(tmp665 && tmp666))
    {
      tmp668 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[15] /* heater.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta669 = stringAppend(MMC_REFSTRINGLIT(tmp667),tmp668);
      {
        const char* assert_cond = "(heater.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",804,3,806,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta669));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",804,3,806,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta669));
        }
      }
      tmp670 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1489
type: ALGORITHM

  assert(heater.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(heater.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  modelica_boolean tmp671;
  modelica_boolean tmp672;
  static const MMC_DEFSTRINGLIT(tmp673,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp674;
  modelica_metatype tmpMeta675;
  static int tmp676 = 0;
  if(!tmp676)
  {
    tmp671 = GreaterEq((data->simulationInfo->integerParameter[14] /* heater.substanceDynamics PARAM */),1);
    tmp672 = LessEq((data->simulationInfo->integerParameter[14] /* heater.substanceDynamics PARAM */),4);
    if(!(tmp671 && tmp672))
    {
      tmp674 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[14] /* heater.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta675 = stringAppend(MMC_REFSTRINGLIT(tmp673),tmp674);
      {
        const char* assert_cond = "(heater.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",801,3,803,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta675));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",801,3,803,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta675));
        }
      }
      tmp676 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1490
type: ALGORITHM

  assert(heater.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(heater.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  modelica_boolean tmp677;
  modelica_boolean tmp678;
  static const MMC_DEFSTRINGLIT(tmp679,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp680;
  modelica_metatype tmpMeta681;
  static int tmp682 = 0;
  if(!tmp682)
  {
    tmp677 = GreaterEq((data->simulationInfo->integerParameter[6] /* heater.massDynamics PARAM */),1);
    tmp678 = LessEq((data->simulationInfo->integerParameter[6] /* heater.massDynamics PARAM */),4);
    if(!(tmp677 && tmp678))
    {
      tmp680 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[6] /* heater.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta681 = stringAppend(MMC_REFSTRINGLIT(tmp679),tmp680);
      {
        const char* assert_cond = "(heater.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",798,3,800,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta681));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",798,3,800,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta681));
        }
      }
      tmp682 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1491
type: ALGORITHM

  assert(heater.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(heater.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  modelica_boolean tmp683;
  modelica_boolean tmp684;
  static const MMC_DEFSTRINGLIT(tmp685,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= heater.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp686;
  modelica_metatype tmpMeta687;
  static int tmp688 = 0;
  if(!tmp688)
  {
    tmp683 = GreaterEq((data->simulationInfo->integerParameter[0] /* heater.energyDynamics PARAM */),1);
    tmp684 = LessEq((data->simulationInfo->integerParameter[0] /* heater.energyDynamics PARAM */),4);
    if(!(tmp683 && tmp684))
    {
      tmp686 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[0] /* heater.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta687 = stringAppend(MMC_REFSTRINGLIT(tmp685),tmp686);
      {
        const char* assert_cond = "(heater.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and heater.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",795,3,797,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta687));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",795,3,797,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta687));
        }
      }
      tmp688 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1492
type: ALGORITHM

  assert(system.eps_m_flow >= 0.0, "Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: " + String(system.eps_m_flow, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  modelica_boolean tmp689;
  static const MMC_DEFSTRINGLIT(tmp690,72,"Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: ");
  modelica_string tmp691;
  modelica_metatype tmpMeta692;
  static int tmp693 = 0;
  if(!tmp693)
  {
    tmp689 = GreaterEq((data->simulationInfo->realParameter[245] /* system.eps_m_flow PARAM */),0.0);
    if(!tmp689)
    {
      tmp691 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[245] /* system.eps_m_flow PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta692 = stringAppend(MMC_REFSTRINGLIT(tmp690),tmp691);
      {
        const char* assert_cond = "(system.eps_m_flow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",57,3,59,62,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta692));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",57,3,59,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta692));
        }
      }
      tmp693 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1493
type: ALGORITHM

  assert(system.T_start >= 0.0, "Variable violating min constraint: 0.0 <= system.T_start, has value: " + String(system.T_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  modelica_boolean tmp694;
  static const MMC_DEFSTRINGLIT(tmp695,69,"Variable violating min constraint: 0.0 <= system.T_start, has value: ");
  modelica_string tmp696;
  modelica_metatype tmpMeta697;
  static int tmp698 = 0;
  if(!tmp698)
  {
    tmp694 = GreaterEq((data->simulationInfo->realParameter[243] /* system.T_start PARAM */),0.0);
    if(!tmp694)
    {
      tmp696 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[243] /* system.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta697 = stringAppend(MMC_REFSTRINGLIT(tmp695),tmp696);
      {
        const char* assert_cond = "(system.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",47,3,49,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta697));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",47,3,49,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta697));
        }
      }
      tmp698 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1494
type: ALGORITHM

  assert(system.p_start >= 0.0, "Variable violating min constraint: 0.0 <= system.p_start, has value: " + String(system.p_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  modelica_boolean tmp699;
  static const MMC_DEFSTRINGLIT(tmp700,69,"Variable violating min constraint: 0.0 <= system.p_start, has value: ");
  modelica_string tmp701;
  modelica_metatype tmpMeta702;
  static int tmp703 = 0;
  if(!tmp703)
  {
    tmp699 = GreaterEq((data->simulationInfo->realParameter[251] /* system.p_start PARAM */),0.0);
    if(!tmp699)
    {
      tmp701 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[251] /* system.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta702 = stringAppend(MMC_REFSTRINGLIT(tmp700),tmp701);
      {
        const char* assert_cond = "(system.p_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",44,3,46,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta702));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",44,3,46,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta702));
        }
      }
      tmp703 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1495
type: ALGORITHM

  assert(system.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp707;
  modelica_metatype tmpMeta708;
  static int tmp709 = 0;
  if(!tmp709)
  {
    tmp704 = GreaterEq((data->simulationInfo->integerParameter[57] /* system.momentumDynamics PARAM */),1);
    tmp705 = LessEq((data->simulationInfo->integerParameter[57] /* system.momentumDynamics PARAM */),4);
    if(!(tmp704 && tmp705))
    {
      tmp707 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[57] /* system.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta708 = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        const char* assert_cond = "(system.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",35,3,38,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta708));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",35,3,38,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta708));
        }
      }
      tmp709 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1496
type: ALGORITHM

  assert(system.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  modelica_boolean tmp710;
  modelica_boolean tmp711;
  static const MMC_DEFSTRINGLIT(tmp712,169,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp713;
  modelica_metatype tmpMeta714;
  static int tmp715 = 0;
  if(!tmp715)
  {
    tmp710 = GreaterEq((data->simulationInfo->integerParameter[59] /* system.traceDynamics PARAM */),1);
    tmp711 = LessEq((data->simulationInfo->integerParameter[59] /* system.traceDynamics PARAM */),4);
    if(!(tmp710 && tmp711))
    {
      tmp713 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[59] /* system.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta714 = stringAppend(MMC_REFSTRINGLIT(tmp712),tmp713);
      {
        const char* assert_cond = "(system.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",32,3,34,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta714));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",32,3,34,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta714));
        }
      }
      tmp715 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1497
type: ALGORITHM

  assert(system.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  modelica_boolean tmp716;
  modelica_boolean tmp717;
  static const MMC_DEFSTRINGLIT(tmp718,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp719;
  modelica_metatype tmpMeta720;
  static int tmp721 = 0;
  if(!tmp721)
  {
    tmp716 = GreaterEq((data->simulationInfo->integerParameter[58] /* system.substanceDynamics PARAM */),1);
    tmp717 = LessEq((data->simulationInfo->integerParameter[58] /* system.substanceDynamics PARAM */),4);
    if(!(tmp716 && tmp717))
    {
      tmp719 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[58] /* system.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta720 = stringAppend(MMC_REFSTRINGLIT(tmp718),tmp719);
      {
        const char* assert_cond = "(system.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",29,3,31,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta720));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",29,3,31,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta720));
        }
      }
      tmp721 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1498
type: ALGORITHM

  assert(system.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  modelica_boolean tmp722;
  modelica_boolean tmp723;
  static const MMC_DEFSTRINGLIT(tmp724,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp725;
  modelica_metatype tmpMeta726;
  static int tmp727 = 0;
  if(!tmp727)
  {
    tmp722 = GreaterEq((data->simulationInfo->integerParameter[56] /* system.massDynamics PARAM */),1);
    tmp723 = LessEq((data->simulationInfo->integerParameter[56] /* system.massDynamics PARAM */),4);
    if(!(tmp722 && tmp723))
    {
      tmp725 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[56] /* system.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta726 = stringAppend(MMC_REFSTRINGLIT(tmp724),tmp725);
      {
        const char* assert_cond = "(system.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",26,3,28,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta726));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",26,3,28,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta726));
        }
      }
      tmp727 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1499
type: ALGORITHM

  assert(system.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  modelica_boolean tmp728;
  modelica_boolean tmp729;
  static const MMC_DEFSTRINGLIT(tmp730,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp731;
  modelica_metatype tmpMeta732;
  static int tmp733 = 0;
  if(!tmp733)
  {
    tmp728 = GreaterEq((data->simulationInfo->integerParameter[55] /* system.energyDynamics PARAM */),1);
    tmp729 = LessEq((data->simulationInfo->integerParameter[55] /* system.energyDynamics PARAM */),4);
    if(!(tmp728 && tmp729))
    {
      tmp731 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[55] /* system.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta732 = stringAppend(MMC_REFSTRINGLIT(tmp730),tmp731);
      {
        const char* assert_cond = "(system.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",22,3,25,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta732));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",22,3,25,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta732));
        }
      }
      tmp733 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1500
type: ALGORITHM

  assert(burner.T_ref >= 0.0, "Variable violating min constraint: 0.0 <= burner.T_ref, has value: " + String(burner.T_ref, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  modelica_boolean tmp734;
  static const MMC_DEFSTRINGLIT(tmp735,67,"Variable violating min constraint: 0.0 <= burner.T_ref, has value: ");
  modelica_string tmp736;
  modelica_metatype tmpMeta737;
  static int tmp738 = 0;
  if(!tmp738)
  {
    tmp734 = GreaterEq((data->simulationInfo->realParameter[27] /* burner.T_ref PARAM */),0.0);
    if(!tmp734)
    {
      tmp736 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[27] /* burner.T_ref PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta737 = stringAppend(MMC_REFSTRINGLIT(tmp735),tmp736);
      {
        const char* assert_cond = "(burner.T_ref >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Sources/FixedHeatFlow.mo",5,3,6,28,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta737));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Sources/FixedHeatFlow.mo",5,3,6,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta737));
        }
      }
      tmp738 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1501
type: ALGORITHM

  assert(sensor_m_flow.m_flow_small >= 0.0 and sensor_m_flow.m_flow_small <= 100000.0, "Variable violating min/max constraint: 0.0 <= sensor_m_flow.m_flow_small <= 100000.0, has value: " + String(sensor_m_flow.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,97,"Variable violating min/max constraint: 0.0 <= sensor_m_flow.m_flow_small <= 100000.0, has value: ");
  modelica_string tmp742;
  modelica_metatype tmpMeta743;
  static int tmp744 = 0;
  if(!tmp744)
  {
    tmp739 = GreaterEq((data->simulationInfo->realParameter[239] /* sensor_m_flow.m_flow_small PARAM */),0.0);
    tmp740 = LessEq((data->simulationInfo->realParameter[239] /* sensor_m_flow.m_flow_small PARAM */),100000.0);
    if(!(tmp739 && tmp740))
    {
      tmp742 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[239] /* sensor_m_flow.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta743 = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        const char* assert_cond = "(sensor_m_flow.m_flow_small >= 0.0 and sensor_m_flow.m_flow_small <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Sensors.mo",816,7,818,43,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta743));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Sensors.mo",816,7,818,43,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta743));
        }
      }
      tmp744 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1502
type: ALGORITHM

  assert(sensor_m_flow.m_flow_nominal >= -100000.0 and sensor_m_flow.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= sensor_m_flow.m_flow_nominal <= 100000.0, has value: " + String(sensor_m_flow.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  modelica_boolean tmp745;
  modelica_boolean tmp746;
  static const MMC_DEFSTRINGLIT(tmp747,105,"Variable violating min/max constraint: -100000.0 <= sensor_m_flow.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp748;
  modelica_metatype tmpMeta749;
  static int tmp750 = 0;
  if(!tmp750)
  {
    tmp745 = GreaterEq((data->simulationInfo->realParameter[238] /* sensor_m_flow.m_flow_nominal PARAM */),-100000.0);
    tmp746 = LessEq((data->simulationInfo->realParameter[238] /* sensor_m_flow.m_flow_nominal PARAM */),100000.0);
    if(!(tmp745 && tmp746))
    {
      tmp748 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[238] /* sensor_m_flow.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta749 = stringAppend(MMC_REFSTRINGLIT(tmp747),tmp748);
      {
        const char* assert_cond = "(sensor_m_flow.m_flow_nominal >= -100000.0 and sensor_m_flow.m_flow_nominal <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Sensors.mo",813,7,815,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta749));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Sensors.mo",813,7,815,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta749));
        }
      }
      tmp750 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1503
type: ALGORITHM

  assert(valve.leakageOpening >= 0.0 and valve.leakageOpening <= 1.0, "Variable violating min/max constraint: 0.0 <= valve.leakageOpening <= 1.0, has value: " + String(valve.leakageOpening, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  modelica_boolean tmp751;
  modelica_boolean tmp752;
  static const MMC_DEFSTRINGLIT(tmp753,86,"Variable violating min/max constraint: 0.0 <= valve.leakageOpening <= 1.0, has value: ");
  modelica_string tmp754;
  modelica_metatype tmpMeta755;
  static int tmp756 = 0;
  if(!tmp756)
  {
    tmp751 = GreaterEq((data->simulationInfo->realParameter[305] /* valve.leakageOpening PARAM */),0.0);
    tmp752 = LessEq((data->simulationInfo->realParameter[305] /* valve.leakageOpening PARAM */),1.0);
    if(!(tmp751 && tmp752))
    {
      tmp754 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[305] /* valve.leakageOpening PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta755 = stringAppend(MMC_REFSTRINGLIT(tmp753),tmp754);
      {
        const char* assert_cond = "(valve.leakageOpening >= 0.0 and valve.leakageOpening <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",526,7,528,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta755));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",526,7,528,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta755));
        }
      }
      tmp756 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1504
type: ALGORITHM

  assert(valve.opening_nominal >= 0.0 and valve.opening_nominal <= 1.0, "Variable violating min/max constraint: 0.0 <= valve.opening_nominal <= 1.0, has value: " + String(valve.opening_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1504};
  modelica_boolean tmp757;
  modelica_boolean tmp758;
  static const MMC_DEFSTRINGLIT(tmp759,87,"Variable violating min/max constraint: 0.0 <= valve.opening_nominal <= 1.0, has value: ");
  modelica_string tmp760;
  modelica_metatype tmpMeta761;
  static int tmp762 = 0;
  if(!tmp762)
  {
    tmp757 = GreaterEq((data->simulationInfo->realParameter[310] /* valve.opening_nominal PARAM */),0.0);
    tmp758 = LessEq((data->simulationInfo->realParameter[310] /* valve.opening_nominal PARAM */),1.0);
    if(!(tmp757 && tmp758))
    {
      tmp760 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[310] /* valve.opening_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta761 = stringAppend(MMC_REFSTRINGLIT(tmp759),tmp760);
      {
        const char* assert_cond = "(valve.opening_nominal >= 0.0 and valve.opening_nominal <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",516,7,518,82,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",516,7,518,82,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta761));
        }
      }
      tmp762 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1505
type: ALGORITHM

  assert(valve.rho_nominal >= 0.0 and valve.rho_nominal <= 100000.0, "Variable violating min/max constraint: 0.0 <= valve.rho_nominal <= 100000.0, has value: " + String(valve.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  modelica_boolean tmp763;
  modelica_boolean tmp764;
  static const MMC_DEFSTRINGLIT(tmp765,88,"Variable violating min/max constraint: 0.0 <= valve.rho_nominal <= 100000.0, has value: ");
  modelica_string tmp766;
  modelica_metatype tmpMeta767;
  static int tmp768 = 0;
  if(!tmp768)
  {
    tmp763 = GreaterEq((data->simulationInfo->realParameter[311] /* valve.rho_nominal PARAM */),0.0);
    tmp764 = LessEq((data->simulationInfo->realParameter[311] /* valve.rho_nominal PARAM */),100000.0);
    if(!(tmp763 && tmp764))
    {
      tmp766 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[311] /* valve.rho_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta767 = stringAppend(MMC_REFSTRINGLIT(tmp765),tmp766);
      {
        const char* assert_cond = "(valve.rho_nominal >= 0.0 and valve.rho_nominal <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",512,7,515,82,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",512,7,515,82,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta767));
        }
      }
      tmp768 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1506
type: ALGORITHM

  assert(valve.m_flow_nominal >= -100000.0 and valve.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve.m_flow_nominal <= 100000.0, has value: " + String(valve.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  static const MMC_DEFSTRINGLIT(tmp771,97,"Variable violating min/max constraint: -100000.0 <= valve.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp772;
  modelica_metatype tmpMeta773;
  static int tmp774 = 0;
  if(!tmp774)
  {
    tmp769 = GreaterEq((data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */),-100000.0);
    tmp770 = LessEq((data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */),100000.0);
    if(!(tmp769 && tmp770))
    {
      tmp772 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta773 = stringAppend(MMC_REFSTRINGLIT(tmp771),tmp772);
      {
        const char* assert_cond = "(valve.m_flow_nominal >= -100000.0 and valve.m_flow_nominal <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",510,7,511,58,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",510,7,511,58,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta773));
        }
      }
      tmp774 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1507
type: ALGORITHM

  assert(valve.CvData >= Modelica.Fluid.Types.CvTypes.Av and valve.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, "Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valve.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: " + String(valve.CvData, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  modelica_boolean tmp775;
  modelica_boolean tmp776;
  static const MMC_DEFSTRINGLIT(tmp777,139,"Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valve.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: ");
  modelica_string tmp778;
  modelica_metatype tmpMeta779;
  static int tmp780 = 0;
  if(!tmp780)
  {
    tmp775 = GreaterEq((data->simulationInfo->integerParameter[66] /* valve.CvData PARAM */),1);
    tmp776 = LessEq((data->simulationInfo->integerParameter[66] /* valve.CvData PARAM */),4);
    if(!(tmp775 && tmp776))
    {
      tmp778 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[66] /* valve.CvData PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta779 = stringAppend(MMC_REFSTRINGLIT(tmp777),tmp778);
      {
        const char* assert_cond = "(valve.CvData >= Modelica.Fluid.Types.CvTypes.Av and valve.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",493,7,495,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta779));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Valves.mo",493,7,495,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta779));
        }
      }
      tmp780 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1508
type: ALGORITHM

  assert(valve.m_flow_small >= -100000.0 and valve.m_flow_small <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve.m_flow_small <= 100000.0, has value: " + String(valve.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  modelica_boolean tmp781;
  modelica_boolean tmp782;
  static const MMC_DEFSTRINGLIT(tmp783,95,"Variable violating min/max constraint: -100000.0 <= valve.m_flow_small <= 100000.0, has value: ");
  modelica_string tmp784;
  modelica_metatype tmpMeta785;
  static int tmp786 = 0;
  if(!tmp786)
  {
    tmp781 = GreaterEq((data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */),-100000.0);
    tmp782 = LessEq((data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */),100000.0);
    if(!(tmp781 && tmp782))
    {
      tmp784 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta785 = stringAppend(MMC_REFSTRINGLIT(tmp783),tmp784);
      {
        const char* assert_cond = "(valve.m_flow_small >= -100000.0 and valve.m_flow_small <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",293,3,295,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta785));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",293,3,295,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta785));
        }
      }
      tmp786 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1509
type: ALGORITHM

  assert(valve.m_flow_start >= -100000.0 and valve.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valve.m_flow_start <= 100000.0, has value: " + String(valve.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  modelica_boolean tmp787;
  modelica_boolean tmp788;
  static const MMC_DEFSTRINGLIT(tmp789,95,"Variable violating min/max constraint: -100000.0 <= valve.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp790;
  modelica_metatype tmpMeta791;
  static int tmp792 = 0;
  if(!tmp792)
  {
    tmp787 = GreaterEq((data->simulationInfo->realParameter[308] /* valve.m_flow_start PARAM */),-100000.0);
    tmp788 = LessEq((data->simulationInfo->realParameter[308] /* valve.m_flow_start PARAM */),100000.0);
    if(!(tmp787 && tmp788))
    {
      tmp790 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[308] /* valve.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta791 = stringAppend(MMC_REFSTRINGLIT(tmp789),tmp790);
      {
        const char* assert_cond = "(valve.m_flow_start >= -100000.0 and valve.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",289,3,291,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta791));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",289,3,291,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta791));
        }
      }
      tmp792 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1510
type: ALGORITHM

  assert(valve.dp_start >= -9.999999999999999e+59 and valve.dp_start <= 100000000.0, "Variable violating min/max constraint: -9.999999999999999e+59 <= valve.dp_start <= 100000000.0, has value: " + String(valve.dp_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1510};
  modelica_boolean tmp793;
  modelica_boolean tmp794;
  static const MMC_DEFSTRINGLIT(tmp795,107,"Variable violating min/max constraint: -9.999999999999999e+59 <= valve.dp_start <= 100000000.0, has value: ");
  modelica_string tmp796;
  modelica_metatype tmpMeta797;
  static int tmp798 = 0;
  if(!tmp798)
  {
    tmp793 = GreaterEq((data->simulationInfo->realParameter[303] /* valve.dp_start PARAM */),-9.999999999999999e+59);
    tmp794 = LessEq((data->simulationInfo->realParameter[303] /* valve.dp_start PARAM */),100000000.0);
    if(!(tmp793 && tmp794))
    {
      tmp796 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[303] /* valve.dp_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta797 = stringAppend(MMC_REFSTRINGLIT(tmp795),tmp796);
      {
        const char* assert_cond = "(valve.dp_start >= -9.999999999999999e+59 and valve.dp_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",286,3,288,41,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta797));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",286,3,288,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta797));
        }
      }
      tmp798 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1511
type: ALGORITHM

  assert(pump.rho_nominal >= 0.0 and pump.rho_nominal <= 100000.0, "Variable violating min/max constraint: 0.0 <= pump.rho_nominal <= 100000.0, has value: " + String(pump.rho_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1511};
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,87,"Variable violating min/max constraint: 0.0 <= pump.rho_nominal <= 100000.0, has value: ");
  modelica_string tmp802;
  modelica_metatype tmpMeta803;
  static int tmp804 = 0;
  if(!tmp804)
  {
    tmp799 = GreaterEq((data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */),0.0);
    tmp800 = LessEq((data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */),100000.0);
    if(!(tmp799 && tmp800))
    {
      tmp802 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta803 = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        const char* assert_cond = "(pump.rho_nominal >= 0.0 and pump.rho_nominal <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",341,5,343,50,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta803));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",341,5,343,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta803));
        }
      }
      tmp804 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1512
type: ALGORITHM

  assert(pump.p_a_nominal >= 0.0 and pump.p_a_nominal <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.p_a_nominal <= 100000000.0, has value: " + String(pump.p_a_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1512};
  modelica_boolean tmp805;
  modelica_boolean tmp806;
  static const MMC_DEFSTRINGLIT(tmp807,90,"Variable violating min/max constraint: 0.0 <= pump.p_a_nominal <= 100000000.0, has value: ");
  modelica_string tmp808;
  modelica_metatype tmpMeta809;
  static int tmp810 = 0;
  if(!tmp810)
  {
    tmp805 = GreaterEq((data->simulationInfo->realParameter[172] /* pump.p_a_nominal PARAM */),0.0);
    tmp806 = LessEq((data->simulationInfo->realParameter[172] /* pump.p_a_nominal PARAM */),100000000.0);
    if(!(tmp805 && tmp806))
    {
      tmp808 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[172] /* pump.p_a_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta809 = stringAppend(MMC_REFSTRINGLIT(tmp807),tmp808);
      {
        const char* assert_cond = "(pump.p_a_nominal >= 0.0 and pump.p_a_nominal <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",152,5,153,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta809));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",152,5,153,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta809));
        }
      }
      tmp810 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1513
type: ALGORITHM

  assert(pump.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= pump.heatTransfer.T_ambient, has value: " + String(pump.heatTransfer.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  modelica_boolean tmp811;
  static const MMC_DEFSTRINGLIT(tmp812,82,"Variable violating min constraint: 0.0 <= pump.heatTransfer.T_ambient, has value: ");
  modelica_string tmp813;
  modelica_metatype tmpMeta814;
  static int tmp815 = 0;
  if(!tmp815)
  {
    tmp811 = GreaterEq((data->simulationInfo->realParameter[163] /* pump.heatTransfer.T_ambient PARAM */),0.0);
    if(!tmp811)
    {
      tmp813 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[163] /* pump.heatTransfer.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta814 = stringAppend(MMC_REFSTRINGLIT(tmp812),tmp813);
      {
        const char* assert_cond = "(pump.heatTransfer.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta814));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta814));
        }
      }
      tmp815 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1514
type: ALGORITHM

  assert(pump.X_start[1] >= 0.0 and pump.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= pump.X_start[1] <= 1.0, has value: " + String(pump.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1514};
  modelica_boolean tmp816;
  modelica_boolean tmp817;
  static const MMC_DEFSTRINGLIT(tmp818,81,"Variable violating min/max constraint: 0.0 <= pump.X_start[1] <= 1.0, has value: ");
  modelica_string tmp819;
  modelica_metatype tmpMeta820;
  static int tmp821 = 0;
  if(!tmp821)
  {
    tmp816 = GreaterEq((data->simulationInfo->realParameter[158] /* pump.X_start[1] PARAM */),0.0);
    tmp817 = LessEq((data->simulationInfo->realParameter[158] /* pump.X_start[1] PARAM */),1.0);
    if(!(tmp816 && tmp817))
    {
      tmp819 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[158] /* pump.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta820 = stringAppend(MMC_REFSTRINGLIT(tmp818),tmp819);
      {
        const char* assert_cond = "(pump.X_start[1] >= 0.0 and pump.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",544,7,546,73,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta820));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",544,7,546,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta820));
        }
      }
      tmp821 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1515
type: ALGORITHM

  assert(pump.p_b_start >= 0.0 and pump.p_b_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.p_b_start <= 100000000.0, has value: " + String(pump.p_b_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1515};
  modelica_boolean tmp822;
  modelica_boolean tmp823;
  static const MMC_DEFSTRINGLIT(tmp824,88,"Variable violating min/max constraint: 0.0 <= pump.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp825;
  modelica_metatype tmpMeta826;
  static int tmp827 = 0;
  if(!tmp827)
  {
    tmp822 = GreaterEq((data->simulationInfo->realParameter[175] /* pump.p_b_start PARAM */),0.0);
    tmp823 = LessEq((data->simulationInfo->realParameter[175] /* pump.p_b_start PARAM */),100000000.0);
    if(!(tmp822 && tmp823))
    {
      tmp825 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[175] /* pump.p_b_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta826 = stringAppend(MMC_REFSTRINGLIT(tmp824),tmp825);
      {
        const char* assert_cond = "(pump.p_b_start >= 0.0 and pump.p_b_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",318,5,320,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta826));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",318,5,320,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta826));
        }
      }
      tmp827 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1516
type: ALGORITHM

  assert(pump.p_start >= 0.0 and pump.p_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.p_start <= 100000000.0, has value: " + String(pump.p_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1516};
  modelica_boolean tmp828;
  modelica_boolean tmp829;
  static const MMC_DEFSTRINGLIT(tmp830,86,"Variable violating min/max constraint: 0.0 <= pump.p_start <= 100000000.0, has value: ");
  modelica_string tmp831;
  modelica_metatype tmpMeta832;
  static int tmp833 = 0;
  if(!tmp833)
  {
    tmp828 = GreaterEq((data->simulationInfo->realParameter[177] /* pump.p_start PARAM */),0.0);
    tmp829 = LessEq((data->simulationInfo->realParameter[177] /* pump.p_start PARAM */),100000000.0);
    if(!(tmp828 && tmp829))
    {
      tmp831 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[177] /* pump.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta832 = stringAppend(MMC_REFSTRINGLIT(tmp830),tmp831);
      {
        const char* assert_cond = "(pump.p_start >= 0.0 and pump.p_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",530,7,532,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta832));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",530,7,532,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta832));
        }
      }
      tmp833 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1517
type: ALGORITHM

  assert(pump.T_start >= 1.0 and pump.T_start <= 10000.0, "Variable violating min/max constraint: 1.0 <= pump.T_start <= 10000.0, has value: " + String(pump.T_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1517};
  modelica_boolean tmp834;
  modelica_boolean tmp835;
  static const MMC_DEFSTRINGLIT(tmp836,82,"Variable violating min/max constraint: 1.0 <= pump.T_start <= 10000.0, has value: ");
  modelica_string tmp837;
  modelica_metatype tmpMeta838;
  static int tmp839 = 0;
  if(!tmp839)
  {
    tmp834 = GreaterEq((data->simulationInfo->realParameter[154] /* pump.T_start PARAM */),1.0);
    tmp835 = LessEq((data->simulationInfo->realParameter[154] /* pump.T_start PARAM */),10000.0);
    if(!(tmp834 && tmp835))
    {
      tmp837 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[154] /* pump.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta838 = stringAppend(MMC_REFSTRINGLIT(tmp836),tmp837);
      {
        const char* assert_cond = "(pump.T_start >= 1.0 and pump.T_start <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",536,7,539,73,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta838));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",536,7,539,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta838));
        }
      }
      tmp839 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1518
type: ALGORITHM

  assert(pump.h_start >= -10000000000.0 and pump.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= pump.h_start <= 10000000000.0, has value: " + String(pump.h_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1518};
  modelica_boolean tmp840;
  modelica_boolean tmp841;
  static const MMC_DEFSTRINGLIT(tmp842,99,"Variable violating min/max constraint: -10000000000.0 <= pump.h_start <= 10000000000.0, has value: ");
  modelica_string tmp843;
  modelica_metatype tmpMeta844;
  static int tmp845 = 0;
  if(!tmp845)
  {
    tmp840 = GreaterEq((data->simulationInfo->realParameter[161] /* pump.h_start PARAM */),-10000000000.0);
    tmp841 = LessEq((data->simulationInfo->realParameter[161] /* pump.h_start PARAM */),10000000000.0);
    if(!(tmp840 && tmp841))
    {
      tmp843 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[161] /* pump.h_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta844 = stringAppend(MMC_REFSTRINGLIT(tmp842),tmp843);
      {
        const char* assert_cond = "(pump.h_start >= -10000000000.0 and pump.h_start <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",540,7,543,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta844));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",540,7,543,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta844));
        }
      }
      tmp845 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1519
type: ALGORITHM

  assert(pump.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pump.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1519};
  modelica_boolean tmp846;
  modelica_boolean tmp847;
  static const MMC_DEFSTRINGLIT(tmp848,167,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp849;
  modelica_metatype tmpMeta850;
  static int tmp851 = 0;
  if(!tmp851)
  {
    tmp846 = GreaterEq((data->simulationInfo->integerParameter[38] /* pump.traceDynamics PARAM */),1);
    tmp847 = LessEq((data->simulationInfo->integerParameter[38] /* pump.traceDynamics PARAM */),4);
    if(!(tmp846 && tmp847))
    {
      tmp849 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[38] /* pump.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta850 = stringAppend(MMC_REFSTRINGLIT(tmp848),tmp849);
      {
        const char* assert_cond = "(pump.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",525,7,527,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta850));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",525,7,527,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta850));
        }
      }
      tmp851 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1520
type: ALGORITHM

  assert(pump.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pump.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1520};
  modelica_boolean tmp852;
  modelica_boolean tmp853;
  static const MMC_DEFSTRINGLIT(tmp854,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp855;
  modelica_metatype tmpMeta856;
  static int tmp857 = 0;
  if(!tmp857)
  {
    tmp852 = GreaterEq((data->simulationInfo->integerParameter[37] /* pump.substanceDynamics PARAM */),1);
    tmp853 = LessEq((data->simulationInfo->integerParameter[37] /* pump.substanceDynamics PARAM */),4);
    if(!(tmp852 && tmp853))
    {
      tmp855 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[37] /* pump.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta856 = stringAppend(MMC_REFSTRINGLIT(tmp854),tmp855);
      {
        const char* assert_cond = "(pump.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",522,7,524,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta856));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",522,7,524,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta856));
        }
      }
      tmp857 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1521
type: ALGORITHM

  assert(pump.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pump.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1521};
  modelica_boolean tmp858;
  modelica_boolean tmp859;
  static const MMC_DEFSTRINGLIT(tmp860,166,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp861;
  modelica_metatype tmpMeta862;
  static int tmp863 = 0;
  if(!tmp863)
  {
    tmp858 = GreaterEq((data->simulationInfo->integerParameter[35] /* pump.massDynamics PARAM */),1);
    tmp859 = LessEq((data->simulationInfo->integerParameter[35] /* pump.massDynamics PARAM */),4);
    if(!(tmp858 && tmp859))
    {
      tmp861 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[35] /* pump.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta862 = stringAppend(MMC_REFSTRINGLIT(tmp860),tmp861);
      {
        const char* assert_cond = "(pump.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",519,7,521,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta862));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",519,7,521,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta862));
        }
      }
      tmp863 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1522
type: ALGORITHM

  assert(pump.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pump.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1522};
  modelica_boolean tmp864;
  modelica_boolean tmp865;
  static const MMC_DEFSTRINGLIT(tmp866,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pump.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp867;
  modelica_metatype tmpMeta868;
  static int tmp869 = 0;
  if(!tmp869)
  {
    tmp864 = GreaterEq((data->simulationInfo->integerParameter[33] /* pump.energyDynamics PARAM */),1);
    tmp865 = LessEq((data->simulationInfo->integerParameter[33] /* pump.energyDynamics PARAM */),4);
    if(!(tmp864 && tmp865))
    {
      tmp867 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[33] /* pump.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta868 = stringAppend(MMC_REFSTRINGLIT(tmp866),tmp867);
      {
        const char* assert_cond = "(pump.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pump.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",516,7,518,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta868));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",516,7,518,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta868));
        }
      }
      tmp869 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1523
type: ALGORITHM

  assert(pump.nParallel >= 1, "Variable violating min constraint: 1 <= pump.nParallel, has value: " + String(pump.nParallel, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1523};
  modelica_boolean tmp870;
  static const MMC_DEFSTRINGLIT(tmp871,67,"Variable violating min constraint: 1 <= pump.nParallel, has value: ");
  modelica_string tmp872;
  modelica_metatype tmpMeta873;
  static int tmp874 = 0;
  if(!tmp874)
  {
    tmp870 = GreaterEq((data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */),((modelica_integer) 1));
    if(!tmp870)
    {
      tmp872 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta873 = stringAppend(MMC_REFSTRINGLIT(tmp871),tmp872);
      {
        const char* assert_cond = "(pump.nParallel >= 1)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",332,5,333,50,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta873));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",332,5,333,50,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta873));
        }
      }
      tmp874 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1524
type: ALGORITHM

  assert(pump.m_flow_start >= -100000.0 and pump.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pump.m_flow_start <= 100000.0, has value: " + String(pump.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1524};
  modelica_boolean tmp875;
  modelica_boolean tmp876;
  static const MMC_DEFSTRINGLIT(tmp877,94,"Variable violating min/max constraint: -100000.0 <= pump.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp878;
  modelica_metatype tmpMeta879;
  static int tmp880 = 0;
  if(!tmp880)
  {
    tmp875 = GreaterEq((data->simulationInfo->realParameter[168] /* pump.m_flow_start PARAM */),-100000.0);
    tmp876 = LessEq((data->simulationInfo->realParameter[168] /* pump.m_flow_start PARAM */),100000.0);
    if(!(tmp875 && tmp876))
    {
      tmp878 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[168] /* pump.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta879 = stringAppend(MMC_REFSTRINGLIT(tmp877),tmp878);
      {
        const char* assert_cond = "(pump.m_flow_start >= -100000.0 and pump.m_flow_start <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",321,5,323,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta879));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",321,5,323,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta879));
        }
      }
      tmp880 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1525
type: ALGORITHM

  assert(pump.checkValveHomotopy >= Modelica.Fluid.Types.CheckValveHomotopyType.Open and pump.checkValveHomotopy <= Modelica.Fluid.Types.CheckValveHomotopyType.NoHomotopy, "Variable violating min/max constraint: Modelica.Fluid.Types.CheckValveHomotopyType.Open <= pump.checkValveHomotopy <= Modelica.Fluid.Types.CheckValveHomotopyType.NoHomotopy, has value: " + String(pump.checkValveHomotopy, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1525};
  modelica_boolean tmp881;
  modelica_boolean tmp882;
  static const MMC_DEFSTRINGLIT(tmp883,185,"Variable violating min/max constraint: Modelica.Fluid.Types.CheckValveHomotopyType.Open <= pump.checkValveHomotopy <= Modelica.Fluid.Types.CheckValveHomotopyType.NoHomotopy, has value: ");
  modelica_string tmp884;
  modelica_metatype tmpMeta885;
  static int tmp886 = 0;
  if(!tmp886)
  {
    tmp881 = GreaterEq((data->simulationInfo->integerParameter[32] /* pump.checkValveHomotopy PARAM */),1);
    tmp882 = LessEq((data->simulationInfo->integerParameter[32] /* pump.checkValveHomotopy PARAM */),3);
    if(!(tmp881 && tmp882))
    {
      tmp884 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[32] /* pump.checkValveHomotopy PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta885 = stringAppend(MMC_REFSTRINGLIT(tmp883),tmp884);
      {
        const char* assert_cond = "(pump.checkValveHomotopy >= Modelica.Fluid.Types.CheckValveHomotopyType.Open and pump.checkValveHomotopy <= Modelica.Fluid.Types.CheckValveHomotopyType.NoHomotopy)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",324,5,325,49,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta885));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",324,5,325,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta885));
        }
      }
      tmp886 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1526
type: ALGORITHM

  assert(pump.p_a_start >= 0.0 and pump.p_a_start <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.p_a_start <= 100000000.0, has value: " + String(pump.p_a_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1526};
  modelica_boolean tmp887;
  modelica_boolean tmp888;
  static const MMC_DEFSTRINGLIT(tmp889,88,"Variable violating min/max constraint: 0.0 <= pump.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp890;
  modelica_metatype tmpMeta891;
  static int tmp892 = 0;
  if(!tmp892)
  {
    tmp887 = GreaterEq((data->simulationInfo->realParameter[173] /* pump.p_a_start PARAM */),0.0);
    tmp888 = LessEq((data->simulationInfo->realParameter[173] /* pump.p_a_start PARAM */),100000000.0);
    if(!(tmp887 && tmp888))
    {
      tmp890 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[173] /* pump.p_a_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta891 = stringAppend(MMC_REFSTRINGLIT(tmp889),tmp890);
      {
        const char* assert_cond = "(pump.p_a_start >= 0.0 and pump.p_a_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",315,5,317,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta891));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",315,5,317,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta891));
        }
      }
      tmp892 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1527
type: ALGORITHM

  assert(tank.level_start >= 0.0, "Variable violating min constraint: 0.0 <= tank.level_start, has value: " + String(tank.level_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1527};
  modelica_boolean tmp893;
  static const MMC_DEFSTRINGLIT(tmp894,71,"Variable violating min constraint: 0.0 <= tank.level_start, has value: ");
  modelica_string tmp895;
  modelica_metatype tmpMeta896;
  static int tmp897 = 0;
  if(!tmp897)
  {
    tmp893 = GreaterEq((data->simulationInfo->realParameter[262] /* tank.level_start PARAM */),0.0);
    if(!tmp893)
    {
      tmp895 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[262] /* tank.level_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta896 = stringAppend(MMC_REFSTRINGLIT(tmp894),tmp895);
      {
        const char* assert_cond = "(tank.level_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",68,3,70,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta896));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",68,3,70,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta896));
        }
      }
      tmp897 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1528
type: ALGORITHM

  assert(tank.level_start_eps >= 0.0, "Variable violating min constraint: 0.0 <= tank.level_start_eps, has value: " + String(tank.level_start_eps, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1528};
  modelica_boolean tmp898;
  static const MMC_DEFSTRINGLIT(tmp899,75,"Variable violating min constraint: 0.0 <= tank.level_start_eps, has value: ");
  modelica_string tmp900;
  modelica_metatype tmpMeta901;
  static int tmp902 = 0;
  if(!tmp902)
  {
    tmp898 = GreaterEq((data->simulationInfo->realParameter[263] /* tank.level_start_eps PARAM */),0.0);
    if(!tmp898)
    {
      tmp900 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[263] /* tank.level_start_eps PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta901 = stringAppend(MMC_REFSTRINGLIT(tmp899),tmp900);
      {
        const char* assert_cond = "(tank.level_start_eps >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",83,3,83,87,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta901));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",83,3,83,87,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta901));
        }
      }
      tmp902 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1529
type: ALGORITHM

  assert(tank.height >= 0.0, "Variable violating min constraint: 0.0 <= tank.height, has value: " + String(tank.height, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1529};
  modelica_boolean tmp903;
  static const MMC_DEFSTRINGLIT(tmp904,66,"Variable violating min constraint: 0.0 <= tank.height, has value: ");
  modelica_string tmp905;
  modelica_metatype tmpMeta906;
  static int tmp907 = 0;
  if(!tmp907)
  {
    tmp903 = GreaterEq((data->simulationInfo->realParameter[261] /* tank.height PARAM */),0.0);
    if(!tmp903)
    {
      tmp905 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[261] /* tank.height PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta906 = stringAppend(MMC_REFSTRINGLIT(tmp904),tmp905);
      {
        const char* assert_cond = "(tank.height >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",56,3,56,46,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta906));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",56,3,56,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta906));
        }
      }
      tmp907 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1530
type: ALGORITHM

  assert(tank.fluidLevel_max >= 0.0, "Variable violating min constraint: 0.0 <= tank.fluidLevel_max, has value: " + String(tank.fluidLevel_max, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1530};
  modelica_boolean tmp908;
  static const MMC_DEFSTRINGLIT(tmp909,74,"Variable violating min constraint: 0.0 <= tank.fluidLevel_max, has value: ");
  modelica_string tmp910;
  modelica_metatype tmpMeta911;
  static int tmp912 = 0;
  if(!tmp912)
  {
    tmp908 = GreaterEq((data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */),0.0);
    if(!tmp908)
    {
      tmp910 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta911 = stringAppend(MMC_REFSTRINGLIT(tmp909),tmp910);
      {
        const char* assert_cond = "(tank.fluidLevel_max >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",270,9,271,47,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta911));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",270,9,271,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta911));
        }
      }
      tmp912 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1531
type: ALGORITHM

  assert(tank.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= tank.heatTransfer.T_ambient, has value: " + String(tank.heatTransfer.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1531};
  modelica_boolean tmp913;
  static const MMC_DEFSTRINGLIT(tmp914,82,"Variable violating min constraint: 0.0 <= tank.heatTransfer.T_ambient, has value: ");
  modelica_string tmp915;
  modelica_metatype tmpMeta916;
  static int tmp917 = 0;
  if(!tmp917)
  {
    tmp913 = GreaterEq((data->simulationInfo->realParameter[258] /* tank.heatTransfer.T_ambient PARAM */),0.0);
    if(!tmp913)
    {
      tmp915 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[258] /* tank.heatTransfer.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta916 = stringAppend(MMC_REFSTRINGLIT(tmp914),tmp915);
      {
        const char* assert_cond = "(tank.heatTransfer.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta916));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",466,5,467,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta916));
        }
      }
      tmp917 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1532
type: ALGORITHM

  assert(tank.m_flow_nominal >= -100000.0 and tank.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= tank.m_flow_nominal <= 100000.0, has value: " + String(tank.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1532};
  modelica_boolean tmp918;
  modelica_boolean tmp919;
  static const MMC_DEFSTRINGLIT(tmp920,96,"Variable violating min/max constraint: -100000.0 <= tank.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp921;
  modelica_metatype tmpMeta922;
  static int tmp923 = 0;
  if(!tmp923)
  {
    tmp918 = GreaterEq((data->simulationInfo->realParameter[264] /* tank.m_flow_nominal PARAM */),-100000.0);
    tmp919 = LessEq((data->simulationInfo->realParameter[264] /* tank.m_flow_nominal PARAM */),100000.0);
    if(!(tmp918 && tmp919))
    {
      tmp921 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[264] /* tank.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta922 = stringAppend(MMC_REFSTRINGLIT(tmp920),tmp921);
      {
        const char* assert_cond = "(tank.m_flow_nominal >= -100000.0 and tank.m_flow_nominal <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",204,9,206,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta922));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",204,9,206,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta922));
        }
      }
      tmp923 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1533
type: ALGORITHM

  assert(tank.X_start[1] >= 0.0 and tank.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= tank.X_start[1] <= 1.0, has value: " + String(tank.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1533};
  modelica_boolean tmp924;
  modelica_boolean tmp925;
  static const MMC_DEFSTRINGLIT(tmp926,81,"Variable violating min/max constraint: 0.0 <= tank.X_start[1] <= 1.0, has value: ");
  modelica_string tmp927;
  modelica_metatype tmpMeta928;
  static int tmp929 = 0;
  if(!tmp929)
  {
    tmp924 = GreaterEq((data->simulationInfo->realParameter[254] /* tank.X_start[1] PARAM */),0.0);
    tmp925 = LessEq((data->simulationInfo->realParameter[254] /* tank.X_start[1] PARAM */),1.0);
    if(!(tmp924 && tmp925))
    {
      tmp927 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[254] /* tank.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta928 = stringAppend(MMC_REFSTRINGLIT(tmp926),tmp927);
      {
        const char* assert_cond = "(tank.X_start[1] >= 0.0 and tank.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",544,7,546,73,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta928));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",544,7,546,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta928));
        }
      }
      tmp929 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1534
type: ALGORITHM

  assert(tank.p_start >= 611.657 and tank.p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.p_start <= 100000000.0, has value: " + String(tank.p_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1534};
  modelica_boolean tmp930;
  modelica_boolean tmp931;
  static const MMC_DEFSTRINGLIT(tmp932,90,"Variable violating min/max constraint: 611.657 <= tank.p_start <= 100000000.0, has value: ");
  modelica_string tmp933;
  modelica_metatype tmpMeta934;
  static int tmp935 = 0;
  if(!tmp935)
  {
    tmp930 = GreaterEq((data->simulationInfo->realParameter[272] /* tank.p_start PARAM */),611.657);
    tmp931 = LessEq((data->simulationInfo->realParameter[272] /* tank.p_start PARAM */),100000000.0);
    if(!(tmp930 && tmp931))
    {
      tmp933 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[272] /* tank.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta934 = stringAppend(MMC_REFSTRINGLIT(tmp932),tmp933);
      {
        const char* assert_cond = "(tank.p_start >= 611.657 and tank.p_start <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",530,7,532,51,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta934));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",530,7,532,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta934));
        }
      }
      tmp935 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1535
type: ALGORITHM

  assert(tank.T_start >= 273.15 and tank.T_start <= 2273.15, "Variable violating min/max constraint: 273.15 <= tank.T_start <= 2273.15, has value: " + String(tank.T_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1535};
  modelica_boolean tmp936;
  modelica_boolean tmp937;
  static const MMC_DEFSTRINGLIT(tmp938,85,"Variable violating min/max constraint: 273.15 <= tank.T_start <= 2273.15, has value: ");
  modelica_string tmp939;
  modelica_metatype tmpMeta940;
  static int tmp941 = 0;
  if(!tmp941)
  {
    tmp936 = GreaterEq((data->simulationInfo->realParameter[253] /* tank.T_start PARAM */),273.15);
    tmp937 = LessEq((data->simulationInfo->realParameter[253] /* tank.T_start PARAM */),2273.15);
    if(!(tmp936 && tmp937))
    {
      tmp939 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[253] /* tank.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta940 = stringAppend(MMC_REFSTRINGLIT(tmp938),tmp939);
      {
        const char* assert_cond = "(tank.T_start >= 273.15 and tank.T_start <= 2273.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",536,7,539,73,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta940));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",536,7,539,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta940));
        }
      }
      tmp941 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1536
type: ALGORITHM

  assert(tank.h_start >= -10000000000.0 and tank.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= tank.h_start <= 10000000000.0, has value: " + String(tank.h_start, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1536};
  modelica_boolean tmp942;
  modelica_boolean tmp943;
  static const MMC_DEFSTRINGLIT(tmp944,99,"Variable violating min/max constraint: -10000000000.0 <= tank.h_start <= 10000000000.0, has value: ");
  modelica_string tmp945;
  modelica_metatype tmpMeta946;
  static int tmp947 = 0;
  if(!tmp947)
  {
    tmp942 = GreaterEq((data->simulationInfo->realParameter[257] /* tank.h_start PARAM */),-10000000000.0);
    tmp943 = LessEq((data->simulationInfo->realParameter[257] /* tank.h_start PARAM */),10000000000.0);
    if(!(tmp942 && tmp943))
    {
      tmp945 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[257] /* tank.h_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta946 = stringAppend(MMC_REFSTRINGLIT(tmp944),tmp945);
      {
        const char* assert_cond = "(tank.h_start >= -10000000000.0 and tank.h_start <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",540,7,543,77,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta946));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",540,7,543,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta946));
        }
      }
      tmp947 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1537
type: ALGORITHM

  assert(tank.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(tank.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1537};
  modelica_boolean tmp948;
  modelica_boolean tmp949;
  static const MMC_DEFSTRINGLIT(tmp950,167,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp951;
  modelica_metatype tmpMeta952;
  static int tmp953 = 0;
  if(!tmp953)
  {
    tmp948 = GreaterEq((data->simulationInfo->integerParameter[65] /* tank.traceDynamics PARAM */),1);
    tmp949 = LessEq((data->simulationInfo->integerParameter[65] /* tank.traceDynamics PARAM */),4);
    if(!(tmp948 && tmp949))
    {
      tmp951 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[65] /* tank.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta952 = stringAppend(MMC_REFSTRINGLIT(tmp950),tmp951);
      {
        const char* assert_cond = "(tank.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",525,7,527,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta952));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",525,7,527,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta952));
        }
      }
      tmp953 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1538
type: ALGORITHM

  assert(tank.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(tank.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1538};
  modelica_boolean tmp954;
  modelica_boolean tmp955;
  static const MMC_DEFSTRINGLIT(tmp956,171,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp957;
  modelica_metatype tmpMeta958;
  static int tmp959 = 0;
  if(!tmp959)
  {
    tmp954 = GreaterEq((data->simulationInfo->integerParameter[64] /* tank.substanceDynamics PARAM */),1);
    tmp955 = LessEq((data->simulationInfo->integerParameter[64] /* tank.substanceDynamics PARAM */),4);
    if(!(tmp954 && tmp955))
    {
      tmp957 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[64] /* tank.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta958 = stringAppend(MMC_REFSTRINGLIT(tmp956),tmp957);
      {
        const char* assert_cond = "(tank.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",522,7,524,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta958));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",522,7,524,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta958));
        }
      }
      tmp959 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1539
type: ALGORITHM

  assert(tank.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(tank.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1539};
  modelica_boolean tmp960;
  modelica_boolean tmp961;
  static const MMC_DEFSTRINGLIT(tmp962,166,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp963;
  modelica_metatype tmpMeta964;
  static int tmp965 = 0;
  if(!tmp965)
  {
    tmp960 = GreaterEq((data->simulationInfo->integerParameter[62] /* tank.massDynamics PARAM */),1);
    tmp961 = LessEq((data->simulationInfo->integerParameter[62] /* tank.massDynamics PARAM */),4);
    if(!(tmp960 && tmp961))
    {
      tmp963 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[62] /* tank.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta964 = stringAppend(MMC_REFSTRINGLIT(tmp962),tmp963);
      {
        const char* assert_cond = "(tank.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",519,7,521,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta964));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",519,7,521,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta964));
        }
      }
      tmp965 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1540
type: ALGORITHM

  assert(tank.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(tank.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1540};
  modelica_boolean tmp966;
  modelica_boolean tmp967;
  static const MMC_DEFSTRINGLIT(tmp968,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= tank.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp969;
  modelica_metatype tmpMeta970;
  static int tmp971 = 0;
  if(!tmp971)
  {
    tmp966 = GreaterEq((data->simulationInfo->integerParameter[60] /* tank.energyDynamics PARAM */),1);
    tmp967 = LessEq((data->simulationInfo->integerParameter[60] /* tank.energyDynamics PARAM */),4);
    if(!(tmp966 && tmp967))
    {
      tmp969 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[60] /* tank.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta970 = stringAppend(MMC_REFSTRINGLIT(tmp968),tmp969);
      {
        const char* assert_cond = "(tank.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and tank.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",516,7,518,81,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta970));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",516,7,518,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta970));
        }
      }
      tmp971 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1541
type: ALGORITHM

  assert(tank.T_ambient >= 273.15 and tank.T_ambient <= 2273.15, "Variable violating min/max constraint: 273.15 <= tank.T_ambient <= 2273.15, has value: " + String(tank.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1541};
  modelica_boolean tmp972;
  modelica_boolean tmp973;
  static const MMC_DEFSTRINGLIT(tmp974,87,"Variable violating min/max constraint: 273.15 <= tank.T_ambient <= 2273.15, has value: ");
  modelica_string tmp975;
  modelica_metatype tmpMeta976;
  static int tmp977 = 0;
  if(!tmp977)
  {
    tmp972 = GreaterEq((data->simulationInfo->realParameter[252] /* tank.T_ambient PARAM */),273.15);
    tmp973 = LessEq((data->simulationInfo->realParameter[252] /* tank.T_ambient PARAM */),2273.15);
    if(!(tmp972 && tmp973))
    {
      tmp975 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[252] /* tank.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta976 = stringAppend(MMC_REFSTRINGLIT(tmp974),tmp975);
      {
        const char* assert_cond = "(tank.T_ambient >= 273.15 and tank.T_ambient <= 2273.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",63,3,65,63,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta976));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",63,3,65,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta976));
        }
      }
      tmp977 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1542
type: ALGORITHM

  assert(heater.flowModel.states[1].p >= 0.0 and heater.flowModel.states[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.states[1].p <= 100000000.0, has value: " + String(heater.flowModel.states[1].p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1542};
  modelica_boolean tmp978;
  modelica_boolean tmp979;
  static const MMC_DEFSTRINGLIT(tmp980,102,"Variable violating min/max constraint: 0.0 <= heater.flowModel.states[1].p <= 100000000.0, has value: ");
  modelica_string tmp981;
  modelica_metatype tmpMeta982;
  static int tmp983 = 0;
  if(!tmp983)
  {
    tmp978 = GreaterEq((data->simulationInfo->realParameter[70] /* heater.flowModel.states[1].p PARAM */),0.0);
    tmp979 = LessEq((data->simulationInfo->realParameter[70] /* heater.flowModel.states[1].p PARAM */),100000000.0);
    if(!(tmp978 && tmp979))
    {
      tmp981 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[70] /* heater.flowModel.states[1].p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta982 = stringAppend(MMC_REFSTRINGLIT(tmp980),tmp981);
      {
        const char* assert_cond = "(heater.flowModel.states[1].p >= 0.0 and heater.flowModel.states[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta982));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta982));
        }
      }
      tmp983 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1543
type: ALGORITHM

  assert(heater.state_a.p >= 0.0 and heater.state_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.state_a.p <= 100000000.0, has value: " + String(heater.state_a.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1543};
  modelica_boolean tmp984;
  modelica_boolean tmp985;
  static const MMC_DEFSTRINGLIT(tmp986,90,"Variable violating min/max constraint: 0.0 <= heater.state_a.p <= 100000000.0, has value: ");
  modelica_string tmp987;
  modelica_metatype tmpMeta988;
  static int tmp989 = 0;
  if(!tmp989)
  {
    tmp984 = GreaterEq((data->simulationInfo->realParameter[92] /* heater.state_a.p PARAM */),0.0);
    tmp985 = LessEq((data->simulationInfo->realParameter[92] /* heater.state_a.p PARAM */),100000000.0);
    if(!(tmp984 && tmp985))
    {
      tmp987 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[92] /* heater.state_a.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta988 = stringAppend(MMC_REFSTRINGLIT(tmp986),tmp987);
      {
        const char* assert_cond = "(heater.state_a.p >= 0.0 and heater.state_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta988));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta988));
        }
      }
      tmp989 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1544
type: ALGORITHM

  assert(heater.port_a.p >= 0.0 and heater.port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.port_a.p <= 100000000.0, has value: " + String(heater.port_a.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1544};
  modelica_boolean tmp990;
  modelica_boolean tmp991;
  static const MMC_DEFSTRINGLIT(tmp992,89,"Variable violating min/max constraint: 0.0 <= heater.port_a.p <= 100000000.0, has value: ");
  modelica_string tmp993;
  modelica_metatype tmpMeta994;
  static int tmp995 = 0;
  if(!tmp995)
  {
    tmp990 = GreaterEq((data->simulationInfo->realParameter[85] /* heater.port_a.p PARAM */),0.0);
    tmp991 = LessEq((data->simulationInfo->realParameter[85] /* heater.port_a.p PARAM */),100000000.0);
    if(!(tmp990 && tmp991))
    {
      tmp993 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[85] /* heater.port_a.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta994 = stringAppend(MMC_REFSTRINGLIT(tmp992),tmp993);
      {
        const char* assert_cond = "(heater.port_a.p >= 0.0 and heater.port_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta994));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta994));
        }
      }
      tmp995 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1545
type: ALGORITHM

  assert(sensor_m_flow.port_b.p >= 0.0 and sensor_m_flow.port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sensor_m_flow.port_b.p <= 100000000.0, has value: " + String(sensor_m_flow.port_b.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1545};
  modelica_boolean tmp996;
  modelica_boolean tmp997;
  static const MMC_DEFSTRINGLIT(tmp998,96,"Variable violating min/max constraint: 0.0 <= sensor_m_flow.port_b.p <= 100000000.0, has value: ");
  modelica_string tmp999;
  modelica_metatype tmpMeta1000;
  static int tmp1001 = 0;
  if(!tmp1001)
  {
    tmp996 = GreaterEq((data->simulationInfo->realParameter[241] /* sensor_m_flow.port_b.p PARAM */),0.0);
    tmp997 = LessEq((data->simulationInfo->realParameter[241] /* sensor_m_flow.port_b.p PARAM */),100000000.0);
    if(!(tmp996 && tmp997))
    {
      tmp999 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[241] /* sensor_m_flow.port_b.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1000 = stringAppend(MMC_REFSTRINGLIT(tmp998),tmp999);
      {
        const char* assert_cond = "(sensor_m_flow.port_b.p >= 0.0 and sensor_m_flow.port_b.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1000));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1000));
        }
      }
      tmp1001 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1546
type: ALGORITHM

  assert(sensor_m_flow.port_a.p >= 0.0 and sensor_m_flow.port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sensor_m_flow.port_a.p <= 100000000.0, has value: " + String(sensor_m_flow.port_a.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1546};
  modelica_boolean tmp1002;
  modelica_boolean tmp1003;
  static const MMC_DEFSTRINGLIT(tmp1004,96,"Variable violating min/max constraint: 0.0 <= sensor_m_flow.port_a.p <= 100000000.0, has value: ");
  modelica_string tmp1005;
  modelica_metatype tmpMeta1006;
  static int tmp1007 = 0;
  if(!tmp1007)
  {
    tmp1002 = GreaterEq((data->simulationInfo->realParameter[240] /* sensor_m_flow.port_a.p PARAM */),0.0);
    tmp1003 = LessEq((data->simulationInfo->realParameter[240] /* sensor_m_flow.port_a.p PARAM */),100000000.0);
    if(!(tmp1002 && tmp1003))
    {
      tmp1005 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[240] /* sensor_m_flow.port_a.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1006 = stringAppend(MMC_REFSTRINGLIT(tmp1004),tmp1005);
      {
        const char* assert_cond = "(sensor_m_flow.port_a.p >= 0.0 and sensor_m_flow.port_a.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1006));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1006));
        }
      }
      tmp1007 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1547
type: ALGORITHM

  assert(pump.port_b.p >= 0.0 and pump.port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.port_b.p <= 100000000.0, has value: " + String(pump.port_b.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1547};
  modelica_boolean tmp1008;
  modelica_boolean tmp1009;
  static const MMC_DEFSTRINGLIT(tmp1010,87,"Variable violating min/max constraint: 0.0 <= pump.port_b.p <= 100000000.0, has value: ");
  modelica_string tmp1011;
  modelica_metatype tmpMeta1012;
  static int tmp1013 = 0;
  if(!tmp1013)
  {
    tmp1008 = GreaterEq((data->simulationInfo->realParameter[178] /* pump.port_b.p PARAM */),0.0);
    tmp1009 = LessEq((data->simulationInfo->realParameter[178] /* pump.port_b.p PARAM */),100000000.0);
    if(!(tmp1008 && tmp1009))
    {
      tmp1011 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[178] /* pump.port_b.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1012 = stringAppend(MMC_REFSTRINGLIT(tmp1010),tmp1011);
      {
        const char* assert_cond = "(pump.port_b.p >= 0.0 and pump.port_b.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1012));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1012));
        }
      }
      tmp1013 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1548
type: ALGORITHM

  assert(pump.medium.p >= 0.0, "Variable violating min constraint: 0.0 <= pump.medium.p, has value: " + String(pump.medium.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1548};
  modelica_boolean tmp1014;
  static const MMC_DEFSTRINGLIT(tmp1015,68,"Variable violating min constraint: 0.0 <= pump.medium.p, has value: ");
  modelica_string tmp1016;
  modelica_metatype tmpMeta1017;
  static int tmp1018 = 0;
  if(!tmp1018)
  {
    tmp1014 = GreaterEq((data->simulationInfo->realParameter[169] /* pump.medium.p PARAM */),0.0);
    if(!tmp1014)
    {
      tmp1016 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[169] /* pump.medium.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1017 = stringAppend(MMC_REFSTRINGLIT(tmp1015),tmp1016);
      {
        const char* assert_cond = "(pump.medium.p >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1017));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1017));
        }
      }
      tmp1018 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1549
type: ALGORITHM

  assert(pump.medium.state.p >= 0.0 and pump.medium.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.medium.state.p <= 100000000.0, has value: " + String(pump.medium.state.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1549};
  modelica_boolean tmp1019;
  modelica_boolean tmp1020;
  static const MMC_DEFSTRINGLIT(tmp1021,93,"Variable violating min/max constraint: 0.0 <= pump.medium.state.p <= 100000000.0, has value: ");
  modelica_string tmp1022;
  modelica_metatype tmpMeta1023;
  static int tmp1024 = 0;
  if(!tmp1024)
  {
    tmp1019 = GreaterEq((data->simulationInfo->realParameter[170] /* pump.medium.state.p PARAM */),0.0);
    tmp1020 = LessEq((data->simulationInfo->realParameter[170] /* pump.medium.state.p PARAM */),100000000.0);
    if(!(tmp1019 && tmp1020))
    {
      tmp1022 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[170] /* pump.medium.state.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1023 = stringAppend(MMC_REFSTRINGLIT(tmp1021),tmp1022);
      {
        const char* assert_cond = "(pump.medium.state.p >= 0.0 and pump.medium.state.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1023));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1023));
        }
      }
      tmp1024 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1550
type: ALGORITHM

  assert(pump.monitoring.state.p >= 0.0 and pump.monitoring.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.monitoring.state.p <= 100000000.0, has value: " + String(pump.monitoring.state.p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1550};
  modelica_boolean tmp1025;
  modelica_boolean tmp1026;
  static const MMC_DEFSTRINGLIT(tmp1027,97,"Variable violating min/max constraint: 0.0 <= pump.monitoring.state.p <= 100000000.0, has value: ");
  modelica_string tmp1028;
  modelica_metatype tmpMeta1029;
  static int tmp1030 = 0;
  if(!tmp1030)
  {
    tmp1025 = GreaterEq((data->simulationInfo->realParameter[171] /* pump.monitoring.state.p PARAM */),0.0);
    tmp1026 = LessEq((data->simulationInfo->realParameter[171] /* pump.monitoring.state.p PARAM */),100000000.0);
    if(!(tmp1025 && tmp1026))
    {
      tmp1028 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[171] /* pump.monitoring.state.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1029 = stringAppend(MMC_REFSTRINGLIT(tmp1027),tmp1028);
      {
        const char* assert_cond = "(pump.monitoring.state.p >= 0.0 and pump.monitoring.state.p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1029));
        }
      }
      tmp1030 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1551
type: ALGORITHM

  assert(pump.heatTransfer.states[1].p >= 0.0 and pump.heatTransfer.states[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pump.heatTransfer.states[1].p <= 100000000.0, has value: " + String(pump.heatTransfer.states[1].p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1551};
  modelica_boolean tmp1031;
  modelica_boolean tmp1032;
  static const MMC_DEFSTRINGLIT(tmp1033,103,"Variable violating min/max constraint: 0.0 <= pump.heatTransfer.states[1].p <= 100000000.0, has value: ");
  modelica_string tmp1034;
  modelica_metatype tmpMeta1035;
  static int tmp1036 = 0;
  if(!tmp1036)
  {
    tmp1031 = GreaterEq((data->simulationInfo->realParameter[165] /* pump.heatTransfer.states[1].p PARAM */),0.0);
    tmp1032 = LessEq((data->simulationInfo->realParameter[165] /* pump.heatTransfer.states[1].p PARAM */),100000000.0);
    if(!(tmp1031 && tmp1032))
    {
      tmp1034 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[165] /* pump.heatTransfer.states[1].p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1035 = stringAppend(MMC_REFSTRINGLIT(tmp1033),tmp1034);
      {
        const char* assert_cond = "(pump.heatTransfer.states[1].p >= 0.0 and pump.heatTransfer.states[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1035));
        }
      }
      tmp1036 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1552
type: ALGORITHM

  assert(heater.statesFM[1].p >= 0.0 and heater.statesFM[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.statesFM[1].p <= 100000000.0, has value: " + String(heater.statesFM[1].p, "g"));
*/
OMC_DISABLE_OPT
static void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1552};
  modelica_boolean tmp1037;
  modelica_boolean tmp1038;
  static const MMC_DEFSTRINGLIT(tmp1039,94,"Variable violating min/max constraint: 0.0 <= heater.statesFM[1].p <= 100000000.0, has value: ");
  modelica_string tmp1040;
  modelica_metatype tmpMeta1041;
  static int tmp1042 = 0;
  if(!tmp1042)
  {
    tmp1037 = GreaterEq((data->simulationInfo->realParameter[93] /* heater.statesFM[1].p PARAM */),0.0);
    tmp1038 = LessEq((data->simulationInfo->realParameter[93] /* heater.statesFM[1].p PARAM */),100000000.0);
    if(!(tmp1037 && tmp1038))
    {
      tmp1040 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[93] /* heater.statesFM[1].p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1041 = stringAppend(MMC_REFSTRINGLIT(tmp1039),tmp1040);
      {
        const char* assert_cond = "(heater.statesFM[1].p >= 0.0 and heater.statesFM[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1041));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1041));
        }
      }
      tmp1042 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void Modelica_Fluid_Examples_HeatingSystem_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_878(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_879(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_880(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_300(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_299(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_298(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_297(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_296(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_295(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_294(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_293(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_292(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_291(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_290(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_289(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_288(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_287(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_895(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_896(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_897(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_898(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_899(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_900(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_901(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_902(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_903(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_904(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_905(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_906(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_907(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_908(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_909(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_910(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_911(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_912(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_913(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_914(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_915(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_916(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_917(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_918(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_919(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_920(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_921(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_922(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_923(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_924(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_925(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_926(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_927(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_928(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_929(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_930(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_931(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_932(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_933(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_934(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_935(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_936(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_937(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_938(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_939(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_940(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_941(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_942(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_943(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_944(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_945(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_946(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_947(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_948(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_949(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_950(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_951(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_952(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_953(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_954(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_955(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_956(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_957(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_958(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_959(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_960(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_961(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_962(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_963(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_964(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_965(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_966(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_967(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_968(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_969(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_970(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_971(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_972(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_973(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_974(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_975(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_976(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_977(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_978(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_979(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_980(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_981(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_982(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_983(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_984(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_985(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_986(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_987(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_988(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_989(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_990(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_991(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_992(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_993(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_994(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_995(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_996(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_997(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_998(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_999(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1000(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1001(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1002(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1005(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1006(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1013(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1014(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1029(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1030(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1066(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1074(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1075(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1082(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1083(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1098(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1099(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1130(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1138(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1139(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1146(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1147(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1162(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1163(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1194(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1201(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1203(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1204(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1212(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1213(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1219(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1225(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1226(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1231(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1232(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1233(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1237(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1245(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1246(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1255(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1256(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1262(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1263(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1264(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1265(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1271(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1277(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1278(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1284(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_286(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_285(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_284(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_283(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_282(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_281(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_280(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_41(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_40(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_279(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_278(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_277(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_276(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_275(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_274(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_273(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_272(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_271(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_270(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_39(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_269(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_268(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_267(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_266(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_265(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_264(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_263(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_262(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_38(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_261(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_260(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_259(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_258(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_37(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_36(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_257(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_34(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_256(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_35(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_33(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_32(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_31(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_30(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_29(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_28(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_27(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_26(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_25(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_24(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_23(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_22(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_21(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_20(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_19(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_18(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_17(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_16(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_15(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_14(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_13(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_12(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_11(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_10(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_9(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_8(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_7(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_6(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_5(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_4(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_3(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_2(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1357(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1358(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1359(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1360(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1361(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1362(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1363(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1364(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1365(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1366(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1367(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1368(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1369(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1370(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1371(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1372(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1373(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1374(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1375(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1376(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1377(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1378(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1379(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1380(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1381(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1382(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1383(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1384(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1385(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1386(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1387(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1388(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1389(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1390(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1391(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1392(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1393(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1394(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1395(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1396(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1397(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1398(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1399(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1400(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1401(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1402(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1403(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1404(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1405(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1406(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1407(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1408(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1409(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1410(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1411(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1412(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1413(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1414(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1415(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1416(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1417(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1418(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1419(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1420(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1421(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1422(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1423(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1424(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1425(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1426(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1427(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1428(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1429(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1430(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1431(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1432(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1433(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1434(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1435(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1436(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1437(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1438(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1439(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1440(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1441(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1442(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1443(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1444(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1445(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1446(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1447(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1448(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1449(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1450(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1451(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1452(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1453(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1454(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1455(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1456(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1457(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1458(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1459(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1460(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1461(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1462(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1463(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1464(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1465(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1466(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1467(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1468(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1469(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1470(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1471(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1472(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1473(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1474(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1475(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1476(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1477(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1478(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1479(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1480(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1481(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1482(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1483(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1484(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1485(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1486(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1487(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1488(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1489(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1490(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1491(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1492(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1493(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1494(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1495(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1496(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1497(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1498(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1499(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1500(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1501(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1502(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1503(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1504(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1505(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1506(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1507(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1508(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1509(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1510(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1511(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1512(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1513(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1514(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1515(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1516(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1517(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1518(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1519(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1520(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1521(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1522(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1523(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1524(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1525(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1526(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1527(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1528(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1529(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1530(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1531(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1532(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1533(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1534(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1535(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1536(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1537(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1538(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1539(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1540(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1541(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1542(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1543(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1544(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1545(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1546(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1547(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1548(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1549(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1550(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1551(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1552(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->integerParameter[1] /* heater.flowModel.m PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  (data->simulationInfo->integerParameter[3] /* heater.flowModel.n PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  (data->simulationInfo->integerParameter[4] /* heater.heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  (data->simulationInfo->integerParameter[5] /* heater.iLumped PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[9] /* heater.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  (data->simulationInfo->integerParameter[10] /* heater.nFM PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  (data->simulationInfo->integerParameter[11] /* heater.nFMDistributed PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  (data->simulationInfo->integerParameter[12] /* heater.nFMLumped PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  (data->simulationInfo->integerParameter[13] /* heater.nNodes PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  (data->simulationInfo->integerParameter[17] /* pipe.flowModel.m PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[17].time_unvarying = 1;
  (data->simulationInfo->integerParameter[19] /* pipe.flowModel.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[19].time_unvarying = 1;
  (data->simulationInfo->integerParameter[20] /* pipe.heatTransfer.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[20].time_unvarying = 1;
  (data->simulationInfo->integerParameter[21] /* pipe.iLumped PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[21].time_unvarying = 1;
  (data->simulationInfo->integerParameter[25] /* pipe.n PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[25].time_unvarying = 1;
  (data->simulationInfo->integerParameter[26] /* pipe.nFM PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[26].time_unvarying = 1;
  (data->simulationInfo->integerParameter[27] /* pipe.nFMDistributed PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[27].time_unvarying = 1;
  (data->simulationInfo->integerParameter[28] /* pipe.nFMLumped PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[28].time_unvarying = 1;
  (data->simulationInfo->integerParameter[29] /* pipe.nNodes PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[29].time_unvarying = 1;
  (data->simulationInfo->integerParameter[34] /* pump.heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[34].time_unvarying = 1;
  (data->simulationInfo->integerParameter[40] /* radiator.flowModel.m PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[40].time_unvarying = 1;
  (data->simulationInfo->integerParameter[42] /* radiator.flowModel.n PARAM */) = ((modelica_integer) 3);
  data->modelData->integerParameterData[42].time_unvarying = 1;
  (data->simulationInfo->integerParameter[43] /* radiator.heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[43].time_unvarying = 1;
  (data->simulationInfo->integerParameter[44] /* radiator.iLumped PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[44].time_unvarying = 1;
  (data->simulationInfo->integerParameter[48] /* radiator.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[48].time_unvarying = 1;
  (data->simulationInfo->integerParameter[49] /* radiator.nFM PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[49].time_unvarying = 1;
  (data->simulationInfo->integerParameter[50] /* radiator.nFMDistributed PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[50].time_unvarying = 1;
  (data->simulationInfo->integerParameter[51] /* radiator.nFMLumped PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[51].time_unvarying = 1;
  (data->simulationInfo->integerParameter[52] /* radiator.nNodes PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[52].time_unvarying = 1;
  (data->simulationInfo->integerParameter[61] /* tank.heatTransfer.n PARAM */) = ((modelica_integer) 1);
  data->modelData->integerParameterData[61].time_unvarying = 1;
  (data->simulationInfo->integerParameter[63] /* tank.nPorts PARAM */) = ((modelica_integer) 2);
  data->modelData->integerParameterData[63].time_unvarying = 1;
  (data->simulationInfo->realParameter[32] /* heater.T_start PARAM */) = 353.15;
  data->modelData->realParameterData[32].time_unvarying = 1;
  (data->simulationInfo->realParameter[34] /* heater.X_start[1] PARAM */) = 1.0;
  data->modelData->realParameterData[34].time_unvarying = 1;
  (data->simulationInfo->realParameter[40] /* heater.dheights[1] PARAM */) = 0.0;
  data->modelData->realParameterData[40].time_unvarying = 1;
  (data->simulationInfo->realParameter[46] /* heater.dxs[1] PARAM */) = 1.0;
  data->modelData->realParameterData[46].time_unvarying = 1;
  (data->simulationInfo->realParameter[47] /* heater.flowModel.Re_turbulent PARAM */) = 4000.0;
  data->modelData->realParameterData[47].time_unvarying = 1;
  (data->simulationInfo->realParameter[61] /* heater.flowModel.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[61].time_unvarying = 1;
  (data->simulationInfo->realParameter[62] /* heater.flowModel.mu_nominal PARAM */) = 0.0008899999999999999;
  data->modelData->realParameterData[62].time_unvarying = 1;
  (data->simulationInfo->realParameter[64] /* heater.flowModel.p_a_start PARAM */) = 130000.0;
  data->modelData->realParameterData[64].time_unvarying = 1;
  (data->simulationInfo->realParameter[65] /* heater.flowModel.p_b_start PARAM */) = 130000.0;
  data->modelData->realParameterData[65].time_unvarying = 1;
  (data->simulationInfo->realParameter[66] /* heater.flowModel.rho_nominal PARAM */) = 998.3298937621773;
  data->modelData->realParameterData[66].time_unvarying = 1;
  (data->simulationInfo->realParameter[71] /* heater.h_start PARAM */) = 334959.5523620477;
  data->modelData->realParameterData[71].time_unvarying = 1;
  (data->simulationInfo->realParameter[74] /* heater.heatTransfer.k PARAM */) = 0.0;
  data->modelData->realParameterData[74].time_unvarying = 1;
  (data->simulationInfo->realParameter[77] /* heater.height_ab PARAM */) = 0.0;
  data->modelData->realParameterData[77].time_unvarying = 1;
  (data->simulationInfo->realParameter[78] /* heater.length PARAM */) = 2.0;
  data->modelData->realParameterData[78].time_unvarying = 1;
  (data->simulationInfo->realParameter[79] /* heater.lengths[1] PARAM */) = 2.0;
  data->modelData->realParameterData[79].time_unvarying = 1;
  (data->simulationInfo->realParameter[80] /* heater.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[80].time_unvarying = 1;
  (data->simulationInfo->realParameter[82] /* heater.p_a_start PARAM */) = 130000.0;
  data->modelData->realParameterData[82].time_unvarying = 1;
  (data->simulationInfo->realParameter[83] /* heater.p_b_start PARAM */) = 130000.0;
  data->modelData->realParameterData[83].time_unvarying = 1;
  (data->simulationInfo->realParameter[86] /* heater.ps_start[1] PARAM */) = 130000.0;
  data->modelData->realParameterData[86].time_unvarying = 1;
  (data->simulationInfo->realParameter[94] /* pipe.T_start PARAM */) = 353.15;
  data->modelData->realParameterData[94].time_unvarying = 1;
  (data->simulationInfo->realParameter[96] /* pipe.X_start[1] PARAM */) = 1.0;
  data->modelData->realParameterData[96].time_unvarying = 1;
  (data->simulationInfo->realParameter[102] /* pipe.dheights[1] PARAM */) = 0.0;
  data->modelData->realParameterData[102].time_unvarying = 1;
  (data->simulationInfo->realParameter[103] /* pipe.dheights[2] PARAM */) = 0.0;
  data->modelData->realParameterData[103].time_unvarying = 1;
  (data->simulationInfo->realParameter[109] /* pipe.dxs[1] PARAM */) = 0.5;
  data->modelData->realParameterData[109].time_unvarying = 1;
  (data->simulationInfo->realParameter[110] /* pipe.dxs[2] PARAM */) = 0.5;
  data->modelData->realParameterData[110].time_unvarying = 1;
  (data->simulationInfo->realParameter[111] /* pipe.flowModel.Re_turbulent PARAM */) = 4000.0;
  data->modelData->realParameterData[111].time_unvarying = 1;
  (data->simulationInfo->realParameter[121] /* pipe.flowModel.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[121].time_unvarying = 1;
  (data->simulationInfo->realParameter[122] /* pipe.flowModel.mu_nominal PARAM */) = 0.0008899999999999999;
  data->modelData->realParameterData[122].time_unvarying = 1;
  (data->simulationInfo->realParameter[124] /* pipe.flowModel.p_a_start PARAM */) = 130000.0;
  data->modelData->realParameterData[124].time_unvarying = 1;
  (data->simulationInfo->realParameter[125] /* pipe.flowModel.p_b_start PARAM */) = 130000.0;
  data->modelData->realParameterData[125].time_unvarying = 1;
  (data->simulationInfo->realParameter[126] /* pipe.flowModel.rho_nominal PARAM */) = 998.3298937621773;
  data->modelData->realParameterData[126].time_unvarying = 1;
  (data->simulationInfo->realParameter[129] /* pipe.h_start PARAM */) = 334959.5523620477;
  data->modelData->realParameterData[129].time_unvarying = 1;
  (data->simulationInfo->realParameter[133] /* pipe.heatTransfer.k PARAM */) = 0.0;
  data->modelData->realParameterData[133].time_unvarying = 1;
  (data->simulationInfo->realParameter[137] /* pipe.height_ab PARAM */) = 0.0;
  data->modelData->realParameterData[137].time_unvarying = 1;
  (data->simulationInfo->realParameter[138] /* pipe.length PARAM */) = 10.0;
  data->modelData->realParameterData[138].time_unvarying = 1;
  (data->simulationInfo->realParameter[139] /* pipe.lengths[1] PARAM */) = 5.0;
  data->modelData->realParameterData[139].time_unvarying = 1;
  (data->simulationInfo->realParameter[140] /* pipe.lengths[2] PARAM */) = 5.0;
  data->modelData->realParameterData[140].time_unvarying = 1;
  (data->simulationInfo->realParameter[141] /* pipe.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[141].time_unvarying = 1;
  (data->simulationInfo->realParameter[143] /* pipe.p_a_start PARAM */) = 130000.0;
  data->modelData->realParameterData[143].time_unvarying = 1;
  (data->simulationInfo->realParameter[144] /* pipe.p_b_start PARAM */) = 130000.0;
  data->modelData->realParameterData[144].time_unvarying = 1;
  (data->simulationInfo->realParameter[146] /* pipe.ps_start[1] PARAM */) = 130000.0;
  data->modelData->realParameterData[146].time_unvarying = 1;
  (data->simulationInfo->realParameter[147] /* pipe.ps_start[2] PARAM */) = 130000.0;
  data->modelData->realParameterData[147].time_unvarying = 1;
  (data->simulationInfo->realParameter[155] /* pump.V PARAM */) = 0.0;
  data->modelData->realParameterData[155].time_unvarying = 1;
  (data->simulationInfo->realParameter[164] /* pump.heatTransfer.k PARAM */) = 0.0;
  data->modelData->realParameterData[164].time_unvarying = 1;
  (data->simulationInfo->realParameter[180] /* radiator.T_start PARAM */) = 313.15;
  data->modelData->realParameterData[180].time_unvarying = 1;
  (data->simulationInfo->realParameter[182] /* radiator.X_start[1] PARAM */) = 1.0;
  data->modelData->realParameterData[182].time_unvarying = 1;
  (data->simulationInfo->realParameter[188] /* radiator.dheights[1] PARAM */) = 0.0;
  data->modelData->realParameterData[188].time_unvarying = 1;
  (data->simulationInfo->realParameter[194] /* radiator.dxs[1] PARAM */) = 1.0;
  data->modelData->realParameterData[194].time_unvarying = 1;
  (data->simulationInfo->realParameter[195] /* radiator.flowModel.Re_turbulent PARAM */) = 4000.0;
  data->modelData->realParameterData[195].time_unvarying = 1;
  (data->simulationInfo->realParameter[209] /* radiator.flowModel.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[209].time_unvarying = 1;
  (data->simulationInfo->realParameter[210] /* radiator.flowModel.mu_nominal PARAM */) = 0.0008899999999999999;
  data->modelData->realParameterData[210].time_unvarying = 1;
  (data->simulationInfo->realParameter[212] /* radiator.flowModel.p_a_start PARAM */) = 110000.0;
  data->modelData->realParameterData[212].time_unvarying = 1;
  (data->simulationInfo->realParameter[213] /* radiator.flowModel.p_b_start PARAM */) = 110000.0;
  data->modelData->realParameterData[213].time_unvarying = 1;
  (data->simulationInfo->realParameter[214] /* radiator.flowModel.rho_nominal PARAM */) = 998.3298937621773;
  data->modelData->realParameterData[214].time_unvarying = 1;
  (data->simulationInfo->realParameter[218] /* radiator.h_start PARAM */) = 167665.6108440617;
  data->modelData->realParameterData[218].time_unvarying = 1;
  (data->simulationInfo->realParameter[221] /* radiator.heatTransfer.k PARAM */) = 0.0;
  data->modelData->realParameterData[221].time_unvarying = 1;
  (data->simulationInfo->realParameter[224] /* radiator.height_ab PARAM */) = 0.0;
  data->modelData->realParameterData[224].time_unvarying = 1;
  (data->simulationInfo->realParameter[225] /* radiator.length PARAM */) = 10.0;
  data->modelData->realParameterData[225].time_unvarying = 1;
  (data->simulationInfo->realParameter[226] /* radiator.lengths[1] PARAM */) = 10.0;
  data->modelData->realParameterData[226].time_unvarying = 1;
  (data->simulationInfo->realParameter[227] /* radiator.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[227].time_unvarying = 1;
  (data->simulationInfo->realParameter[229] /* radiator.p_a_start PARAM */) = 110000.0;
  data->modelData->realParameterData[229].time_unvarying = 1;
  (data->simulationInfo->realParameter[230] /* radiator.p_b_start PARAM */) = 110000.0;
  data->modelData->realParameterData[230].time_unvarying = 1;
  (data->simulationInfo->realParameter[232] /* radiator.ps_start[1] PARAM */) = 110000.0;
  data->modelData->realParameterData[232].time_unvarying = 1;
  (data->simulationInfo->realParameter[249] /* system.m_flow_start PARAM */) = 0.0;
  data->modelData->realParameterData[249].time_unvarying = 1;
  (data->simulationInfo->realParameter[259] /* tank.heatTransfer.k PARAM */) = 10.0;
  data->modelData->realParameterData[259].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2] /* heater.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3] /* heater.flowModel.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[4] /* heater.flowModel.constantPressureLossCoefficient PARAM */) = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[5] /* heater.flowModel.continuousFlowReversal PARAM */) = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[6] /* heater.flowModel.from_dp PARAM */) = 1;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[7] /* heater.flowModel.show_Res PARAM */) = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[8] /* heater.flowModel.useUpstreamScheme PARAM */) = 1;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[9] /* heater.flowModel.use_Ib_flows PARAM */) = 0;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[10] /* heater.flowModel.use_mu_nominal PARAM */) = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[11] /* heater.flowModel.use_rho_nominal PARAM */) = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[12] /* heater.heatTransfer.use_k PARAM */) = 1;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[13] /* heater.initialize_p PARAM */) = 1;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[14] /* heater.isCircular PARAM */) = 1;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[15] /* heater.mediums[1].preferredMediumStates PARAM */) = 1;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[16] /* heater.mediums[1].standardOrderComponents PARAM */) = 1;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[17] /* heater.port_a_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[18] /* heater.port_b_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[19] /* heater.showDesignFlowDirection PARAM */) = 1;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[20] /* heater.useInnerPortProperties PARAM */) = 0;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[21] /* heater.useLumpedPressure PARAM */) = 0;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[22] /* heater.use_HeatTransfer PARAM */) = 1;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[23] /* heater.use_T_start PARAM */) = 1;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[24] /* pipe.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[25] /* pipe.flowModel.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[26] /* pipe.flowModel.constantPressureLossCoefficient PARAM */) = 0;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[27] /* pipe.flowModel.continuousFlowReversal PARAM */) = 0;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[28] /* pipe.flowModel.from_dp PARAM */) = 1;
  data->modelData->booleanParameterData[28].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[29] /* pipe.flowModel.show_Res PARAM */) = 0;
  data->modelData->booleanParameterData[29].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[30] /* pipe.flowModel.useUpstreamScheme PARAM */) = 1;
  data->modelData->booleanParameterData[30].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[31] /* pipe.flowModel.use_Ib_flows PARAM */) = 0;
  data->modelData->booleanParameterData[31].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[32] /* pipe.flowModel.use_mu_nominal PARAM */) = 0;
  data->modelData->booleanParameterData[32].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[33] /* pipe.flowModel.use_rho_nominal PARAM */) = 0;
  data->modelData->booleanParameterData[33].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[34] /* pipe.heatTransfer.use_k PARAM */) = 0;
  data->modelData->booleanParameterData[34].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[35] /* pipe.initialize_p PARAM */) = 1;
  data->modelData->booleanParameterData[35].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[36] /* pipe.isCircular PARAM */) = 1;
  data->modelData->booleanParameterData[36].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[37] /* pipe.mediums[1].preferredMediumStates PARAM */) = 1;
  data->modelData->booleanParameterData[37].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[38] /* pipe.mediums[2].preferredMediumStates PARAM */) = 1;
  data->modelData->booleanParameterData[38].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[39] /* pipe.mediums[1].standardOrderComponents PARAM */) = 1;
  data->modelData->booleanParameterData[39].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[40] /* pipe.mediums[2].standardOrderComponents PARAM */) = 1;
  data->modelData->booleanParameterData[40].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[41] /* pipe.port_a_exposesState PARAM */) = 1;
  data->modelData->booleanParameterData[41].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[42] /* pipe.port_b_exposesState PARAM */) = 1;
  data->modelData->booleanParameterData[42].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[43] /* pipe.showDesignFlowDirection PARAM */) = 1;
  data->modelData->booleanParameterData[43].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[44] /* pipe.useInnerPortProperties PARAM */) = 0;
  data->modelData->booleanParameterData[44].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[45] /* pipe.useLumpedPressure PARAM */) = 0;
  data->modelData->booleanParameterData[45].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[46] /* pipe.use_HeatTransfer PARAM */) = 0;
  data->modelData->booleanParameterData[46].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[47] /* pipe.use_T_start PARAM */) = 1;
  data->modelData->booleanParameterData[47].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[48] /* pump.allowFlowReversal PARAM */) = 0;
  data->modelData->booleanParameterData[48].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[49] /* pump.checkValve PARAM */) = 0;
  data->modelData->booleanParameterData[49].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[50] /* pump.control_m_flow PARAM */) = 0;
  data->modelData->booleanParameterData[50].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[51] /* pump.heatTransfer.use_k PARAM */) = 0;
  data->modelData->booleanParameterData[51].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[52] /* pump.initialize_p PARAM */) = 1;
  data->modelData->booleanParameterData[52].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[53] /* pump.medium.preferredMediumStates PARAM */) = 0;
  data->modelData->booleanParameterData[53].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[54] /* pump.medium.standardOrderComponents PARAM */) = 1;
  data->modelData->booleanParameterData[54].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[55] /* pump.port_a_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[55].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[56] /* pump.port_b_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[56].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[57] /* pump.showDesignFlowDirection PARAM */) = 1;
  data->modelData->booleanParameterData[57].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[58] /* pump.use_HeatTransfer PARAM */) = 0;
  data->modelData->booleanParameterData[58].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[59] /* pump.use_T_start PARAM */) = 1;
  data->modelData->booleanParameterData[59].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[60] /* pump.use_m_flow_set PARAM */) = 0;
  data->modelData->booleanParameterData[60].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[61] /* pump.use_p_set PARAM */) = 0;
  data->modelData->booleanParameterData[61].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[62] /* pump.use_powerCharacteristic PARAM */) = 0;
  data->modelData->booleanParameterData[62].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[63] /* radiator.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[63].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[64] /* radiator.flowModel.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[64].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[65] /* radiator.flowModel.constantPressureLossCoefficient PARAM */) = 0;
  data->modelData->booleanParameterData[65].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[66] /* radiator.flowModel.continuousFlowReversal PARAM */) = 0;
  data->modelData->booleanParameterData[66].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[67] /* radiator.flowModel.from_dp PARAM */) = 1;
  data->modelData->booleanParameterData[67].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[68] /* radiator.flowModel.show_Res PARAM */) = 0;
  data->modelData->booleanParameterData[68].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[69] /* radiator.flowModel.useUpstreamScheme PARAM */) = 1;
  data->modelData->booleanParameterData[69].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[70] /* radiator.flowModel.use_Ib_flows PARAM */) = 0;
  data->modelData->booleanParameterData[70].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[71] /* radiator.flowModel.use_mu_nominal PARAM */) = 0;
  data->modelData->booleanParameterData[71].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[72] /* radiator.flowModel.use_rho_nominal PARAM */) = 0;
  data->modelData->booleanParameterData[72].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[73] /* radiator.heatTransfer.use_k PARAM */) = 1;
  data->modelData->booleanParameterData[73].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[74] /* radiator.initialize_p PARAM */) = 1;
  data->modelData->booleanParameterData[74].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[75] /* radiator.isCircular PARAM */) = 1;
  data->modelData->booleanParameterData[75].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[76] /* radiator.mediums[1].preferredMediumStates PARAM */) = 1;
  data->modelData->booleanParameterData[76].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[77] /* radiator.mediums[1].standardOrderComponents PARAM */) = 1;
  data->modelData->booleanParameterData[77].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[78] /* radiator.port_a_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[78].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[79] /* radiator.port_b_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[79].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[80] /* radiator.showDesignFlowDirection PARAM */) = 1;
  data->modelData->booleanParameterData[80].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[81] /* radiator.useInnerPortProperties PARAM */) = 0;
  data->modelData->booleanParameterData[81].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[82] /* radiator.useLumpedPressure PARAM */) = 0;
  data->modelData->booleanParameterData[82].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[83] /* radiator.use_HeatTransfer PARAM */) = 1;
  data->modelData->booleanParameterData[83].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[84] /* radiator.use_T_start PARAM */) = 1;
  data->modelData->booleanParameterData[84].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[85] /* sensor_m_flow.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[85].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[86] /* sensor_m_flow.port_a_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[86].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[87] /* sensor_m_flow.port_b_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[87].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[88] /* sensor_m_flow.showDesignFlowDirection PARAM */) = 1;
  data->modelData->booleanParameterData[88].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[89] /* system.allowFlowReversal PARAM */) = 1;
  data->modelData->booleanParameterData[89].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[90] /* system.use_eps_Re PARAM */) = 0;
  data->modelData->booleanParameterData[90].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[91] /* tank.heatTransfer.use_k PARAM */) = 1;
  data->modelData->booleanParameterData[91].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[92] /* tank.initialize_p PARAM */) = 0;
  data->modelData->booleanParameterData[92].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[93] /* tank.medium.preferredMediumStates PARAM */) = 1;
  data->modelData->booleanParameterData[93].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[94] /* tank.medium.standardOrderComponents PARAM */) = 1;
  data->modelData->booleanParameterData[94].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[95] /* tank.use_HeatTransfer PARAM */) = 1;
  data->modelData->booleanParameterData[95].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[96] /* tank.use_Re PARAM */) = 0;
  data->modelData->booleanParameterData[96].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[97] /* tank.use_T_start PARAM */) = 1;
  data->modelData->booleanParameterData[97].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[98] /* tank.use_portsData PARAM */) = 1;
  data->modelData->booleanParameterData[98].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[99] /* valve.allowFlowReversal PARAM */) = 0;
  data->modelData->booleanParameterData[99].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[100] /* valve.checkValve PARAM */) = 0;
  data->modelData->booleanParameterData[100].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[101] /* valve.filteredOpening PARAM */) = 0;
  data->modelData->booleanParameterData[101].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[102] /* valve.port_a_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[102].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[103] /* valve.port_b_exposesState PARAM */) = 0;
  data->modelData->booleanParameterData[103].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[104] /* valve.showDesignFlowDirection PARAM */) = 1;
  data->modelData->booleanParameterData[104].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[105] /* valve.show_T PARAM */) = 1;
  data->modelData->booleanParameterData[105].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[106] /* valve.show_V_flow PARAM */) = 1;
  data->modelData->booleanParameterData[106].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[107] /* valve.use_Re PARAM */) = 0;
  data->modelData->booleanParameterData[107].time_unvarying = 1;
  (data->simulationInfo->integerParameter[0] /* heater.energyDynamics PARAM */) = 3;
  data->modelData->integerParameterData[0].time_unvarying = 1;
  (data->simulationInfo->integerParameter[2] /* heater.flowModel.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  (data->simulationInfo->integerParameter[6] /* heater.massDynamics PARAM */) = 3;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  (data->simulationInfo->integerParameter[7] /* heater.modelStructure PARAM */) = 2;
  data->modelData->integerParameterData[7].time_unvarying = 1;
  (data->simulationInfo->integerParameter[8] /* heater.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[8].time_unvarying = 1;
  (data->simulationInfo->integerParameter[14] /* heater.substanceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[14].time_unvarying = 1;
  (data->simulationInfo->integerParameter[15] /* heater.traceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[15].time_unvarying = 1;
  (data->simulationInfo->integerParameter[16] /* pipe.energyDynamics PARAM */) = 3;
  data->modelData->integerParameterData[16].time_unvarying = 1;
  (data->simulationInfo->integerParameter[18] /* pipe.flowModel.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[18].time_unvarying = 1;
  (data->simulationInfo->integerParameter[22] /* pipe.massDynamics PARAM */) = 3;
  data->modelData->integerParameterData[22].time_unvarying = 1;
  (data->simulationInfo->integerParameter[23] /* pipe.modelStructure PARAM */) = 1;
  data->modelData->integerParameterData[23].time_unvarying = 1;
  (data->simulationInfo->integerParameter[24] /* pipe.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[24].time_unvarying = 1;
  (data->simulationInfo->integerParameter[30] /* pipe.substanceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[30].time_unvarying = 1;
  (data->simulationInfo->integerParameter[31] /* pipe.traceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[31].time_unvarying = 1;
  (data->simulationInfo->integerParameter[32] /* pump.checkValveHomotopy PARAM */) = 3;
  data->modelData->integerParameterData[32].time_unvarying = 1;
  (data->simulationInfo->integerParameter[33] /* pump.energyDynamics PARAM */) = 4;
  data->modelData->integerParameterData[33].time_unvarying = 1;
  (data->simulationInfo->integerParameter[35] /* pump.massDynamics PARAM */) = 4;
  data->modelData->integerParameterData[35].time_unvarying = 1;
  (data->simulationInfo->integerParameter[37] /* pump.substanceDynamics PARAM */) = 4;
  data->modelData->integerParameterData[37].time_unvarying = 1;
  (data->simulationInfo->integerParameter[38] /* pump.traceDynamics PARAM */) = 4;
  data->modelData->integerParameterData[38].time_unvarying = 1;
  (data->simulationInfo->integerParameter[39] /* radiator.energyDynamics PARAM */) = 3;
  data->modelData->integerParameterData[39].time_unvarying = 1;
  (data->simulationInfo->integerParameter[41] /* radiator.flowModel.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[41].time_unvarying = 1;
  (data->simulationInfo->integerParameter[45] /* radiator.massDynamics PARAM */) = 3;
  data->modelData->integerParameterData[45].time_unvarying = 1;
  (data->simulationInfo->integerParameter[46] /* radiator.modelStructure PARAM */) = 2;
  data->modelData->integerParameterData[46].time_unvarying = 1;
  (data->simulationInfo->integerParameter[47] /* radiator.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[47].time_unvarying = 1;
  (data->simulationInfo->integerParameter[53] /* radiator.substanceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[53].time_unvarying = 1;
  (data->simulationInfo->integerParameter[54] /* radiator.traceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[54].time_unvarying = 1;
  (data->simulationInfo->integerParameter[55] /* system.energyDynamics PARAM */) = 3;
  data->modelData->integerParameterData[55].time_unvarying = 1;
  (data->simulationInfo->integerParameter[56] /* system.massDynamics PARAM */) = 3;
  data->modelData->integerParameterData[56].time_unvarying = 1;
  (data->simulationInfo->integerParameter[57] /* system.momentumDynamics PARAM */) = 4;
  data->modelData->integerParameterData[57].time_unvarying = 1;
  (data->simulationInfo->integerParameter[58] /* system.substanceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[58].time_unvarying = 1;
  (data->simulationInfo->integerParameter[59] /* system.traceDynamics PARAM */) = 3;
  data->modelData->integerParameterData[59].time_unvarying = 1;
  (data->simulationInfo->integerParameter[60] /* tank.energyDynamics PARAM */) = 3;
  data->modelData->integerParameterData[60].time_unvarying = 1;
  (data->simulationInfo->integerParameter[62] /* tank.massDynamics PARAM */) = 2;
  data->modelData->integerParameterData[62].time_unvarying = 1;
  (data->simulationInfo->integerParameter[64] /* tank.substanceDynamics PARAM */) = 2;
  data->modelData->integerParameterData[64].time_unvarying = 1;
  (data->simulationInfo->integerParameter[65] /* tank.traceDynamics PARAM */) = 2;
  data->modelData->integerParameterData[65].time_unvarying = 1;
  (data->simulationInfo->integerParameter[66] /* valve.CvData PARAM */) = 4;
  data->modelData->integerParameterData[66].time_unvarying = 1;
  Modelica_Fluid_Examples_HeatingSystem_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

