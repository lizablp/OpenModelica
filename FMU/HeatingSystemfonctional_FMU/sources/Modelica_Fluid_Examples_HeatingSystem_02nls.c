/* Non Linear Systems */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#include "Modelica_Fluid_Examples_HeatingSystem_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 87
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].phase = if tank.medium.h < Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(tank.p_ambient).h or tank.medium.h > Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(tank.p_ambient).h or tank.p_ambient > 22064000.0 then 1 else 2
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp0 = Less((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */),omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */))._h);
  tmp1 = Greater((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */),omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */))._h);
  tmp2 = Greater((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),22064000.0);
  (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */) = (((tmp0 || tmp1) || tmp2)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
equation index: 88
type: SIMPLE_ASSIGN
tank.heatTransfer.Ts[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0).T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0))._T;
  TRACE_POP
}
/*
equation index: 89
type: SIMPLE_ASSIGN
$DER.tank.heatTransfer.states[1].d = Modelica.Media.Water.IF97_Utilities.rho_ph_der(tank.p_ambient, tank.medium.h, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0), 0.0, $DER.tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */) = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0)), 0.0, (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */));
  TRACE_POP
}
/*
equation index: 90
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0).rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  (data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 91
type: SIMPLE_ASSIGN
$DER.tank.medium.u = $DER.tank.medium.h + tank.p_ambient * $DER.tank.heatTransfer.states[1].d / tank.heatTransfer.states[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */) = (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */) + ((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */),(tmp0 * tmp0),"tank.heatTransfer.states[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 92
type: SIMPLE_ASSIGN
tank.medium.u = tank.medium.h - tank.p_ambient / tank.heatTransfer.states[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */) = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),(data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */),"tank.heatTransfer.states[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 93
type: SIMPLE_ASSIGN
tank.Qb_flow = 10.0 * tank.heatTransfer.surfaceAreas[1] * (tank.heatTransfer.T_ambient - tank.heatTransfer.Ts[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  (data->localData[0]->realVars[325] /* tank.Qb_flow variable */) = (10.0) * (((data->localData[0]->realVars[332] /* tank.heatTransfer.surfaceAreas[1] variable */)) * ((data->simulationInfo->realParameter[258] /* tank.heatTransfer.T_ambient PARAM */) - (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */)));
  TRACE_POP
}
/*
equation index: 94
type: SIMPLE_ASSIGN
tank.vessel_ps_static[2] = max(0.0, tank.level - tank.portsData[2].height) * system.g * tank.heatTransfer.states[1].d + tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */) = (fmax(0.0,(data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */))) * (((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */))) + (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}
/*
equation index: 95
type: SIMPLE_ASSIGN
tank.portInDensities[2] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[2], tank.medium.h, 0, 0).rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 96
type: SIMPLE_ASSIGN
tank.vessel_ps_static[1] = max(0.0, tank.level - tank.portsData[1].height) * system.g * tank.heatTransfer.states[1].d + tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */) = (fmax(0.0,(data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */))) * (((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */))) + (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}
/*
equation index: 97
type: SIMPLE_ASSIGN
tank.m = tank.V * tank.heatTransfer.states[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  (data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */) = ((data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 98
type: SIMPLE_ASSIGN
$DER.tank.U = tank.m * $DER.tank.medium.u + tank.mb_flow * tank.medium.u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  (data->localData[0]->realVars[40] /* der(tank.U) DUMMY_DER */) = ((data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */)) * ((data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */)) + ((data->localData[0]->realVars[334] /* tank.mb_flow variable */)) * ((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 99
type: SIMPLE_ASSIGN
tank.portVelocities[2] = smooth(0, (-m_flow) / (tank.portAreas[2] * tank.portInDensities[2]))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[347] /* tank.portVelocities[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[178] /* m_flow variable */)),((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */)) * ((data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */)),"tank.portAreas[2] * tank.portInDensities[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 100
type: SIMPLE_ASSIGN
tank.ports_E_flow[2] = (-m_flow) * (0.5 * tank.portVelocities[2] ^ 2.0 + system.g * tank.portsData[2].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[347] /* tank.portVelocities[2] variable */);
  (data->localData[0]->realVars[350] /* tank.ports_E_flow[2] variable */) = ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((0.5) * ((tmp0 * tmp0)) + ((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */)));
  TRACE_POP
}
/*
equation index: 101
type: SIMPLE_ASSIGN
tank.ports_H_flow[2] = smooth(0, (-m_flow) * tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  (data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */) = ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}
/*
equation index: 102
type: SIMPLE_ASSIGN
radiator.m_flows[2] = m_flow + tank.mb_flow
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */) = (data->localData[0]->realVars[178] /* m_flow variable */) + (data->localData[0]->realVars[334] /* tank.mb_flow variable */);
  TRACE_POP
}
/*
equation index: 103
type: SIMPLE_ASSIGN
radiator.m_flows[1] = radiator.m_flows[2] + radiator.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) = (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */) + (data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 104
type: SIMPLE_ASSIGN
pipe.m_flows[2] = radiator.m_flows[1] + pipe.mb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) = (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) + (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 105
type: SIMPLE_ASSIGN
pipe.m_flows[1] = pipe.m_flows[2] + pipe.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) = (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) + (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 106
type: SIMPLE_ASSIGN
tank.portVelocities[1] = smooth(0, radiator.m_flows[2] / (tank.portAreas[1] * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h, 0, 0).rho))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[346] /* tank.portVelocities[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */)) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (tmp0?(data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)), ((modelica_integer) 0), ((modelica_integer) 0))._rho),"tank.portAreas[1] * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h, 0, 0).rho",equationIndexes);
  TRACE_POP
}
/*
equation index: 107
type: SIMPLE_ASSIGN
radiator.H_flows[2] = semiLinear(radiator.m_flows[2], radiator.mediums[1].h, tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  (data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}
/*
equation index: 108
type: SIMPLE_ASSIGN
tank.ports_H_flow[1] = smooth(0, radiator.m_flows[2] * (if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */) = ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((tmp0?(data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)));
  TRACE_POP
}
/*
equation index: 109
type: SIMPLE_ASSIGN
tank.portInDensities[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], radiator.mediums[1].h, 0, 0).rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  (data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 110
type: SIMPLE_ASSIGN
tank.ports_E_flow[1] = radiator.m_flows[2] * (0.5 * tank.portVelocities[1] ^ 2.0 + system.g * tank.portsData[1].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[346] /* tank.portVelocities[1] variable */);
  (data->localData[0]->realVars[349] /* tank.ports_E_flow[1] variable */) = ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((0.5) * ((tmp0 * tmp0)) + ((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */)));
  TRACE_POP
}
/*
equation index: 111
type: SIMPLE_ASSIGN
tank.Hb_flow = tank.ports_H_flow[1] + tank.ports_H_flow[2] + tank.ports_E_flow[1] + tank.ports_E_flow[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[324] /* tank.Hb_flow variable */) = (data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */) + (data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */) + (data->localData[0]->realVars[349] /* tank.ports_E_flow[1] variable */) + (data->localData[0]->realVars[350] /* tank.ports_E_flow[2] variable */);
  TRACE_POP
}
/*
equation index: 112
type: SIMPLE_ASSIGN
tank.Wb_flow = $DER.tank.U - (tank.Hb_flow + tank.Qb_flow)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[328] /* tank.Wb_flow variable */) = (data->localData[0]->realVars[40] /* der(tank.U) DUMMY_DER */) - ((data->localData[0]->realVars[324] /* tank.Hb_flow variable */) + (data->localData[0]->realVars[325] /* tank.Qb_flow variable */));
  TRACE_POP
}
/*
equation index: 113
type: SIMPLE_ASSIGN
$DER.tank.V = (-tank.Wb_flow) / tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */) = DIVISION_SIM((-(data->localData[0]->realVars[328] /* tank.Wb_flow variable */)),(data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),"tank.p_ambient",equationIndexes);
  TRACE_POP
}
/*
equation index: 114
type: SIMPLE_ASSIGN
radiator.statesFM[3].T = 273.058616085119 + 0.0002391265851958049 * tank.medium.h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[3].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */));
  TRACE_POP
}
/*
equation index: 115
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[3] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp0._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  (data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 116
type: SIMPLE_ASSIGN
pump.head = homotopy((pump.N / pump.N_nominal) ^ 2.0 * Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single * pump.N_nominal / pump.N, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0}), pump.N / pump.N_nominal * (Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single_init, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0}) + (pump.V_flow_single - pump.V_flow_single_init) * (if noEvent(abs(pump.V_flow_single_init) > 0.0) then 10.0 * pump.delta_head_init / pump.V_flow_single_init else 0.0)))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  modelica_real tmp0;
  real_array tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  modelica_boolean tmp5;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[240] /* pump.N variable */),(data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */),"pump.N_nominal",equationIndexes);
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)0.0, (modelica_real)(data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */), (modelica_real)(1.5) * ((data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */)));
  array_alloc_scalar_real_array(&tmp2, 3, (modelica_real)(2.0) * ((data->simulationInfo->realParameter[162] /* pump.head_op PARAM */)), (modelica_real)(data->simulationInfo->realParameter[162] /* pump.head_op PARAM */), (modelica_real)0.0);
  array_alloc_scalar_real_array(&tmp3, 3, (modelica_real)0.0, (modelica_real)(data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */), (modelica_real)(1.5) * ((data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */)));
  array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)(2.0) * ((data->simulationInfo->realParameter[162] /* pump.head_op PARAM */)), (modelica_real)(data->simulationInfo->realParameter[162] /* pump.head_op PARAM */), (modelica_real)0.0);
  tmp5 = Greater(fabs((data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)),0.0);
  (data->localData[0]->realVars[248] /* pump.head variable */) = homotopy(((tmp0 * tmp0)) * (omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, DIVISION_SIM(((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) * ((data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */)),(data->localData[0]->realVars[240] /* pump.N variable */),"pump.N",equationIndexes), tmp1, tmp2)), (DIVISION_SIM((data->localData[0]->realVars[240] /* pump.N variable */),(data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */),"pump.N_nominal",equationIndexes)) * (omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */), tmp3, tmp4) + ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */) - (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)) * ((tmp5?DIVISION_SIM((10.0) * ((data->simulationInfo->realParameter[159] /* pump.delta_head_init PARAM */)),(data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */),"pump.V_flow_single_init",equationIndexes):0.0))));
  TRACE_POP
}
/*
equation index: 117
type: SIMPLE_ASSIGN
pump.eta = homotopy(Modelica.Fluid.Examples.HeatingSystem.pump.efficiencyCharacteristic(pump.V_flow_single * pump.N_nominal / pump.N, 0.8), Modelica.Fluid.Examples.HeatingSystem.pump.efficiencyCharacteristic(pump.V_flow_single_init, 0.8))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[246] /* pump.eta variable */) = homotopy(omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData, ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */),(data->localData[0]->realVars[240] /* pump.N variable */),"pump.N",equationIndexes)), 0.8), omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData, (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */), 0.8));
  TRACE_POP
}
/*
equation index: 118
type: SIMPLE_ASSIGN
pump.V_flow = pump.V_flow_single * (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  (data->localData[0]->realVars[242] /* pump.V_flow variable */) = ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 119
type: SIMPLE_ASSIGN
radiator.mediums[1].T = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + radiator.mediums[1].p) - radiator.mediums[1].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */) = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) - (DIVISION_SIM((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}
/*
equation index: 120
type: SIMPLE_ASSIGN
radiator.flowModel.Fs_p[2] = radiator.crossAreas[1] * (Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T)) - Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))) * radiator.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp1;
  tmp0._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp0._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  tmp1._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp1._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[274] /* radiator.flowModel.Fs_p[2] variable */) = ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp0) - omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp1)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 121
type: SIMPLE_ASSIGN
radiator.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.radiator.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.radiator.heatTransfer.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 122
type: SIMPLE_ASSIGN
radiator.flowModel.dps_fg[2] = (-radiator.flowModel.Fs_p[2]) / (radiator.flowModel.nParallel * radiator.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[274] /* radiator.flowModel.Fs_p[2] variable */)),((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)),"radiator.flowModel.nParallel * radiator.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 123
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[2] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 124
type: SIMPLE_ASSIGN
radiator.mediums[1].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + radiator.mediums[1].p) + 0.0002571314017648316 * (298.15 - radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 125
type: SIMPLE_ASSIGN
radiator.vs[1] = 0.5 * (radiator.m_flows[1] + radiator.m_flows[2]) / (radiator.mediums[1].d * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  (data->localData[0]->realVars[318] /* radiator.vs[1] variable */) = DIVISION_SIM((0.5) * ((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) + (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)),(((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"radiator.mediums[1].d * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 126
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].u = $DER.radiator.mediums[1].h + (radiator.mediums[1].p * $DER.radiator.mediums[1].d - $DER.radiator.mediums[1].p * radiator.mediums[1].d) / radiator.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[38] /* der(radiator.mediums[1].u) DUMMY_DER */) = (data->localData[0]->realVars[37] /* der(radiator.mediums[1].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"radiator.mediums[1].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 127
type: SIMPLE_ASSIGN
radiator.mediums[1].u = radiator.mediums[1].h - radiator.mediums[1].p / radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  (data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */),(data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),"radiator.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 128
type: SIMPLE_ASSIGN
radiator.ms[1] = radiator.fluidVolumes[1] * radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[296] /* radiator.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 129
type: SIMPLE_ASSIGN
$DER.radiator.Us[1] = radiator.ms[1] * $DER.radiator.mediums[1].u + radiator.mb_flows[1] * radiator.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  (data->localData[0]->realVars[35] /* der(radiator.Us[1]) DUMMY_DER */) = ((data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[38] /* der(radiator.mediums[1].u) DUMMY_DER */)) + ((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */)) * ((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 130
type: SIMPLE_ASSIGN
wall.dT = T_ambient.T - radiator.heatTransfer.Ts[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  (data->localData[0]->realVars[368] /* wall.dT variable */) = (data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */) - (data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */);
  TRACE_POP
}
/*
equation index: 131
type: SIMPLE_ASSIGN
radiator.Qb_flows[1] = wall.G * wall.dT
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  (data->localData[0]->realVars[268] /* radiator.Qb_flows[1] variable */) = ((data->simulationInfo->realParameter[313] /* wall.G PARAM */)) * ((data->localData[0]->realVars[368] /* wall.dT variable */));
  TRACE_POP
}
/*
equation index: 132
type: SIMPLE_ASSIGN
radiator.H_flows[1] = semiLinear(radiator.m_flows[1], pipe.mediums[2].h, radiator.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  (data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 133
type: SIMPLE_ASSIGN
pipe.H_flows[3] = semiLinear(radiator.m_flows[1], pipe.mediums[2].h, pipe.mediums[2].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  (data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */) = semiLinear((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 134
type: SIMPLE_ASSIGN
radiator.Hb_flows[1] = radiator.H_flows[1] - radiator.H_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  (data->localData[0]->realVars[267] /* radiator.Hb_flows[1] variable */) = (data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */) - (data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 135
type: SIMPLE_ASSIGN
radiator.Wb_flows[1] = $DER.radiator.Us[1] - (radiator.Hb_flows[1] + radiator.Qb_flows[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  (data->localData[0]->realVars[270] /* radiator.Wb_flows[1] variable */) = (data->localData[0]->realVars[35] /* der(radiator.Us[1]) DUMMY_DER */) - ((data->localData[0]->realVars[267] /* radiator.Hb_flows[1] variable */) + (data->localData[0]->realVars[268] /* radiator.Qb_flows[1] variable */));
  TRACE_POP
}
/*
equation index: 136
type: SIMPLE_ASSIGN
pipe.mediums[2].T = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[2].p) - pipe.mediums[2].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */) = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) - (DIVISION_SIM((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}
/*
equation index: 137
type: SIMPLE_ASSIGN
pipe.flowModel.rhos[2] = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[2].p, pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  (data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 138
type: SIMPLE_ASSIGN
pipe.mediums[2].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pipe.mediums[2].p) + 0.0002571314017648316 * (298.15 - pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  (data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 139
type: SIMPLE_ASSIGN
pipe.vs[2] = 0.5 * (pipe.m_flows[2] + radiator.m_flows[1]) / (pipe.nParallel * pipe.crossAreas[2] * pipe.mediums[2].d)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  (data->localData[0]->realVars[238] /* pipe.vs[2] variable */) = (0.5) * (DIVISION_SIM((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) + (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),(((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)) * ((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */))) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */)),"pipe.nParallel * pipe.crossAreas[2] * pipe.mediums[2].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 140
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].u = $DER.pipe.mediums[2].h + (pipe.mediums[2].p * $DER.pipe.mediums[2].d - $DER.pipe.mediums[2].p * pipe.mediums[2].d) / pipe.mediums[2].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */);
  (data->localData[0]->realVars[32] /* der(pipe.mediums[2].u) DUMMY_DER */) = (data->localData[0]->realVars[30] /* der(pipe.mediums[2].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) * ((data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */)) - (((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */)) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */))),(tmp0 * tmp0),"pipe.mediums[2].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 141
type: SIMPLE_ASSIGN
pipe.mediums[2].u = pipe.mediums[2].h - pipe.mediums[2].p / pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  (data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */) = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */),(data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */),"pipe.mediums[2].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 142
type: SIMPLE_ASSIGN
pipe.ms[2] = pipe.fluidVolumes[2] * pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  (data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */) = ((data->localData[0]->realVars[203] /* pipe.fluidVolumes[2] variable */)) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 143
type: SIMPLE_ASSIGN
$DER.pipe.Us[2] = pipe.ms[2] * $DER.pipe.mediums[2].u + pipe.mb_flows[2] * pipe.mediums[2].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  (data->localData[0]->realVars[26] /* der(pipe.Us[2]) DUMMY_DER */) = ((data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[32] /* der(pipe.mediums[2].u) DUMMY_DER */)) + ((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */)) * ((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 144
type: SIMPLE_ASSIGN
valve.state_a.T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[2].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[2].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[366] /* valve.state_a.T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 145
type: SIMPLE_ASSIGN
heater.vs[1] = 0.5 * (m_flow + pipe.m_flows[1]) / (heater.mediums[1].d * heater.crossAreas[1] * heater.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[177] /* heater.vs[1] variable */) = (0.5) * (DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */) + (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),(((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)),"heater.mediums[1].d * heater.crossAreas[1] * heater.nParallel",equationIndexes));
  TRACE_POP
}
/*
equation index: 146
type: SIMPLE_ASSIGN
heater.ms[1] = heater.fluidVolumes[1] * heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[159] /* heater.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 147
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].u = $DER.heater.mediums[1].h + (heater.mediums[1].p * $DER.heater.mediums[1].d - $DER.heater.mediums[1].p * heater.mediums[1].d) / heater.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[23] /* der(heater.mediums[1].u) DUMMY_DER */) = (data->localData[0]->realVars[22] /* der(heater.mediums[1].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"heater.mediums[1].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 148
type: SIMPLE_ASSIGN
heater.mediums[1].T = 3889.062141521651 * (1.0 + 4.515426036491987e-10 * (-101325.0 + heater.mediums[1].p) + 0.07666372743618453) - heater.mediums[1].d / 0.2563723580877598
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */) = (3889.062141521651) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) + 0.07666372743618453) - (DIVISION_SIM((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),0.2563723580877598,"0.2563723580877598",equationIndexes));
  TRACE_POP
}
/*
equation index: 149
type: SIMPLE_ASSIGN
heater.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.heater.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.heater.heatTransfer.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 150
type: SIMPLE_ASSIGN
heater.Qb_flows[1] = burner.Q_flow * (1.0 + burner.alpha * (heater.heatTransfer.Ts[1] - burner.T_ref))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->localData[0]->realVars[133] /* heater.Qb_flows[1] variable */) = ((data->simulationInfo->realParameter[26] /* burner.Q_flow PARAM */)) * (1.0 + ((data->simulationInfo->realParameter[28] /* burner.alpha PARAM */)) * ((data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */) - (data->simulationInfo->realParameter[27] /* burner.T_ref PARAM */)));
  TRACE_POP
}
/*
equation index: 151
type: SIMPLE_ASSIGN
heater.mediums[1].h = 104929.294642565 + 4181.885502948851 * (-298.15 + heater.mediums[1].T) + 0.0009260700016004721 * (-101325.0 + heater.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */)) + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 152
type: SIMPLE_ASSIGN
heater.mediums[1].u = heater.mediums[1].h - heater.mediums[1].p / heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */),(data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),"heater.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 153
type: SIMPLE_ASSIGN
$DER.heater.Us[1] = heater.ms[1] * $DER.heater.mediums[1].u + heater.mb_flows[1] * heater.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[20] /* der(heater.Us[1]) DUMMY_DER */) = ((data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[23] /* der(heater.mediums[1].u) DUMMY_DER */)) + ((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */)) * ((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 154
type: SIMPLE_ASSIGN
heater.flowModel.rhos[2] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 155
type: SIMPLE_ASSIGN
pipe.H_flows[1] = semiLinear(pipe.m_flows[1], heater.mediums[1].h, pipe.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 156
type: SIMPLE_ASSIGN
pipe.H_flows[2] = semiLinear(pipe.m_flows[2], pipe.mediums[1].h, pipe.mediums[2].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 157
type: SIMPLE_ASSIGN
heater.H_flows[2] = semiLinear(pipe.m_flows[1], heater.mediums[1].h, pipe.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->localData[0]->realVars[131] /* heater.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 158
type: SIMPLE_ASSIGN
pipe.Hb_flows[2] = pipe.H_flows[2] - pipe.H_flows[3]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[183] /* pipe.Hb_flows[2] variable */) = (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */) - (data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */);
  TRACE_POP
}
/*
equation index: 159
type: SIMPLE_ASSIGN
pipe.Wb_flows[2] = $DER.pipe.Us[2] - pipe.Hb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->localData[0]->realVars[187] /* pipe.Wb_flows[2] variable */) = (data->localData[0]->realVars[26] /* der(pipe.Us[2]) DUMMY_DER */) - (data->localData[0]->realVars[183] /* pipe.Hb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 160
type: SIMPLE_ASSIGN
pipe.Hb_flows[1] = pipe.H_flows[1] - pipe.H_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[182] /* pipe.Hb_flows[1] variable */) = (data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */) - (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 161
type: SIMPLE_ASSIGN
heater.statesFM[3].T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[1].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 162
type: SIMPLE_ASSIGN
heater.flowModel.Fs_p[2] = heater.crossAreas[1] * (Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T)) - Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))) * heater.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp1;
  tmp0._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  tmp1._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp1._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[139] /* heater.flowModel.Fs_p[2] variable */) = ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp0) - omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp1)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 163
type: SIMPLE_ASSIGN
heater.flowModel.dps_fg[2] = (-heater.flowModel.Fs_p[2]) / (heater.flowModel.nParallel * heater.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[139] /* heater.flowModel.Fs_p[2] variable */)),((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)),"heater.flowModel.nParallel * heater.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 164
type: SIMPLE_ASSIGN
heater.flowModel.rhos[3] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  (data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 165
type: SIMPLE_ASSIGN
pipe.mediums[1].T = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[1].p) - pipe.mediums[1].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */) = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) - (DIVISION_SIM((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}
/*
equation index: 166
type: SIMPLE_ASSIGN
pipe.flowModel.Fs_p[1] = 0.5 * pipe.flowModel.nParallel * (pipe.crossAreas[1] + pipe.crossAreas[2]) * (Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[2].p, pipe.mediums[2].T)) - Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, pipe.mediums[1].T)))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp0;
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp1;
  tmp0._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  tmp1._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp1._T = (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[189] /* pipe.flowModel.Fs_p[1] variable */) = (0.5) * (((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */)) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * (omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp0) - omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp1))));
  TRACE_POP
}
/*
equation index: 167
type: SIMPLE_ASSIGN
pipe.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.Medium.ThermodynamicState(pipe.mediums[1].p, pipe.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 168
type: SIMPLE_ASSIGN
pipe.mediums[1].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pipe.mediums[1].p) + 0.0002571314017648316 * (298.15 - pipe.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 169
type: SIMPLE_ASSIGN
pipe.vs[1] = 0.5 * (pipe.m_flows[1] + pipe.m_flows[2]) / (pipe.mediums[1].d * pipe.crossAreas[1] * pipe.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[237] /* pipe.vs[1] variable */) = DIVISION_SIM((0.5) * ((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) + (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */)),(((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)),"pipe.mediums[1].d * pipe.crossAreas[1] * pipe.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 170
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].u = $DER.pipe.mediums[1].h + (pipe.mediums[1].p * $DER.pipe.mediums[1].d - $DER.pipe.mediums[1].p * pipe.mediums[1].d) / pipe.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[31] /* der(pipe.mediums[1].u) DUMMY_DER */) = (data->localData[0]->realVars[29] /* der(pipe.mediums[1].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"pipe.mediums[1].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 171
type: SIMPLE_ASSIGN
pipe.mediums[1].u = pipe.mediums[1].h - pipe.mediums[1].p / pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  (data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */),(data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),"pipe.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 172
type: SIMPLE_ASSIGN
pipe.ms[1] = pipe.fluidVolumes[1] * pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  (data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[202] /* pipe.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 173
type: SIMPLE_ASSIGN
$DER.pipe.Us[1] = pipe.ms[1] * $DER.pipe.mediums[1].u + pipe.mb_flows[1] * pipe.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[25] /* der(pipe.Us[1]) DUMMY_DER */) = ((data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[31] /* der(pipe.mediums[1].u) DUMMY_DER */)) + ((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */)) * ((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 174
type: SIMPLE_ASSIGN
pipe.flowModel.dps_fg[1] = (-2.0) * pipe.flowModel.Fs_p[1] / ((pipe.crossAreas[1] + pipe.crossAreas[2]) * pipe.flowModel.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) = (-2.0) * (DIVISION_SIM((data->localData[0]->realVars[189] /* pipe.flowModel.Fs_p[1] variable */),((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * ((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */)),"(pipe.crossAreas[1] + pipe.crossAreas[2]) * pipe.flowModel.nParallel",equationIndexes));
  TRACE_POP
}
/*
equation index: 175
type: SIMPLE_ASSIGN
pipe.Wb_flows[1] = 0.5 * pipe.vs[1] * pipe.crossAreas[1] * (pipe.mediums[2].p + pipe.flowModel.dps_fg[1] - pipe.mediums[1].p) * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  (data->localData[0]->realVars[186] /* pipe.Wb_flows[1] variable */) = (0.5) * (((data->localData[0]->realVars[237] /* pipe.vs[1] variable */)) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) + (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) - (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)))));
  TRACE_POP
}
/*
equation index: 176
type: SIMPLE_ASSIGN
pump.Hb_flow = smooth(0, m_flow * (if m_flow > 0.0 then tank.medium.h else sensor_m_flow.port_b.h_outflow)) + smooth(0, (-m_flow) * (if (-m_flow) > 0.0 then heater.mediums[1].h else sensor_m_flow.port_b.h_outflow))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[178] /* m_flow variable */),0.0);
  tmp1 = Greater((-(data->localData[0]->realVars[178] /* m_flow variable */)),0.0);
  (data->localData[0]->realVars[239] /* pump.Hb_flow variable */) = ((data->localData[0]->realVars[178] /* m_flow variable */)) * ((tmp0?(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */):(data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */))) + ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((tmp1?(data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */)));
  TRACE_POP
}
/*
equation index: 177
type: SIMPLE_ASSIGN
heater.H_flows[1] = semiLinear(m_flow, sensor_m_flow.port_b.h_outflow, heater.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[130] /* heater.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[178] /* m_flow variable */), (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 178
type: SIMPLE_ASSIGN
pump.W_single = (-pump.Hb_flow) / (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[244] /* pump.W_single variable */) = DIVISION_SIM((-(data->localData[0]->realVars[239] /* pump.Hb_flow variable */)),((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)),"/*Real*/(pump.nParallel)",equationIndexes);
  TRACE_POP
}
/*
equation index: 179
type: SIMPLE_ASSIGN
heater.statesFM[1].T = 273.058616085119 + 0.0002391265851958049 * sensor_m_flow.port_b.h_outflow + (-2.214479571349945e-07) * (-101325.0 + pump.p_b_nominal)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */)) + (-2.214479571349945e-07) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */));
  TRACE_POP
}
/*
equation index: 180
type: SIMPLE_ASSIGN
heater.flowModel.Fs_p[1] = heater.crossAreas[1] * (Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T)) - Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))) * heater.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp1;
  tmp0._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  tmp1._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp1._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[138] /* heater.flowModel.Fs_p[1] variable */) = ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp0) - omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp1)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 181
type: SIMPLE_ASSIGN
heater.flowModel.dps_fg[1] = (-heater.flowModel.Fs_p[1]) / (heater.flowModel.nParallel * heater.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[138] /* heater.flowModel.Fs_p[1] variable */)),((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)),"heater.flowModel.nParallel * heater.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 182
type: SIMPLE_ASSIGN
heater.Wb_flows[1] = heater.vs[1] * heater.crossAreas[1] * (pipe.mediums[1].p + heater.flowModel.dps_fg[1] + heater.flowModel.dps_fg[2] - pump.p_b_nominal) * heater.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[135] /* heater.Wb_flows[1] variable */) = ((data->localData[0]->realVars[177] /* heater.vs[1] variable */)) * (((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) + (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */) + (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */) - (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */))));
  TRACE_POP
}
/*
equation index: 183
type: SIMPLE_ASSIGN
heater.Hb_flows[1] = $DER.heater.Us[1] - (heater.Wb_flows[1] + heater.Qb_flows[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[132] /* heater.Hb_flows[1] variable */) = (data->localData[0]->realVars[20] /* der(heater.Us[1]) DUMMY_DER */) - ((data->localData[0]->realVars[135] /* heater.Wb_flows[1] variable */) + (data->localData[0]->realVars[133] /* heater.Qb_flows[1] variable */));
  TRACE_POP
}
/*
equation index: 184
type: SIMPLE_ASSIGN
pump.heatTransfer.states[1].T = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + pump.p_b_nominal) - sensor_m_flow.port_b.h_outflow / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */) = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) - (DIVISION_SIM((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}
/*
equation index: 185
type: SIMPLE_ASSIGN
pump.rho = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pump.p_b_nominal) + 0.0002571314017648316 * (298.15 - pump.heatTransfer.states[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[263] /* pump.rho variable */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */)));
  TRACE_POP
}
/*
equation index: 186
type: SIMPLE_ASSIGN
heater.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp0._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 187
type: SIMPLE_ASSIGN
radiator.statesFM[1].T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[2].h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */));
  TRACE_POP
}
/*
equation index: 188
type: SIMPLE_ASSIGN
radiator.flowModel.Fs_p[1] = radiator.crossAreas[1] * (Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T)) - Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T))) * radiator.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp1;
  tmp0._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  tmp1._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp1._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[273] /* radiator.flowModel.Fs_p[1] variable */) = ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp0) - omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp1)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 189
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp0._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 190
type: SIMPLE_ASSIGN
radiator.flowModel.dps_fg[1] = (-radiator.flowModel.Fs_p[1]) / (radiator.flowModel.nParallel * radiator.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[273] /* radiator.flowModel.Fs_p[1] variable */)),((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)),"radiator.flowModel.nParallel * radiator.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 191
type: SIMPLE_ASSIGN
valve.dp = pipe.mediums[2].p - radiator.statesFM[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  (data->localData[0]->realVars[361] /* valve.dp variable */) = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) - (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  TRACE_POP
}
/*
equation index: 192
type: SIMPLE_ASSIGN
pump.dp_pump = pump.p_b_nominal - tank.ports[2].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  (data->localData[0]->realVars[245] /* pump.dp_pump variable */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */) - (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  TRACE_POP
}
/*
equation index: 193
type: SIMPLE_ASSIGN
tank.inFlow[2] = not tank.regularFlow[2] and (tank.s[2] > 0.0 or tank.portsData[2].height >= tank.fluidLevel_max)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[356] /* tank.s[2] variable */),0.0);
  tmp1 = GreaterEq((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  (data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */) = ((!(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)) && (tmp0 || tmp1));
  TRACE_POP
}
/*
equation index: 194
type: SIMPLE_ASSIGN
tank.inFlow[1] = not tank.regularFlow[1] and (tank.s[1] > 0.0 or tank.portsData[1].height >= tank.fluidLevel_max)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[355] /* tank.s[1] variable */),0.0);
  tmp1 = GreaterEq((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  (data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */) = ((!(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc213(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,213};
  int i,j;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  /* iteration variables */
  for (i=0; i<18; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc213: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<18; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc213 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[355] /* tank.s[1] variable */) = xloc[0];
  (data->localData[0]->realVars[356] /* tank.s[2] variable */) = xloc[1];
  (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = xloc[2];
  (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */) = xloc[3];
  (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) = xloc[4];
  (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) = xloc[5];
  (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) = xloc[6];
  (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */) = xloc[7];
  (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */) = xloc[8];
  (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) = xloc[9];
  (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) = xloc[10];
  (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */) = xloc[11];
  (data->localData[0]->realVars[243] /* pump.V_flow_single variable */) = xloc[12];
  (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) = xloc[13];
  (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) = xloc[14];
  (data->localData[0]->realVars[178] /* m_flow variable */) = xloc[15];
  (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) = xloc[16];
  (data->localData[0]->realVars[240] /* pump.N variable */) = xloc[17];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_87(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_88(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_89(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_90(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_91(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_92(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_93(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_94(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_95(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_96(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_97(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_98(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_99(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_100(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_101(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_102(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_103(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_104(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_105(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_106(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_107(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_108(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_109(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_110(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_111(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_112(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_113(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_114(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_115(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_116(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_117(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_118(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_119(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_120(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_121(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_122(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_123(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_124(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_125(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_126(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_127(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_128(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_129(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_130(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_131(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_132(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_133(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_134(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_135(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_136(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_137(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_138(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_139(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_140(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_141(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_142(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_143(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_144(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_145(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_146(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_147(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_148(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_149(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_150(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_151(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_152(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_153(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_154(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_155(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_156(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_157(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_158(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_159(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_160(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_161(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_162(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_163(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_164(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_165(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_166(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_167(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_168(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_169(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_170(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_171(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_172(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_173(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_174(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_175(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_176(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_177(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_178(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_179(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_180(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_181(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_182(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_183(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_184(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_185(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_186(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_187(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_188(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_189(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_190(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_191(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_192(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_193(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_194(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) + ((data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */)) * ((data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */)) - (data->localData[0]->realVars[334] /* tank.mb_flow variable */);

  res[1] = ((data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)?(data->localData[0]->realVars[355] /* tank.s[1] variable */) - ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */)):((data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */)?(data->localData[0]->realVars[355] /* tank.s[1] variable */) - (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */):(data->localData[0]->realVars[355] /* tank.s[1] variable */) - ((9.869232667160129e-06) * (((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */)) * ((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */) - (data->localData[0]->realVars[8] /* tank.level STATE(1) */))))));

  tmp2 = (modelica_boolean)(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */);
  if(tmp2)
  {
    tmp0 = DIVISION_SIM((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp1 = DIVISION_SIM((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp3 = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - ((data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */) + (0.5) * ((real_int_pow(threadData, (data->localData[0]->realVars[342] /* tank.portAreas[1] variable */), -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (DIVISION_SIM((data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */) - 1.0 + (tmp0 * tmp0),(data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */),"tank.portInDensities[1]",equationIndexes)) * ((data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */)), DIVISION_SIM((data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */) + 1.0 - ((tmp1 * tmp1)),((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) * ((data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */)),"tank.heatTransfer.states[1].d * tank.ports_penetration[1]",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp3 = ((data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */)?(data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */):(data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */));
  }
  res[2] = tmp3;

  res[3] = homotopy((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */), (data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */), (data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */), 0.0008899999999999999, 0.0008899999999999999, 5.0, (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[205] /* radiator.flowModel.dp_small PARAM */)), 4000.0)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)), (DIVISION_SIM((data->simulationInfo->realParameter[207] /* radiator.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[204] /* radiator.flowModel.dp_nominal PARAM */),"radiator.flowModel.dp_nominal",equationIndexes)) * ((data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */))) - (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */);

  tmp4._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp4._T = (data->localData[0]->realVars[366] /* valve.state_a.T variable */);
  tmp5 = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData, tmp4);
  if(!(tmp5 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(pipe.mediums[2].p, valve.state_a.T))) was %g should be >= 0", tmp5);
    }
  }res[4] = homotopy(((((data->localData[0]->realVars[365] /* valve.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[298] /* valve.Av PARAM */))) * (sqrt(tmp5))) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[361] /* valve.dp variable */), (data->simulationInfo->realParameter[302] /* valve.dp_small PARAM */))), DIVISION_SIM((((data->localData[0]->realVars[365] /* valve.relativeFlowCoefficient variable */)) * ((data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */))) * ((data->localData[0]->realVars[361] /* valve.dp variable */)),(data->simulationInfo->realParameter[301] /* valve.dp_nominal PARAM */),"valve.dp_nominal",equationIndexes)) - (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */);

  res[5] = homotopy((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */), (data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */), (data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */), 0.0008899999999999999, 0.0008899999999999999, 5.0, (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[205] /* radiator.flowModel.dp_small PARAM */)), 4000.0)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)), (DIVISION_SIM((data->simulationInfo->realParameter[207] /* radiator.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[204] /* radiator.flowModel.dp_nominal PARAM */),"radiator.flowModel.dp_nominal",equationIndexes)) * ((data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */))) - (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */);

  res[6] = homotopy((omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */), (data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */), (data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */), 0.0008899999999999999, 0.0008899999999999999, 10.0, (data->localData[0]->realVars[193] /* pipe.flowModel.diameters[1] variable */), 0.0, (0.5) * ((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)), (0.5) * ((data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */) + (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */)), (data->simulationInfo->realParameter[117] /* pipe.flowModel.dp_small PARAM */), 4000.0)) * ((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */)), (DIVISION_SIM((data->simulationInfo->realParameter[119] /* pipe.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[116] /* pipe.flowModel.dp_nominal PARAM */),"pipe.flowModel.dp_nominal",equationIndexes)) * ((data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */))) - (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */);

  res[7] = homotopy((omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */), (data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */), (data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */), 0.0008899999999999999, 0.0008899999999999999, 1.0, (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[57] /* heater.flowModel.dp_small PARAM */)), 4000.0)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)), (DIVISION_SIM((data->simulationInfo->realParameter[59] /* heater.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[56] /* heater.flowModel.dp_nominal PARAM */),"heater.flowModel.dp_nominal",equationIndexes)) * ((data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */))) - (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */);

  res[8] = homotopy((omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */), (data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */), (data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */), 0.0008899999999999999, 0.0008899999999999999, 1.0, (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[57] /* heater.flowModel.dp_small PARAM */)), 4000.0)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)), (DIVISION_SIM((data->simulationInfo->realParameter[59] /* heater.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[56] /* heater.flowModel.dp_nominal PARAM */),"heater.flowModel.dp_nominal",equationIndexes)) * ((data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */))) - (data->localData[0]->realVars[178] /* m_flow variable */);

  res[9] = homotopy(DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */),(data->localData[0]->realVars[263] /* pump.rho variable */),"pump.rho",equationIndexes), DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */),(data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */),"pump.rho_nominal",equationIndexes)) - (data->localData[0]->realVars[242] /* pump.V_flow variable */);

  res[10] = (data->localData[0]->realVars[130] /* heater.H_flows[1] variable */) + (-(data->localData[0]->realVars[131] /* heater.H_flows[2] variable */)) - (data->localData[0]->realVars[132] /* heater.Hb_flows[1] variable */);

  res[11] = (data->localData[0]->realVars[186] /* pipe.Wb_flows[1] variable */) + (data->localData[0]->realVars[182] /* pipe.Hb_flows[1] variable */) - (data->localData[0]->realVars[25] /* der(pipe.Us[1]) DUMMY_DER */);

  res[12] = (0.5) * (((data->localData[0]->realVars[238] /* pipe.vs[2] variable */)) * (((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * (((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) + (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) - (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */))))) - (data->localData[0]->realVars[187] /* pipe.Wb_flows[2] variable */);

  res[13] = ((data->localData[0]->realVars[318] /* radiator.vs[1] variable */)) * (((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) + (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */) + (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */) - (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */)) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)))) - (data->localData[0]->realVars[270] /* radiator.Wb_flows[1] variable */);

  res[14] = homotopy(DIVISION_SIM(((data->localData[0]->realVars[245] /* pump.dp_pump variable */)) * ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)),(data->localData[0]->realVars[246] /* pump.eta variable */),"pump.eta",equationIndexes), DIVISION_SIM(((data->localData[0]->realVars[245] /* pump.dp_pump variable */)) * ((data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)),(data->localData[0]->realVars[246] /* pump.eta variable */),"pump.eta",equationIndexes)) - (data->localData[0]->realVars[244] /* pump.W_single variable */);

  res[15] = (data->localData[0]->realVars[245] /* pump.dp_pump variable */) - (((data->localData[0]->realVars[248] /* pump.head variable */)) * (((data->localData[0]->realVars[263] /* pump.rho variable */)) * ((data->simulationInfo->realParameter[160] /* pump.g PARAM */))));

  tmp8 = (modelica_boolean)(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */);
  if(tmp8)
  {
    tmp6 = DIVISION_SIM((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp7 = DIVISION_SIM((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp9 = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - ((data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */) + (0.5) * ((real_int_pow(threadData, (data->localData[0]->realVars[343] /* tank.portAreas[2] variable */), -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (-(data->localData[0]->realVars[178] /* m_flow variable */)), (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (DIVISION_SIM((data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */) - 1.0 + (tmp6 * tmp6),(data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */),"tank.portInDensities[2]",equationIndexes)) * ((data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */)), DIVISION_SIM((data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */) + 1.0 - ((tmp7 * tmp7)),((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) * ((data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */)),"tank.heatTransfer.states[1].d * tank.ports_penetration[2]",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp9 = ((data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */)?(data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */):(-(data->localData[0]->realVars[178] /* m_flow variable */)));
  }
  res[16] = tmp9;

  res[17] = ((data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)?(data->localData[0]->realVars[356] /* tank.s[2] variable */) - ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */)):((data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */)?(data->localData[0]->realVars[356] /* tank.s[2] variable */) + (data->localData[0]->realVars[178] /* m_flow variable */):(data->localData[0]->realVars[356] /* tank.s[2] variable */) - ((9.869232667160129e-06) * (((data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */)) * ((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */) - (data->localData[0]->realVars[8] /* tank.level STATE(1) */))))));
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS213(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+18] = {0,2,2,4,3,5,5,5,5,5,4,6,3,3,4,5,17,8,2};
  const int rowIndex[88] = {1,2,16,17,14,15,16,17,4,5,13,8,9,10,14,15,6,7,10,11,12,6,7,10,11,12,7,8,10,11,14,7,8,10,11,14,4,6,11,12,4,5,6,11,12,13,3,5,13,9,14,15,1,2,3,13,0,2,3,5,13,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,16,17,0,1,2,3,13,14,16,17,14,15};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(18, 88, 8);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(unsigned int));
  
  for(i=2;i<18+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 88*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {15};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 2 columns */
  const int indices_2[2] = {10, 17};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 2 columns */
  const int indices_3[2] = {9, 16};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 1 columns */
  const int indices_4[1] = {8};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 2 columns */
  const int indices_5[2] = {7, 14};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 3 columns */
  const int indices_6[3] = {6, 12, 13};
  for(i=0; i<3; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
  
  /* color 7 with 3 columns */
  const int indices_7[3] = {2, 5, 11};
  for(i=0; i<3; i++)
    inSysData->sparsePattern->colorCols[indices_7[i]] = 7;
  
  /* color 8 with 4 columns */
  const int indices_8[4] = {0, 1, 3, 4};
  for(i=0; i<4; i++)
    inSysData->sparsePattern->colorCols[indices_8[i]] = 8;
}
void initializeNonlinearPatternNLS213(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS213(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for tank.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[355].attribute /* tank.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[355].attribute /* tank.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[355].attribute /* tank.s[1] */.max;
  /* static nls data for tank.s[2] */
  sysData->nominal[i] = data->modelData->realVarsData[356].attribute /* tank.s[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[356].attribute /* tank.s[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[356].attribute /* tank.s[2] */.max;
  /* static nls data for tank.ports[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.max;
  /* static nls data for radiator.statesFM[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.max;
  /* static nls data for sensor_m_flow.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[323].attribute /* sensor_m_flow.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[323].attribute /* sensor_m_flow.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[323].attribute /* sensor_m_flow.port_b.h_outflow */.max;
  /* static nls data for pipe.mediums[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[4].attribute /* pipe.mediums[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[4].attribute /* pipe.mediums[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[4].attribute /* pipe.mediums[1].p */.max;
  /* static nls data for pipe.mediums[1].h */
  sysData->nominal[i] = data->modelData->realVarsData[226].attribute /* pipe.mediums[1].h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[226].attribute /* pipe.mediums[1].h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[226].attribute /* pipe.mediums[1].h */.max;
  /* static nls data for heater.mediums[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[1].attribute /* heater.mediums[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[1].attribute /* heater.mediums[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[1].attribute /* heater.mediums[1].p */.max;
  /* static nls data for heater.mediums[1].d */
  sysData->nominal[i] = data->modelData->realVarsData[168].attribute /* heater.mediums[1].d */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[168].attribute /* heater.mediums[1].d */.min;
  sysData->max[i++]   = data->modelData->realVarsData[168].attribute /* heater.mediums[1].d */.max;
  /* static nls data for pipe.mediums[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* pipe.mediums[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* pipe.mediums[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* pipe.mediums[2].p */.max;
  /* static nls data for pipe.mediums[2].h */
  sysData->nominal[i] = data->modelData->realVarsData[227].attribute /* pipe.mediums[2].h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[227].attribute /* pipe.mediums[2].h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[227].attribute /* pipe.mediums[2].h */.max;
  /* static nls data for radiator.mediums[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* radiator.mediums[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* radiator.mediums[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* radiator.mediums[1].p */.max;
  /* static nls data for pump.V_flow_single */
  sysData->nominal[i] = data->modelData->realVarsData[243].attribute /* pump.V_flow_single */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[243].attribute /* pump.V_flow_single */.min;
  sysData->max[i++]   = data->modelData->realVarsData[243].attribute /* pump.V_flow_single */.max;
  /* static nls data for radiator.statesFM[3].p */
  sysData->nominal[i] = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.max;
  /* static nls data for radiator.mediums[1].h */
  sysData->nominal[i] = data->modelData->realVarsData[308].attribute /* radiator.mediums[1].h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[308].attribute /* radiator.mediums[1].h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[308].attribute /* radiator.mediums[1].h */.max;
  /* static nls data for m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* m_flow */.max;
  /* static nls data for tank.medium.h */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* tank.medium.h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* tank.medium.h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* tank.medium.h */.max;
  /* static nls data for pump.N */
  sysData->nominal[i] = data->modelData->realVarsData[240].attribute /* pump.N */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[240].attribute /* pump.N */.min;
  sysData->max[i++]   = data->modelData->realVarsData[240].attribute /* pump.N */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS213(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS213(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS213(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[355] /* tank.s[1] variable */);
  array[1] = (data->localData[0]->realVars[356] /* tank.s[2] variable */);
  array[2] = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  array[3] = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  array[4] = (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */);
  array[5] = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  array[6] = (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */);
  array[7] = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  array[8] = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  array[9] = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  array[10] = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */);
  array[11] = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  array[12] = (data->localData[0]->realVars[243] /* pump.V_flow_single variable */);
  array[13] = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  array[14] = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */);
  array[15] = (data->localData[0]->realVars[178] /* m_flow variable */);
  array[16] = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */);
  array[17] = (data->localData[0]->realVars[240] /* pump.N variable */);
}


/* inner equations */

/*
equation index: 389
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].phase = if tank.medium.h < Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(tank.p_ambient).h or tank.medium.h > Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(tank.p_ambient).h or tank.p_ambient > 22064000.0 then 1 else 2
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  tmp0 = Less((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */),omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */))._h);
  tmp1 = Greater((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */),omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */))._h);
  tmp2 = Greater((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),22064000.0);
  (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */) = (((tmp0 || tmp1) || tmp2)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
equation index: 390
type: SIMPLE_ASSIGN
tank.heatTransfer.states[1].d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0).rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  (data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 391
type: SIMPLE_ASSIGN
tank.heatTransfer.Ts[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0).T
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0))._T;
  TRACE_POP
}
/*
equation index: 392
type: SIMPLE_ASSIGN
$DER.tank.heatTransfer.states[1].d = Modelica.Media.Water.IF97_Utilities.rho_ph_der(tank.p_ambient, tank.medium.h, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.p_ambient, tank.medium.h, tank.heatTransfer.states[1].phase, 0), 0.0, $DER.tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */) = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), ((modelica_integer) 0)), 0.0, (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */));
  TRACE_POP
}
/*
equation index: 393
type: SIMPLE_ASSIGN
$DER.tank.medium.u = $DER.tank.medium.h + tank.p_ambient * $DER.tank.heatTransfer.states[1].d / tank.heatTransfer.states[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */) = (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */) + ((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */),(tmp0 * tmp0),"tank.heatTransfer.states[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}
/*
equation index: 394
type: SIMPLE_ASSIGN
tank.medium.u = tank.medium.h - tank.p_ambient / tank.heatTransfer.states[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  (data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */) = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) - (DIVISION_SIM((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),(data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */),"tank.heatTransfer.states[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 395
type: SIMPLE_ASSIGN
tank.vessel_ps_static[2] = max(0.0, tank.level - tank.portsData[2].height) * system.g * tank.heatTransfer.states[1].d + tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */) = (fmax(0.0,(data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */))) * (((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */))) + (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}
/*
equation index: 396
type: SIMPLE_ASSIGN
tank.portInDensities[2] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[2], tank.medium.h, 0, 0).rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  (data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 397
type: SIMPLE_ASSIGN
tank.vessel_ps_static[1] = max(0.0, tank.level - tank.portsData[1].height) * system.g * tank.heatTransfer.states[1].d + tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */) = (fmax(0.0,(data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */))) * (((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */))) + (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */);
  TRACE_POP
}
/*
equation index: 398
type: SIMPLE_ASSIGN
tank.Qb_flow = 10.0 * tank.heatTransfer.surfaceAreas[1] * (tank.heatTransfer.T_ambient - tank.heatTransfer.Ts[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  (data->localData[0]->realVars[325] /* tank.Qb_flow variable */) = (10.0) * (((data->localData[0]->realVars[332] /* tank.heatTransfer.surfaceAreas[1] variable */)) * ((data->simulationInfo->realParameter[258] /* tank.heatTransfer.T_ambient PARAM */) - (data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */)));
  TRACE_POP
}
/*
equation index: 399
type: SIMPLE_ASSIGN
tank.m = tank.V * tank.heatTransfer.states[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  (data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */) = ((data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 400
type: SIMPLE_ASSIGN
$DER.tank.U = tank.m * $DER.tank.medium.u + tank.mb_flow * tank.medium.u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  (data->localData[0]->realVars[40] /* der(tank.U) DUMMY_DER */) = ((data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */)) * ((data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */)) + ((data->localData[0]->realVars[334] /* tank.mb_flow variable */)) * ((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 401
type: SIMPLE_ASSIGN
tank.portVelocities[2] = smooth(0, (-m_flow) / (tank.portAreas[2] * tank.portInDensities[2]))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  (data->localData[0]->realVars[347] /* tank.portVelocities[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[178] /* m_flow variable */)),((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */)) * ((data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */)),"tank.portAreas[2] * tank.portInDensities[2]",equationIndexes);
  TRACE_POP
}
/*
equation index: 402
type: SIMPLE_ASSIGN
tank.ports_E_flow[2] = (-m_flow) * (0.5 * tank.portVelocities[2] ^ 2.0 + system.g * tank.portsData[2].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[347] /* tank.portVelocities[2] variable */);
  (data->localData[0]->realVars[350] /* tank.ports_E_flow[2] variable */) = ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((0.5) * ((tmp0 * tmp0)) + ((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */)));
  TRACE_POP
}
/*
equation index: 403
type: SIMPLE_ASSIGN
tank.ports_H_flow[2] = smooth(0, (-m_flow) * tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  (data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */) = ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}
/*
equation index: 404
type: SIMPLE_ASSIGN
heater.flowModel.dps_fg[1] = m_flow * heater.flowModel.dp_nominal / heater.flowModel.m_flow_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */) = DIVISION_SIM(((data->localData[0]->realVars[178] /* m_flow variable */)) * ((data->simulationInfo->realParameter[56] /* heater.flowModel.dp_nominal PARAM */)),(data->simulationInfo->realParameter[59] /* heater.flowModel.m_flow_nominal PARAM */),"heater.flowModel.m_flow_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 405
type: SIMPLE_ASSIGN
heater.flowModel.Fs_p[1] = (-heater.flowModel.dps_fg[1]) * heater.flowModel.nParallel * heater.crossAreas[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  (data->localData[0]->realVars[138] /* heater.flowModel.Fs_p[1] variable */) = ((-(data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */))) * (((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 406
type: SIMPLE_ASSIGN
radiator.m_flows[2] = m_flow + tank.mb_flow
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */) = (data->localData[0]->realVars[178] /* m_flow variable */) + (data->localData[0]->realVars[334] /* tank.mb_flow variable */);
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
radiator.flowModel.dps_fg[2] = radiator.m_flows[2] * radiator.flowModel.dp_nominal / radiator.flowModel.m_flow_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */) = DIVISION_SIM(((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((data->simulationInfo->realParameter[204] /* radiator.flowModel.dp_nominal PARAM */)),(data->simulationInfo->realParameter[207] /* radiator.flowModel.m_flow_nominal PARAM */),"radiator.flowModel.m_flow_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
radiator.flowModel.Fs_p[2] = (-radiator.flowModel.dps_fg[2]) * radiator.flowModel.nParallel * radiator.crossAreas[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  (data->localData[0]->realVars[274] /* radiator.flowModel.Fs_p[2] variable */) = ((-(data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */))) * (((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
radiator.m_flows[1] = radiator.m_flows[2] + radiator.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) = (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */) + (data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
radiator.flowModel.dps_fg[1] = radiator.m_flows[1] * radiator.flowModel.dp_nominal / radiator.flowModel.m_flow_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */) = DIVISION_SIM(((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */)) * ((data->simulationInfo->realParameter[204] /* radiator.flowModel.dp_nominal PARAM */)),(data->simulationInfo->realParameter[207] /* radiator.flowModel.m_flow_nominal PARAM */),"radiator.flowModel.m_flow_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 411
type: SIMPLE_ASSIGN
radiator.flowModel.Fs_p[1] = (-radiator.flowModel.dps_fg[1]) * radiator.flowModel.nParallel * radiator.crossAreas[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  (data->localData[0]->realVars[273] /* radiator.flowModel.Fs_p[1] variable */) = ((-(data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */))) * (((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 412
type: SIMPLE_ASSIGN
pipe.m_flows[2] = radiator.m_flows[1] + pipe.mb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) = (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) + (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 413
type: SIMPLE_ASSIGN
pipe.flowModel.dps_fg[1] = pipe.m_flows[2] * pipe.flowModel.dp_nominal / pipe.flowModel.m_flow_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) = DIVISION_SIM(((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */)) * ((data->simulationInfo->realParameter[116] /* pipe.flowModel.dp_nominal PARAM */)),(data->simulationInfo->realParameter[119] /* pipe.flowModel.m_flow_nominal PARAM */),"pipe.flowModel.m_flow_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
pipe.flowModel.Fs_p[1] = 0.5 * (-pipe.flowModel.dps_fg[1]) * (pipe.crossAreas[1] + pipe.crossAreas[2]) * pipe.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  (data->localData[0]->realVars[189] /* pipe.flowModel.Fs_p[1] variable */) = (0.5) * (((-(data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */))) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * ((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */))));
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
pipe.m_flows[1] = pipe.m_flows[2] + pipe.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) = (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) + (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 416
type: SIMPLE_ASSIGN
heater.flowModel.dps_fg[2] = pipe.m_flows[1] * heater.flowModel.dp_nominal / heater.flowModel.m_flow_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */) = DIVISION_SIM(((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */)) * ((data->simulationInfo->realParameter[56] /* heater.flowModel.dp_nominal PARAM */)),(data->simulationInfo->realParameter[59] /* heater.flowModel.m_flow_nominal PARAM */),"heater.flowModel.m_flow_nominal",equationIndexes);
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
heater.flowModel.Fs_p[2] = (-heater.flowModel.dps_fg[2]) * heater.flowModel.nParallel * heater.crossAreas[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  (data->localData[0]->realVars[139] /* heater.flowModel.Fs_p[2] variable */) = ((-(data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */))) * (((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)));
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
tank.portVelocities[1] = smooth(0, radiator.m_flows[2] / (tank.portAreas[1] * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h, 0, 0).rho))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[346] /* tank.portVelocities[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */)) * (omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (tmp0?(data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)), ((modelica_integer) 0), ((modelica_integer) 0))._rho),"tank.portAreas[1] * Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h, 0, 0).rho",equationIndexes);
  TRACE_POP
}
/*
equation index: 419
type: SIMPLE_ASSIGN
radiator.H_flows[2] = semiLinear(radiator.m_flows[2], radiator.mediums[1].h, tank.medium.h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  (data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */));
  TRACE_POP
}
/*
equation index: 420
type: SIMPLE_ASSIGN
tank.ports_H_flow[1] = smooth(0, radiator.m_flows[2] * (if radiator.m_flows[2] > 0.0 then radiator.mediums[1].h else tank.medium.h))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  modelica_boolean tmp0;
  tmp0 = Greater((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),0.0);
  (data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */) = ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((tmp0?(data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)));
  TRACE_POP
}
/*
equation index: 421
type: SIMPLE_ASSIGN
tank.portInDensities[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(tank.vessel_ps_static[1], radiator.mediums[1].h, 0, 0).rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  (data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */) = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
equation index: 422
type: SIMPLE_ASSIGN
tank.ports_E_flow[1] = radiator.m_flows[2] * (0.5 * tank.portVelocities[1] ^ 2.0 + system.g * tank.portsData[1].height)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[346] /* tank.portVelocities[1] variable */);
  (data->localData[0]->realVars[349] /* tank.ports_E_flow[1] variable */) = ((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)) * ((0.5) * ((tmp0 * tmp0)) + ((data->simulationInfo->realParameter[246] /* system.g PARAM */)) * ((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */)));
  TRACE_POP
}
/*
equation index: 423
type: SIMPLE_ASSIGN
tank.Hb_flow = tank.ports_H_flow[1] + tank.ports_H_flow[2] + tank.ports_E_flow[1] + tank.ports_E_flow[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  (data->localData[0]->realVars[324] /* tank.Hb_flow variable */) = (data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */) + (data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */) + (data->localData[0]->realVars[349] /* tank.ports_E_flow[1] variable */) + (data->localData[0]->realVars[350] /* tank.ports_E_flow[2] variable */);
  TRACE_POP
}
/*
equation index: 424
type: SIMPLE_ASSIGN
tank.Wb_flow = $DER.tank.U - (tank.Hb_flow + tank.Qb_flow)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  (data->localData[0]->realVars[328] /* tank.Wb_flow variable */) = (data->localData[0]->realVars[40] /* der(tank.U) DUMMY_DER */) - ((data->localData[0]->realVars[324] /* tank.Hb_flow variable */) + (data->localData[0]->realVars[325] /* tank.Qb_flow variable */));
  TRACE_POP
}
/*
equation index: 425
type: SIMPLE_ASSIGN
$DER.tank.V = (-tank.Wb_flow) / tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  (data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */) = DIVISION_SIM((-(data->localData[0]->realVars[328] /* tank.Wb_flow variable */)),(data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),"tank.p_ambient",equationIndexes);
  TRACE_POP
}
/*
equation index: 426
type: SIMPLE_ASSIGN
radiator.H_flows[1] = semiLinear(radiator.m_flows[1], pipe.mediums[2].h, radiator.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  (data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */) = semiLinear((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 427
type: SIMPLE_ASSIGN
pipe.H_flows[3] = semiLinear(radiator.m_flows[1], pipe.mediums[2].h, pipe.mediums[2].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  (data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */) = semiLinear((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 428
type: SIMPLE_ASSIGN
radiator.Hb_flows[1] = radiator.H_flows[1] - radiator.H_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  (data->localData[0]->realVars[267] /* radiator.Hb_flows[1] variable */) = (data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */) - (data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
pipe.mediums[2].T = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[2].p) - pipe.mediums[2].h / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */) = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) - (DIVISION_SIM((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
pipe.mediums[2].d = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pipe.mediums[2].p) + 0.0002571314017648316 * (298.15 - pipe.mediums[2].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  (data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */)));
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
pipe.vs[2] = 0.5 * (pipe.m_flows[2] + radiator.m_flows[1]) / (pipe.nParallel * pipe.crossAreas[2] * pipe.mediums[2].d)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  (data->localData[0]->realVars[238] /* pipe.vs[2] variable */) = (0.5) * (DIVISION_SIM((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */) + (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),(((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)) * ((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */))) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */)),"pipe.nParallel * pipe.crossAreas[2] * pipe.mediums[2].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].u = $DER.pipe.mediums[2].h + (pipe.mediums[2].p * $DER.pipe.mediums[2].d - $DER.pipe.mediums[2].p * pipe.mediums[2].d) / pipe.mediums[2].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */);
  (data->localData[0]->realVars[32] /* der(pipe.mediums[2].u) DUMMY_DER */) = (data->localData[0]->realVars[30] /* der(pipe.mediums[2].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */)) * ((data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */)) - (((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */)) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */))),(tmp0 * tmp0),"pipe.mediums[2].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
pipe.mediums[2].u = pipe.mediums[2].h - pipe.mediums[2].p / pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  (data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */) = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */),(data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */),"pipe.mediums[2].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
pipe.ms[2] = pipe.fluidVolumes[2] * pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  (data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */) = ((data->localData[0]->realVars[203] /* pipe.fluidVolumes[2] variable */)) * ((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
$DER.pipe.Us[2] = pipe.ms[2] * $DER.pipe.mediums[2].u + pipe.mb_flows[2] * pipe.mediums[2].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  (data->localData[0]->realVars[26] /* der(pipe.Us[2]) DUMMY_DER */) = ((data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */)) * ((data->localData[0]->realVars[32] /* der(pipe.mediums[2].u) DUMMY_DER */)) + ((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */)) * ((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 436
type: SIMPLE_ASSIGN
pipe.Wb_flows[2] = 0.5 * pipe.vs[2] * pipe.crossAreas[2] * (pipe.mediums[2].p + pipe.flowModel.dps_fg[1] - pipe.mediums[1].p) * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,436};
  (data->localData[0]->realVars[187] /* pipe.Wb_flows[2] variable */) = (0.5) * (((data->localData[0]->realVars[238] /* pipe.vs[2] variable */)) * (((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * (((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) + (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) - (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)))));
  TRACE_POP
}
/*
equation index: 437
type: SIMPLE_ASSIGN
pipe.Hb_flows[2] = $DER.pipe.Us[2] - pipe.Wb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  (data->localData[0]->realVars[183] /* pipe.Hb_flows[2] variable */) = (data->localData[0]->realVars[26] /* der(pipe.Us[2]) DUMMY_DER */) - (data->localData[0]->realVars[187] /* pipe.Wb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 438
type: SIMPLE_ASSIGN
pipe.H_flows[2] = pipe.H_flows[3] + pipe.Hb_flows[2]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */) = (data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */) + (data->localData[0]->realVars[183] /* pipe.Hb_flows[2] variable */);
  TRACE_POP
}
/*
equation index: 439
type: SIMPLE_ASSIGN
pipe.vs[1] = 0.5 * (pipe.m_flows[1] + pipe.m_flows[2]) / (pipe.mediums[1].d * pipe.crossAreas[1] * pipe.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  (data->localData[0]->realVars[237] /* pipe.vs[1] variable */) = DIVISION_SIM((0.5) * ((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */) + (data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */)),(((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)),"pipe.mediums[1].d * pipe.crossAreas[1] * pipe.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 440
type: SIMPLE_ASSIGN
pipe.Wb_flows[1] = 0.5 * pipe.vs[1] * pipe.crossAreas[1] * (pipe.mediums[2].p + pipe.flowModel.dps_fg[1] - pipe.mediums[1].p) * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  (data->localData[0]->realVars[186] /* pipe.Wb_flows[1] variable */) = (0.5) * (((data->localData[0]->realVars[237] /* pipe.vs[1] variable */)) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) + (data->localData[0]->realVars[195] /* pipe.flowModel.dps_fg[1] variable */) - (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */)))));
  TRACE_POP
}
/*
equation index: 441
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].u = $DER.pipe.mediums[1].h + (pipe.mediums[1].p * $DER.pipe.mediums[1].d - $DER.pipe.mediums[1].p * pipe.mediums[1].d) / pipe.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[31] /* der(pipe.mediums[1].u) DUMMY_DER */) = (data->localData[0]->realVars[29] /* der(pipe.mediums[1].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"pipe.mediums[1].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 442
type: SIMPLE_ASSIGN
pipe.mediums[1].T = 3889.062141521651 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pipe.mediums[1].p) + 0.07666372743618453) - pipe.mediums[1].d / 0.2563723580877598
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */) = (3889.062141521651) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */)) + 0.07666372743618453) - (DIVISION_SIM((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),0.2563723580877598,"0.2563723580877598",equationIndexes));
  TRACE_POP
}
/*
equation index: 443
type: SIMPLE_ASSIGN
pipe.ms[1] = pipe.fluidVolumes[1] * pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  (data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[202] /* pipe.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 444
type: SIMPLE_ASSIGN
pipe.mediums[1].h = 104929.294642565 + 4181.885502948851 * (-298.15 + pipe.mediums[1].T) + 0.0009260700016004721 * (-101325.0 + pipe.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */)) + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 445
type: SIMPLE_ASSIGN
pipe.mediums[1].u = pipe.mediums[1].h - pipe.mediums[1].p / pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  (data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */),(data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),"pipe.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 446
type: SIMPLE_ASSIGN
$DER.pipe.Us[1] = pipe.ms[1] * $DER.pipe.mediums[1].u + pipe.mb_flows[1] * pipe.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  (data->localData[0]->realVars[25] /* der(pipe.Us[1]) DUMMY_DER */) = ((data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[31] /* der(pipe.mediums[1].u) DUMMY_DER */)) + ((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */)) * ((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 447
type: SIMPLE_ASSIGN
heater.statesFM[3].T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[1].h + (-2.214479571349945e-07) * (-101325.0 + pipe.mediums[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */));
  TRACE_POP
}
/*
equation index: 448
type: SIMPLE_ASSIGN
pipe.Hb_flows[1] = $DER.pipe.Us[1] - pipe.Wb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  (data->localData[0]->realVars[182] /* pipe.Hb_flows[1] variable */) = (data->localData[0]->realVars[25] /* der(pipe.Us[1]) DUMMY_DER */) - (data->localData[0]->realVars[186] /* pipe.Wb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 449
type: SIMPLE_ASSIGN
pipe.H_flows[1] = pipe.H_flows[2] + pipe.Hb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  (data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */) = (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */) + (data->localData[0]->realVars[182] /* pipe.Hb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 450
type: SIMPLE_ASSIGN
heater.H_flows[2] = semiLinear(pipe.m_flows[1], heater.mediums[1].h, pipe.mediums[1].h)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  (data->localData[0]->realVars[131] /* heater.H_flows[2] variable */) = semiLinear((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 451
type: SIMPLE_ASSIGN
radiator.statesFM[3].T = 273.058616085119 + 0.0002391265851958049 * tank.medium.h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[3].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */));
  TRACE_POP
}
/*
equation index: 452
type: SIMPLE_ASSIGN
radiator.vs[1] = 0.5 * (radiator.m_flows[1] + radiator.m_flows[2]) / (radiator.mediums[1].d * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  (data->localData[0]->realVars[318] /* radiator.vs[1] variable */) = DIVISION_SIM((0.5) * ((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) + (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)),(((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"radiator.mediums[1].d * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}
/*
equation index: 453
type: SIMPLE_ASSIGN
radiator.ms[1] = radiator.fluidVolumes[1] * radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  (data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[296] /* radiator.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 454
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].u = $DER.radiator.mediums[1].h + (radiator.mediums[1].p * $DER.radiator.mediums[1].d - $DER.radiator.mediums[1].p * radiator.mediums[1].d) / radiator.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[38] /* der(radiator.mediums[1].u) DUMMY_DER */) = (data->localData[0]->realVars[37] /* der(radiator.mediums[1].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"radiator.mediums[1].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 455
type: SIMPLE_ASSIGN
radiator.mediums[1].u = radiator.mediums[1].h - radiator.mediums[1].p / radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  (data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */),(data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),"radiator.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 456
type: SIMPLE_ASSIGN
$DER.radiator.Us[1] = radiator.ms[1] * $DER.radiator.mediums[1].u + radiator.mb_flows[1] * radiator.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  (data->localData[0]->realVars[35] /* der(radiator.Us[1]) DUMMY_DER */) = ((data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[38] /* der(radiator.mediums[1].u) DUMMY_DER */)) + ((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */)) * ((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 457
type: SIMPLE_ASSIGN
radiator.mediums[1].T = 3889.062141521651 * (1.0 + 4.515426036491987e-10 * (-101325.0 + radiator.mediums[1].p) + 0.07666372743618453) - radiator.mediums[1].d / 0.2563723580877598
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */) = (3889.062141521651) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) + 0.07666372743618453) - (DIVISION_SIM((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),0.2563723580877598,"0.2563723580877598",equationIndexes));
  TRACE_POP
}
/*
equation index: 458
type: SIMPLE_ASSIGN
radiator.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.radiator.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.radiator.heatTransfer.Medium.ThermodynamicState(radiator.mediums[1].p, radiator.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 459
type: SIMPLE_ASSIGN
wall.dT = T_ambient.T - radiator.heatTransfer.Ts[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  (data->localData[0]->realVars[368] /* wall.dT variable */) = (data->simulationInfo->realParameter[24] /* T_ambient.T PARAM */) - (data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */);
  TRACE_POP
}
/*
equation index: 460
type: SIMPLE_ASSIGN
radiator.Qb_flows[1] = wall.G * wall.dT
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  (data->localData[0]->realVars[268] /* radiator.Qb_flows[1] variable */) = ((data->simulationInfo->realParameter[313] /* wall.G PARAM */)) * ((data->localData[0]->realVars[368] /* wall.dT variable */));
  TRACE_POP
}
/*
equation index: 461
type: SIMPLE_ASSIGN
radiator.Wb_flows[1] = $DER.radiator.Us[1] - (radiator.Hb_flows[1] + radiator.Qb_flows[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  (data->localData[0]->realVars[270] /* radiator.Wb_flows[1] variable */) = (data->localData[0]->realVars[35] /* der(radiator.Us[1]) DUMMY_DER */) - ((data->localData[0]->realVars[267] /* radiator.Hb_flows[1] variable */) + (data->localData[0]->realVars[268] /* radiator.Qb_flows[1] variable */));
  TRACE_POP
}
/*
equation index: 462
type: SIMPLE_ASSIGN
heater.vs[1] = 0.5 * (m_flow + pipe.m_flows[1]) / (heater.mediums[1].d * heater.crossAreas[1] * heater.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  (data->localData[0]->realVars[177] /* heater.vs[1] variable */) = (0.5) * (DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */) + (data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),(((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)),"heater.mediums[1].d * heater.crossAreas[1] * heater.nParallel",equationIndexes));
  TRACE_POP
}
/*
equation index: 463
type: SIMPLE_ASSIGN
heater.Wb_flows[1] = heater.vs[1] * heater.crossAreas[1] * (pipe.mediums[1].p + heater.flowModel.dps_fg[1] + heater.flowModel.dps_fg[2] - pump.p_b_nominal) * heater.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  (data->localData[0]->realVars[135] /* heater.Wb_flows[1] variable */) = ((data->localData[0]->realVars[177] /* heater.vs[1] variable */)) * (((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) + (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */) + (data->localData[0]->realVars[146] /* heater.flowModel.dps_fg[2] variable */) - (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */))));
  TRACE_POP
}
/*
equation index: 464
type: SIMPLE_ASSIGN
heater.ms[1] = heater.fluidVolumes[1] * heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  (data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */) = ((data->localData[0]->realVars[159] /* heater.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 465
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].u = $DER.heater.mediums[1].h + (heater.mediums[1].p * $DER.heater.mediums[1].d - $DER.heater.mediums[1].p * heater.mediums[1].d) / heater.mediums[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[23] /* der(heater.mediums[1].u) DUMMY_DER */) = (data->localData[0]->realVars[22] /* der(heater.mediums[1].h) DUMMY_DER */) + DIVISION_SIM(((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) * ((data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */)) - (((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */)) * ((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */))),(tmp0 * tmp0),"heater.mediums[1].d ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 466
type: SIMPLE_ASSIGN
heater.mediums[1].u = heater.mediums[1].h - heater.mediums[1].p / heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  (data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */) = (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) - (DIVISION_SIM((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */),(data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),"heater.mediums[1].d",equationIndexes));
  TRACE_POP
}
/*
equation index: 467
type: SIMPLE_ASSIGN
$DER.heater.Us[1] = heater.ms[1] * $DER.heater.mediums[1].u + heater.mb_flows[1] * heater.mediums[1].u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  (data->localData[0]->realVars[20] /* der(heater.Us[1]) DUMMY_DER */) = ((data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */)) * ((data->localData[0]->realVars[23] /* der(heater.mediums[1].u) DUMMY_DER */)) + ((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */)) * ((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 468
type: SIMPLE_ASSIGN
heater.mediums[1].T = 3889.062141521651 * (1.0 + 4.515426036491987e-10 * (-101325.0 + heater.mediums[1].p) + 0.07666372743618453) - heater.mediums[1].d / 0.2563723580877598
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */) = (3889.062141521651) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) + 0.07666372743618453) - (DIVISION_SIM((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),0.2563723580877598,"0.2563723580877598",equationIndexes));
  TRACE_POP
}
/*
equation index: 469
type: SIMPLE_ASSIGN
heater.heatTransfer.Ts[1] = Modelica.Fluid.Examples.HeatingSystem.heater.heatTransfer.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.heater.heatTransfer.Medium.ThermodynamicState(heater.mediums[1].p, heater.mediums[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  (data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 470
type: SIMPLE_ASSIGN
heater.Qb_flows[1] = burner.Q_flow * (1.0 + burner.alpha * (heater.heatTransfer.Ts[1] - burner.T_ref))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  (data->localData[0]->realVars[133] /* heater.Qb_flows[1] variable */) = ((data->simulationInfo->realParameter[26] /* burner.Q_flow PARAM */)) * (1.0 + ((data->simulationInfo->realParameter[28] /* burner.alpha PARAM */)) * ((data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */) - (data->simulationInfo->realParameter[27] /* burner.T_ref PARAM */)));
  TRACE_POP
}
/*
equation index: 471
type: SIMPLE_ASSIGN
heater.Hb_flows[1] = $DER.heater.Us[1] - (heater.Wb_flows[1] + heater.Qb_flows[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  (data->localData[0]->realVars[132] /* heater.Hb_flows[1] variable */) = (data->localData[0]->realVars[20] /* der(heater.Us[1]) DUMMY_DER */) - ((data->localData[0]->realVars[135] /* heater.Wb_flows[1] variable */) + (data->localData[0]->realVars[133] /* heater.Qb_flows[1] variable */));
  TRACE_POP
}
/*
equation index: 472
type: SIMPLE_ASSIGN
heater.H_flows[1] = heater.H_flows[2] + heater.Hb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  (data->localData[0]->realVars[130] /* heater.H_flows[1] variable */) = (data->localData[0]->realVars[131] /* heater.H_flows[2] variable */) + (data->localData[0]->realVars[132] /* heater.Hb_flows[1] variable */);
  TRACE_POP
}
/*
equation index: 473
type: SIMPLE_ASSIGN
radiator.statesFM[1].T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[2].h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */));
  TRACE_POP
}
/*
equation index: 474
type: SIMPLE_ASSIGN
valve.dp = pipe.mediums[2].p - radiator.statesFM[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  (data->localData[0]->realVars[361] /* valve.dp variable */) = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) - (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  TRACE_POP
}
/*
equation index: 475
type: SIMPLE_ASSIGN
pump.Hb_flow = smooth(0, m_flow * (if m_flow > 0.0 then tank.medium.h else sensor_m_flow.port_b.h_outflow)) + smooth(0, (-m_flow) * (if (-m_flow) > 0.0 then heater.mediums[1].h else sensor_m_flow.port_b.h_outflow))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[178] /* m_flow variable */),0.0);
  tmp1 = Greater((-(data->localData[0]->realVars[178] /* m_flow variable */)),0.0);
  (data->localData[0]->realVars[239] /* pump.Hb_flow variable */) = ((data->localData[0]->realVars[178] /* m_flow variable */)) * ((tmp0?(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */):(data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */))) + ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((tmp1?(data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */)));
  TRACE_POP
}
/*
equation index: 476
type: SIMPLE_ASSIGN
pump.W_single = (-pump.Hb_flow) / (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  (data->localData[0]->realVars[244] /* pump.W_single variable */) = DIVISION_SIM((-(data->localData[0]->realVars[239] /* pump.Hb_flow variable */)),((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)),"/*Real*/(pump.nParallel)",equationIndexes);
  TRACE_POP
}
/*
equation index: 477
type: SIMPLE_ASSIGN
heater.statesFM[1].T = 273.058616085119 + 0.0002391265851958049 * sensor_m_flow.port_b.h_outflow + (-2.214479571349945e-07) * (-101325.0 + pump.p_b_nominal)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */)) + (-2.214479571349945e-07) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */));
  TRACE_POP
}
/*
equation index: 478
type: SIMPLE_ASSIGN
pump.dp_pump = pump.p_b_nominal - tank.ports[2].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  (data->localData[0]->realVars[245] /* pump.dp_pump variable */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */) - (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  TRACE_POP
}
/*
equation index: 479
type: SIMPLE_ASSIGN
tank.inFlow[2] = not tank.regularFlow[2] and (tank.s[2] > 0.0 or tank.portsData[2].height >= tank.fluidLevel_max)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[356] /* tank.s[2] variable */),0.0);
  tmp1 = GreaterEq((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  (data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */) = ((!(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)) && (tmp0 || tmp1));
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
tank.inFlow[1] = not tank.regularFlow[1] and (tank.s[1] > 0.0 or tank.portsData[1].height >= tank.fluidLevel_max)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[355] /* tank.s[1] variable */),0.0);
  tmp1 = GreaterEq((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  (data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */) = ((!(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc499(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,499};
  int i,j;
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp1;
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp2;
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp3;
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp4;
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp5;
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp6;
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp7;
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp8;
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  /* iteration variables */
  for (i=0; i<18; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc499: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<18; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc499 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[355] /* tank.s[1] variable */) = xloc[0];
  (data->localData[0]->realVars[356] /* tank.s[2] variable */) = xloc[1];
  (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = xloc[2];
  (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) = xloc[3];
  (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */) = xloc[4];
  (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */) = xloc[5];
  (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */) = xloc[6];
  (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */) = xloc[7];
  (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */) = xloc[8];
  (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) = xloc[9];
  (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) = xloc[10];
  (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */) = xloc[11];
  (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) = xloc[12];
  (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) = xloc[13];
  (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) = xloc[14];
  (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) = xloc[15];
  (data->localData[0]->realVars[178] /* m_flow variable */) = xloc[16];
  (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) = xloc[17];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_389(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_390(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_391(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_392(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_393(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_394(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_395(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_396(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_397(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_398(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_399(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_400(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_401(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_402(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_403(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_404(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_405(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_406(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_407(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_408(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_409(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_410(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_411(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_412(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_413(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_414(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_415(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_416(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_417(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_418(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_419(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_420(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_421(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_422(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_423(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_424(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_425(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_426(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_427(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_428(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_429(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_430(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_431(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_432(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_433(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_434(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_435(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_436(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_437(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_438(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_439(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_440(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_441(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_442(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_443(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_444(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_445(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_446(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_447(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_448(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_449(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_450(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_451(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_452(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_453(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_454(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_455(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_456(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_457(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_458(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_459(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_460(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_461(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_462(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_463(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_464(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_465(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_466(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_467(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_468(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_469(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_470(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_471(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_472(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_473(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_474(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_475(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_476(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_477(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_478(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_479(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_480(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->realVars[365] /* valve.relativeFlowCoefficient variable */)) * (((data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */)) * ((data->localData[0]->realVars[361] /* valve.dp variable */))) - (((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */)) * ((data->simulationInfo->realParameter[301] /* valve.dp_nominal PARAM */)));

  res[1] = 104929.294642565 + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */)) + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */)) - (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */);

  res[2] = semiLinear((data->localData[0]->realVars[178] /* m_flow variable */), (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */)) - (data->localData[0]->realVars[130] /* heater.H_flows[1] variable */);

  tmp0._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp0._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  tmp1._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp1._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  res[3] = ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp0) - omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp1)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */))) - (data->localData[0]->realVars[138] /* heater.flowModel.Fs_p[1] variable */);

  tmp2._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp2._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  tmp3._p = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  tmp3._T = (data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */);
  res[4] = ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp2) - omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp3)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */))) - (data->localData[0]->realVars[139] /* heater.flowModel.Fs_p[2] variable */);

  tmp4._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp4._T = (data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */);
  tmp5._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp5._T = (data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */);
  res[5] = (0.5) * (((data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */)) * (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * (omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp4) - omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp5)))) - (data->localData[0]->realVars[189] /* pipe.flowModel.Fs_p[1] variable */);

  res[6] = ((data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)?(data->localData[0]->realVars[355] /* tank.s[1] variable */) - ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */)):((data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */)?(data->localData[0]->realVars[355] /* tank.s[1] variable */) - (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */):(data->localData[0]->realVars[355] /* tank.s[1] variable */) - ((9.869232667160129e-06) * (((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */)) * ((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */) - (data->localData[0]->realVars[8] /* tank.level STATE(1) */))))));

  res[7] = 104929.294642565 + (0.0009260700016004721) * (-101325.0 + (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */)) + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */)) - (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */);

  tmp6._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp6._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  tmp7._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp7._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  res[8] = ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp6) - omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp7)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */))) - (data->localData[0]->realVars[273] /* radiator.flowModel.Fs_p[1] variable */);

  tmp8._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp8._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  tmp9._p = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  tmp9._T = (data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */);
  res[9] = ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * ((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp8) - omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp9)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */))) - (data->localData[0]->realVars[274] /* radiator.flowModel.Fs_p[2] variable */);

  tmp12 = (modelica_boolean)(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */);
  if(tmp12)
  {
    tmp10 = DIVISION_SIM((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp11 = DIVISION_SIM((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp13 = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - ((data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */) + (0.5) * ((real_int_pow(threadData, (data->localData[0]->realVars[342] /* tank.portAreas[1] variable */), -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (DIVISION_SIM((data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */) - 1.0 + (tmp10 * tmp10),(data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */),"tank.portInDensities[1]",equationIndexes)) * ((data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */)), DIVISION_SIM((data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */) + 1.0 - ((tmp11 * tmp11)),((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) * ((data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */)),"tank.heatTransfer.states[1].d * tank.ports_penetration[1]",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp13 = ((data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */)?(data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */):(data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */));
  }
  res[10] = tmp13;

  res[11] = ((data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) + ((data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */)) * ((data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */)) - (data->localData[0]->realVars[334] /* tank.mb_flow variable */);

  res[12] = ((data->localData[0]->realVars[318] /* radiator.vs[1] variable */)) * (((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) + (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */) + (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */) - (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */)) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)))) - (data->localData[0]->realVars[270] /* radiator.Wb_flows[1] variable */);

  res[13] = semiLinear((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) - (data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */);

  res[14] = semiLinear((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */)) - (data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */);

  res[15] = ((data->localData[0]->realVars[245] /* pump.dp_pump variable */)) * ((data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)) - (((data->localData[0]->realVars[244] /* pump.W_single variable */)) * ((data->localData[0]->realVars[246] /* pump.eta variable */)));

  tmp16 = (modelica_boolean)(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */);
  if(tmp16)
  {
    tmp14 = DIVISION_SIM((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp15 = DIVISION_SIM((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp17 = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - ((data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */) + (0.5) * ((real_int_pow(threadData, (data->localData[0]->realVars[343] /* tank.portAreas[2] variable */), -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (-(data->localData[0]->realVars[178] /* m_flow variable */)), (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (DIVISION_SIM((data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */) - 1.0 + (tmp14 * tmp14),(data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */),"tank.portInDensities[2]",equationIndexes)) * ((data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */)), DIVISION_SIM((data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */) + 1.0 - ((tmp15 * tmp15)),((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) * ((data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */)),"tank.heatTransfer.states[1].d * tank.ports_penetration[2]",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp17 = ((data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */)?(data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */):(-(data->localData[0]->realVars[178] /* m_flow variable */)));
  }
  res[16] = tmp17;

  res[17] = ((data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)?(data->localData[0]->realVars[356] /* tank.s[2] variable */) - ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */)):((data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */)?(data->localData[0]->realVars[356] /* tank.s[2] variable */) + (data->localData[0]->realVars[178] /* m_flow variable */):(data->localData[0]->realVars[356] /* tank.s[2] variable */) - ((9.869232667160129e-06) * (((data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */)) * ((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */) - (data->localData[0]->realVars[8] /* tank.level STATE(1) */))))));
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS499(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+18] = {0,2,2,3,3,3,4,4,4,4,4,4,5,5,4,5,4,16,8};
  const int rowIndex[84] = {6,10,16,17,15,16,17,2,3,15,0,8,12,1,2,3,4,1,2,3,4,7,8,9,12,7,8,9,12,6,9,10,12,1,2,14,15,2,4,5,13,14,2,4,5,13,14,0,5,13,14,5,8,12,13,14,7,10,11,12,0,2,3,4,5,6,8,9,10,11,12,13,14,15,16,17,6,9,10,11,12,15,16,17};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(18, 84, 8);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (18+1)*sizeof(unsigned int));
  
  for(i=2;i<18+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 84*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {16};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {14};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 2 columns */
  const int indices_3[2] = {12, 17};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 2 columns */
  const int indices_4[2] = {11, 15};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
  
  /* color 5 with 2 columns */
  const int indices_5[2] = {9, 10};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_5[i]] = 5;
  
  /* color 6 with 2 columns */
  const int indices_6[2] = {6, 8};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_6[i]] = 6;
  
  /* color 7 with 4 columns */
  const int indices_7[4] = {2, 5, 7, 13};
  for(i=0; i<4; i++)
    inSysData->sparsePattern->colorCols[indices_7[i]] = 7;
  
  /* color 8 with 4 columns */
  const int indices_8[4] = {0, 1, 3, 4};
  for(i=0; i<4; i++)
    inSysData->sparsePattern->colorCols[indices_8[i]] = 8;
}
void initializeNonlinearPatternNLS499(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS499(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for tank.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[355].attribute /* tank.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[355].attribute /* tank.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[355].attribute /* tank.s[1] */.max;
  /* static nls data for tank.s[2] */
  sysData->nominal[i] = data->modelData->realVarsData[356].attribute /* tank.s[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[356].attribute /* tank.s[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[356].attribute /* tank.s[2] */.max;
  /* static nls data for tank.ports[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.max;
  /* static nls data for sensor_m_flow.port_b.h_outflow */
  sysData->nominal[i] = data->modelData->realVarsData[323].attribute /* sensor_m_flow.port_b.h_outflow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[323].attribute /* sensor_m_flow.port_b.h_outflow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[323].attribute /* sensor_m_flow.port_b.h_outflow */.max;
  /* static nls data for radiator.statesFM[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.max;
  /* static nls data for heater.mediums[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[1].attribute /* heater.mediums[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[1].attribute /* heater.mediums[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[1].attribute /* heater.mediums[1].p */.max;
  /* static nls data for heater.mediums[1].d */
  sysData->nominal[i] = data->modelData->realVarsData[168].attribute /* heater.mediums[1].d */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[168].attribute /* heater.mediums[1].d */.min;
  sysData->max[i++]   = data->modelData->realVarsData[168].attribute /* heater.mediums[1].d */.max;
  /* static nls data for radiator.mediums[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[7].attribute /* radiator.mediums[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[7].attribute /* radiator.mediums[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[7].attribute /* radiator.mediums[1].p */.max;
  /* static nls data for radiator.mediums[1].d */
  sysData->nominal[i] = data->modelData->realVarsData[307].attribute /* radiator.mediums[1].d */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[307].attribute /* radiator.mediums[1].d */.min;
  sysData->max[i++]   = data->modelData->realVarsData[307].attribute /* radiator.mediums[1].d */.max;
  /* static nls data for radiator.statesFM[3].p */
  sysData->nominal[i] = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.max;
  /* static nls data for heater.mediums[1].h */
  sysData->nominal[i] = data->modelData->realVarsData[169].attribute /* heater.mediums[1].h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[169].attribute /* heater.mediums[1].h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[169].attribute /* heater.mediums[1].h */.max;
  /* static nls data for pipe.mediums[1].d */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* pipe.mediums[1].d */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* pipe.mediums[1].d */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* pipe.mediums[1].d */.max;
  /* static nls data for pipe.mediums[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[4].attribute /* pipe.mediums[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[4].attribute /* pipe.mediums[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[4].attribute /* pipe.mediums[1].p */.max;
  /* static nls data for pipe.mediums[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[5].attribute /* pipe.mediums[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[5].attribute /* pipe.mediums[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[5].attribute /* pipe.mediums[2].p */.max;
  /* static nls data for pipe.mediums[2].h */
  sysData->nominal[i] = data->modelData->realVarsData[227].attribute /* pipe.mediums[2].h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[227].attribute /* pipe.mediums[2].h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[227].attribute /* pipe.mediums[2].h */.max;
  /* static nls data for radiator.mediums[1].h */
  sysData->nominal[i] = data->modelData->realVarsData[308].attribute /* radiator.mediums[1].h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[308].attribute /* radiator.mediums[1].h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[308].attribute /* radiator.mediums[1].h */.max;
  /* static nls data for m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* m_flow */.max;
  /* static nls data for tank.medium.h */
  sysData->nominal[i] = data->modelData->realVarsData[9].attribute /* tank.medium.h */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[9].attribute /* tank.medium.h */.min;
  sysData->max[i++]   = data->modelData->realVarsData[9].attribute /* tank.medium.h */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS499(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS499(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS499(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[355] /* tank.s[1] variable */);
  array[1] = (data->localData[0]->realVars[356] /* tank.s[2] variable */);
  array[2] = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  array[3] = (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */);
  array[4] = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  array[5] = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  array[6] = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  array[7] = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  array[8] = (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */);
  array[9] = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  array[10] = (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */);
  array[11] = (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */);
  array[12] = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  array[13] = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  array[14] = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */);
  array[15] = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */);
  array[16] = (data->localData[0]->realVars[178] /* m_flow variable */);
  array[17] = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */);
}


/* inner equations */

/*
equation index: 681
type: SIMPLE_ASSIGN
pump.eta = Modelica.Fluid.Examples.HeatingSystem.pump.efficiencyCharacteristic(pump.V_flow_single * pump.N_nominal / pump.N, 0.8)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  (data->localData[0]->realVars[246] /* pump.eta variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData, ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) * (DIVISION_SIM((data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */),(data->localData[0]->realVars[240] /* pump.N variable */),"pump.N",equationIndexes)), 0.8);
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
$cse34 = Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single * pump.N_nominal / pump.N, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0})
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  real_array tmp0;
  real_array tmp1;
  array_alloc_scalar_real_array(&tmp0, 3, (modelica_real)0.0, (modelica_real)(data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */), (modelica_real)(1.5) * ((data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */)));
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(2.0) * ((data->simulationInfo->realParameter[162] /* pump.head_op PARAM */)), (modelica_real)(data->simulationInfo->realParameter[162] /* pump.head_op PARAM */), (modelica_real)0.0);
  (data->localData[0]->realVars[75] /* $cse34 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, DIVISION_SIM(((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) * ((data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */)),(data->localData[0]->realVars[240] /* pump.N variable */),"pump.N",equationIndexes), tmp0, tmp1);
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
pump.head = (pump.N / pump.N_nominal) ^ 2.0 * $cse34
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  modelica_real tmp0;
  tmp0 = DIVISION_SIM((data->localData[0]->realVars[240] /* pump.N variable */),(data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */),"pump.N_nominal",equationIndexes);
  (data->localData[0]->realVars[248] /* pump.head variable */) = ((tmp0 * tmp0)) * ((data->localData[0]->realVars[75] /* $cse34 variable */));
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
pump.V_flow = pump.V_flow_single * (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  (data->localData[0]->realVars[242] /* pump.V_flow variable */) = ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) * (((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
m_flow = pump.V_flow * pump.rho
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  (data->localData[0]->realVars[178] /* m_flow variable */) = ((data->localData[0]->realVars[242] /* pump.V_flow variable */)) * ((data->localData[0]->realVars[263] /* pump.rho variable */));
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
pump.heatTransfer.states[1].T = 3889.062141521651 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pump.p_b_nominal) + 0.07666372743618453) - pump.rho / 0.2563723580877598
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */) = (3889.062141521651) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) + 0.07666372743618453) - (DIVISION_SIM((data->localData[0]->realVars[263] /* pump.rho variable */),0.2563723580877598,"0.2563723580877598",equationIndexes));
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
sensor_m_flow.port_b.h_outflow = 104929.294642565 + 4181.885502948851 * (-298.15 + pump.heatTransfer.states[1].T) + 0.0009260700016004721 * (-101325.0 + pump.p_b_nominal)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) = 104929.294642565 + (4181.885502948851) * (-298.15 + (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */)) + (0.0009260700016004721) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */));
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
pump.Hb_flow = smooth(0, m_flow * (if m_flow > 0.0 then tank.medium.h else sensor_m_flow.port_b.h_outflow)) + smooth(0, (-m_flow) * (if (-m_flow) > 0.0 then heater.mediums[1].h else sensor_m_flow.port_b.h_outflow))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater((data->localData[0]->realVars[178] /* m_flow variable */),0.0);
  tmp1 = Greater((-(data->localData[0]->realVars[178] /* m_flow variable */)),0.0);
  (data->localData[0]->realVars[239] /* pump.Hb_flow variable */) = ((data->localData[0]->realVars[178] /* m_flow variable */)) * ((tmp0?(data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */):(data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */))) + ((-(data->localData[0]->realVars[178] /* m_flow variable */))) * ((tmp1?(data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */):(data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */)));
  TRACE_POP
}
/*
equation index: 689
type: SIMPLE_ASSIGN
pump.W_single = (-pump.Hb_flow) / (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  (data->localData[0]->realVars[244] /* pump.W_single variable */) = DIVISION_SIM((-(data->localData[0]->realVars[239] /* pump.Hb_flow variable */)),((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)),"/*Real*/(pump.nParallel)",equationIndexes);
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
heater.statesFM[1].T = 273.058616085119 + 0.0002391265851958049 * sensor_m_flow.port_b.h_outflow + (-2.214479571349945e-07) * (-101325.0 + pump.p_b_nominal)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */)) + (-2.214479571349945e-07) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */));
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
$cse30 = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp0._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[71] /* $cse30 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
heater.flowModel.Fs_p[1] = heater.crossAreas[1] * ($cse29 - $cse30) * heater.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  (data->localData[0]->realVars[138] /* heater.flowModel.Fs_p[1] variable */) = ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[68] /* $cse29 variable */) - (data->localData[0]->realVars[71] /* $cse30 variable */)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
heater.flowModel.dps_fg[1] = (-heater.flowModel.Fs_p[1]) / (heater.flowModel.nParallel * heater.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[138] /* heater.flowModel.Fs_p[1] variable */)),((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)),"heater.flowModel.nParallel * heater.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
heater.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp0._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
$cse32 = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.WallFriction.massFlowRate_dp_staticHead(heater.flowModel.dps_fg[1], heater.flowModel.rhos[1], heater.flowModel.rhos[2], 0.0008899999999999999, 0.0008899999999999999, 1.0, heater.dimensions[1], 0.0, heater.crossAreas[1], heater.roughnesses[1], 0.5 * heater.flowModel.dp_small, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[73] /* $cse32 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[145] /* heater.flowModel.dps_fg[1] variable */), (data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */), (data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */), 0.0008899999999999999, 0.0008899999999999999, 1.0, (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[57] /* heater.flowModel.dp_small PARAM */)), 4000.0);
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
pump.dp_pump = pump.p_b_nominal - tank.ports[2].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[245] /* pump.dp_pump variable */) = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */) - (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  TRACE_POP
}
/*
equation index: 697
type: SIMPLE_ASSIGN
tank.inFlow[2] = not tank.regularFlow[2] and (tank.s[2] > 0.0 or tank.portsData[2].height >= tank.fluidLevel_max)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[356] /* tank.s[2] variable */), 0.0, 6, Greater, GreaterZC);
  tmp1 = GreaterEq((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  (data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */) = ((!(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc703(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,703};
  int i,j;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc703: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<5; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc703 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[356] /* tank.s[2] variable */) = xloc[0];
  (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = xloc[1];
  (data->localData[0]->realVars[263] /* pump.rho variable */) = xloc[2];
  (data->localData[0]->realVars[243] /* pump.V_flow_single variable */) = xloc[3];
  (data->localData[0]->realVars[240] /* pump.N variable */) = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_681(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_682(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_683(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_684(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_685(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_686(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_687(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_688(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_689(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_690(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_691(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_692(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_693(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_694(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_695(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_696(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_697(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)?(data->localData[0]->realVars[356] /* tank.s[2] variable */) - ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */)):((data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */)?(data->localData[0]->realVars[356] /* tank.s[2] variable */) + (data->localData[0]->realVars[178] /* m_flow variable */):(data->localData[0]->realVars[356] /* tank.s[2] variable */) - ((9.869232667160129e-06) * (((data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */)) * ((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */) - (data->localData[0]->realVars[8] /* tank.level STATE(1) */))))));

  tmp2 = (modelica_boolean)(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */);
  if(tmp2)
  {
    tmp0 = DIVISION_SIM((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp1 = DIVISION_SIM((data->localData[0]->realVars[343] /* tank.portAreas[2] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp3 = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - ((data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */) + (0.5) * ((real_int_pow(threadData, (data->localData[0]->realVars[343] /* tank.portAreas[2] variable */), -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (-(data->localData[0]->realVars[178] /* m_flow variable */)), (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (DIVISION_SIM((data->simulationInfo->realParameter[278] /* tank.portsData[2].zeta_in PARAM */) - 1.0 + (tmp0 * tmp0),(data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */),"tank.portInDensities[2]",equationIndexes)) * ((data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */)), DIVISION_SIM((data->simulationInfo->realParameter[280] /* tank.portsData[2].zeta_out PARAM */) + 1.0 - ((tmp1 * tmp1)),((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) * ((data->localData[0]->realVars[354] /* tank.ports_penetration[2] variable */)),"tank.heatTransfer.states[1].d * tank.ports_penetration[2]",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp3 = ((data->localData[0]->booleanVars[1] /* tank.inFlow[2] DISCRETE */)?(data->localData[0]->realVars[348] /* tank.ports[2].p variable */) - (data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */):(-(data->localData[0]->realVars[178] /* m_flow variable */)));
  }
  res[1] = tmp3;

  res[2] = (data->localData[0]->realVars[245] /* pump.dp_pump variable */) - (((data->localData[0]->realVars[248] /* pump.head variable */)) * (((data->localData[0]->realVars[263] /* pump.rho variable */)) * ((data->simulationInfo->realParameter[160] /* pump.g PARAM */))));

  res[3] = ((data->localData[0]->realVars[245] /* pump.dp_pump variable */)) * ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */)) - (((data->localData[0]->realVars[244] /* pump.W_single variable */)) * ((data->localData[0]->realVars[246] /* pump.eta variable */)));

  res[4] = ((data->localData[0]->realVars[73] /* $cse32 variable */)) * ((data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */)) - (data->localData[0]->realVars[178] /* m_flow variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS703(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,4,5,5,2};
  const int rowIndex[18] = {0,1,0,1,2,3,0,1,2,3,4,0,1,2,3,4,2,3};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(5, 18, 4);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (5+1)*sizeof(unsigned int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 18*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {3};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
  
  /* color 2 with 1 columns */
  const int indices_2[1] = {2};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_2[i]] = 2;
  
  /* color 3 with 1 columns */
  const int indices_3[1] = {1};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_3[i]] = 3;
  
  /* color 4 with 2 columns */
  const int indices_4[2] = {0, 4};
  for(i=0; i<2; i++)
    inSysData->sparsePattern->colorCols[indices_4[i]] = 4;
}
void initializeNonlinearPatternNLS703(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS703(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for tank.s[2] */
  sysData->nominal[i] = data->modelData->realVarsData[356].attribute /* tank.s[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[356].attribute /* tank.s[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[356].attribute /* tank.s[2] */.max;
  /* static nls data for tank.ports[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[348].attribute /* tank.ports[2].p */.max;
  /* static nls data for pump.rho */
  sysData->nominal[i] = data->modelData->realVarsData[263].attribute /* pump.rho */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[263].attribute /* pump.rho */.min;
  sysData->max[i++]   = data->modelData->realVarsData[263].attribute /* pump.rho */.max;
  /* static nls data for pump.V_flow_single */
  sysData->nominal[i] = data->modelData->realVarsData[243].attribute /* pump.V_flow_single */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[243].attribute /* pump.V_flow_single */.min;
  sysData->max[i++]   = data->modelData->realVarsData[243].attribute /* pump.V_flow_single */.max;
  /* static nls data for pump.N */
  sysData->nominal[i] = data->modelData->realVarsData[240].attribute /* pump.N */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[240].attribute /* pump.N */.min;
  sysData->max[i++]   = data->modelData->realVarsData[240].attribute /* pump.N */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS703(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS703(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS703(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[356] /* tank.s[2] variable */);
  array[1] = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  array[2] = (data->localData[0]->realVars[263] /* pump.rho variable */);
  array[3] = (data->localData[0]->realVars[243] /* pump.V_flow_single variable */);
  array[4] = (data->localData[0]->realVars[240] /* pump.N variable */);
}


/* inner equations */

/*
equation index: 724
type: SIMPLE_ASSIGN
radiator.statesFM[3].T = 273.058616085119 + 0.0002391265851958049 * tank.medium.h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[3].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */));
  TRACE_POP
}
/*
equation index: 725
type: SIMPLE_ASSIGN
$cse21 = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp0._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  (data->localData[0]->realVars[60] /* $cse21 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 726
type: SIMPLE_ASSIGN
radiator.flowModel.Fs_p[2] = radiator.crossAreas[1] * ($cse21 - $cse22) * radiator.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  (data->localData[0]->realVars[274] /* radiator.flowModel.Fs_p[2] variable */) = ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[60] /* $cse21 variable */) - (data->localData[0]->realVars[61] /* $cse22 variable */)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 727
type: SIMPLE_ASSIGN
radiator.flowModel.dps_fg[2] = (-radiator.flowModel.Fs_p[2]) / (radiator.flowModel.nParallel * radiator.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[274] /* radiator.flowModel.Fs_p[2] variable */)),((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)),"radiator.flowModel.nParallel * radiator.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 728
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[3] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp0._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  (data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 729
type: SIMPLE_ASSIGN
$cse24 = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.WallFriction.massFlowRate_dp_staticHead(radiator.flowModel.dps_fg[2], radiator.flowModel.rhos[2], radiator.flowModel.rhos[3], 0.0008899999999999999, 0.0008899999999999999, 5.0, radiator.dimensions[1], 0.0, radiator.crossAreas[1], radiator.roughnesses[1], 0.5 * radiator.flowModel.dp_small, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  (data->localData[0]->realVars[63] /* $cse24 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[283] /* radiator.flowModel.dps_fg[2] variable */), (data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */), (data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */), 0.0008899999999999999, 0.0008899999999999999, 5.0, (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[205] /* radiator.flowModel.dp_small PARAM */)), 4000.0);
  TRACE_POP
}
/*
equation index: 730
type: SIMPLE_ASSIGN
radiator.m_flows[2] = $cse24 * radiator.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */) = ((data->localData[0]->realVars[63] /* $cse24 variable */)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */));
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
tank.inFlow[1] = not tank.regularFlow[1] and (tank.s[1] > 0.0 or tank.portsData[1].height >= tank.fluidLevel_max)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[355] /* tank.s[1] variable */), 0.0, 4, Greater, GreaterZC);
  tmp1 = GreaterEq((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  (data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */) = ((!(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc734(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,734};
  int i,j;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc734: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc734 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[355] /* tank.s[1] variable */) = xloc[0];
  (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_724(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_725(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_726(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_727(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_728(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_729(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_730(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_731(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)?(data->localData[0]->realVars[355] /* tank.s[1] variable */) - ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) - (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */)):((data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */)?(data->localData[0]->realVars[355] /* tank.s[1] variable */) - (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */):(data->localData[0]->realVars[355] /* tank.s[1] variable */) - ((9.869232667160129e-06) * (((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */)) * ((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */) - (data->localData[0]->realVars[8] /* tank.level STATE(1) */))))));

  tmp2 = (modelica_boolean)(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */);
  if(tmp2)
  {
    tmp0 = DIVISION_SIM((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp1 = DIVISION_SIM((data->localData[0]->realVars[342] /* tank.portAreas[1] variable */),(data->simulationInfo->realParameter[297] /* tank.vesselArea PARAM */),"tank.vesselArea",equationIndexes);
    tmp3 = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - ((data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */) + (0.5) * ((real_int_pow(threadData, (data->localData[0]->realVars[342] /* tank.portAreas[1] variable */), -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (data->simulationInfo->realParameter[265] /* tank.m_flow_small PARAM */), (DIVISION_SIM((data->simulationInfo->realParameter[277] /* tank.portsData[1].zeta_in PARAM */) - 1.0 + (tmp0 * tmp0),(data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */),"tank.portInDensities[1]",equationIndexes)) * ((data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */)), DIVISION_SIM((data->simulationInfo->realParameter[279] /* tank.portsData[1].zeta_out PARAM */) + 1.0 - ((tmp1 * tmp1)),((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) * ((data->localData[0]->realVars[353] /* tank.ports_penetration[1] variable */)),"tank.heatTransfer.states[1].d * tank.ports_penetration[1]",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp3 = ((data->localData[0]->booleanVars[0] /* tank.inFlow[1] DISCRETE */)?(data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) - (data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */):(data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */));
  }
  res[1] = tmp3;
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS734(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeNonlinearPatternNLS734(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS734(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for tank.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[355].attribute /* tank.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[355].attribute /* tank.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[355].attribute /* tank.s[1] */.max;
  /* static nls data for radiator.statesFM[3].p */
  sysData->nominal[i] = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[317].attribute /* radiator.statesFM[3].p */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS734(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS734(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS734(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[355] /* tank.s[1] variable */);
  array[1] = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
}


/* inner equations */

/*
equation index: 745
type: SIMPLE_ASSIGN
$DER.tank.U = tank.m * $DER.tank.medium.u + tank.mb_flow * tank.medium.u
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  (data->localData[0]->realVars[40] /* der(tank.U) DUMMY_DER */) = ((data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */)) * ((data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */)) + ((data->localData[0]->realVars[334] /* tank.mb_flow variable */)) * ((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
tank.Wb_flow = $DER.tank.U - (tank.Hb_flow + tank.Qb_flow)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  (data->localData[0]->realVars[328] /* tank.Wb_flow variable */) = (data->localData[0]->realVars[40] /* der(tank.U) DUMMY_DER */) - ((data->localData[0]->realVars[324] /* tank.Hb_flow variable */) + (data->localData[0]->realVars[325] /* tank.Qb_flow variable */));
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
$DER.tank.V = (-tank.Wb_flow) / tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  (data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */) = DIVISION_SIM((-(data->localData[0]->realVars[328] /* tank.Wb_flow variable */)),(data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),"tank.p_ambient",equationIndexes);
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
$DER.tank.medium.h = $DER.tank.medium.u - tank.p_ambient * $DER.tank.heatTransfer.states[1].d / tank.heatTransfer.states[1].d ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  modelica_real tmp0;
  tmp0 = (data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */);
  (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */) = (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */) - (((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */)) * (DIVISION_SIM((data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */),(tmp0 * tmp0),"tank.heatTransfer.states[1].d ^ 2.0",equationIndexes)));
  TRACE_POP
}

void residualFunc751(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,751};
  int i,j;
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc751: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<2; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc751 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */) = xloc[0];
  (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */) = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_745(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_746(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_747(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_748(data, threadData);
  /* body */
  res[0] = ((data->localData[0]->realVars[41] /* der(tank.V) DUMMY_DER */)) * ((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */)) + ((data->localData[0]->realVars[327] /* tank.V DUMMY_STATE */)) * ((data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */)) - (data->localData[0]->realVars[334] /* tank.mb_flow variable */);

  Modelica_Media_Common_IF97BaseTwoPhase_wrap_vars(threadData,tmp0, (data->localData[0]->integerVars[4] /* $cse39.phase DISCRETE */), (data->localData[0]->integerVars[5] /* $cse39.region DISCRETE */), (data->localData[0]->realVars[112] /* $cse39.p variable */), (data->localData[0]->realVars[107] /* $cse39.T variable */), (data->localData[0]->realVars[111] /* $cse39.h variable */), (data->localData[0]->realVars[106] /* $cse39.R_s variable */), (data->localData[0]->realVars[108] /* $cse39.cp variable */), (data->localData[0]->realVars[109] /* $cse39.cv variable */), (data->localData[0]->realVars[115] /* $cse39.rho variable */), (data->localData[0]->realVars[116] /* $cse39.s variable */), (data->localData[0]->realVars[114] /* $cse39.pt variable */), (data->localData[0]->realVars[113] /* $cse39.pd variable */), (data->localData[0]->realVars[118] /* $cse39.vt variable */), (data->localData[0]->realVars[117] /* $cse39.vp variable */), (data->localData[0]->realVars[119] /* $cse39.x variable */), (data->localData[0]->realVars[110] /* $cse39.dpT variable */));
  res[1] = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */), (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), tmp0, 0.0, (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */)) - (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS751(NONLINEAR_SYSTEM_DATA* inSysData)
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
void initializeNonlinearPatternNLS751(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS751(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for der(tank.heatTransfer.states[1].d) */
  sysData->nominal[i] = data->modelData->realVarsData[42].attribute /* der(tank.heatTransfer.states[1].d) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[42].attribute /* der(tank.heatTransfer.states[1].d) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[42].attribute /* der(tank.heatTransfer.states[1].d) */.max;
  /* static nls data for der(tank.medium.u) */
  sysData->nominal[i] = data->modelData->realVarsData[44].attribute /* der(tank.medium.u) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[44].attribute /* der(tank.medium.u) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[44].attribute /* der(tank.medium.u) */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS751(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS751(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS751(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[42] /* der(tank.heatTransfer.states[1].d) DUMMY_DER */);
  array[1] = (data->localData[0]->realVars[44] /* der(tank.medium.u) DUMMY_DER */);
}


/* inner equations */

/*
equation index: 758
type: SIMPLE_ASSIGN
radiator.statesFM[1].T = 273.058616085119 + 0.0002391265851958049 * pipe.mediums[2].h + (-2.214479571349945e-07) * (-101325.0 + radiator.statesFM[1].p)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */) = 273.058616085119 + (0.0002391265851958049) * ((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */)) + (-2.214479571349945e-07) * (-101325.0 + (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */));
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
$cse23 = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.pressure(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp0._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[62] /* $cse23 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
radiator.flowModel.Fs_p[1] = radiator.crossAreas[1] * ($cse22 - $cse23) * radiator.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  (data->localData[0]->realVars[273] /* radiator.flowModel.Fs_p[1] variable */) = ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * (((data->localData[0]->realVars[61] /* $cse22 variable */) - (data->localData[0]->realVars[62] /* $cse23 variable */)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)));
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
radiator.flowModel.dps_fg[1] = (-radiator.flowModel.Fs_p[1]) / (radiator.flowModel.nParallel * radiator.crossAreas[1])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */) = DIVISION_SIM((-(data->localData[0]->realVars[273] /* radiator.flowModel.Fs_p[1] variable */)),((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)),"radiator.flowModel.nParallel * radiator.crossAreas[1]",equationIndexes);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp0._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
$cse25 = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.WallFriction.massFlowRate_dp_staticHead(radiator.flowModel.dps_fg[1], radiator.flowModel.rhos[1], radiator.flowModel.rhos[2], 0.0008899999999999999, 0.0008899999999999999, 5.0, radiator.dimensions[1], 0.0, radiator.crossAreas[1], radiator.roughnesses[1], 0.5 * radiator.flowModel.dp_small, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  (data->localData[0]->realVars[64] /* $cse25 variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, (data->localData[0]->realVars[282] /* radiator.flowModel.dps_fg[1] variable */), (data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */), (data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */), 0.0008899999999999999, 0.0008899999999999999, 5.0, (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */), 0.0, (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */), (0.5) * ((data->simulationInfo->realParameter[205] /* radiator.flowModel.dp_small PARAM */)), 4000.0);
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
radiator.m_flows[1] = $cse25 * radiator.flowModel.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */) = ((data->localData[0]->realVars[64] /* $cse25 variable */)) * ((data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */));
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
valve.dp = pipe.mediums[2].p - radiator.statesFM[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  (data->localData[0]->realVars[361] /* valve.dp variable */) = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) - (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
$cse33 = Modelica.Fluid.Utilities.regRoot(valve.dp, valve.dp_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  (data->localData[0]->realVars[74] /* $cse33 variable */) = omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->localData[0]->realVars[361] /* valve.dp variable */), (data->simulationInfo->realParameter[302] /* valve.dp_small PARAM */));
  TRACE_POP
}

void residualFunc768(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,768};
  int i,j;
  modelica_real tmp0;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(LOG_NLS, 0, "residualFunc768: Iteration variable xloc[%i] is nan.", i);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc768 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_758(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_759(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_760(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_761(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_762(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_763(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_764(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_765(data, threadData);

  /* local constraints */
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_766(data, threadData);
  /* body */
  tmp0 = (data->localData[0]->realVars[125] /* $cse8 variable */);
  if(!(tmp0 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt($cse8) was %g should be >= 0", tmp0);
    }
  }res[0] = ((data->localData[0]->realVars[365] /* valve.relativeFlowCoefficient variable */)) * (((data->simulationInfo->realParameter[298] /* valve.Av PARAM */)) * ((sqrt(tmp0)) * ((data->localData[0]->realVars[74] /* $cse33 variable */)))) - (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */);
  /* restore known outputs */
  TRACE_POP
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS768(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}
void initializeNonlinearPatternNLS768(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS768(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for radiator.statesFM[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[316].attribute /* radiator.statesFM[1].p */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS768(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS768(sysData);
  }
}

OMC_DISABLE_OPT
void getIterationVarsNLS768(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void Modelica_Fluid_Examples_HeatingSystem_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[5].equationIndex = 768;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc768;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS768;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS768;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 751;
  nonLinearSystemData[4].size = 2;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc751;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS751;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS751;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 734;
  nonLinearSystemData[3].size = 2;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 1;
  nonLinearSystemData[3].residualFunc = residualFunc734;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS734;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS734;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 703;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc703;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS703;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS703;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 499;
  nonLinearSystemData[1].size = 18;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc499;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS499;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS499;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 213;
  nonLinearSystemData[0].size = 18;
  nonLinearSystemData[0].homotopySupport = 1;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc213;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS213;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS213;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

