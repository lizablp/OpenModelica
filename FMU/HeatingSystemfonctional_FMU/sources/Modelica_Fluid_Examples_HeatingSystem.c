/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#include "simulation/solver/events.h"



/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Modelica_Fluid_Examples_HeatingSystem_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[127] /* T_forward variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[128] /* T_return variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[178] /* m_flow variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[359] /* tankLevel variable */);
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_setb_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 601
type: SIMPLE_ASSIGN
pipe.mediums[2].p_bar = 1e-05 * pipe.mediums[2].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  (data->localData[0]->realVars[229] /* pipe.mediums[2].p_bar variable */) = (1e-05) * ((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 602
type: SIMPLE_ASSIGN
pipe.mediums[2].T_degC = -273.15 + pipe.mediums[2].T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  (data->localData[0]->realVars[221] /* pipe.mediums[2].T_degC variable */) = -273.15 + (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  TRACE_POP
}
/*
equation index: 603
type: SIMPLE_ASSIGN
pipe.mediums[1].p_bar = 1e-05 * pipe.mediums[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  (data->localData[0]->realVars[228] /* pipe.mediums[1].p_bar variable */) = (1e-05) * ((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 604
type: SIMPLE_ASSIGN
pipe.mediums[1].T_degC = -273.15 + pipe.mediums[1].T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  (data->localData[0]->realVars[220] /* pipe.mediums[1].T_degC variable */) = -273.15 + (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  TRACE_POP
}
/*
equation index: 605
type: SIMPLE_ASSIGN
radiator.mediums[1].p_bar = 1e-05 * radiator.mediums[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  (data->localData[0]->realVars[309] /* radiator.mediums[1].p_bar variable */) = (1e-05) * ((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 606
type: SIMPLE_ASSIGN
radiator.mediums[1].T_degC = -273.15 + radiator.mediums[1].T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[305] /* radiator.mediums[1].T_degC variable */) = -273.15 + (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  TRACE_POP
}
/*
equation index: 607
type: SIMPLE_ASSIGN
heater.mediums[1].p_bar = 1e-05 * heater.mediums[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[170] /* heater.mediums[1].p_bar variable */) = (1e-05) * ((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 608
type: SIMPLE_ASSIGN
heater.mediums[1].T_degC = -273.15 + heater.mediums[1].T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[166] /* heater.mediums[1].T_degC variable */) = -273.15 + (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  TRACE_POP
}
/*
equation index: 609
type: SIMPLE_ASSIGN
handle.y = handle.offset + (if time < handle.startTime then 0.0 else handle.height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  modelica_boolean tmp0;
  relationhysteresis(data, &tmp0, data->localData[0]->timeValue, (data->simulationInfo->realParameter[31] /* handle.startTime PARAM */), 5, Less, LessZC);
  (data->localData[0]->realVars[129] /* handle.y variable */) = (data->simulationInfo->realParameter[30] /* handle.offset PARAM */) + (tmp0?0.0:(data->simulationInfo->realParameter[29] /* handle.height PARAM */));
  TRACE_POP
}
/*
equation index: 610
type: SIMPLE_ASSIGN
valve.minLimiter.y = smooth(0, if noEvent(handle.y < valve.minLimiter.uMin) then valve.minLimiter.uMin else handle.y)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  modelica_boolean tmp1;
  tmp1 = Less((data->localData[0]->realVars[129] /* handle.y variable */),(data->simulationInfo->realParameter[309] /* valve.minLimiter.uMin PARAM */));
  (data->localData[0]->realVars[362] /* valve.minLimiter.y variable */) = (tmp1?(data->simulationInfo->realParameter[309] /* valve.minLimiter.uMin PARAM */):(data->localData[0]->realVars[129] /* handle.y variable */));
  TRACE_POP
}
/*
equation index: 611
type: SIMPLE_ASSIGN
valve.relativeFlowCoefficient = Modelica.Fluid.Examples.HeatingSystem.valve.valveCharacteristic(handle.y)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[365] /* valve.relativeFlowCoefficient variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData, (data->localData[0]->realVars[129] /* handle.y variable */));
  TRACE_POP
}
/*
equation index: 612
type: SIMPLE_ASSIGN
tank.regularFlow[2] = tank.level >= tank.portsData[2].height
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  modelica_boolean tmp2;
  relationhysteresis(data, &tmp2, (data->localData[0]->realVars[8] /* tank.level STATE(1) */), (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */), 3, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */) = tmp2;
  TRACE_POP
}
/*
equation index: 613
type: SIMPLE_ASSIGN
tank.regularFlow[1] = tank.level >= tank.portsData[1].height
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  modelica_boolean tmp3;
  relationhysteresis(data, &tmp3, (data->localData[0]->realVars[8] /* tank.level STATE(1) */), (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */), 2, GreaterEq, GreaterEqZC);
  (data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */) = tmp3;
  TRACE_POP
}
/*
equation index: 614
type: SIMPLE_ASSIGN
tank.heatTransfer.surfaceAreas[1] = tank.crossArea + 2.0 * sqrt(tank.crossArea * 3.141592653589793) * tank.level
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  modelica_real tmp4;
  tmp4 = ((data->simulationInfo->realParameter[255] /* tank.crossArea PARAM */)) * (3.141592653589793);
  if(!(tmp4 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(tank.crossArea * 3.141592653589793) was %g should be >= 0", tmp4);
    }
  }
  (data->localData[0]->realVars[332] /* tank.heatTransfer.surfaceAreas[1] variable */) = (data->simulationInfo->realParameter[255] /* tank.crossArea PARAM */) + ((2.0) * (sqrt(tmp4))) * ((data->localData[0]->realVars[8] /* tank.level STATE(1) */));
  TRACE_POP
}
/*
equation index: 615
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].phase = if tank.medium.h < $cse40.h or tank.medium.h > $cse41.h or tank.p_ambient > 22064000.0 then 1 else 2
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  relationhysteresis(data, &tmp5, (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->simulationInfo->realParameter[6] /* $cse40.h PARAM */), 0, Less, LessZC);
  relationhysteresis(data, &tmp6, (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->simulationInfo->realParameter[18] /* $cse41.h PARAM */), 1, Greater, GreaterZC);
  tmp7 = Greater((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),22064000.0);
  (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */) = (((tmp5 || tmp6) || tmp7)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
equation index: 616
type: ALGORITHM

  $cse39 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0);
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  Modelica_Media_Common_IF97BaseTwoPhase tmp8;
  tmp8 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0));
  (data->localData[0]->integerVars[4] /* $cse39.phase DISCRETE */) = tmp8._phase;
  (data->localData[0]->integerVars[5] /* $cse39.region DISCRETE */) = tmp8._region;
  (data->localData[0]->realVars[112] /* $cse39.p variable */) = tmp8._p;
  (data->localData[0]->realVars[107] /* $cse39.T variable */) = tmp8._T;
  (data->localData[0]->realVars[111] /* $cse39.h variable */) = tmp8._h;
  (data->localData[0]->realVars[106] /* $cse39.R_s variable */) = tmp8._R_s;
  (data->localData[0]->realVars[108] /* $cse39.cp variable */) = tmp8._cp;
  (data->localData[0]->realVars[109] /* $cse39.cv variable */) = tmp8._cv;
  (data->localData[0]->realVars[115] /* $cse39.rho variable */) = tmp8._rho;
  (data->localData[0]->realVars[116] /* $cse39.s variable */) = tmp8._s;
  (data->localData[0]->realVars[114] /* $cse39.pt variable */) = tmp8._pt;
  (data->localData[0]->realVars[113] /* $cse39.pd variable */) = tmp8._pd;
  (data->localData[0]->realVars[118] /* $cse39.vt variable */) = tmp8._vt;
  (data->localData[0]->realVars[117] /* $cse39.vp variable */) = tmp8._vp;
  (data->localData[0]->realVars[119] /* $cse39.x variable */) = tmp8._x;
  (data->localData[0]->realVars[110] /* $cse39.dpT variable */) = tmp8._dpT;
  ;
  TRACE_POP
}
/*
equation index: 617
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].d = $cse39.rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  (data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */) = (data->localData[0]->realVars[115] /* $cse39.rho variable */);
  TRACE_POP
}
/*
equation index: 618
type: SIMPLE_ASSIGN
tank.medium.u = tank.medium.h - tank.p_ambient / tank.heatTransfer.states[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  (data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */) = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),(data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */),"tank.heatTransfer.states[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 619
type: SIMPLE_ASSIGN
tank.heatTransfer.Ts[1] = $cse39.T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */) = (data->localData[0]->realVars[107] /* $cse39.T variable */);
  TRACE_POP
}
/*
equation index: 620
type: SIMPLE_ASSIGN
tank.Qb_flow = 10.0 * tank.heatTransfer.surfaceAreas[1] * (tank.heatTransfer.T_ambient - tank.heatTransfer.Ts[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  (data->localData[0]->realVars[325] /* tank.Qb_flow variable */) = (10.0) * (((data->localData[0]->realVars[332] /* tank.heatTransfer.surfaceAreas[1] variable */)) * ((data->simulationInfo->realParameter[258] /* tank.heatTransfer.T_ambient PARAM */) - (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */)));
  TRACE_POP
}
/*
equation index: 621
type: SIMPLE_ASSIGN
tank.medium.T_degC = -273.15 + tank.heatTransfer.Ts[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  (data->localData[0]->realVars[337] /* tank.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */);
  TRACE_POP
}
/*
equation index: 622
type: SIMPLE_ASSIGN
tankLevel = tank.level
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  (data->localData[0]->realVars[359] /* tankLevel variable */) = (data->localData[0]->realVars[8] /* tank.level STATE(1) */);
  TRACE_POP
}
/*
equation index: 623
type: SIMPLE_ASSIGN
tank.V = tank.crossArea * tank.level
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  (data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */) = ((data->simulationInfo->realParameter[255] /* tank.crossArea PARAM */)) * ((data->localData[0]->realVars[8] /* tank.level STATE(1) */));
  TRACE_POP
}
/*
equation index: 624
type: SIMPLE_ASSIGN
tank.m = tank.V * tank.heatTransfer.states[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  (data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */) = ((data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 625
type: SIMPLE_ASSIGN
tank.U = tank.m * tank.medium.u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  (data->localData[0]->realVars[326] /* tank.U DUMMY_STATE */) = ((data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */)) * ((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 626
type: SIMPLE_ASSIGN
heater.mediums[1].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + heater.mediums[1].p) + 0.0002571314017648316 * (298.15 - heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 627
type: SIMPLE_ASSIGN
heater.ms[1] = heater.fluidVolumes[1] * heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  (data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[159] /* heater.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 628
type: SIMPLE_ASSIGN
heater.mediums[1].h = 104929.294642565 + 4181.885502948851 * (-298.15 + heater.mediums[1].T) + 0.0009260700016004721 * (-101325.0 + heater.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */)) + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 629
type: SIMPLE_ASSIGN
heater.mediums[1].u = heater.mediums[1].h - heater.mediums[1].p / heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  (data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */),(data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),"heater.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 630
type: SIMPLE_ASSIGN
heater.Us[1] = heater.ms[1] * heater.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  (data->localData[0]->realVars[134] /* heater.Us[1] DUMMY_STATE */) = ((data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 631
type: SIMPLE_ASSIGN
pipe.state_a.T = 273.058616085119 + 0.0002391265851958049 * heater.mediums[1].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  (data->localData[0]->realVars[235] /* pipe.state_a.T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 632
type: SIMPLE_ASSIGN
radiator.mediums[1].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + radiator.mediums[1].p) + 0.0002571314017648316 * (298.15 - radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 633
type: SIMPLE_ASSIGN
radiator.ms[1] = radiator.fluidVolumes[1] * radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  (data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[296] /* radiator.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 634
type: SIMPLE_ASSIGN
radiator.mediums[1].h = 104929.294642565 + 4181.885502948851 * (-298.15 + radiator.mediums[1].T) + 0.0009260700016004721 * (-101325.0 + radiator.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */)) + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 635
type: ALGORITHM

  $cse6 := Modelica.Fluid.Examples.HeatingSystem.valve.Medium.setState_phX(pipe.mediums[2].p, radiator.mediums[1].h, {});
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  base_array_t tmp9;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp10;
  simple_alloc_1d_base_array(&tmp9, 0, NULL);
  tmp10 = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData, (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), tmp9);
  (data->localData[0]->realVars[123] /* $cse6.p variable */) = tmp10._p;
  (data->localData[0]->realVars[122] /* $cse6.T variable */) = tmp10._T;
  ;
  TRACE_POP
}
/*
equation index: 636
type: SIMPLE_ASSIGN
$cse5 = Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature($cse6)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp11;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_wrap_vars(threadData,tmp11, (data->localData[0]->realVars[123] /* $cse6.p variable */), (data->localData[0]->realVars[122] /* $cse6.T variable */));
  (data->localData[0]->realVars[121] /* $cse5 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp11);
  TRACE_POP
}
/*
equation index: 637
type: SIMPLE_ASSIGN
radiator.mediums[1].u = radiator.mediums[1].h - radiator.mediums[1].p / radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  (data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */),(data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),"radiator.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 638
type: SIMPLE_ASSIGN
radiator.Us[1] = radiator.ms[1] * radiator.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  (data->localData[0]->realVars[269] /* radiator.Us[1] DUMMY_STATE */) = ((data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 639
type: SIMPLE_ASSIGN
pipe.mediums[1].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pipe.mediums[1].p) + 0.0002571314017648316 * (298.15 - pipe.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 640
type: SIMPLE_ASSIGN
pipe.ms[1] = pipe.fluidVolumes[1] * pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  (data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[202] /* pipe.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 641
type: SIMPLE_ASSIGN
pipe.mediums[1].h = 104929.294642565 + 4181.885502948851 * (-298.15 + pipe.mediums[1].T) + 0.0009260700016004721 * (-101325.0 + pipe.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */)) + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 642
type: SIMPLE_ASSIGN
pipe.mediums[1].u = pipe.mediums[1].h - pipe.mediums[1].p / pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  (data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */),(data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),"pipe.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 643
type: SIMPLE_ASSIGN
pipe.Us[1] = pipe.ms[1] * pipe.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  (data->localData[0]->realVars[184] /* pipe.Us[1] DUMMY_STATE */) = ((data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 644
type: SIMPLE_ASSIGN
heater.statesFM[3].T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[1].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 645
type: SIMPLE_ASSIGN
heater.flowModel.rhos[3] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp12;
  tmp12._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp12._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  (data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp12);
  TRACE_POP
}
/*
equation index: 646
type: SIMPLE_ASSIGN
$cse28 = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp13;
  tmp13._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp13._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  (data->localData[0]->realVars[67] /* $cse28 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp13);
  TRACE_POP
}
/*
equation index: 647
type: SIMPLE_ASSIGN
$cse26 = Modelica.Fluid.Examples.HeatingSystem.heater.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState tmp14;
  tmp14._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp14._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  (data->localData[0]->realVars[65] /* $cse26 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData, tmp14);
  TRACE_POP
}
/*
equation index: 648
type: SIMPLE_ASSIGN
pipe.mediums[2].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pipe.mediums[2].p) + 0.0002571314017648316 * (298.15 - pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  (data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 649
type: SIMPLE_ASSIGN
pipe.ms[2] = pipe.fluidVolumes[2] * pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  (data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */) = ((data->localData[0]->realVars[203] /* pipe.fluidVolumes[2] variable */)) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 650
type: SIMPLE_ASSIGN
pipe.mediums[2].h = 104929.294642565 + 4181.885502948851 * (-298.15 + pipe.mediums[2].T) + 0.0009260700016004721 * (-101325.0 + pipe.mediums[2].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */)) + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 651
type: SIMPLE_ASSIGN
pipe.mediums[2].u = pipe.mediums[2].h - pipe.mediums[2].p / pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  (data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */) = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */),(data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */),"pipe.mediums[2].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 652
type: SIMPLE_ASSIGN
pipe.Us[2] = pipe.ms[2] * pipe.mediums[2].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  (data->localData[0]->realVars[185] /* pipe.Us[2] DUMMY_STATE */) = ((data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 653
type: SIMPLE_ASSIGN
valve.state_a.T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[2].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[2].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[366] /* valve.state_a.T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 654
type: SIMPLE_ASSIGN
$cse8 = Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(pipe.mediums[2].p, valve.state_a.T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp15;
  tmp15._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp15._T = (data->localData[0]->realVars[366] /* valve.state_a.T variable */);
  (data->localData[0]->realVars[125] /* $cse8 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData, tmp15);
  TRACE_POP
}
/*
equation index: 655
type: SIMPLE_ASSIGN
$cse4 = Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(pipe.mediums[2].p, valve.state_a.T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp16;
  tmp16._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp16._T = (data->localData[0]->realVars[366] /* valve.state_a.T variable */);
  (data->localData[0]->realVars[120] /* $cse4 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp16);
  TRACE_POP
}
/*
equation index: 656
type: SIMPLE_ASSIGN
pipe.state_b.T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[2].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[2].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->realVars[236] /* pipe.state_b.T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 657
type: SIMPLE_ASSIGN
$cse38 = max(0.0, tank.level - tank.portsData[1].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[105] /* $cse38 variable */) = fmax(0.0,(data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */));
  TRACE_POP
}
/*
equation index: 658
type: SIMPLE_ASSIGN
tank.vessel_ps_static[1] = $cse38 * system.g * tank.heatTransfer.states[1].d + tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */) = ((data->localData[0]->realVars[105] /* $cse38 variable */)) * (((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */))) + (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}
/*
equation index: 659
type: ALGORITHM

  $cse36 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], radiator.mediums[1].h, 0, 0);
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  Modelica_Media_Common_IF97BaseTwoPhase tmp17;
  tmp17 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), ((modelica_integer) 0), ((modelica_integer) 0));
  (data->localData[0]->integerVars[2] /* $cse36.phase DISCRETE */) = tmp17._phase;
  (data->localData[0]->integerVars[3] /* $cse36.region DISCRETE */) = tmp17._region;
  (data->localData[0]->realVars[96] /* $cse36.p variable */) = tmp17._p;
  (data->localData[0]->realVars[91] /* $cse36.T variable */) = tmp17._T;
  (data->localData[0]->realVars[95] /* $cse36.h variable */) = tmp17._h;
  (data->localData[0]->realVars[90] /* $cse36.R_s variable */) = tmp17._R_s;
  (data->localData[0]->realVars[92] /* $cse36.cp variable */) = tmp17._cp;
  (data->localData[0]->realVars[93] /* $cse36.cv variable */) = tmp17._cv;
  (data->localData[0]->realVars[99] /* $cse36.rho variable */) = tmp17._rho;
  (data->localData[0]->realVars[100] /* $cse36.s variable */) = tmp17._s;
  (data->localData[0]->realVars[98] /* $cse36.pt variable */) = tmp17._pt;
  (data->localData[0]->realVars[97] /* $cse36.pd variable */) = tmp17._pd;
  (data->localData[0]->realVars[102] /* $cse36.vt variable */) = tmp17._vt;
  (data->localData[0]->realVars[101] /* $cse36.vp variable */) = tmp17._vp;
  (data->localData[0]->realVars[103] /* $cse36.x variable */) = tmp17._x;
  (data->localData[0]->realVars[94] /* $cse36.dpT variable */) = tmp17._dpT;
  ;
  TRACE_POP
}
/*
equation index: 660
type: SIMPLE_ASSIGN
tank.portInDensities[1] = $cse36.rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  (data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */) = (data->localData[0]->realVars[99] /* $cse36.rho variable */);
  TRACE_POP
}
/*
equation index: 661
type: SIMPLE_ASSIGN
$cse37 = max(0.0, tank.level - tank.portsData[2].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  (data->localData[0]->realVars[104] /* $cse37 variable */) = fmax(0.0,(data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */));
  TRACE_POP
}
/*
equation index: 662
type: SIMPLE_ASSIGN
tank.vessel_ps_static[2] = $cse37 * system.g * tank.heatTransfer.states[1].d + tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */) = ((data->localData[0]->realVars[104] /* $cse37 variable */)) * (((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */))) + (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}
/*
equation index: 663
type: ALGORITHM

  $cse35 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[2], tank.medium.h, 0, 0);
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  Modelica_Media_Common_IF97BaseTwoPhase tmp18;
  tmp18 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), ((modelica_integer) 0), ((modelica_integer) 0));
  (data->localData[0]->integerVars[0] /* $cse35.phase DISCRETE */) = tmp18._phase;
  (data->localData[0]->integerVars[1] /* $cse35.region DISCRETE */) = tmp18._region;
  (data->localData[0]->realVars[82] /* $cse35.p variable */) = tmp18._p;
  (data->localData[0]->realVars[77] /* $cse35.T variable */) = tmp18._T;
  (data->localData[0]->realVars[81] /* $cse35.h variable */) = tmp18._h;
  (data->localData[0]->realVars[76] /* $cse35.R_s variable */) = tmp18._R_s;
  (data->localData[0]->realVars[78] /* $cse35.cp variable */) = tmp18._cp;
  (data->localData[0]->realVars[79] /* $cse35.cv variable */) = tmp18._cv;
  (data->localData[0]->realVars[85] /* $cse35.rho variable */) = tmp18._rho;
  (data->localData[0]->realVars[86] /* $cse35.s variable */) = tmp18._s;
  (data->localData[0]->realVars[84] /* $cse35.pt variable */) = tmp18._pt;
  (data->localData[0]->realVars[83] /* $cse35.pd variable */) = tmp18._pd;
  (data->localData[0]->realVars[88] /* $cse35.vt variable */) = tmp18._vt;
  (data->localData[0]->realVars[87] /* $cse35.vp variable */) = tmp18._vp;
  (data->localData[0]->realVars[89] /* $cse35.x variable */) = tmp18._x;
  (data->localData[0]->realVars[80] /* $cse35.dpT variable */) = tmp18._dpT;
  ;
  TRACE_POP
}
/*
equation index: 664
type: SIMPLE_ASSIGN
tank.portInDensities[2] = $cse35.rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  (data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */) = (data->localData[0]->realVars[85] /* $cse35.rho variable */);
  TRACE_POP
}
/*
equation index: 665
type: SIMPLE_ASSIGN
tank.ports_penetration[1] = Modelica.Fluid.Utilities.regStep(tank.level - tank.portsData[1].height - 0.1 * tank.portsData[1].diameter, 1.0, 0.001, 0.1 * tank.portsData[1].diameter)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  (data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */) - ((0.1) * ((data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */))), 1.0, 0.001, (0.1) * ((data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */)));
  TRACE_POP
}
/*
equation index: 666
type: SIMPLE_ASSIGN
tank.ports_penetration[2] = Modelica.Fluid.Utilities.regStep(tank.level - tank.portsData[2].height - 0.1 * tank.portsData[2].diameter, 1.0, 0.001, 0.1 * tank.portsData[2].diameter)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  (data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */) - ((0.1) * ((data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */))), 1.0, 0.001, (0.1) * ((data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */)));
  TRACE_POP
}
/*
equation index: 667
type: SIMPLE_ASSIGN
heater.flowModel.rhos[2] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp19;
  tmp19._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp19._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp19);
  TRACE_POP
}
/*
equation index: 668
type: SIMPLE_ASSIGN
$cse29 = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp20;
  tmp20._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp20._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[68] /* $cse29 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp20);
  TRACE_POP
}
/*
equation index: 669
type: SIMPLE_ASSIGN
heater.flowModel.Fs_p[2] = heater.crossAreas[1] * ($cse28 - $cse29) * heater.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  (data->localData[0]->realVars[139] /* heater.flowModel.Fs_p[2] variable */) = ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[67] /* $cse28 variable */) - (data->localData[0]->realVars[68] /* $cse29 variable */)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 670
type: SIMPLE_ASSIGN
heater.flowModel.dps_fg[2] = (-heater.flowModel.Fs_p[2]) / (heater.flowModel.nParallel * heater.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[139] /* heater.flowModel.Fs_p[2] variable */)),((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)),"heater.flowModel.nParallel * heater.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 671
type: SIMPLE_ASSIGN
$cse31 = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.WallFriction.massFlowRate_dp_staticHead(heater.flowModel.dps_fg[2], heater.flowModel.rhos[2], heater.flowModel.rhos[3], 0.0008899999999999999, 0.0008899999999999999, 1.0, heater.dimensions[1], 0.0, heater.crossAreas[1], heater.roughnesses[1], 0.5 * heater.flowModel.dp_small, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  (data->localData[0]->realVars[72] /* $cse31 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */), (data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */), (data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */), 0.0008899999999999999, 0.0008899999999999999, 1.0, (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[57] /* heater.flowModel.dp_small PARAM */)), 4000.0);
  TRACE_POP
}
/*
equation index: 672
type: SIMPLE_ASSIGN
pipe.m_flows[1] = $cse31 * heater.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) = ((data->localData[0]->realVars[72] /* $cse31 variable */)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */));
  TRACE_POP
}
/*
equation index: 673
type: SIMPLE_ASSIGN
heater.H_flows[2] = semiLinear(pipe.m_flows[1], heater.mediums[1].h, pipe.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  (data->localData[0]->realVars[131] /* heater.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
heater.flowModel.rhos_act[2] = if noEvent(pipe.m_flows[1] > 0.0) then heater.flowModel.rhos[2] else heater.flowModel.rhos[3]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  modelica_boolean tmp21;
  tmp21 = Greater((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),0.0);
  (data->localData[0]->realVars[156] /* heater.flowModel.rhos_act[2] variable */) = (tmp21?(data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */):(data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */));
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
$cse18 = max(pipe.m_flows[1], 1e-07)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  (data->localData[0]->realVars[56] /* $cse18 variable */) = fmax((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),1e-07);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
$cse17 = max(-pipe.m_flows[1], 1e-07)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  (data->localData[0]->realVars[55] /* $cse17 variable */) = fmax((-(data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 677
type: ALGORITHM

  $cse16 := Modelica.Fluid.Examples.HeatingSystem.sensor_T_forward.Medium.setState_phX(pipe.mediums[1].p, ($cse17 * pipe.mediums[1].h + $cse18 * heater.mediums[1].h) / ($cse17 + $cse18), {});
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  base_array_t tmp22;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState tmp23;
  simple_alloc_1d_base_array(&tmp22, 0, NULL);
  tmp23 = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData, (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */), DIVISION_SIM(((data->localData[0]->realVars[55] /* $cse17 variable */)) * ((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */)) + ((data->localData[0]->realVars[56] /* $cse18 variable */)) * ((data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */)),(data->localData[0]->realVars[55] /* $cse17 variable */) + (data->localData[0]->realVars[56] /* $cse18 variable */),"$cse17 + $cse18",equationIndexes), tmp22);
  (data->localData[0]->realVars[54] /* $cse16.p variable */) = tmp23._p;
  (data->localData[0]->realVars[53] /* $cse16.T variable */) = tmp23._T;
  ;
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
T_forward = Modelica.Fluid.Examples.HeatingSystem.sensor_T_forward.Medium.temperature($cse16)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState tmp24;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_wrap_vars(threadData,tmp24, (data->localData[0]->realVars[54] /* $cse16.p variable */), (data->localData[0]->realVars[53] /* $cse16.T variable */));
  (data->localData[0]->realVars[127] /* T_forward variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData, tmp24);
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
heater.flowModel.vs[3] = pipe.m_flows[1] / (heater.nParallel * heater.crossAreas[1] * $cse26)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  (data->localData[0]->realVars[158] /* heater.flowModel.vs[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),(((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * ((data->localData[0]->realVars[65] /* $cse26 variable */)),"heater.nParallel * heater.crossAreas[1] * $cse26",equationIndexes);
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
pipe.H_flows[1] = semiLinear(pipe.m_flows[1], heater.mediums[1].h, pipe.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  (data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_681(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_682(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_683(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_684(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_685(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_686(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_687(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_688(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_689(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_690(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_691(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_692(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_693(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_694(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_695(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_696(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_697(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_702(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_701(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_700(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_699(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_698(DATA*, threadData_t*);
/*
equation index: 703
indexNonlinear: 2
type: NONLINEAR

vars: {tank.s[2], tank.ports[2].p, pump.rho, pump.V_flow_single, pump.N}
eqns: {681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 702, 701, 700, 699, 698}
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 703 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[356] /* tank.s[2] variable */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = (data->localData[0]->realVars[263] /* pump.rho variable */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = (data->localData[0]->realVars[243] /* pump.V_flow_single variable */);
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = (data->localData[0]->realVars[240] /* pump.N variable */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,703};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 703 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[356] /* tank.s[2] variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  (data->localData[0]->realVars[263] /* pump.rho variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  (data->localData[0]->realVars[243] /* pump.V_flow_single variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  (data->localData[0]->realVars[240] /* pump.N variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  TRACE_POP
}
/*
equation index: 704
type: SIMPLE_ASSIGN
pump.monitoring.state_in.T = 273.058616085119 + 0.0002391265851958049 * tank.medium.h + (-2.214479571349945e-07) * (-101325.0 + tank.ports[2].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  (data->localData[0]->realVars[262] /* pump.monitoring.state_in.T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[348] /* tank.ports[2].p variable */));
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
$cse27 = Modelica.Fluid.Examples.HeatingSystem.heater.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp0._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[66] /* $cse27 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
pump.medium.T_degC = -273.15 + pump.heatTransfer.states[1].T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  (data->localData[0]->realVars[258] /* pump.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */);
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
pump.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.pump.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.pump.heatTransfer.Medium.ThermodynamicState(pump.p_b_nominal, pump.heatTransfer.states[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp1._T = (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */);
  (data->localData[0]->realVars[249] /* pump.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature(threadData, tmp1);
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
pump.medium.u = sensor_m_flow.port_b.h_outflow - pump.p_b_nominal / pump.rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  (data->localData[0]->realVars[261] /* pump.medium.u variable */) = (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) - (DIVISION_SIM((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */),(data->localData[0]->realVars[263] /* pump.rho variable */),"pump.rho",equationIndexes));
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
pump.m_flow_single = m_flow / (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  (data->localData[0]->realVars[254] /* pump.m_flow_single variable */) = DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)),"/*Real*/(pump.nParallel)",equationIndexes);
  TRACE_POP
}
/*
equation index: 710
type: SIMPLE_ASSIGN
heater.vs[1] = 0.5 * (m_flow + pipe.m_flows[1]) / (heater.mediums[1].d * heater.crossAreas[1] * heater.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  (data->localData[0]->realVars[177] /* heater.vs[1] variable */) = (0.5) * (DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */) + (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),(((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)),"heater.mediums[1].d * heater.crossAreas[1] * heater.nParallel",equationIndexes));
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
heater.flowModel.rhos_act[1] = if noEvent(m_flow > 0.0) then heater.flowModel.rhos[1] else heater.flowModel.rhos[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  modelica_boolean tmp2;
  tmp2 = Greater((data->localData[0]->realVars[178] /* m_flow variable */),0.0);
  (data->localData[0]->realVars[155] /* heater.flowModel.rhos_act[1] variable */) = (tmp2?(data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */):(data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */));
  TRACE_POP
}
/*
equation index: 712
type: SIMPLE_ASSIGN
heater.H_flows[1] = semiLinear(m_flow, sensor_m_flow.port_b.h_outflow, heater.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  (data->localData[0]->realVars[130] /* heater.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[178] /* m_flow variable */), (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 713
type: SIMPLE_ASSIGN
heater.Hb_flows[1] = heater.H_flows[1] - heater.H_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  (data->localData[0]->realVars[132] /* heater.Hb_flows[1] variable */) = (data->localData[0]->realVars[130] /* heater.H_flows[1] variable */) - (data->localData[0]->realVars[131] /* heater.H_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 714
type: SIMPLE_ASSIGN
heater.flowModel.vs[1] = m_flow / (heater.nParallel * heater.crossAreas[1] * $cse27)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  (data->localData[0]->realVars[157] /* heater.flowModel.vs[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */),(((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * ((data->localData[0]->realVars[66] /* $cse27 variable */)),"heater.nParallel * heater.crossAreas[1] * $cse27",equationIndexes);
  TRACE_POP
}
/*
equation index: 715
type: SIMPLE_ASSIGN
tank.ports_H_flow[2] = smooth(0, (-m_flow) * tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  (data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */) = ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}
/*
equation index: 716
type: SIMPLE_ASSIGN
tank.portVelocities[2] = smooth(0, (-m_flow) / (tank.portAreas[2] * tank.portInDensities[2]))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  (data->localData[0]->realVars[347] /* tank.portVelocities[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[178] /* m_flow variable */)),((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */)) * ((data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */)),"tank.portAreas[2] * tank.portInDensities[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 717
type: SIMPLE_ASSIGN
tank.ports_E_flow[2] = (-m_flow) * (0.5 * tank.portVelocities[2] ^ 2.0 + system.g * tank.portsData[2].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  modelica_real tmp3;
  tmp3 = (data->localData[0]->realVars[347] /* tank.portVelocities[2] variable */);
  (data->localData[0]->realVars[350] /* tank.ports_E_flow[2] variable */) = ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((0.5) * ((tmp3 * tmp3)) + ((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */)));
  TRACE_POP
}
/*
equation index: 718
type: SIMPLE_ASSIGN
heater.Wb_flows[1] = heater.vs[1] * heater.crossAreas[1] * (pipe.mediums[1].p + heater.flowModel.dps_fg[1] + heater.flowModel.dps_fg[2] - pump.p_b_nominal) * heater.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  (data->localData[0]->realVars[135] /* heater.Wb_flows[1] variable */) = ((data->localData[0]->realVars[177] /* heater.vs[1] variable */)) * (((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) + (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */) + (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */) - (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */))));
  TRACE_POP
}
/*
equation index: 719
type: SIMPLE_ASSIGN
heater.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.heater.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.heater.heatTransfer.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState tmp4;
  tmp4._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp4._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData, tmp4);
  TRACE_POP
}
/*
equation index: 720
type: SIMPLE_ASSIGN
heater.Qb_flows[1] = burner.Q_flow * (1.0 + burner.alpha * (heater.heatTransfer.Ts[1] - burner.T_ref))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  (data->localData[0]->realVars[133] /* heater.Qb_flows[1] variable */) = ((data->simulationInfo->realParameter[26] /* burner.Q_flow PARAM */)) * (1.0 + ((data->simulationInfo->realParameter[28] /* burner.alpha PARAM */)) * ((data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */) - (data->simulationInfo->realParameter[27] /* burner.T_ref PARAM */)));
  TRACE_POP
}
/*
equation index: 721
type: SIMPLE_ASSIGN
$DER.heater.Us[1] = heater.Hb_flows[1] + heater.Wb_flows[1] + heater.Qb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  (data->localData[0]->realVars[20] /* der(heater.Us[1]) DUMMY_DER */) = (data->localData[0]->realVars[132] /* heater.Hb_flows[1] variable */) + (data->localData[0]->realVars[135] /* heater.Wb_flows[1] variable */) + (data->localData[0]->realVars[133] /* heater.Qb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 722
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[2] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp5;
  tmp5._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp5._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp5);
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
$cse22 = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp6;
  tmp6._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp6._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[61] /* $cse22 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp6);
  TRACE_POP
}
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_724(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_725(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_726(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_727(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_728(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_729(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_730(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_731(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_733(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_732(DATA*, threadData_t*);
/*
equation index: 734
indexNonlinear: 3
type: NONLINEAR

vars: {tank.s[1], radiator.statesFM[3].p}
eqns: {724, 725, 726, 727, 728, 729, 730, 731, 733, 732}
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 734 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[355] /* tank.s[1] variable */);
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,734};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 734 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[355] /* tank.s[1] variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  TRACE_POP
}
/*
equation index: 735
type: SIMPLE_ASSIGN
radiator.H_flows[2] = semiLinear(radiator.m_flows[2], radiator.mediums[1].h, tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  (data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}
/*
equation index: 736
type: SIMPLE_ASSIGN
radiator.flowModel.Is[2] = 5.0 * radiator.m_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  (data->localData[0]->realVars[278] /* radiator.flowModel.Is[2] variable */) = (5.0) * ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */));
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
tank.ports_H_flow[1] = smooth(0, radiator.m_flows[2] * (if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */) = ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((tmp0?(data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)));
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
tank.portVelocities[1] = smooth(0, radiator.m_flows[2] / (tank.portAreas[1] * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h, 0, 0).rho))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  modelica_boolean tmp1;
  tmp1 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[346] /* tank.portVelocities[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */)) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (tmp1?(data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)), ((modelica_integer) 0), ((modelica_integer) 0))._rho),"tank.portAreas[1] * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h, 0, 0).rho",equationIndexes);
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
tank.ports_E_flow[1] = radiator.m_flows[2] * (0.5 * tank.portVelocities[1] ^ 2.0 + system.g * tank.portsData[1].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  modelica_real tmp2;
  tmp2 = (data->localData[0]->realVars[346] /* tank.portVelocities[1] variable */);
  (data->localData[0]->realVars[349] /* tank.ports_E_flow[1] variable */) = ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((0.5) * ((tmp2 * tmp2)) + ((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */)));
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
tank.Hb_flow = tank.ports_H_flow[1] + tank.ports_H_flow[2] + tank.ports_E_flow[1] + tank.ports_E_flow[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  (data->localData[0]->realVars[324] /* tank.Hb_flow variable */) = (data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */) + (data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */) + (data->localData[0]->realVars[349] /* tank.ports_E_flow[1] variable */) + (data->localData[0]->realVars[350] /* tank.ports_E_flow[2] variable */);
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
$cse15 = max(radiator.m_flows[2], 1e-07)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  (data->localData[0]->realVars[52] /* $cse15 variable */) = fmax((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),1e-07);
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
$cse14 = max(-radiator.m_flows[2], 1e-07)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  (data->localData[0]->realVars[51] /* $cse14 variable */) = fmax((-(data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)),1e-07);
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
radiator.flowModel.rhos_act[2] = if noEvent(radiator.m_flows[2] > 0.0) then radiator.flowModel.rhos[2] else radiator.flowModel.rhos[3]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  modelica_boolean tmp3;
  tmp3 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[293] /* radiator.flowModel.rhos_act[2] variable */) = (tmp3?(data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */):(data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */));
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
tank.mb_flow = radiator.m_flows[2] - m_flow
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  (data->localData[0]->realVars[334] /* tank.mb_flow variable */) = (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */) - (data->localData[0]->realVars[178] /* m_flow variable */);
  TRACE_POP
}
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_745(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_746(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_747(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_748(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_750(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_749(DATA*, threadData_t*);
/*
equation index: 751
indexNonlinear: 4
type: NONLINEAR

vars: {$DER.tank.heatTransfer.states[1].d, $DER.tank.medium.u}
eqns: {745, 746, 747, 748, 750, 749}
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 751 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */);
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,751};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 751 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */) = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
$DER.tank.level = $DER.tank.V / tank.crossArea
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  (data->localData[0]->realVars[18] /* der(tank.level) STATE_DER */) = DIVISION_SIM((data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */),(data->simulationInfo->realParameter[255] /* tank.crossArea PARAM */),"tank.crossArea",equationIndexes);
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
$DER.tank.m = tank.mb_flow
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  (data->localData[0]->realVars[43] /* der(tank.m) DUMMY_DER */) = (data->localData[0]->realVars[334] /* tank.mb_flow variable */);
  TRACE_POP
}
/*
equation index: 754
type: ALGORITHM

  $cse13 := Modelica.Fluid.Examples.HeatingSystem.sensor_T_return.Medium.setState_phX(radiator.statesFM[3].p, ($cse14 * tank.medium.h + $cse15 * radiator.mediums[1].h) / ($cse14 + $cse15), {});
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  base_array_t tmp0;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState tmp1;
  simple_alloc_1d_base_array(&tmp0, 0, NULL);
  tmp1 = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData, (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */), DIVISION_SIM(((data->localData[0]->realVars[51] /* $cse14 variable */)) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)) + ((data->localData[0]->realVars[52] /* $cse15 variable */)) * ((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */)),(data->localData[0]->realVars[51] /* $cse14 variable */) + (data->localData[0]->realVars[52] /* $cse15 variable */),"$cse14 + $cse15",equationIndexes), tmp0);
  (data->localData[0]->realVars[50] /* $cse13.p variable */) = tmp1._p;
  (data->localData[0]->realVars[49] /* $cse13.T variable */) = tmp1._T;
  ;
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
T_return = Modelica.Fluid.Examples.HeatingSystem.sensor_T_return.Medium.temperature($cse13)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState tmp2;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_wrap_vars(threadData,tmp2, (data->localData[0]->realVars[50] /* $cse13.p variable */), (data->localData[0]->realVars[49] /* $cse13.T variable */));
  (data->localData[0]->realVars[128] /* T_return variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData, tmp2);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
$cse19 = Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState tmp3;
  tmp3._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp3._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  (data->localData[0]->realVars[57] /* $cse19 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData, tmp3);
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
radiator.flowModel.vs[3] = radiator.m_flows[2] / ($cse19 * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  (data->localData[0]->realVars[295] /* radiator.flowModel.vs[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),(((data->localData[0]->realVars[57] /* $cse19 variable */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"$cse19 * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_758(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_759(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_760(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_761(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_762(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_763(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_764(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_765(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_766(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_767(DATA*, threadData_t*);
/*
equation index: 768
indexNonlinear: 5
type: NONLINEAR

vars: {radiator.statesFM[1].p}
eqns: {758, 759, 760, 761, 762, 763, 764, 765, 766, 767}
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 768 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,768};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 768 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
radiator.H_flows[1] = semiLinear(radiator.m_flows[1], pipe.mediums[2].h, radiator.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  (data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
radiator.Hb_flows[1] = radiator.H_flows[1] - radiator.H_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  (data->localData[0]->realVars[267] /* radiator.Hb_flows[1] variable */) = (data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */) - (data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
radiator.mb_flows[1] = radiator.m_flows[1] - radiator.m_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  (data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */) = (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) - (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].d = radiator.mb_flows[1] / radiator.fluidVolumes[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  (data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */),(data->localData[0]->realVars[296] /* radiator.fluidVolumes[1] variable */),"radiator.fluidVolumes[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
$DER.radiator.ms[1] = radiator.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  (data->localData[0]->realVars[39] /* der(radiator.ms[1]) DUMMY_DER */) = (data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
radiator.vs[1] = 0.5 * (radiator.m_flows[1] + radiator.m_flows[2]) / (radiator.mediums[1].d * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  (data->localData[0]->realVars[318] /* radiator.vs[1] variable */) = DIVISION_SIM((0.5) * ((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) + (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)),(((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"radiator.mediums[1].d * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
radiator.flowModel.Is[1] = 5.0 * radiator.m_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  (data->localData[0]->realVars[277] /* radiator.flowModel.Is[1] variable */) = (5.0) * ((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */));
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
valve.port_a_T = Modelica.Fluid.Utilities.regStep(radiator.m_flows[1], $cse4, $cse5, valve.m_flow_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  (data->localData[0]->realVars[363] /* valve.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[120] /* $cse4 variable */), (data->localData[0]->realVars[121] /* $cse5 variable */), (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
pipe.H_flows[3] = semiLinear(radiator.m_flows[1], pipe.mediums[2].h, pipe.mediums[2].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  (data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */) = semiLinear((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
valve.state_b.T = 273.058616085119 + 0.0002391265851958049 * radiator.mediums[1].h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  (data->localData[0]->realVars[367] /* valve.state_b.T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */));
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
$cse9 = Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(radiator.statesFM[1].p, valve.state_b.T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp0._T = (data->localData[0]->realVars[367] /* valve.state_b.T variable */);
  (data->localData[0]->realVars[126] /* $cse9 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
$cse7 = Modelica.Fluid.Utilities.regStep(radiator.m_flows[1], $cse8, $cse9, valve.m_flow_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  (data->localData[0]->realVars[124] /* $cse7 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[125] /* $cse8 variable */), (data->localData[0]->realVars[126] /* $cse9 variable */), (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
valve.V_flow = radiator.m_flows[1] / $cse7
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  (data->localData[0]->realVars[360] /* valve.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),(data->localData[0]->realVars[124] /* $cse7 variable */),"$cse7",equationIndexes);
  TRACE_POP
}
/*
equation index: 782
type: ALGORITHM

  $cse3 := Modelica.Fluid.Examples.HeatingSystem.valve.Medium.setState_phX(radiator.statesFM[1].p, pipe.mediums[2].h, {});
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  base_array_t tmp1;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp2;
  simple_alloc_1d_base_array(&tmp1, 0, NULL);
  tmp2 = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData, (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), tmp1);
  (data->localData[0]->realVars[70] /* $cse3.p variable */) = tmp2._p;
  (data->localData[0]->realVars[69] /* $cse3.T variable */) = tmp2._T;
  ;
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
$cse2 = Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature($cse3)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp3;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_wrap_vars(threadData,tmp3, (data->localData[0]->realVars[70] /* $cse3.p variable */), (data->localData[0]->realVars[69] /* $cse3.T variable */));
  (data->localData[0]->realVars[58] /* $cse2 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp3);
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
$cse1 = Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(radiator.statesFM[1].p, valve.state_b.T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp4;
  tmp4._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp4._T = (data->localData[0]->realVars[367] /* valve.state_b.T variable */);
  (data->localData[0]->realVars[45] /* $cse1 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp4);
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
valve.port_b_T = Modelica.Fluid.Utilities.regStep(-radiator.m_flows[1], $cse1, $cse2, valve.m_flow_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  (data->localData[0]->realVars[364] /* valve.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */)), (data->localData[0]->realVars[45] /* $cse1 variable */), (data->localData[0]->realVars[58] /* $cse2 variable */), (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */));
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
$cse20 = Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState tmp5;
  tmp5._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp5._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[59] /* $cse20 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData, tmp5);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
radiator.flowModel.vs[1] = radiator.m_flows[1] / ($cse20 * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  (data->localData[0]->realVars[294] /* radiator.flowModel.vs[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),(((data->localData[0]->realVars[59] /* $cse20 variable */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"$cse20 * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
radiator.flowModel.rhos_act[1] = if noEvent(radiator.m_flows[1] > 0.0) then radiator.flowModel.rhos[1] else radiator.flowModel.rhos[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  modelica_boolean tmp6;
  tmp6 = Greater((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),0.0);
  (data->localData[0]->realVars[292] /* radiator.flowModel.rhos_act[1] variable */) = (tmp6?(data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */):(data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */));
  TRACE_POP
}
/*
equation index: 789
type: SIMPLE_ASSIGN
radiator.Wb_flows[1] = radiator.vs[1] * radiator.crossAreas[1] * (radiator.statesFM[3].p + radiator.flowModel.dps_fg[1] + radiator.flowModel.dps_fg[2] - radiator.statesFM[1].p) * radiator.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  (data->localData[0]->realVars[270] /* radiator.Wb_flows[1] variable */) = ((data->localData[0]->realVars[318] /* radiator.vs[1] variable */)) * (((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) + (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */) + (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */) - (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */)) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */))));
  TRACE_POP
}
/*
equation index: 790
type: SIMPLE_ASSIGN
radiator.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.radiator.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.radiator.heatTransfer.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState tmp7;
  tmp7._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp7._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData, tmp7);
  TRACE_POP
}
/*
equation index: 791
type: SIMPLE_ASSIGN
wall.dT = T_ambient.T - radiator.heatTransfer.Ts[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  (data->localData[0]->realVars[368] /* wall.dT variable */) = (data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */) - (data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */);
  TRACE_POP
}
/*
equation index: 792
type: SIMPLE_ASSIGN
radiator.Qb_flows[1] = wall.G * wall.dT
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  (data->localData[0]->realVars[268] /* radiator.Qb_flows[1] variable */) = ((data->simulationInfo->realParameter[313] /* wall.G PARAM */)) * ((data->localData[0]->realVars[368] /* wall.dT variable */));
  TRACE_POP
}
/*
equation index: 793
type: SIMPLE_ASSIGN
$DER.radiator.Us[1] = radiator.Hb_flows[1] + radiator.Wb_flows[1] + radiator.Qb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  (data->localData[0]->realVars[35] /* der(radiator.Us[1]) DUMMY_DER */) = (data->localData[0]->realVars[267] /* radiator.Hb_flows[1] variable */) + (data->localData[0]->realVars[270] /* radiator.Wb_flows[1] variable */) + (data->localData[0]->realVars[268] /* radiator.Qb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 794
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].u = ($DER.radiator.Us[1] - radiator.mb_flows[1] * radiator.mediums[1].u) / radiator.ms[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  (data->localData[0]->realVars[38] /* der(radiator.mediums[1].u) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[35] /* der(radiator.Us[1]) DUMMY_DER */) - (((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */)) * ((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */))),(data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */),"radiator.ms[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 801
type: LINEAR

<var>$DER.radiator.mediums[1].p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,801};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 801 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,801};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 801 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */) = aux_x[0];

  TRACE_POP
}
/*
equation index: 802
type: SIMPLE_ASSIGN
pipe.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, pipe.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp8;
  tmp8._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp8._T = (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData, tmp8);
  TRACE_POP
}
/*
equation index: 803
type: SIMPLE_ASSIGN
pipe.flowModel.rhos[2] = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[2].p, pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp9;
  tmp9._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp9._T = (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  (data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData, tmp9);
  TRACE_POP
}
/*
equation index: 804
type: SIMPLE_ASSIGN
$cse11 = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, pipe.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp10;
  tmp10._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp10._T = (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[47] /* $cse11 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp10);
  TRACE_POP
}
/*
equation index: 805
type: SIMPLE_ASSIGN
$cse10 = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[2].p, pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp11;
  tmp11._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp11._T = (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  (data->localData[0]->realVars[46] /* $cse10 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp11);
  TRACE_POP
}
/*
equation index: 806
type: SIMPLE_ASSIGN
pipe.flowModel.Fs_p[1] = 0.5 * pipe.flowModel.nParallel * (pipe.crossAreas[1] + pipe.crossAreas[2]) * ($cse10 - $cse11)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[189] /* pipe.flowModel.Fs_p[1] variable */) = (0.5) * (((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */)) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * ((data->localData[0]->realVars[46] /* $cse10 variable */) - (data->localData[0]->realVars[47] /* $cse11 variable */))));
  TRACE_POP
}
/*
equation index: 807
type: SIMPLE_ASSIGN
pipe.flowModel.dps_fg[1] = (-2.0) * pipe.flowModel.Fs_p[1] / ((pipe.crossAreas[1] + pipe.crossAreas[2]) * pipe.flowModel.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) = (-2.0) * (DIVISION_SIM((data->localData[0]->realVars[189] /* pipe.flowModel.Fs_p[1] variable */),((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * ((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */)),"(pipe.crossAreas[1] + pipe.crossAreas[2]) * pipe.flowModel.nParallel",equationIndexes));
  TRACE_POP
}
/*
equation index: 808
type: SIMPLE_ASSIGN
$cse12 = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.WallFriction.massFlowRate_dp_staticHead(pipe.flowModel.dps_fg[1], pipe.flowModel.rhos[1], pipe.flowModel.rhos[2], 0.0008899999999999999, 0.0008899999999999999, 10.0, pipe.flowModel.diameters[1], 0.0, 0.5 * (pipe.crossAreas[1] + pipe.crossAreas[2]), 0.5 * (pipe.roughnesses[1] + pipe.roughnesses[2]), pipe.flowModel.dp_small, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[48] /* $cse12 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */), (data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */), (data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */), 0.0008899999999999999, 0.0008899999999999999, 10.0, (data->localData[0]->realVars[193] /* pipe.flowModel.diameters[1] variable */), 0.0, (0.5) * ((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)), (0.5) * ((data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */) + (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */)), (data->simulationInfo->realParameter[117] /* pipe.flowModel.dp_small PARAM */), 4000.0);
  TRACE_POP
}
/*
equation index: 809
type: SIMPLE_ASSIGN
pipe.m_flows[2] = $cse12 * pipe.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) = ((data->localData[0]->realVars[48] /* $cse12 variable */)) * ((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */));
  TRACE_POP
}
/*
equation index: 810
type: SIMPLE_ASSIGN
pipe.flowModel.rhos_act[1] = if noEvent(pipe.m_flows[2] > 0.0) then pipe.flowModel.rhos[1] else pipe.flowModel.rhos[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  modelica_boolean tmp12;
  tmp12 = Greater((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[201] /* pipe.flowModel.rhos_act[1] variable */) = (tmp12?(data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */):(data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */));
  TRACE_POP
}
/*
equation index: 811
type: SIMPLE_ASSIGN
pipe.flowModel.Is[1] = 10.0 * pipe.m_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[191] /* pipe.flowModel.Is[1] variable */) = (10.0) * ((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */));
  TRACE_POP
}
/*
equation index: 812
type: SIMPLE_ASSIGN
pipe.vs[1] = 0.5 * (pipe.m_flows[1] + pipe.m_flows[2]) / (pipe.mediums[1].d * pipe.crossAreas[1] * pipe.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[237] /* pipe.vs[1] variable */) = DIVISION_SIM((0.5) * ((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) + (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */)),(((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)),"pipe.mediums[1].d * pipe.crossAreas[1] * pipe.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 813
type: SIMPLE_ASSIGN
pipe.vs[2] = 0.5 * (pipe.m_flows[2] + radiator.m_flows[1]) / (pipe.nParallel * pipe.crossAreas[2] * pipe.mediums[2].d)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[238] /* pipe.vs[2] variable */) = (0.5) * (DIVISION_SIM((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) + (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),(((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)) * ((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */))) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */)),"pipe.nParallel * pipe.crossAreas[2] * pipe.mediums[2].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 814
type: SIMPLE_ASSIGN
pipe.mb_flows[1] = pipe.m_flows[1] - pipe.m_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */) = (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) - (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 815
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].d = pipe.mb_flows[1] / pipe.fluidVolumes[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  (data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */),(data->localData[0]->realVars[202] /* pipe.fluidVolumes[1] variable */),"pipe.fluidVolumes[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 816
type: SIMPLE_ASSIGN
$DER.pipe.ms[1] = pipe.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  (data->localData[0]->realVars[33] /* der(pipe.ms[1]) DUMMY_DER */) = (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 817
type: SIMPLE_ASSIGN
pipe.mb_flows[2] = pipe.m_flows[2] - radiator.m_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */) = (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) - (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 818
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].d = pipe.mb_flows[2] / pipe.fluidVolumes[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */),(data->localData[0]->realVars[203] /* pipe.fluidVolumes[2] variable */),"pipe.fluidVolumes[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 819
type: SIMPLE_ASSIGN
heater.mb_flows[1] = (-radiator.mb_flows[1]) - pipe.mb_flows[2] - tank.mb_flow - pipe.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  (data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */) = (-(data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */)) - (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */) - (data->localData[0]->realVars[334] /* tank.mb_flow variable */) - (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 820
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].u = ($DER.heater.Us[1] - heater.mb_flows[1] * heater.mediums[1].u) / heater.ms[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  (data->localData[0]->realVars[23] /* der(heater.mediums[1].u) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[20] /* der(heater.Us[1]) DUMMY_DER */) - (((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */)) * ((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */))),(data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */),"heater.ms[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 821
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].d = heater.mb_flows[1] / heater.fluidVolumes[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  (data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */),(data->localData[0]->realVars[159] /* heater.fluidVolumes[1] variable */),"heater.fluidVolumes[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 828
type: LINEAR

<var>$DER.heater.mediums[1].p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 828 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,828};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 828 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */) = aux_x[0];

  TRACE_POP
}
/*
equation index: 829
type: SIMPLE_ASSIGN
$DER.heater.ms[1] = heater.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[24] /* der(heater.ms[1]) DUMMY_DER */) = (data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 830
type: SIMPLE_ASSIGN
$DER.pipe.ms[2] = pipe.mb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[34] /* der(pipe.ms[2]) DUMMY_DER */) = (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 831
type: SIMPLE_ASSIGN
pipe.H_flows[2] = semiLinear(pipe.m_flows[2], pipe.mediums[1].h, pipe.mediums[2].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 832
type: SIMPLE_ASSIGN
pipe.Hb_flows[1] = pipe.H_flows[1] - pipe.H_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  (data->localData[0]->realVars[182] /* pipe.Hb_flows[1] variable */) = (data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */) - (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 833
type: SIMPLE_ASSIGN
pipe.Hb_flows[2] = pipe.H_flows[2] - pipe.H_flows[3]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  (data->localData[0]->realVars[183] /* pipe.Hb_flows[2] variable */) = (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */) - (data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */);
  TRACE_POP
}
/*
equation index: 834
type: SIMPLE_ASSIGN
pipe.Wb_flows[1] = 0.5 * pipe.vs[1] * pipe.crossAreas[1] * (pipe.mediums[2].p + pipe.flowModel.dps_fg[1] - pipe.mediums[1].p) * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[186] /* pipe.Wb_flows[1] variable */) = (0.5) * (((data->localData[0]->realVars[237] /* pipe.vs[1] variable */)) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) + (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) - (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)))));
  TRACE_POP
}
/*
equation index: 835
type: SIMPLE_ASSIGN
$DER.pipe.Us[1] = pipe.Hb_flows[1] + pipe.Wb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[25] /* der(pipe.Us[1]) DUMMY_DER */) = (data->localData[0]->realVars[182] /* pipe.Hb_flows[1] variable */) + (data->localData[0]->realVars[186] /* pipe.Wb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 836
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].u = ($DER.pipe.Us[1] - pipe.mb_flows[1] * pipe.mediums[1].u) / pipe.ms[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[31] /* der(pipe.mediums[1].u) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[25] /* der(pipe.Us[1]) DUMMY_DER */) - (((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */)) * ((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */))),(data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */),"pipe.ms[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 843
type: LINEAR

<var>$DER.pipe.mediums[1].p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 843 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,843};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 843 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */) = aux_x[0];

  TRACE_POP
}
/*
equation index: 844
type: SIMPLE_ASSIGN
pipe.Wb_flows[2] = 0.5 * pipe.vs[2] * pipe.crossAreas[2] * (pipe.mediums[2].p + pipe.flowModel.dps_fg[1] - pipe.mediums[1].p) * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  (data->localData[0]->realVars[187] /* pipe.Wb_flows[2] variable */) = (0.5) * (((data->localData[0]->realVars[238] /* pipe.vs[2] variable */)) * (((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * (((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) + (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) - (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)))));
  TRACE_POP
}
/*
equation index: 845
type: SIMPLE_ASSIGN
$DER.pipe.Us[2] = pipe.Hb_flows[2] + pipe.Wb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  (data->localData[0]->realVars[26] /* der(pipe.Us[2]) DUMMY_DER */) = (data->localData[0]->realVars[183] /* pipe.Hb_flows[2] variable */) + (data->localData[0]->realVars[187] /* pipe.Wb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 846
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].u = ($DER.pipe.Us[2] - pipe.mb_flows[2] * pipe.mediums[2].u) / pipe.ms[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  (data->localData[0]->realVars[32] /* der(pipe.mediums[2].u) DUMMY_DER */) = DIVISION_SIM((data->localData[0]->realVars[26] /* der(pipe.Us[2]) DUMMY_DER */) - (((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */)) * ((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */))),(data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */),"pipe.ms[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 853
type: LINEAR

<var>$DER.pipe.mediums[2].p</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { (data->localData[1]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */) };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 853 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 3, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,853};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving linear system 853 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */) = aux_x[0];

  TRACE_POP
}
/*
equation index: 854
type: SIMPLE_ASSIGN
pipe.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.pipe.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.pipe.heatTransfer.Medium.ThermodynamicState(pipe.mediums[1].p, pipe.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState tmp13;
  tmp13._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp13._T = (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[204] /* pipe.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData, tmp13);
  TRACE_POP
}
/*
equation index: 855
type: SIMPLE_ASSIGN
pipe.heatTransfer.Ts[2] = Modelica.Fluid.Examples.HeatingSystem.pipe.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.pipe.heatTransfer.Medium.ThermodynamicState(pipe.mediums[2].p, pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,855};
  Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState tmp14;
  tmp14._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp14._T = (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  (data->localData[0]->realVars[205] /* pipe.heatTransfer.Ts[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData, tmp14);
  TRACE_POP
}
/*
equation index: 864
type: ALGORITHM

  assert(tank.p_ambient >= 0.0, "Pressure (= " + String(tank.p_ambient, 6, 0, true) + " Pa) of medium \"" + "WaterIF97" + "\" is negative
(Temperature = " + String(tank.heatTransfer.Ts[1], 6, 0, true) + " K)");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,864};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,12,"Pressure (= ");
  modelica_string tmp17;
  modelica_metatype tmpMeta18;
  static const MMC_DEFSTRINGLIT(tmp19,16," Pa) of medium \"");
  modelica_metatype tmpMeta20;
  static const MMC_DEFSTRINGLIT(tmp21,9,"WaterIF97");
  modelica_metatype tmpMeta22;
  static const MMC_DEFSTRINGLIT(tmp23,29,"\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta24;
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  static const MMC_DEFSTRINGLIT(tmp27,3," K)");
  modelica_metatype tmpMeta28;
  static int tmp29 = 0;
  {
    tmp15 = GreaterEq((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),0.0);
    if(!tmp15)
    {
      tmp17 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta18 = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      tmpMeta20 = stringAppend(tmpMeta18,MMC_REFSTRINGLIT(tmp19));
      tmpMeta22 = stringAppend(tmpMeta20,MMC_REFSTRINGLIT(tmp21));
      tmpMeta24 = stringAppend(tmpMeta22,MMC_REFSTRINGLIT(tmp23));
      tmp25 = modelica_real_to_modelica_string((data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta26 = stringAppend(tmpMeta24,tmp25);
      tmpMeta28 = stringAppend(tmpMeta26,MMC_REFSTRINGLIT(tmp27));
      {
        const char* assert_cond = "(tank.p_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta28));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 863
type: ALGORITHM

  assert(tank.level <= tank.fluidLevel_max, "Vessel is overflowing (fluidLevel > fluidLevel_max = " + String(tank.level, 6, 0, true) + ")");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,53,"Vessel is overflowing (fluidLevel > fluidLevel_max = ");
  modelica_string tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  static int tmp35 = 0;
  {
    tmp30 = LessEq((data->localData[0]->realVars[8] /* tank.level STATE(1) */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
    if(!tmp30)
    {
      tmp32 = modelica_real_to_modelica_string((data->localData[0]->realVars[8] /* tank.level STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta33 = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      tmpMeta34 = stringAppend(tmpMeta33,(modelica_string) mmc_strings_len1[41]);
      {
        const char* assert_cond = "(tank.level <= tank.fluidLevel_max)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",308,9,308,129,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",308,9,308,129,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 862
type: ALGORITHM

  assert(tank.level > (-1e-06) * tank.fluidLevel_max, "Fluid level (= " + String(tank.level, 6, 0, true) + ") is below zero meaning that the solution failed.");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,862};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,15,"Fluid level (= ");
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  static const MMC_DEFSTRINGLIT(tmp40,49,") is below zero meaning that the solution failed.");
  modelica_metatype tmpMeta41;
  static int tmp42 = 0;
  {
    tmp36 = Greater((data->localData[0]->realVars[8] /* tank.level STATE(1) */),(-1e-06) * ((data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */)));
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string((data->localData[0]->realVars[8] /* tank.level STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta39 = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      tmpMeta41 = stringAppend(tmpMeta39,MMC_REFSTRINGLIT(tmp40));
      {
        const char* assert_cond = "(tank.level > (-1e-06) * tank.fluidLevel_max)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",309,9,309,144,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",309,9,309,144,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta41));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 861
type: ALGORITHM

  assert(pump.p_b_nominal >= 0.0, "Pressure (= " + String(pump.p_b_nominal, 6, 0, true) + " Pa) of medium \"" + "Liquid linear water" + "\" is negative
(Temperature = " + String(pump.heatTransfer.states[1].T, 6, 0, true) + " K)");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,861};
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,12,"Pressure (= ");
  modelica_string tmp45;
  modelica_metatype tmpMeta46;
  static const MMC_DEFSTRINGLIT(tmp47,16," Pa) of medium \"");
  modelica_metatype tmpMeta48;
  static const MMC_DEFSTRINGLIT(tmp49,19,"Liquid linear water");
  modelica_metatype tmpMeta50;
  static const MMC_DEFSTRINGLIT(tmp51,29,"\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta52;
  modelica_string tmp53;
  modelica_metatype tmpMeta54;
  static const MMC_DEFSTRINGLIT(tmp55,3," K)");
  modelica_metatype tmpMeta56;
  static int tmp57 = 0;
  {
    tmp43 = GreaterEq((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */),0.0);
    if(!tmp43)
    {
      tmp45 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta46 = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      tmpMeta48 = stringAppend(tmpMeta46,MMC_REFSTRINGLIT(tmp47));
      tmpMeta50 = stringAppend(tmpMeta48,MMC_REFSTRINGLIT(tmp49));
      tmpMeta52 = stringAppend(tmpMeta50,MMC_REFSTRINGLIT(tmp51));
      tmp53 = modelica_real_to_modelica_string((data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta54 = stringAppend(tmpMeta52,tmp53);
      tmpMeta56 = stringAppend(tmpMeta54,MMC_REFSTRINGLIT(tmp55));
      {
        const char* assert_cond = "(pump.p_b_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta56));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta56));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 860
type: ALGORITHM

  assert(radiator.m_flows[1] > (-valve.m_flow_small), "Reversing flow occurs even though allowFlowReversal is false");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,860};
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,60,"Reversing flow occurs even though allowFlowReversal is false");
  static int tmp60 = 0;
  {
    tmp58 = Greater((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),(-(data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */)));
    if(!tmp58)
    {
      {
        const char* assert_cond = "(radiator.m_flows[1] > (-valve.m_flow_small))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",344,3,344,118,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp59)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",344,3,344,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp59)));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 859
type: ALGORITHM

  assert(heater.mediums[1].p >= 0.0, "Pressure (= " + String(heater.mediums[1].p, 6, 0, true) + " Pa) of medium \"" + "Liquid linear water" + "\" is negative
(Temperature = " + String(heater.mediums[1].T, 6, 0, true) + " K)");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,12,"Pressure (= ");
  modelica_string tmp63;
  modelica_metatype tmpMeta64;
  static const MMC_DEFSTRINGLIT(tmp65,16," Pa) of medium \"");
  modelica_metatype tmpMeta66;
  static const MMC_DEFSTRINGLIT(tmp67,19,"Liquid linear water");
  modelica_metatype tmpMeta68;
  static const MMC_DEFSTRINGLIT(tmp69,29,"\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta70;
  modelica_string tmp71;
  modelica_metatype tmpMeta72;
  static const MMC_DEFSTRINGLIT(tmp73,3," K)");
  modelica_metatype tmpMeta74;
  static int tmp75 = 0;
  {
    tmp61 = GreaterEq((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */),0.0);
    if(!tmp61)
    {
      tmp63 = modelica_real_to_modelica_string((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta64 = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      tmpMeta66 = stringAppend(tmpMeta64,MMC_REFSTRINGLIT(tmp65));
      tmpMeta68 = stringAppend(tmpMeta66,MMC_REFSTRINGLIT(tmp67));
      tmpMeta70 = stringAppend(tmpMeta68,MMC_REFSTRINGLIT(tmp69));
      tmp71 = modelica_real_to_modelica_string((data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta72 = stringAppend(tmpMeta70,tmp71);
      tmpMeta74 = stringAppend(tmpMeta72,MMC_REFSTRINGLIT(tmp73));
      {
        const char* assert_cond = "(heater.mediums[1].p >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 858
type: ALGORITHM

  assert(radiator.mediums[1].p >= 0.0, "Pressure (= " + String(radiator.mediums[1].p, 6, 0, true) + " Pa) of medium \"" + "Liquid linear water" + "\" is negative
(Temperature = " + String(radiator.mediums[1].T, 6, 0, true) + " K)");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,858};
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,12,"Pressure (= ");
  modelica_string tmp78;
  modelica_metatype tmpMeta79;
  static const MMC_DEFSTRINGLIT(tmp80,16," Pa) of medium \"");
  modelica_metatype tmpMeta81;
  static const MMC_DEFSTRINGLIT(tmp82,19,"Liquid linear water");
  modelica_metatype tmpMeta83;
  static const MMC_DEFSTRINGLIT(tmp84,29,"\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta85;
  modelica_string tmp86;
  modelica_metatype tmpMeta87;
  static const MMC_DEFSTRINGLIT(tmp88,3," K)");
  modelica_metatype tmpMeta89;
  static int tmp90 = 0;
  {
    tmp76 = GreaterEq((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */),0.0);
    if(!tmp76)
    {
      tmp78 = modelica_real_to_modelica_string((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta79 = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      tmpMeta81 = stringAppend(tmpMeta79,MMC_REFSTRINGLIT(tmp80));
      tmpMeta83 = stringAppend(tmpMeta81,MMC_REFSTRINGLIT(tmp82));
      tmpMeta85 = stringAppend(tmpMeta83,MMC_REFSTRINGLIT(tmp84));
      tmp86 = modelica_real_to_modelica_string((data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta87 = stringAppend(tmpMeta85,tmp86);
      tmpMeta89 = stringAppend(tmpMeta87,MMC_REFSTRINGLIT(tmp88));
      {
        const char* assert_cond = "(radiator.mediums[1].p >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 857
type: ALGORITHM

  assert(pipe.mediums[1].p >= 0.0, "Pressure (= " + String(pipe.mediums[1].p, 6, 0, true) + " Pa) of medium \"" + "Liquid linear water" + "\" is negative
(Temperature = " + String(pipe.mediums[1].T, 6, 0, true) + " K)");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,857};
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,12,"Pressure (= ");
  modelica_string tmp93;
  modelica_metatype tmpMeta94;
  static const MMC_DEFSTRINGLIT(tmp95,16," Pa) of medium \"");
  modelica_metatype tmpMeta96;
  static const MMC_DEFSTRINGLIT(tmp97,19,"Liquid linear water");
  modelica_metatype tmpMeta98;
  static const MMC_DEFSTRINGLIT(tmp99,29,"\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta100;
  modelica_string tmp101;
  modelica_metatype tmpMeta102;
  static const MMC_DEFSTRINGLIT(tmp103,3," K)");
  modelica_metatype tmpMeta104;
  static int tmp105 = 0;
  {
    tmp91 = GreaterEq((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */),0.0);
    if(!tmp91)
    {
      tmp93 = modelica_real_to_modelica_string((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta94 = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      tmpMeta96 = stringAppend(tmpMeta94,MMC_REFSTRINGLIT(tmp95));
      tmpMeta98 = stringAppend(tmpMeta96,MMC_REFSTRINGLIT(tmp97));
      tmpMeta100 = stringAppend(tmpMeta98,MMC_REFSTRINGLIT(tmp99));
      tmp101 = modelica_real_to_modelica_string((data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta102 = stringAppend(tmpMeta100,tmp101);
      tmpMeta104 = stringAppend(tmpMeta102,MMC_REFSTRINGLIT(tmp103));
      {
        const char* assert_cond = "(pipe.mediums[1].p >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta104));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta104));
        }
      }
    }
  }
  TRACE_POP
}
/*
equation index: 856
type: ALGORITHM

  assert(pipe.mediums[2].p >= 0.0, "Pressure (= " + String(pipe.mediums[2].p, 6, 0, true) + " Pa) of medium \"" + "Liquid linear water" + "\" is negative
(Temperature = " + String(pipe.mediums[2].T, 6, 0, true) + " K)");
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,856};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,12,"Pressure (= ");
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  static const MMC_DEFSTRINGLIT(tmp110,16," Pa) of medium \"");
  modelica_metatype tmpMeta111;
  static const MMC_DEFSTRINGLIT(tmp112,19,"Liquid linear water");
  modelica_metatype tmpMeta113;
  static const MMC_DEFSTRINGLIT(tmp114,29,"\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta115;
  modelica_string tmp116;
  modelica_metatype tmpMeta117;
  static const MMC_DEFSTRINGLIT(tmp118,3," K)");
  modelica_metatype tmpMeta119;
  static int tmp120 = 0;
  {
    tmp106 = GreaterEq((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */),0.0);
    if(!tmp106)
    {
      tmp108 = modelica_real_to_modelica_string((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta109 = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      tmpMeta111 = stringAppend(tmpMeta109,MMC_REFSTRINGLIT(tmp110));
      tmpMeta113 = stringAppend(tmpMeta111,MMC_REFSTRINGLIT(tmp112));
      tmpMeta115 = stringAppend(tmpMeta113,MMC_REFSTRINGLIT(tmp114));
      tmp116 = modelica_real_to_modelica_string((data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta117 = stringAppend(tmpMeta115,tmp116);
      tmpMeta119 = stringAppend(tmpMeta117,MMC_REFSTRINGLIT(tmp118));
      {
        const char* assert_cond = "(pipe.mediums[2].p >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4030,7,4031,76,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        }
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Modelica_Fluid_Examples_HeatingSystem_functionLocalKnownVars(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_601(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_602(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_603(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_604(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_605(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_606(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_607(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_608(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_610(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_615(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_616(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_617(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_618(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_619(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_620(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_621(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_622(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_624(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_625(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_626(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_627(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_628(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_629(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_630(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_631(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_632(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_633(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_634(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_635(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_636(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_637(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_638(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_639(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_640(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_641(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_642(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_643(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_644(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_646(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_647(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_648(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_649(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_650(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_651(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_652(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_654(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_655(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_656(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_657(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_658(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_659(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_660(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_661(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_662(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_663(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_664(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_667(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_668(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_669(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_670(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_671(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_672(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_673(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_674(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_675(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_676(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_677(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_678(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_679(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_680(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_703(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_704(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_705(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_706(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_707(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_708(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_709(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_710(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_711(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_712(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_713(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_714(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_715(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_716(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_717(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_718(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_719(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_720(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_721(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_722(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_723(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_734(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_735(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_736(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_737(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_738(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_739(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_740(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_741(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_742(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_743(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_744(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_751(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_753(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_754(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_755(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_756(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_757(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_768(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_769(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_770(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_771(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_772(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_773(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_774(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_775(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_776(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_777(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_778(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_779(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_780(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_781(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_782(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_783(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_784(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_785(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_786(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_787(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_788(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_789(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_790(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_791(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_792(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_793(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_794(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_801(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_802(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_803(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_804(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_805(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_806(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_807(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_808(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_809(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_810(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_811(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_812(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_813(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_814(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_815(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_816(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_817(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_818(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_819(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_820(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_821(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_828(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_829(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_830(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_831(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_832(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_833(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_834(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_835(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_836(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_843(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_844(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_845(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_846(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_853(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_854(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_855(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_864(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_863(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_862(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_861(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_860(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_859(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_858(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_857(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_856(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int Modelica_Fluid_Examples_HeatingSystem_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_615(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_616(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_617(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_618(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_619(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_620(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_624(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_626(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_627(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_628(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_629(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_632(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_633(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_634(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_637(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_639(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_640(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_641(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_642(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_644(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_646(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_648(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_649(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_650(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_651(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_654(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_657(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_658(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_659(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_660(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_661(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_662(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_663(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_664(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_667(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_668(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_669(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_670(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_671(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_672(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_673(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_680(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_703(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_710(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_712(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_713(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_715(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_716(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_717(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_718(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_719(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_720(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_721(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_722(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_723(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_734(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_735(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_737(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_738(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_739(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_740(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_744(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_751(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_768(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_769(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_770(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_771(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_772(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_774(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_777(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_789(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_790(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_791(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_792(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_793(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_794(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_801(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_802(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_803(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_804(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_805(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_806(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_807(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_808(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_809(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_812(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_813(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_814(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_815(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_817(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_818(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_819(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_820(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_821(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_828(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_831(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_832(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_833(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_834(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_835(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_836(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_843(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_844(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_845(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_846(DATA* data, threadData_t *threadData);
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_853(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(data, threadData);
    threadData->lastEquationSolved = 609;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(data, threadData);
    threadData->lastEquationSolved = 611;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(data, threadData);
    threadData->lastEquationSolved = 612;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(data, threadData);
    threadData->lastEquationSolved = 613;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(data, threadData);
    threadData->lastEquationSolved = 614;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_615(data, threadData);
    threadData->lastEquationSolved = 615;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_616(data, threadData);
    threadData->lastEquationSolved = 616;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_617(data, threadData);
    threadData->lastEquationSolved = 617;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_618(data, threadData);
    threadData->lastEquationSolved = 618;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_619(data, threadData);
    threadData->lastEquationSolved = 619;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_620(data, threadData);
    threadData->lastEquationSolved = 620;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(data, threadData);
    threadData->lastEquationSolved = 623;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_624(data, threadData);
    threadData->lastEquationSolved = 624;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_626(data, threadData);
    threadData->lastEquationSolved = 626;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_627(data, threadData);
    threadData->lastEquationSolved = 627;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_628(data, threadData);
    threadData->lastEquationSolved = 628;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_629(data, threadData);
    threadData->lastEquationSolved = 629;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_632(data, threadData);
    threadData->lastEquationSolved = 632;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_633(data, threadData);
    threadData->lastEquationSolved = 633;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_634(data, threadData);
    threadData->lastEquationSolved = 634;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_637(data, threadData);
    threadData->lastEquationSolved = 637;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_639(data, threadData);
    threadData->lastEquationSolved = 639;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_640(data, threadData);
    threadData->lastEquationSolved = 640;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_641(data, threadData);
    threadData->lastEquationSolved = 641;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_642(data, threadData);
    threadData->lastEquationSolved = 642;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_644(data, threadData);
    threadData->lastEquationSolved = 644;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(data, threadData);
    threadData->lastEquationSolved = 645;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_646(data, threadData);
    threadData->lastEquationSolved = 646;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_648(data, threadData);
    threadData->lastEquationSolved = 648;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_649(data, threadData);
    threadData->lastEquationSolved = 649;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_650(data, threadData);
    threadData->lastEquationSolved = 650;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_651(data, threadData);
    threadData->lastEquationSolved = 651;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(data, threadData);
    threadData->lastEquationSolved = 653;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_654(data, threadData);
    threadData->lastEquationSolved = 654;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_657(data, threadData);
    threadData->lastEquationSolved = 657;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_658(data, threadData);
    threadData->lastEquationSolved = 658;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_659(data, threadData);
    threadData->lastEquationSolved = 659;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_660(data, threadData);
    threadData->lastEquationSolved = 660;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_661(data, threadData);
    threadData->lastEquationSolved = 661;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_662(data, threadData);
    threadData->lastEquationSolved = 662;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_663(data, threadData);
    threadData->lastEquationSolved = 663;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_664(data, threadData);
    threadData->lastEquationSolved = 664;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(data, threadData);
    threadData->lastEquationSolved = 665;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(data, threadData);
    threadData->lastEquationSolved = 666;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_667(data, threadData);
    threadData->lastEquationSolved = 667;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_668(data, threadData);
    threadData->lastEquationSolved = 668;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_669(data, threadData);
    threadData->lastEquationSolved = 669;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_670(data, threadData);
    threadData->lastEquationSolved = 670;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_671(data, threadData);
    threadData->lastEquationSolved = 671;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_672(data, threadData);
    threadData->lastEquationSolved = 672;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_673(data, threadData);
    threadData->lastEquationSolved = 673;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_680(data, threadData);
    threadData->lastEquationSolved = 680;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_703(data, threadData);
    threadData->lastEquationSolved = 703;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_710(data, threadData);
    threadData->lastEquationSolved = 710;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_712(data, threadData);
    threadData->lastEquationSolved = 712;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_713(data, threadData);
    threadData->lastEquationSolved = 713;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_715(data, threadData);
    threadData->lastEquationSolved = 715;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_716(data, threadData);
    threadData->lastEquationSolved = 716;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_717(data, threadData);
    threadData->lastEquationSolved = 717;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_718(data, threadData);
    threadData->lastEquationSolved = 718;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_719(data, threadData);
    threadData->lastEquationSolved = 719;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_720(data, threadData);
    threadData->lastEquationSolved = 720;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_721(data, threadData);
    threadData->lastEquationSolved = 721;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_722(data, threadData);
    threadData->lastEquationSolved = 722;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_723(data, threadData);
    threadData->lastEquationSolved = 723;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_734(data, threadData);
    threadData->lastEquationSolved = 734;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_735(data, threadData);
    threadData->lastEquationSolved = 735;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_737(data, threadData);
    threadData->lastEquationSolved = 737;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_738(data, threadData);
    threadData->lastEquationSolved = 738;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_739(data, threadData);
    threadData->lastEquationSolved = 739;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_740(data, threadData);
    threadData->lastEquationSolved = 740;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_744(data, threadData);
    threadData->lastEquationSolved = 744;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_751(data, threadData);
    threadData->lastEquationSolved = 751;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(data, threadData);
    threadData->lastEquationSolved = 752;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_768(data, threadData);
    threadData->lastEquationSolved = 768;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_769(data, threadData);
    threadData->lastEquationSolved = 769;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_770(data, threadData);
    threadData->lastEquationSolved = 770;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_771(data, threadData);
    threadData->lastEquationSolved = 771;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_772(data, threadData);
    threadData->lastEquationSolved = 772;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_774(data, threadData);
    threadData->lastEquationSolved = 774;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_777(data, threadData);
    threadData->lastEquationSolved = 777;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_789(data, threadData);
    threadData->lastEquationSolved = 789;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_790(data, threadData);
    threadData->lastEquationSolved = 790;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_791(data, threadData);
    threadData->lastEquationSolved = 791;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_792(data, threadData);
    threadData->lastEquationSolved = 792;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_793(data, threadData);
    threadData->lastEquationSolved = 793;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_794(data, threadData);
    threadData->lastEquationSolved = 794;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_801(data, threadData);
    threadData->lastEquationSolved = 801;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_802(data, threadData);
    threadData->lastEquationSolved = 802;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_803(data, threadData);
    threadData->lastEquationSolved = 803;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_804(data, threadData);
    threadData->lastEquationSolved = 804;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_805(data, threadData);
    threadData->lastEquationSolved = 805;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_806(data, threadData);
    threadData->lastEquationSolved = 806;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_807(data, threadData);
    threadData->lastEquationSolved = 807;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_808(data, threadData);
    threadData->lastEquationSolved = 808;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_809(data, threadData);
    threadData->lastEquationSolved = 809;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_812(data, threadData);
    threadData->lastEquationSolved = 812;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_813(data, threadData);
    threadData->lastEquationSolved = 813;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_814(data, threadData);
    threadData->lastEquationSolved = 814;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_815(data, threadData);
    threadData->lastEquationSolved = 815;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_817(data, threadData);
    threadData->lastEquationSolved = 817;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_818(data, threadData);
    threadData->lastEquationSolved = 818;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_819(data, threadData);
    threadData->lastEquationSolved = 819;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_820(data, threadData);
    threadData->lastEquationSolved = 820;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_821(data, threadData);
    threadData->lastEquationSolved = 821;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_828(data, threadData);
    threadData->lastEquationSolved = 828;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_831(data, threadData);
    threadData->lastEquationSolved = 831;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_832(data, threadData);
    threadData->lastEquationSolved = 832;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_833(data, threadData);
    threadData->lastEquationSolved = 833;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_834(data, threadData);
    threadData->lastEquationSolved = 834;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_835(data, threadData);
    threadData->lastEquationSolved = 835;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_836(data, threadData);
    threadData->lastEquationSolved = 836;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_843(data, threadData);
    threadData->lastEquationSolved = 843;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_844(data, threadData);
    threadData->lastEquationSolved = 844;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_845(data, threadData);
    threadData->lastEquationSolved = 845;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_846(data, threadData);
    threadData->lastEquationSolved = 846;
  }
  {
    Modelica_Fluid_Examples_HeatingSystem_eqFunction_853(data, threadData);
    threadData->lastEquationSolved = 853;
  }
}

int Modelica_Fluid_Examples_HeatingSystem_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  Modelica_Fluid_Examples_HeatingSystem_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "Modelica_Fluid_Examples_HeatingSystem_12jac.h"
#include "Modelica_Fluid_Examples_HeatingSystem_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Modelica_Fluid_Examples_HeatingSystem_callback = {
   NULL,    /* performSimulation */
   NULL,    /* performQSSSimulation */
   NULL,    /* updateContinuousSystem */
   Modelica_Fluid_Examples_HeatingSystem_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   Modelica_Fluid_Examples_HeatingSystem_initialNonLinearSystem,    /* initialNonLinearSystem */
   Modelica_Fluid_Examples_HeatingSystem_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   Modelica_Fluid_Examples_HeatingSystem_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   Modelica_Fluid_Examples_HeatingSystem_initializeDAEmodeData,
   Modelica_Fluid_Examples_HeatingSystem_functionODE,
   Modelica_Fluid_Examples_HeatingSystem_functionAlgebraics,
   Modelica_Fluid_Examples_HeatingSystem_functionDAE,
   Modelica_Fluid_Examples_HeatingSystem_functionLocalKnownVars,
   Modelica_Fluid_Examples_HeatingSystem_input_function,
   Modelica_Fluid_Examples_HeatingSystem_input_function_init,
   Modelica_Fluid_Examples_HeatingSystem_input_function_updateStartValues,
   Modelica_Fluid_Examples_HeatingSystem_data_function,
   Modelica_Fluid_Examples_HeatingSystem_output_function,
   Modelica_Fluid_Examples_HeatingSystem_setc_function,
   Modelica_Fluid_Examples_HeatingSystem_setb_function,
   Modelica_Fluid_Examples_HeatingSystem_function_storeDelayed,
   Modelica_Fluid_Examples_HeatingSystem_function_storeSpatialDistribution,
   Modelica_Fluid_Examples_HeatingSystem_function_initSpatialDistribution,
   Modelica_Fluid_Examples_HeatingSystem_updateBoundVariableAttributes,
   Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations_lambda0,
   Modelica_Fluid_Examples_HeatingSystem_functionRemovedInitialEquations,
   Modelica_Fluid_Examples_HeatingSystem_updateBoundParameters,
   Modelica_Fluid_Examples_HeatingSystem_checkForAsserts,
   Modelica_Fluid_Examples_HeatingSystem_function_ZeroCrossingsEquations,
   Modelica_Fluid_Examples_HeatingSystem_function_ZeroCrossings,
   Modelica_Fluid_Examples_HeatingSystem_function_updateRelations,
   Modelica_Fluid_Examples_HeatingSystem_zeroCrossingDescription,
   Modelica_Fluid_Examples_HeatingSystem_relationDescription,
   Modelica_Fluid_Examples_HeatingSystem_function_initSample,
   Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_A,
   Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_B,
   Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_C,
   Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_D,
   Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_F,
   Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_H,
   Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianA,
   Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianB,
   Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianC,
   Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianD,
   Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianF,
   Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianH,
   Modelica_Fluid_Examples_HeatingSystem_functionJacA_column,
   Modelica_Fluid_Examples_HeatingSystem_functionJacB_column,
   Modelica_Fluid_Examples_HeatingSystem_functionJacC_column,
   Modelica_Fluid_Examples_HeatingSystem_functionJacD_column,
   Modelica_Fluid_Examples_HeatingSystem_functionJacF_column,
   Modelica_Fluid_Examples_HeatingSystem_functionJacH_column,
   Modelica_Fluid_Examples_HeatingSystem_linear_model_frame,
   Modelica_Fluid_Examples_HeatingSystem_linear_model_datarecovery_frame,
   Modelica_Fluid_Examples_HeatingSystem_mayer,
   Modelica_Fluid_Examples_HeatingSystem_lagrange,
   Modelica_Fluid_Examples_HeatingSystem_pickUpBoundsForInputsInOptimization,
   Modelica_Fluid_Examples_HeatingSystem_setInputData,
   Modelica_Fluid_Examples_HeatingSystem_getTimeGrid,
   Modelica_Fluid_Examples_HeatingSystem_symbolicInlineSystem,
   Modelica_Fluid_Examples_HeatingSystem_function_initSynchronous,
   Modelica_Fluid_Examples_HeatingSystem_function_updateSynchronous,
   Modelica_Fluid_Examples_HeatingSystem_function_equationsSynchronous,
   Modelica_Fluid_Examples_HeatingSystem_inputNames,
   Modelica_Fluid_Examples_HeatingSystem_dataReconciliationInputNames,
   Modelica_Fluid_Examples_HeatingSystem_dataReconciliationUnmeasuredVariables,
   Modelica_Fluid_Examples_HeatingSystem_read_input_fmu,
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

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaReference"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/ModelicaReference 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,17,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,87,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,86,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void Modelica_Fluid_Examples_HeatingSystem_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Modelica_Fluid_Examples_HeatingSystem_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Modelica.Fluid.Examples.HeatingSystem";
  data->modelData->modelFilePrefix = "Modelica_Fluid_Examples_HeatingSystem";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Programmes/OpenModelica/share/OMSens/resource";
  data->modelData->modelGUID = "{5541acb1-4aec-42de-9f4f-9784bf6335a2}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/Modelica_Fluid_Examples_HeatingSystem_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStates = 10;
  data->modelData->nVariablesReal = 369;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 7;
  data->modelData->nVariablesBoolean = 4;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 315;
  data->modelData->nParametersInteger = 67;
  data->modelData->nParametersBoolean = 108;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 4;
  data->modelData->nAliasReal = 194;
  data->modelData->nAliasInteger = 2;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  data->modelData->nZeroCrossings = 6;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 7;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 140;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1645;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 4;
  data->modelData->nNonLinearSystems = 6;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 10;
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

