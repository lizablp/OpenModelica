/* Initialization */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#include "Modelica_Fluid_Examples_HeatingSystem_11mix.h"
#include "Modelica_Fluid_Examples_HeatingSystem_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
tank.medium.MM = 0.018015268
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[335] /* tank.medium.MM variable */) = 0.018015268;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
tank.medium.R_s = 461.5231157345669
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[336] /* tank.medium.R_s variable */) = 461.5231157345669;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
tank.medium.X[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[338] /* tank.medium.X[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
pump.medium.R_s = 461.5231157345669
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[257] /* pump.medium.R_s variable */) = 461.5231157345669;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
pump.medium.MM = 0.018015268
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[256] /* pump.medium.MM variable */) = 0.018015268;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
pump.medium.X[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[259] /* pump.medium.X[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
pump.heatTransfer.surfaceAreas[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[252] /* pump.heatTransfer.surfaceAreas[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
pump.s = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[264] /* pump.s variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
heater.mediums[1].R_s = 461.5231157345669
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[165] /* heater.mediums[1].R_s variable */) = 461.5231157345669;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
heater.mediums[1].MM = 0.018015268
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[164] /* heater.mediums[1].MM variable */) = 0.018015268;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
heater.mediums[1].X[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[167] /* heater.mediums[1].X[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
heater.heatTransfer.surfaceAreas[1] = heater.perimeter * 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[162] /* heater.heatTransfer.surfaceAreas[1] variable */) = ((data->simulationInfo->realParameter[84] /* heater.perimeter PARAM */)) * (2.0);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
heater.heatTransfer.lengths[1] = 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[161] /* heater.heatTransfer.lengths[1] variable */) = 2.0;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
radiator.mediums[1].R_s = 461.5231157345669
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[304] /* radiator.mediums[1].R_s variable */) = 461.5231157345669;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
radiator.mediums[1].MM = 0.018015268
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[303] /* radiator.mediums[1].MM variable */) = 0.018015268;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
radiator.mediums[1].X[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[306] /* radiator.mediums[1].X[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
radiator.heatTransfer.surfaceAreas[1] = radiator.perimeter * 10.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[299] /* radiator.heatTransfer.surfaceAreas[1] variable */) = ((data->simulationInfo->realParameter[231] /* radiator.perimeter PARAM */)) * (10.0);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
radiator.heatTransfer.lengths[1] = 10.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[298] /* radiator.heatTransfer.lengths[1] variable */) = 10.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
sensor_T_forward.port.h_outflow = 84019.86712782076
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[319] /* sensor_T_forward.port.h_outflow variable */) = 84019.86712782076;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
sensor_T_return.port.h_outflow = 84019.86712782076
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[321] /* sensor_T_return.port.h_outflow variable */) = 84019.86712782076;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
pipe.mediums[1].R_s = 461.5231157345669
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[218] /* pipe.mediums[1].R_s variable */) = 461.5231157345669;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
pipe.mediums[1].MM = 0.018015268
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[216] /* pipe.mediums[1].MM variable */) = 0.018015268;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
pipe.mediums[1].X[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[222] /* pipe.mediums[1].X[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
pipe.mediums[2].R_s = 461.5231157345669
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[219] /* pipe.mediums[2].R_s variable */) = 461.5231157345669;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
pipe.mediums[2].MM = 0.018015268
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[217] /* pipe.mediums[2].MM variable */) = 0.018015268;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
pipe.mediums[2].X[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[223] /* pipe.mediums[2].X[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
pipe.heatTransfer.surfaceAreas[1] = pipe.perimeter * 5.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[210] /* pipe.heatTransfer.surfaceAreas[1] variable */) = ((data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */)) * (5.0);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
pipe.heatTransfer.surfaceAreas[2] = pipe.perimeter * 5.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[211] /* pipe.heatTransfer.surfaceAreas[2] variable */) = ((data->simulationInfo->realParameter[145] /* pipe.perimeter PARAM */)) * (5.0);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
pipe.heatTransfer.lengths[1] = 5.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[208] /* pipe.heatTransfer.lengths[1] variable */) = 5.0;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
pipe.heatTransfer.lengths[2] = 5.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[209] /* pipe.heatTransfer.lengths[2] variable */) = 5.0;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
pump.U = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[241] /* pump.U variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
heater.flowModel.dp_fric_nominal = 2.0 * Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.WallFriction.pressureLoss_m_flow(heater.flowModel.m_flow_nominal / heater.flowModel.nParallel, heater.flowModel.rho_nominal, heater.flowModel.rho_nominal, heater.flowModel.mu_nominal, heater.flowModel.mu_nominal, 1.0, heater.dimensions[1], heater.crossAreas[1], heater.roughnesses[1], heater.flowModel.m_flow_small / heater.flowModel.nParallel, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[144] /* heater.flowModel.dp_fric_nominal variable */) = (2.0) * (omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow(threadData, DIVISION_SIM((data->simulationInfo->realParameter[59] /* heater.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */),"heater.flowModel.nParallel",equationIndexes), (data->simulationInfo->realParameter[66] /* heater.flowModel.rho_nominal PARAM */), (data->simulationInfo->realParameter[66] /* heater.flowModel.rho_nominal PARAM */), (data->simulationInfo->realParameter[62] /* heater.flowModel.mu_nominal PARAM */), (data->simulationInfo->realParameter[62] /* heater.flowModel.mu_nominal PARAM */), 1.0, (data->simulationInfo->realParameter[42] /* heater.dimensions[1] PARAM */), (data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[88] /* heater.roughnesses[1] PARAM */), DIVISION_SIM((data->simulationInfo->realParameter[60] /* heater.flowModel.m_flow_small PARAM */),(data->simulationInfo->realParameter[63] /* heater.flowModel.nParallel PARAM */),"heater.flowModel.nParallel",equationIndexes), 4000.0));
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
radiator.flowModel.dp_fric_nominal = 2.0 * Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.WallFriction.pressureLoss_m_flow(radiator.flowModel.m_flow_nominal / radiator.flowModel.nParallel, radiator.flowModel.rho_nominal, radiator.flowModel.rho_nominal, radiator.flowModel.mu_nominal, radiator.flowModel.mu_nominal, 5.0, radiator.dimensions[1], radiator.crossAreas[1], radiator.roughnesses[1], radiator.flowModel.m_flow_small / radiator.flowModel.nParallel, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[281] /* radiator.flowModel.dp_fric_nominal variable */) = (2.0) * (omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow(threadData, DIVISION_SIM((data->simulationInfo->realParameter[207] /* radiator.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */),"radiator.flowModel.nParallel",equationIndexes), (data->simulationInfo->realParameter[214] /* radiator.flowModel.rho_nominal PARAM */), (data->simulationInfo->realParameter[214] /* radiator.flowModel.rho_nominal PARAM */), (data->simulationInfo->realParameter[210] /* radiator.flowModel.mu_nominal PARAM */), (data->simulationInfo->realParameter[210] /* radiator.flowModel.mu_nominal PARAM */), 5.0, (data->simulationInfo->realParameter[190] /* radiator.dimensions[1] PARAM */), (data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */), (data->simulationInfo->realParameter[234] /* radiator.roughnesses[1] PARAM */), DIVISION_SIM((data->simulationInfo->realParameter[208] /* radiator.flowModel.m_flow_small PARAM */),(data->simulationInfo->realParameter[211] /* radiator.flowModel.nParallel PARAM */),"radiator.flowModel.nParallel",equationIndexes), 4000.0));
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
pipe.flowModel.diameters[1] = 0.5 * (pipe.dimensions[1] + pipe.dimensions[2])
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[193] /* pipe.flowModel.diameters[1] variable */) = (0.5) * ((data->simulationInfo->realParameter[105] /* pipe.dimensions[1] PARAM */) + (data->simulationInfo->realParameter[106] /* pipe.dimensions[2] PARAM */));
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
pipe.flowModel.dp_fric_nominal = Modelica.Fluid.Examples.HeatingSystem.pipe.flowModel.WallFriction.pressureLoss_m_flow(pipe.flowModel.m_flow_nominal / pipe.flowModel.nParallel, pipe.flowModel.rho_nominal, pipe.flowModel.rho_nominal, pipe.flowModel.mu_nominal, pipe.flowModel.mu_nominal, 10.0, pipe.flowModel.diameters[1], 0.5 * (pipe.crossAreas[1] + pipe.crossAreas[2]), 0.5 * (pipe.roughnesses[1] + pipe.roughnesses[2]), pipe.flowModel.m_flow_small / pipe.flowModel.nParallel, 4000.0)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[194] /* pipe.flowModel.dp_fric_nominal variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow(threadData, DIVISION_SIM((data->simulationInfo->realParameter[119] /* pipe.flowModel.m_flow_nominal PARAM */),(data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */),"pipe.flowModel.nParallel",equationIndexes), (data->simulationInfo->realParameter[126] /* pipe.flowModel.rho_nominal PARAM */), (data->simulationInfo->realParameter[126] /* pipe.flowModel.rho_nominal PARAM */), (data->simulationInfo->realParameter[122] /* pipe.flowModel.mu_nominal PARAM */), (data->simulationInfo->realParameter[122] /* pipe.flowModel.mu_nominal PARAM */), 10.0, (data->localData[0]->realVars[193] /* pipe.flowModel.diameters[1] variable */), (0.5) * ((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */) + (data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)), (0.5) * ((data->simulationInfo->realParameter[149] /* pipe.roughnesses[1] PARAM */) + (data->simulationInfo->realParameter[150] /* pipe.roughnesses[2] PARAM */)), DIVISION_SIM((data->simulationInfo->realParameter[120] /* pipe.flowModel.m_flow_small PARAM */),(data->simulationInfo->realParameter[123] /* pipe.flowModel.nParallel PARAM */),"pipe.flowModel.nParallel",equationIndexes), 4000.0);
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
tank.portAreas[2] = 0.7853981633974483 * tank.portsData[2].diameter ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  modelica_real tmp0;
  tmp0 = (data->simulationInfo->realParameter[274] /* tank.portsData[2].diameter PARAM */);
  (data->localData[0]->realVars[343] /* tank.portAreas[2] variable */) = (0.7853981633974483) * ((tmp0 * tmp0));
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
tank.portAreas[1] = 0.7853981633974483 * tank.portsData[1].diameter ^ 2.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  modelica_real tmp1;
  tmp1 = (data->simulationInfo->realParameter[273] /* tank.portsData[1].diameter PARAM */);
  (data->localData[0]->realVars[342] /* tank.portAreas[1] variable */) = (0.7853981633974483) * ((tmp1 * tmp1));
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
heater.fluidVolumes[1] = heater.crossAreas[1] * 2.0 * heater.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[159] /* heater.fluidVolumes[1] variable */) = (((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */)) * (2.0)) * ((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */));
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
radiator.fluidVolumes[1] = radiator.crossAreas[1] * 10.0 * radiator.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[296] /* radiator.fluidVolumes[1] variable */) = (((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */)) * (10.0)) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */));
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
pipe.fluidVolumes[1] = pipe.crossAreas[1] * 5.0 * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[202] /* pipe.fluidVolumes[1] variable */) = (((data->simulationInfo->realParameter[98] /* pipe.crossAreas[1] PARAM */)) * (5.0)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */));
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
pipe.fluidVolumes[2] = pipe.crossAreas[2] * 5.0 * pipe.nParallel
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[203] /* pipe.fluidVolumes[2] variable */) = (((data->simulationInfo->realParameter[99] /* pipe.crossAreas[2] PARAM */)) * (5.0)) * ((data->simulationInfo->realParameter[142] /* pipe.nParallel PARAM */));
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_610(DATA *data, threadData_t *threadData);


/*
equation index: 45
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].p = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].p = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].T = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[13] /* der(pipe.mediums[2].T) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].d = 997.0480319717385 * (4.515426036491987e-10 * $DER.pipe.mediums[2].p + (-0.0002571314017648316) * $DER.pipe.mediums[2].T)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */) = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[13] /* der(pipe.mediums[2].T) STATE_DER */)));
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
pipe.mb_flows[2] = pipe.fluidVolumes[2] * $DER.pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */) = ((data->localData[0]->realVars[203] /* pipe.fluidVolumes[2] variable */)) * ((data->localData[0]->realVars[28] /* der(pipe.mediums[2].d) DUMMY_DER */));
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_830(DATA *data, threadData_t *threadData);


/*
equation index: 51
type: SIMPLE_ASSIGN
$DER.pipe.mediums[2].h = 4181.885502948851 * $DER.pipe.mediums[2].T + 0.0009260700016004721 * $DER.pipe.mediums[2].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[30] /* der(pipe.mediums[2].h) DUMMY_DER */) = (4181.885502948851) * ((data->localData[0]->realVars[13] /* der(pipe.mediums[2].T) STATE_DER */)) + (0.0009260700016004721) * ((data->localData[0]->realVars[15] /* der(pipe.mediums[2].p) STATE_DER */));
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].T = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[12] /* der(pipe.mediums[1].T) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].d = 997.0480319717385 * (4.515426036491987e-10 * $DER.pipe.mediums[1].p + (-0.0002571314017648316) * $DER.pipe.mediums[1].T)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */) = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[12] /* der(pipe.mediums[1].T) STATE_DER */)));
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
pipe.mb_flows[1] = pipe.fluidVolumes[1] * $DER.pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */) = ((data->localData[0]->realVars[202] /* pipe.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[27] /* der(pipe.mediums[1].d) DUMMY_DER */));
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_816(DATA *data, threadData_t *threadData);


/*
equation index: 56
type: SIMPLE_ASSIGN
$DER.pipe.mediums[1].h = 4181.885502948851 * $DER.pipe.mediums[1].T + 0.0009260700016004721 * $DER.pipe.mediums[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[29] /* der(pipe.mediums[1].h) DUMMY_DER */) = (4181.885502948851) * ((data->localData[0]->realVars[12] /* der(pipe.mediums[1].T) STATE_DER */)) + (0.0009260700016004721) * ((data->localData[0]->realVars[14] /* der(pipe.mediums[1].p) STATE_DER */));
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
pipe.flowModel.dp_small = system.dp_small
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  (data->simulationInfo->realParameter[117] /* pipe.flowModel.dp_small PARAM */) = (data->simulationInfo->realParameter[244] /* system.dp_small PARAM */);
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
pipe.flowModel.dp_nominal = 1000.0 * pipe.flowModel.dp_small
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  (data->simulationInfo->realParameter[116] /* pipe.flowModel.dp_nominal PARAM */) = (1000.0) * ((data->simulationInfo->realParameter[117] /* pipe.flowModel.dp_small PARAM */));
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].p = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].T = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[16] /* der(radiator.mediums[1].T) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].d = 997.0480319717385 * (4.515426036491987e-10 * $DER.radiator.mediums[1].p + (-0.0002571314017648316) * $DER.radiator.mediums[1].T)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  (data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */) = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[16] /* der(radiator.mediums[1].T) STATE_DER */)));
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
radiator.mb_flows[1] = radiator.fluidVolumes[1] * $DER.radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  (data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */) = ((data->localData[0]->realVars[296] /* radiator.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[36] /* der(radiator.mediums[1].d) DUMMY_DER */));
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_773(DATA *data, threadData_t *threadData);


/*
equation index: 64
type: SIMPLE_ASSIGN
$DER.radiator.mediums[1].h = 4181.885502948851 * $DER.radiator.mediums[1].T + 0.0009260700016004721 * $DER.radiator.mediums[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[37] /* der(radiator.mediums[1].h) DUMMY_DER */) = (4181.885502948851) * ((data->localData[0]->realVars[16] /* der(radiator.mediums[1].T) STATE_DER */)) + (0.0009260700016004721) * ((data->localData[0]->realVars[17] /* der(radiator.mediums[1].p) STATE_DER */));
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
radiator.flowModel.dp_small = system.dp_small
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  (data->simulationInfo->realParameter[205] /* radiator.flowModel.dp_small PARAM */) = (data->simulationInfo->realParameter[244] /* system.dp_small PARAM */);
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
radiator.flowModel.dp_nominal = 1000.0 * radiator.flowModel.dp_small
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  (data->simulationInfo->realParameter[204] /* radiator.flowModel.dp_nominal PARAM */) = (1000.0) * ((data->simulationInfo->realParameter[205] /* radiator.flowModel.dp_small PARAM */));
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].p = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  (data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].T = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  (data->localData[0]->realVars[10] /* der(heater.mediums[1].T) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].d = 997.0480319717385 * (4.515426036491987e-10 * $DER.heater.mediums[1].p + (-0.0002571314017648316) * $DER.heater.mediums[1].T)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */) = (997.0480319717385) * ((4.515426036491987e-10) * ((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */)) + (-0.0002571314017648316) * ((data->localData[0]->realVars[10] /* der(heater.mediums[1].T) STATE_DER */)));
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
heater.mb_flows[1] = heater.fluidVolumes[1] * $DER.heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */) = ((data->localData[0]->realVars[159] /* heater.fluidVolumes[1] variable */)) * ((data->localData[0]->realVars[21] /* der(heater.mediums[1].d) DUMMY_DER */));
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
tank.mb_flow = (-heater.mb_flows[1]) - radiator.mb_flows[1] - pipe.mb_flows[2] - pipe.mb_flows[1]
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[334] /* tank.mb_flow variable */) = (-(data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */)) - (data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */) - (data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */) - (data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_753(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_829(DATA *data, threadData_t *threadData);


/*
equation index: 74
type: SIMPLE_ASSIGN
$DER.heater.mediums[1].h = 4181.885502948851 * $DER.heater.mediums[1].T + 0.0009260700016004721 * $DER.heater.mediums[1].p
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[22] /* der(heater.mediums[1].h) DUMMY_DER */) = (4181.885502948851) * ((data->localData[0]->realVars[10] /* der(heater.mediums[1].T) STATE_DER */)) + (0.0009260700016004721) * ((data->localData[0]->realVars[11] /* der(heater.mediums[1].p) STATE_DER */));
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
heater.flowModel.dp_small = system.dp_small
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  (data->simulationInfo->realParameter[57] /* heater.flowModel.dp_small PARAM */) = (data->simulationInfo->realParameter[244] /* system.dp_small PARAM */);
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
heater.flowModel.dp_nominal = 1000.0 * heater.flowModel.dp_small
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  (data->simulationInfo->realParameter[56] /* heater.flowModel.dp_nominal PARAM */) = (1000.0) * ((data->simulationInfo->realParameter[57] /* heater.flowModel.dp_small PARAM */));
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
valve.Av = valve.m_flow_nominal / (Modelica.Fluid.Examples.HeatingSystem.valve.valveCharacteristic(valve.opening_nominal) * Modelica.Fluid.Utilities.regRoot(valve.dp_nominal, valve.dp_small) * sqrt(valve.rho_nominal))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_real tmp2;
  tmp2 = (data->simulationInfo->realParameter[311] /* valve.rho_nominal PARAM */);
  if(!(tmp2 >= 0.0))
  {
    if (data->simulationInfo->noThrowAsserts) {
      FILE_INFO info = {"",0,0,0,0,0};
      infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      data->simulationInfo->needToReThrow = 1;
    } else {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
      throwStreamPrintWithEquationIndexes(threadData, info, equationIndexes, "Model error: Argument of sqrt(valve.rho_nominal) was %g should be >= 0", tmp2);
    }
  }
  (data->simulationInfo->realParameter[298] /* valve.Av PARAM */) = DIVISION_SIM((data->simulationInfo->realParameter[306] /* valve.m_flow_nominal PARAM */),((omc_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData, (data->simulationInfo->realParameter[310] /* valve.opening_nominal PARAM */))) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, (data->simulationInfo->realParameter[301] /* valve.dp_nominal PARAM */), (data->simulationInfo->realParameter[302] /* valve.dp_small PARAM */)))) * (sqrt(tmp2)),"Modelica.Fluid.Examples.HeatingSystem.valve.valveCharacteristic(valve.opening_nominal) * Modelica.Fluid.Utilities.regRoot(valve.dp_nominal, valve.dp_small) * sqrt(valve.rho_nominal)",equationIndexes);
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
$DER.tank.medium.h = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[19] /* der(tank.medium.h) STATE_DER */) = 0.0;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
tank.level = tank.level_start_eps
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[8] /* tank.level STATE(1) */) = (data->simulationInfo->realParameter[263] /* tank.level_start_eps PARAM */);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_622(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(DATA *data, threadData_t *threadData);


void Modelica_Fluid_Examples_HeatingSystem_eqFunction_87(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_88(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_89(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_90(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_91(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_92(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_93(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_94(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_95(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_96(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_97(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_98(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_99(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_100(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_101(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_102(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_103(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_104(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_105(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_106(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_107(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_108(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_109(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_110(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_111(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_112(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_113(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_114(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_115(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_116(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_117(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_118(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_119(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_120(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_121(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_122(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_123(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_124(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_125(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_126(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_127(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_128(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_129(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_130(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_131(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_132(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_133(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_134(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_135(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_136(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_137(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_138(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_139(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_140(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_141(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_142(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_143(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_144(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_145(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_146(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_147(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_148(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_149(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_150(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_151(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_152(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_153(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_154(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_155(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_156(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_157(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_158(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_159(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_160(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_161(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_162(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_163(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_164(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_165(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_166(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_167(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_168(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_169(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_170(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_171(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_172(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_173(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_174(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_175(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_176(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_177(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_178(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_179(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_180(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_181(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_182(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_183(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_184(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_185(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_186(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_187(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_188(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_189(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_190(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_191(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_192(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_193(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_194(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_212(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_211(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_210(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_209(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_208(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_207(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_206(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_205(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_204(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_203(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_202(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_201(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_200(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_199(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_198(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_197(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_196(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_195(DATA*, threadData_t*);
/*
equation index: 213
indexNonlinear: 0
type: NONLINEAR

vars: {tank.s[1], tank.s[2], tank.ports[2].p, radiator.statesFM[1].p, sensor_m_flow.port_b.h_outflow, pipe.mediums[1].p, pipe.mediums[1].h, heater.mediums[1].p, heater.mediums[1].d, pipe.mediums[2].p, pipe.mediums[2].h, radiator.mediums[1].p, pump.V_flow_single, radiator.statesFM[3].p, radiator.mediums[1].h, m_flow, tank.medium.h, pump.N}
eqns: {87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195}
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 213 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[355] /* tank.s[1] variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[1] = (data->localData[0]->realVars[356] /* tank.s[2] variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[2] = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[3] = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[4] = (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[5] = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[6] = (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[7] = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[8] = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[9] = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[10] = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[11] = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[12] = (data->localData[0]->realVars[243] /* pump.V_flow_single variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[13] = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[14] = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[15] = (data->localData[0]->realVars[178] /* m_flow variable */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[16] = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */);
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[17] = (data->localData[0]->realVars[240] /* pump.N variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,213};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 213 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[355] /* tank.s[1] variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  (data->localData[0]->realVars[356] /* tank.s[2] variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[1];
  (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[2];
  (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[3];
  (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[4];
  (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[0].nlsx[5];
  (data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[6];
  (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[0].nlsx[7];
  (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[8];
  (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[0].nlsx[9];
  (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[10];
  (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[0].nlsx[11];
  (data->localData[0]->realVars[243] /* pump.V_flow_single variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[12];
  (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[13];
  (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[0].nlsx[14];
  (data->localData[0]->realVars[178] /* m_flow variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[15];
  (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) = data->simulationInfo->nonlinearSystemData[0].nlsx[16];
  (data->localData[0]->realVars[240] /* pump.N variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[17];
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_625(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_621(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_704(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_775(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_709(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_638(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_606(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_743(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_736(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_811(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_778(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_601(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_788(DATA *data, threadData_t *threadData);


/*
equation index: 228
type: SIMPLE_ASSIGN
radiator.flowModel.vs[1] = radiator.m_flows[1] / (Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T)) * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp0._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[294] /* radiator.flowModel.vs[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData, tmp0)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T)) * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_656(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_652(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_643(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_603(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_810(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_855(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_602(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_854(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_604(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_630(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_674(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_711(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_707(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_706(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_708(DATA *data, threadData_t *threadData);


/*
equation index: 244
type: SIMPLE_ASSIGN
heater.flowModel.vs[1] = m_flow / (heater.nParallel * heater.crossAreas[1] * Modelica.Fluid.Examples.HeatingSystem.heater.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T)))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState tmp1;
  tmp1._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp1._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[157] /* heater.flowModel.vs[1] variable */) = DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */),(((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * (omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData, tmp1)),"heater.nParallel * heater.crossAreas[1] * Modelica.Fluid.Examples.HeatingSystem.heater.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))",equationIndexes);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_608(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_631(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_607(DATA *data, threadData_t *threadData);


/*
equation index: 248
type: SIMPLE_ASSIGN
heater.flowModel.vs[3] = pipe.m_flows[1] / (heater.nParallel * heater.crossAreas[1] * Modelica.Fluid.Examples.HeatingSystem.heater.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T)))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState tmp2;
  tmp2._p = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  tmp2._T = (data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */);
  (data->localData[0]->realVars[158] /* heater.flowModel.vs[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),(((data->simulationInfo->realParameter[81] /* heater.nParallel PARAM */)) * ((data->simulationInfo->realParameter[36] /* heater.crossAreas[1] PARAM */))) * (omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData, tmp2)),"heater.nParallel * heater.crossAreas[1] * Modelica.Fluid.Examples.HeatingSystem.heater.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.Medium.ThermodynamicState(pipe.mediums[1].p, heater.statesFM[3].T))",equationIndexes);
  TRACE_POP
}

/*
equation index: 249
type: SIMPLE_ASSIGN
T_forward = Modelica.Fluid.Examples.HeatingSystem.sensor_T_forward.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.sensor_T_forward.Medium.setState_phX(pipe.mediums[1].p, (max(-pipe.m_flows[1], 1e-07) * pipe.mediums[1].h + max(pipe.m_flows[1], 1e-07) * heater.mediums[1].h) / (max(-pipe.m_flows[1], 1e-07) + max(pipe.m_flows[1], 1e-07)), {}))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[127] /* T_forward variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData, omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData, (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */), DIVISION_SIM((fmax((-(data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */)),1e-07)) * ((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */)) + (fmax((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),1e-07)) * ((data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */)),fmax((-(data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */)),1e-07) + fmax((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),1e-07),"max(-pipe.m_flows[1], 1e-07) + max(pipe.m_flows[1], 1e-07)",equationIndexes), _OMC_LIT116));
  TRACE_POP
}

/*
equation index: 250
type: SIMPLE_ASSIGN
valve.V_flow = radiator.m_flows[1] / Modelica.Fluid.Utilities.regStep(radiator.m_flows[1], Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(pipe.mediums[2].p, valve.state_a.T)), Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(radiator.statesFM[1].p, valve.state_b.T)), valve.m_flow_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp3;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp4;
  tmp3._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp3._T = (data->localData[0]->realVars[366] /* valve.state_a.T variable */);
  tmp4._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp4._T = (data->localData[0]->realVars[367] /* valve.state_b.T variable */);
  (data->localData[0]->realVars[360] /* valve.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData, tmp3), omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData, tmp4), (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(radiator.m_flows[1], Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(pipe.mediums[2].p, valve.state_a.T)), Modelica.Fluid.Examples.HeatingSystem.valve.Medium.density(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(radiator.statesFM[1].p, valve.state_b.T)), valve.m_flow_small)",equationIndexes);
  TRACE_POP
}

/*
equation index: 251
type: SIMPLE_ASSIGN
valve.port_a_T = Modelica.Fluid.Utilities.regStep(radiator.m_flows[1], Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(pipe.mediums[2].p, valve.state_a.T)), Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.setState_phX(pipe.mediums[2].p, radiator.mediums[1].h, {})), valve.m_flow_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp5;
  tmp5._p = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  tmp5._T = (data->localData[0]->realVars[366] /* valve.state_a.T variable */);
  (data->localData[0]->realVars[363] /* valve.port_a_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp5), omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData, (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */), (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), _OMC_LIT116)), (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */));
  TRACE_POP
}

/*
equation index: 252
type: SIMPLE_ASSIGN
valve.port_b_T = Modelica.Fluid.Utilities.regStep(-radiator.m_flows[1], Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.ThermodynamicState(radiator.statesFM[1].p, valve.state_b.T)), Modelica.Fluid.Examples.HeatingSystem.valve.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.valve.Medium.setState_phX(radiator.statesFM[1].p, pipe.mediums[2].h, {})), valve.m_flow_small)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp6;
  tmp6._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp6._T = (data->localData[0]->realVars[367] /* valve.state_b.T variable */);
  (data->localData[0]->realVars[364] /* valve.port_b_T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (-(data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */)), omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp6), omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData, (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */), (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), _OMC_LIT116)), (data->simulationInfo->realParameter[307] /* valve.m_flow_small PARAM */));
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_605(DATA *data, threadData_t *threadData);


/*
equation index: 254
type: SIMPLE_ASSIGN
radiator.flowModel.vs[3] = radiator.m_flows[2] / (Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T)) * radiator.crossAreas[1] * radiator.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState tmp7;
  tmp7._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp7._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  (data->localData[0]->realVars[295] /* radiator.flowModel.vs[3] variable */) = DIVISION_SIM((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),((omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData, tmp7)) * ((data->simulationInfo->realParameter[184] /* radiator.crossAreas[1] PARAM */))) * ((data->simulationInfo->realParameter[228] /* radiator.nParallel PARAM */)),"Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T)) * radiator.crossAreas[1] * radiator.nParallel",equationIndexes);
  TRACE_POP
}

/*
equation index: 255
type: SIMPLE_ASSIGN
T_return = Modelica.Fluid.Examples.HeatingSystem.sensor_T_return.Medium.temperature(Modelica.Fluid.Examples.HeatingSystem.sensor_T_return.Medium.setState_phX(radiator.statesFM[3].p, (max(-radiator.m_flows[2], 1e-07) * tank.medium.h + max(radiator.m_flows[2], 1e-07) * radiator.mediums[1].h) / (max(-radiator.m_flows[2], 1e-07) + max(radiator.m_flows[2], 1e-07)), {}))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  (data->localData[0]->realVars[128] /* T_return variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData, omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData, (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */), DIVISION_SIM((fmax((-(data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)),1e-07)) * ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */)) + (fmax((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),1e-07)) * ((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */)),fmax((-(data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */)),1e-07) + fmax((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),1e-07),"max(-radiator.m_flows[2], 1e-07) + max(radiator.m_flows[2], 1e-07)",equationIndexes), _OMC_LIT116));
  TRACE_POP
}

/*
equation index: 256
type: SIMPLE_ASSIGN
tank.medium.p_bar = 1e-05 * tank.p_ambient
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[339] /* tank.medium.p_bar variable */) = (1e-05) * ((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */));
  TRACE_POP
}

/*
equation index: 257
type: SIMPLE_ASSIGN
pump.m = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[253] /* pump.m variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 258
type: SIMPLE_ASSIGN
tank.medium.sat.Tsat = Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.tsat(tank.p_ambient)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[340] /* tank.medium.sat.Tsat variable */) = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, (data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */));
  TRACE_POP
}

/*
equation index: 259
type: SIMPLE_ASSIGN
tank.heatPort.Q_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  (data->localData[0]->realVars[329] /* tank.heatPort.Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 260
type: SIMPLE_ASSIGN
pump.heatTransfer.heatPorts[1].Q_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  (data->localData[0]->realVars[250] /* pump.heatTransfer.heatPorts[1].Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 261
type: SIMPLE_ASSIGN
pump.mb_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  (data->localData[0]->realVars[255] /* pump.mb_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 262
type: SIMPLE_ASSIGN
heater.flowModel.Res_turbulent_internal[1] = 4000.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[142] /* heater.flowModel.Res_turbulent_internal[1] variable */) = 4000.0;
  TRACE_POP
}

/*
equation index: 263
type: SIMPLE_ASSIGN
heater.flowModel.Res_turbulent_internal[2] = 4000.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[143] /* heater.flowModel.Res_turbulent_internal[2] variable */) = 4000.0;
  TRACE_POP
}

/*
equation index: 264
type: SIMPLE_ASSIGN
heater.flowModel.Ib_flows[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[140] /* heater.flowModel.Ib_flows[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 265
type: SIMPLE_ASSIGN
heater.flowModel.Ib_flows[2] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  (data->localData[0]->realVars[141] /* heater.flowModel.Ib_flows[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 266
type: SIMPLE_ASSIGN
heater.pathLengths[1] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  (data->localData[0]->realVars[173] /* heater.pathLengths[1] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 267
type: SIMPLE_ASSIGN
heater.pathLengths[2] = 1.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[174] /* heater.pathLengths[2] variable */) = 1.0;
  TRACE_POP
}

/*
equation index: 268
type: SIMPLE_ASSIGN
heater.dheightsFM[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[136] /* heater.dheightsFM[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 269
type: SIMPLE_ASSIGN
heater.dheightsFM[2] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[137] /* heater.dheightsFM[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 270
type: SIMPLE_ASSIGN
radiator.flowModel.Res_turbulent_internal[1] = 4000.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[279] /* radiator.flowModel.Res_turbulent_internal[1] variable */) = 4000.0;
  TRACE_POP
}

/*
equation index: 271
type: SIMPLE_ASSIGN
radiator.flowModel.Res_turbulent_internal[2] = 4000.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[280] /* radiator.flowModel.Res_turbulent_internal[2] variable */) = 4000.0;
  TRACE_POP
}

/*
equation index: 272
type: SIMPLE_ASSIGN
radiator.flowModel.Ib_flows[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  (data->localData[0]->realVars[275] /* radiator.flowModel.Ib_flows[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 273
type: SIMPLE_ASSIGN
radiator.flowModel.Ib_flows[2] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[276] /* radiator.flowModel.Ib_flows[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 274
type: SIMPLE_ASSIGN
radiator.pathLengths[1] = 5.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  (data->localData[0]->realVars[312] /* radiator.pathLengths[1] variable */) = 5.0;
  TRACE_POP
}

/*
equation index: 275
type: SIMPLE_ASSIGN
radiator.pathLengths[2] = 5.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  (data->localData[0]->realVars[313] /* radiator.pathLengths[2] variable */) = 5.0;
  TRACE_POP
}

/*
equation index: 276
type: SIMPLE_ASSIGN
radiator.dheightsFM[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  (data->localData[0]->realVars[271] /* radiator.dheightsFM[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 277
type: SIMPLE_ASSIGN
radiator.dheightsFM[2] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  (data->localData[0]->realVars[272] /* radiator.dheightsFM[2] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 278
type: SIMPLE_ASSIGN
sensor_T_forward.port.m_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  (data->localData[0]->realVars[320] /* sensor_T_forward.port.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 279
type: SIMPLE_ASSIGN
sensor_T_return.port.m_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[322] /* sensor_T_return.port.m_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 280
type: SIMPLE_ASSIGN
pipe.flowModel.Res_turbulent_internal[1] = 4000.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  (data->localData[0]->realVars[192] /* pipe.flowModel.Res_turbulent_internal[1] variable */) = 4000.0;
  TRACE_POP
}

/*
equation index: 281
type: SIMPLE_ASSIGN
pipe.flowModel.Ib_flows[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[190] /* pipe.flowModel.Ib_flows[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 282
type: SIMPLE_ASSIGN
pipe.heatTransfer.heatPorts[1].Q_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[206] /* pipe.heatTransfer.heatPorts[1].Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 283
type: SIMPLE_ASSIGN
pipe.heatTransfer.heatPorts[2].Q_flow = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[207] /* pipe.heatTransfer.heatPorts[2].Q_flow variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 284
type: SIMPLE_ASSIGN
pipe.pathLengths[1] = 10.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  (data->localData[0]->realVars[234] /* pipe.pathLengths[1] variable */) = 10.0;
  TRACE_POP
}

/*
equation index: 285
type: SIMPLE_ASSIGN
pipe.dheightsFM[1] = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  (data->localData[0]->realVars[188] /* pipe.dheightsFM[1] variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 286
type: SIMPLE_ASSIGN
pump.fluidVolume = 0.0
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  (data->localData[0]->realVars[247] /* pump.fluidVolume variable */) = 0.0;
  TRACE_POP
}

/*
equation index: 287
type: SIMPLE_ASSIGN
pipe.flowModel.mus[2] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[197] /* pipe.flowModel.mus[2] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 288
type: SIMPLE_ASSIGN
pipe.flowModel.mus[1] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  (data->localData[0]->realVars[196] /* pipe.flowModel.mus[1] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 289
type: SIMPLE_ASSIGN
radiator.flowModel.mus[3] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[286] /* radiator.flowModel.mus[3] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 290
type: SIMPLE_ASSIGN
radiator.flowModel.mus[2] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[285] /* radiator.flowModel.mus[2] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 291
type: SIMPLE_ASSIGN
radiator.flowModel.mus[1] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[284] /* radiator.flowModel.mus[1] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 292
type: SIMPLE_ASSIGN
heater.flowModel.mus[3] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->realVars[149] /* heater.flowModel.mus[3] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 293
type: SIMPLE_ASSIGN
heater.flowModel.mus[2] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[148] /* heater.flowModel.mus[2] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 294
type: SIMPLE_ASSIGN
heater.flowModel.mus[1] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[147] /* heater.flowModel.mus[1] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 295
type: SIMPLE_ASSIGN
heater.flowModel.mus_act[1] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[150] /* heater.flowModel.mus_act[1] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 296
type: SIMPLE_ASSIGN
heater.flowModel.mus_act[2] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  (data->localData[0]->realVars[151] /* heater.flowModel.mus_act[2] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 297
type: SIMPLE_ASSIGN
radiator.flowModel.mus_act[1] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  (data->localData[0]->realVars[287] /* radiator.flowModel.mus_act[1] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 298
type: SIMPLE_ASSIGN
radiator.flowModel.mus_act[2] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[288] /* radiator.flowModel.mus_act[2] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 299
type: SIMPLE_ASSIGN
pipe.flowModel.mus_act[1] = 0.0008899999999999999
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[198] /* pipe.flowModel.mus_act[1] variable */) = 0.0008899999999999999;
  TRACE_POP
}

/*
equation index: 300
type: SIMPLE_ASSIGN
pump.medium.p_bar = 1e-05 * pump.p_b_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  (data->localData[0]->realVars[260] /* pump.medium.p_bar variable */) = (1e-05) * ((data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */));
  TRACE_POP
}
OMC_DISABLE_OPT
void Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_2(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_3(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_4(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_5(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_6(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_7(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_8(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_9(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_10(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_11(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_12(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_13(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_14(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_15(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_16(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_17(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_18(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_19(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_20(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_21(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_22(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_23(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_24(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_25(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_26(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_27(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_28(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_29(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_30(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_31(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_32(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_33(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_34(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_35(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_36(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_37(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_38(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_39(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_40(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_41(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_610(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_45(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_46(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_47(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_48(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_49(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_830(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_51(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_52(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_53(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_54(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_816(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_56(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_57(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_58(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_59(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_60(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_61(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_62(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_773(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_64(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_65(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_66(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_67(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_68(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_69(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_70(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_71(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_753(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_829(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_74(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_75(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_76(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_77(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_78(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_79(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_622(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_213(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_625(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_621(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_704(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_775(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_709(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_638(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_606(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_743(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_736(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_811(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_778(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_601(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_788(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_228(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_656(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_652(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_643(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_603(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_810(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_855(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_602(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_854(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_604(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_630(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_674(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_711(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_707(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_706(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_708(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_244(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_608(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_631(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_607(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_248(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_249(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_250(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_251(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_252(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_605(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_254(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_255(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_256(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_257(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_258(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_259(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_260(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_261(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_262(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_263(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_264(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_265(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_266(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_267(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_268(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_269(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_270(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_271(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_272(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_273(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_274(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_275(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_276(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_277(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_278(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_279(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_280(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_281(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_282(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_283(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_284(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_285(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_286(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_287(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_288(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_289(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_290(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_291(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_292(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_293(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_294(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_295(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_296(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_297(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_298(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_299(data, threadData);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_300(data, threadData);
  TRACE_POP
}

int Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_2(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_3(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_4(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_5(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_6(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_7(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_8(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_9(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_10(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_11(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_12(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_13(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_14(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_15(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_16(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_17(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_18(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_19(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_20(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_21(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_22(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_23(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_24(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_25(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_26(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_27(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_28(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_29(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_30(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_31(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_32(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_33(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_34(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_35(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_256(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_257(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_36(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_37(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_38(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_39(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_40(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_41(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_610(DATA *data, threadData_t *threadData);


/*
equation index: 347
type: SIMPLE_ASSIGN
pump.eta = Modelica.Fluid.Examples.HeatingSystem.pump.efficiencyCharacteristic(pump.V_flow_single_init, 0.8)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  (data->localData[0]->realVars[246] /* pump.eta variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData, (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */), 0.8);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_45(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_46(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_47(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_48(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_49(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_830(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_51(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_52(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_53(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_54(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_816(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_56(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_57(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_58(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_59(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_60(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_61(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_62(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_773(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_64(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_65(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_66(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_67(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_68(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_69(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_70(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_71(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_753(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_829(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_74(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_75(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_76(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_78(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_79(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_622(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(DATA *data, threadData_t *threadData);


void Modelica_Fluid_Examples_HeatingSystem_eqFunction_389(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_390(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_391(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_392(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_393(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_394(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_395(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_396(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_397(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_398(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_399(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_400(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_401(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_402(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_403(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_404(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_405(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_406(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_407(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_408(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_409(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_410(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_411(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_412(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_413(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_414(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_415(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_416(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_417(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_418(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_419(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_420(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_421(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_422(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_423(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_424(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_425(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_426(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_427(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_428(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_429(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_430(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_431(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_432(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_433(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_434(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_435(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_436(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_437(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_438(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_439(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_440(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_441(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_442(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_443(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_444(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_445(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_446(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_447(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_448(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_449(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_450(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_451(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_452(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_453(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_454(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_455(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_456(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_457(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_458(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_459(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_460(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_461(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_462(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_463(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_464(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_465(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_466(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_467(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_468(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_469(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_470(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_471(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_472(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_473(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_474(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_475(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_476(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_477(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_478(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_479(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_480(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_498(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_497(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_496(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_495(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_494(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_493(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_492(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_491(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_490(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_489(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_488(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_487(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_486(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_485(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_484(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_483(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_482(DATA*, threadData_t*);
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_481(DATA*, threadData_t*);
/*
equation index: 499
indexNonlinear: 1
type: NONLINEAR

vars: {tank.s[1], tank.s[2], tank.ports[2].p, sensor_m_flow.port_b.h_outflow, radiator.statesFM[1].p, heater.mediums[1].p, heater.mediums[1].d, radiator.mediums[1].p, radiator.mediums[1].d, radiator.statesFM[3].p, heater.mediums[1].h, pipe.mediums[1].d, pipe.mediums[1].p, pipe.mediums[2].p, pipe.mediums[2].h, radiator.mediums[1].h, m_flow, tank.medium.h}
eqns: {389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479, 480, 498, 497, 496, 495, 494, 493, 492, 491, 490, 489, 488, 487, 486, 485, 484, 483, 482, 481}
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 499 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[355] /* tank.s[1] variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[1] = (data->localData[0]->realVars[356] /* tank.s[2] variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[2] = (data->localData[0]->realVars[348] /* tank.ports[2].p variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[3] = (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[4] = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[5] = (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[6] = (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[7] = (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[8] = (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[9] = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[10] = (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[11] = (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[12] = (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[13] = (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[14] = (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[15] = (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[16] = (data->localData[0]->realVars[178] /* m_flow variable */);
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[17] = (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,499};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 499 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[355] /* tank.s[1] variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  (data->localData[0]->realVars[356] /* tank.s[2] variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[1];
  (data->localData[0]->realVars[348] /* tank.ports[2].p variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[2];
  (data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[3];
  (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[4];
  (data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[1].nlsx[5];
  (data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[1].nlsx[6];
  (data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[1].nlsx[7];
  (data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[1].nlsx[8];
  (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[9];
  (data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[1].nlsx[10];
  (data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[1].nlsx[11];
  (data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[1].nlsx[12];
  (data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */) = data->simulationInfo->nonlinearSystemData[1].nlsx[13];
  (data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[1].nlsx[14];
  (data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */) = data->simulationInfo->nonlinearSystemData[1].nlsx[15];
  (data->localData[0]->realVars[178] /* m_flow variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[16];
  (data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) = data->simulationInfo->nonlinearSystemData[1].nlsx[17];
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_811(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_775(DATA *data, threadData_t *threadData);


/*
equation index: 502
type: SIMPLE_ASSIGN
pump.V_flow = m_flow / pump.rho_nominal
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  (data->localData[0]->realVars[242] /* pump.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[178] /* m_flow variable */),(data->simulationInfo->realParameter[179] /* pump.rho_nominal PARAM */),"pump.rho_nominal",equationIndexes);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
pump.V_flow_single = pump.V_flow / (*Real*)(pump.nParallel)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  (data->localData[0]->realVars[243] /* pump.V_flow_single variable */) = DIVISION_SIM((data->localData[0]->realVars[242] /* pump.V_flow variable */),((modelica_real)(data->simulationInfo->integerParameter[36] /* pump.nParallel PARAM */)),"/*Real*/(pump.nParallel)",equationIndexes);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_709(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_736(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_602(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_652(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_803(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_608(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_630(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_667(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_674(DATA *data, threadData_t *threadData);


/*
equation index: 515
type: SIMPLE_ASSIGN
heater.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.heater.flowModel.Medium.ThermodynamicState(pump.p_b_nominal, heater.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp0;
  tmp0._p = (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */);
  tmp0._T = (data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */);
  (data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp0);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_711(DATA *data, threadData_t *threadData);


/*
equation index: 517
type: SIMPLE_ASSIGN
pump.heatTransfer.states[1].T = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + pump.p_b_nominal) - sensor_m_flow.port_b.h_outflow / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */) = 273.058616085119 + (-2.214479571349945e-07) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) - (DIVISION_SIM((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */),-4181.885502948851,"-4181.885502948851",equationIndexes));
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
pump.rho = 997.0480319717385 * (1.0 + 4.515426036491987e-10 * (-101325.0 + pump.p_b_nominal) + 0.0002571314017648316 * (298.15 - pump.heatTransfer.states[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  (data->localData[0]->realVars[263] /* pump.rho variable */) = (997.0480319717385) * (1.0 + (4.515426036491987e-10) * (-101325.0 + (data->simulationInfo->realParameter[174] /* pump.p_b_nominal PARAM */)) + (0.0002571314017648316) * (298.15 - (data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */)));
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_707(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_706(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_708(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_244(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_607(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_603(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_248(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_249(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_643(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_802(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_810(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_854(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_604(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_855(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_601(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_625(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_621(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_704(DATA *data, threadData_t *threadData);


/*
equation index: 537
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[3] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[3].p, radiator.statesFM[3].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp1;
  tmp1._p = (data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */);
  tmp1._T = (data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */);
  (data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp1);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_605(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_638(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_722(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_743(DATA *data, threadData_t *threadData);


/*
equation index: 542
type: SIMPLE_ASSIGN
radiator.flowModel.rhos[1] = Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.density(Modelica.Fluid.Examples.HeatingSystem.radiator.flowModel.Medium.ThermodynamicState(radiator.statesFM[1].p, radiator.statesFM[1].T))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp2;
  tmp2._p = (data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */);
  tmp2._T = (data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */);
  (data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */) = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp2);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_788(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_606(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_254(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_778(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_255(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_251(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_228(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_250(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_656(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_252(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_631(DATA *data, threadData_t *threadData);


/*
equation index: 555
type: SIMPLE_ASSIGN
pump.head = pump.dp_pump / (pump.rho * pump.g)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  (data->localData[0]->realVars[248] /* pump.head variable */) = DIVISION_SIM((data->localData[0]->realVars[245] /* pump.dp_pump variable */),((data->localData[0]->realVars[263] /* pump.rho variable */)) * ((data->simulationInfo->realParameter[160] /* pump.g PARAM */)),"pump.rho * pump.g",equationIndexes);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
pump.N = pump.head * pump.N_nominal / (Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single_init, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0}) + (pump.V_flow_single - pump.V_flow_single_init) * (if noEvent(abs(pump.V_flow_single_init) > 0.0) then 10.0 * pump.delta_head_init / pump.V_flow_single_init else 0.0))
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  real_array tmp3;
  real_array tmp4;
  modelica_boolean tmp5;
  array_alloc_scalar_real_array(&tmp3, 3, (modelica_real)0.0, (modelica_real)(data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */), (modelica_real)(1.5) * ((data->simulationInfo->realParameter[156] /* pump.V_flow_op PARAM */)));
  array_alloc_scalar_real_array(&tmp4, 3, (modelica_real)(2.0) * ((data->simulationInfo->realParameter[162] /* pump.head_op PARAM */)), (modelica_real)(data->simulationInfo->realParameter[162] /* pump.head_op PARAM */), (modelica_real)0.0);
  tmp5 = Greater(fabs((data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)),0.0);
  (data->localData[0]->realVars[240] /* pump.N variable */) = DIVISION_SIM(((data->localData[0]->realVars[248] /* pump.head variable */)) * ((data->simulationInfo->realParameter[153] /* pump.N_nominal PARAM */)),omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */), tmp3, tmp4) + ((data->localData[0]->realVars[243] /* pump.V_flow_single variable */) - (data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */)) * ((tmp5?DIVISION_SIM((10.0) * ((data->simulationInfo->realParameter[159] /* pump.delta_head_init PARAM */)),(data->simulationInfo->realParameter[157] /* pump.V_flow_single_init PARAM */),"pump.V_flow_single_init",equationIndexes):0.0)),"Modelica.Fluid.Examples.HeatingSystem.pump.flowCharacteristic(pump.V_flow_single_init, {0.0, pump.V_flow_op, 1.5 * pump.V_flow_op}, {2.0 * pump.head_op, pump.head_op, 0.0}) + (pump.V_flow_single - pump.V_flow_single_init) * (if noEvent(abs(pump.V_flow_single_init) > 0.0) then 10.0 * pump.delta_head_init / pump.V_flow_single_init else 0.0)",equationIndexes);
  TRACE_POP
}
extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_258(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_259(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_260(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_261(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_262(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_263(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_264(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_265(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_266(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_267(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_268(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_269(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_270(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_271(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_272(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_273(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_274(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_275(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_276(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_277(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_278(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_279(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_280(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_281(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_282(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_283(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_284(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_285(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_286(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_287(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_288(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_289(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_290(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_291(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_292(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_293(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_294(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_295(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_296(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_297(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_298(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_299(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_300(DATA *data, threadData_t *threadData);

extern void Modelica_Fluid_Examples_HeatingSystem_eqFunction_77(DATA *data, threadData_t *threadData);

int Modelica_Fluid_Examples_HeatingSystem_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_2(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_3(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_4(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_5(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_6(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_7(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_8(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_9(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_10(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_11(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_12(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_13(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_14(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_15(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_16(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_17(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_18(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_19(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_20(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_21(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_22(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_23(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_24(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_25(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_26(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_27(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_28(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_29(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_30(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_31(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_32(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_33(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_34(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_35(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_256(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_257(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_36(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_37(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_38(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_39(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_40(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_41(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_611(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_610(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_347(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_45(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_46(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_47(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_48(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_49(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_830(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_51(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_52(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_53(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_54(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_816(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_56(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_57(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_58(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_59(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_60(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_61(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_62(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_773(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_64(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_65(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_66(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_67(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_68(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_69(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_70(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_71(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_753(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_829(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_74(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_75(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_76(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_78(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_79(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_622(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_614(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_665(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_613(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_666(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_612(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_499(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_811(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_775(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_502(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_503(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_709(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_736(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_602(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_652(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_803(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_608(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_630(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_667(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_674(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_515(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_711(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_517(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_518(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_707(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_706(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_708(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_244(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_607(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_603(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_248(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_249(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_643(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_802(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_810(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_854(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_604(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_855(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_601(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_625(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_621(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_704(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_537(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_605(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_638(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_722(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_743(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_542(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_788(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_606(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_254(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_778(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_255(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_251(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_228(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_250(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_656(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_252(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_631(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_555(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_556(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_258(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_259(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_260(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_261(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_262(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_263(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_264(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_265(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_266(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_267(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_268(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_269(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_270(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_271(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_272(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_273(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_274(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_275(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_276(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_277(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_278(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_279(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_280(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_281(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_282(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_283(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_284(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_285(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_286(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_287(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_288(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_289(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_290(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_291(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_292(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_293(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_294(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_295(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_296(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_297(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_298(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_299(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_300(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_77(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

