/* Asserts */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1553
type: ALGORITHM

  assert(tank.level >= 0.0, "Variable violating min constraint: 0.0 <= tank.level, has value: " + String(tank.level, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1553};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,65,"Variable violating min constraint: 0.0 <= tank.level, has value: ");
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  static int tmp4 = 0;
  if(!tmp4)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[8] /* tank.level STATE(1) */),0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[8] /* tank.level STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3 = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        const char* assert_cond = "(tank.level >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",51,3,52,29,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",51,3,52,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3));
        }
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1554
type: ALGORITHM

  assert(tank.medium.h >= -10000000000.0 and tank.medium.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= tank.medium.h <= 10000000000.0, has value: " + String(tank.medium.h, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1554};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,100,"Variable violating min/max constraint: -10000000000.0 <= tank.medium.h <= 10000000000.0, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp5 = GreaterEq((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */),-10000000000.0);
    tmp6 = LessEq((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */),10000000000.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        const char* assert_cond = "(tank.medium.h >= -10000000000.0 and tank.medium.h <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1555
type: ALGORITHM

  assert(tank.medium.u >= -100000000.0 and tank.medium.u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= tank.medium.u <= 100000000.0, has value: " + String(tank.medium.u, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1555};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,96,"Variable violating min/max constraint: -100000000.0 <= tank.medium.u <= 100000000.0, has value: ");
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  static int tmp16 = 0;
  if(!tmp16)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */),-100000000.0);
    tmp12 = LessEq((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */),100000000.0);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[341] /* tank.medium.u DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta15 = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        const char* assert_cond = "(tank.medium.u >= -100000000.0 and tank.medium.u <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta15));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta15));
        }
      }
      tmp16 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1556
type: ALGORITHM

  assert(tank.m >= 0.0, "Variable violating min constraint: 0.0 <= tank.m, has value: " + String(tank.m, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1556};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,61,"Variable violating min constraint: 0.0 <= tank.m, has value: ");
  modelica_string tmp19;
  modelica_metatype tmpMeta20;
  static int tmp21 = 0;
  if(!tmp21)
  {
    tmp17 = GreaterEq((data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */),0.0);
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[333] /* tank.m DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta20 = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      {
        const char* assert_cond = "(tank.m >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",560,7,560,32,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",560,7,560,32,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta20));
        }
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1557
type: ALGORITHM

  assert(tank.ports[2].p >= 611.657 and tank.ports[2].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.ports[2].p <= 100000000.0, has value: " + String(tank.ports[2].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1557};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,93,"Variable violating min/max constraint: 611.657 <= tank.ports[2].p <= 100000000.0, has value: ");
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  static int tmp27 = 0;
  if(!tmp27)
  {
    tmp22 = GreaterEq((data->localData[0]->realVars[348] /* tank.ports[2].p variable */),611.657);
    tmp23 = LessEq((data->localData[0]->realVars[348] /* tank.ports[2].p variable */),100000000.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[348] /* tank.ports[2].p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta26 = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        const char* assert_cond = "(tank.ports[2].p >= 611.657 and tank.ports[2].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta26));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta26));
        }
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1558
type: ALGORITHM

  assert(tank.ports_H_flow[1] >= -100000000.0 and tank.ports_H_flow[1] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= tank.ports_H_flow[1] <= 100000000.0, has value: " + String(tank.ports_H_flow[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1558};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,103,"Variable violating min/max constraint: -100000000.0 <= tank.ports_H_flow[1] <= 100000000.0, has value: ");
  modelica_string tmp31;
  modelica_metatype tmpMeta32;
  static int tmp33 = 0;
  if(!tmp33)
  {
    tmp28 = GreaterEq((data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */),-100000000.0);
    tmp29 = LessEq((data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */),100000000.0);
    if(!(tmp28 && tmp29))
    {
      tmp31 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[351] /* tank.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta32 = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      {
        const char* assert_cond = "(tank.ports_H_flow[1] >= -100000000.0 and tank.ports_H_flow[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",214,9,214,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta32));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",214,9,214,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta32));
        }
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1559
type: ALGORITHM

  assert(tank.ports_H_flow[2] >= -100000000.0 and tank.ports_H_flow[2] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= tank.ports_H_flow[2] <= 100000000.0, has value: " + String(tank.ports_H_flow[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1559};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,103,"Variable violating min/max constraint: -100000000.0 <= tank.ports_H_flow[2] <= 100000000.0, has value: ");
  modelica_string tmp37;
  modelica_metatype tmpMeta38;
  static int tmp39 = 0;
  if(!tmp39)
  {
    tmp34 = GreaterEq((data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */),-100000000.0);
    tmp35 = LessEq((data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */),100000000.0);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[352] /* tank.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta38 = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        const char* assert_cond = "(tank.ports_H_flow[2] >= -100000000.0 and tank.ports_H_flow[2] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",214,9,214,53,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta38));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",214,9,214,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta38));
        }
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1560
type: ALGORITHM

  assert(tank.heatTransfer.states[1].phase >= 0 and tank.heatTransfer.states[1].phase <= 2, "Variable violating min/max constraint: 0 <= tank.heatTransfer.states[1].phase <= 2, has value: " + String(tank.heatTransfer.states[1].phase, "d"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1560};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,95,"Variable violating min/max constraint: 0 <= tank.heatTransfer.states[1].phase <= 2, has value: ");
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static int tmp45 = 0;
  if(!tmp45)
  {
    tmp40 = GreaterEq((data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */),((modelica_integer) 0));
    tmp41 = LessEq((data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */),((modelica_integer) 2));
    if(!(tmp40 && tmp41))
    {
      tmp43 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[6] /* tank.heatTransfer.states[1].phase DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta44 = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        const char* assert_cond = "(tank.heatTransfer.states[1].phase >= 0 and tank.heatTransfer.states[1].phase <= 2)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5297,7,5298,101,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta44));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5297,7,5298,101,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta44));
        }
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1561
type: ALGORITHM

  assert(tank.heatTransfer.states[1].d >= 0.0 and tank.heatTransfer.states[1].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= tank.heatTransfer.states[1].d <= 100000.0, has value: " + String(tank.heatTransfer.states[1].d, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1561};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,100,"Variable violating min/max constraint: 0.0 <= tank.heatTransfer.states[1].d <= 100000.0, has value: ");
  modelica_string tmp49;
  modelica_metatype tmpMeta50;
  static int tmp51 = 0;
  if(!tmp51)
  {
    tmp46 = GreaterEq((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */),0.0);
    tmp47 = LessEq((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */),100000.0);
    if(!(tmp46 && tmp47))
    {
      tmp49 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[331] /* tank.heatTransfer.states[1].d DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta50 = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      {
        const char* assert_cond = "(tank.heatTransfer.states[1].d >= 0.0 and tank.heatTransfer.states[1].d <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/package.mo",138,5,138,24,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta50));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/package.mo",138,5,138,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta50));
        }
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1562
type: ALGORITHM

  assert(tank.heatTransfer.Ts[1] >= 273.15 and tank.heatTransfer.Ts[1] <= 2273.15, "Variable violating min/max constraint: 273.15 <= tank.heatTransfer.Ts[1] <= 2273.15, has value: " + String(tank.heatTransfer.Ts[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1562};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,96,"Variable violating min/max constraint: 273.15 <= tank.heatTransfer.Ts[1] <= 2273.15, has value: ");
  modelica_string tmp55;
  modelica_metatype tmpMeta56;
  static int tmp57 = 0;
  if(!tmp57)
  {
    tmp52 = GreaterEq((data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */),273.15);
    tmp53 = LessEq((data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */),2273.15);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[330] /* tank.heatTransfer.Ts[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta56 = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        const char* assert_cond = "(tank.heatTransfer.Ts[1] >= 273.15 and tank.heatTransfer.Ts[1] <= 2273.15)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta56));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta56));
        }
      }
      tmp57 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1563
type: ALGORITHM

  assert(tank.portInDensities[1] >= 0.0 and tank.portInDensities[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= tank.portInDensities[1] <= 100000.0, has value: " + String(tank.portInDensities[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1563};
  modelica_boolean tmp58;
  modelica_boolean tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,94,"Variable violating min/max constraint: 0.0 <= tank.portInDensities[1] <= 100000.0, has value: ");
  modelica_string tmp61;
  modelica_metatype tmpMeta62;
  static int tmp63 = 0;
  if(!tmp63)
  {
    tmp58 = GreaterEq((data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */),0.0);
    tmp59 = LessEq((data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */),100000.0);
    if(!(tmp58 && tmp59))
    {
      tmp61 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[344] /* tank.portInDensities[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta62 = stringAppend(MMC_REFSTRINGLIT(tmp60),tmp61);
      {
        const char* assert_cond = "(tank.portInDensities[1] >= 0.0 and tank.portInDensities[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",245,9,246,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta62));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",245,9,246,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta62));
        }
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1564
type: ALGORITHM

  assert(tank.portInDensities[2] >= 0.0 and tank.portInDensities[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= tank.portInDensities[2] <= 100000.0, has value: " + String(tank.portInDensities[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1564};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,94,"Variable violating min/max constraint: 0.0 <= tank.portInDensities[2] <= 100000.0, has value: ");
  modelica_string tmp67;
  modelica_metatype tmpMeta68;
  static int tmp69 = 0;
  if(!tmp69)
  {
    tmp64 = GreaterEq((data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */),0.0);
    tmp65 = LessEq((data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */),100000.0);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[345] /* tank.portInDensities[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta68 = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        const char* assert_cond = "(tank.portInDensities[2] >= 0.0 and tank.portInDensities[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",245,9,246,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta68));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",245,9,246,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta68));
        }
      }
      tmp69 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1565
type: ALGORITHM

  assert(tank.vessel_ps_static[1] >= 611.657 and tank.vessel_ps_static[1] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.vessel_ps_static[1] <= 100000000.0, has value: " + String(tank.vessel_ps_static[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1565};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,102,"Variable violating min/max constraint: 611.657 <= tank.vessel_ps_static[1] <= 100000000.0, has value: ");
  modelica_string tmp73;
  modelica_metatype tmpMeta74;
  static int tmp75 = 0;
  if(!tmp75)
  {
    tmp70 = GreaterEq((data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */),611.657);
    tmp71 = LessEq((data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */),100000000.0);
    if(!(tmp70 && tmp71))
    {
      tmp73 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[357] /* tank.vessel_ps_static[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta74 = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        const char* assert_cond = "(tank.vessel_ps_static[1] >= 611.657 and tank.vessel_ps_static[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",260,9,261,106,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",260,9,261,106,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta74));
        }
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1566
type: ALGORITHM

  assert(tank.vessel_ps_static[2] >= 611.657 and tank.vessel_ps_static[2] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= tank.vessel_ps_static[2] <= 100000000.0, has value: " + String(tank.vessel_ps_static[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1566};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,102,"Variable violating min/max constraint: 611.657 <= tank.vessel_ps_static[2] <= 100000000.0, has value: ");
  modelica_string tmp79;
  modelica_metatype tmpMeta80;
  static int tmp81 = 0;
  if(!tmp81)
  {
    tmp76 = GreaterEq((data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */),611.657);
    tmp77 = LessEq((data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */),100000000.0);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[358] /* tank.vessel_ps_static[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta80 = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        const char* assert_cond = "(tank.vessel_ps_static[2] >= 611.657 and tank.vessel_ps_static[2] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",260,9,261,106,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta80));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Vessels.mo",260,9,261,106,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta80));
        }
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1567
type: ALGORITHM

  assert(pump.medium.u >= -100000000.0 and pump.medium.u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= pump.medium.u <= 100000000.0, has value: " + String(pump.medium.u, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1567};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,96,"Variable violating min/max constraint: -100000000.0 <= pump.medium.u <= 100000000.0, has value: ");
  modelica_string tmp85;
  modelica_metatype tmpMeta86;
  static int tmp87 = 0;
  if(!tmp87)
  {
    tmp82 = GreaterEq((data->localData[0]->realVars[261] /* pump.medium.u variable */),-100000000.0);
    tmp83 = LessEq((data->localData[0]->realVars[261] /* pump.medium.u variable */),100000000.0);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[261] /* pump.medium.u variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta86 = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        const char* assert_cond = "(pump.medium.u >= -100000000.0 and pump.medium.u <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta86));
        }
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1568
type: ALGORITHM

  assert(pump.heatTransfer.states[1].T >= 1.0 and pump.heatTransfer.states[1].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= pump.heatTransfer.states[1].T <= 10000.0, has value: " + String(pump.heatTransfer.states[1].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1568};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  static const MMC_DEFSTRINGLIT(tmp90,99,"Variable violating min/max constraint: 1.0 <= pump.heatTransfer.states[1].T <= 10000.0, has value: ");
  modelica_string tmp91;
  modelica_metatype tmpMeta92;
  static int tmp93 = 0;
  if(!tmp93)
  {
    tmp88 = GreaterEq((data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */),1.0);
    tmp89 = LessEq((data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */),10000.0);
    if(!(tmp88 && tmp89))
    {
      tmp91 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[251] /* pump.heatTransfer.states[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta92 = stringAppend(MMC_REFSTRINGLIT(tmp90),tmp91);
      {
        const char* assert_cond = "(pump.heatTransfer.states[1].T >= 1.0 and pump.heatTransfer.states[1].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta92));
        }
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1569
type: ALGORITHM

  assert(pump.heatTransfer.Ts[1] >= 0.0, "Variable violating min constraint: 0.0 <= pump.heatTransfer.Ts[1], has value: " + String(pump.heatTransfer.Ts[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1569};
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,78,"Variable violating min constraint: 0.0 <= pump.heatTransfer.Ts[1], has value: ");
  modelica_string tmp96;
  modelica_metatype tmpMeta97;
  static int tmp98 = 0;
  if(!tmp98)
  {
    tmp94 = GreaterEq((data->localData[0]->realVars[249] /* pump.heatTransfer.Ts[1] variable */),0.0);
    if(!tmp94)
    {
      tmp96 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[249] /* pump.heatTransfer.Ts[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta97 = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      {
        const char* assert_cond = "(pump.heatTransfer.Ts[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta97));
        }
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1570
type: ALGORITHM

  assert(pump.rho >= 0.0 and pump.rho <= 100000.0, "Variable violating min/max constraint: 0.0 <= pump.rho <= 100000.0, has value: " + String(pump.rho, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1570};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,79,"Variable violating min/max constraint: 0.0 <= pump.rho <= 100000.0, has value: ");
  modelica_string tmp102;
  modelica_metatype tmpMeta103;
  static int tmp104 = 0;
  if(!tmp104)
  {
    tmp99 = GreaterEq((data->localData[0]->realVars[263] /* pump.rho variable */),0.0);
    tmp100 = LessEq((data->localData[0]->realVars[263] /* pump.rho variable */),100000.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[263] /* pump.rho variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta103 = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        const char* assert_cond = "(pump.rho >= 0.0 and pump.rho <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",399,5,399,34,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",399,5,399,34,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta103));
        }
      }
      tmp104 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1571
type: ALGORITHM

  assert(pump.monitoring.state_in.T >= 1.0 and pump.monitoring.state_in.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= pump.monitoring.state_in.T <= 10000.0, has value: " + String(pump.monitoring.state_in.T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1571};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,96,"Variable violating min/max constraint: 1.0 <= pump.monitoring.state_in.T <= 10000.0, has value: ");
  modelica_string tmp108;
  modelica_metatype tmpMeta109;
  static int tmp110 = 0;
  if(!tmp110)
  {
    tmp105 = GreaterEq((data->localData[0]->realVars[262] /* pump.monitoring.state_in.T variable */),1.0);
    tmp106 = LessEq((data->localData[0]->realVars[262] /* pump.monitoring.state_in.T variable */),10000.0);
    if(!(tmp105 && tmp106))
    {
      tmp108 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[262] /* pump.monitoring.state_in.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta109 = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        const char* assert_cond = "(pump.monitoring.state_in.T >= 1.0 and pump.monitoring.state_in.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta109));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta109));
        }
      }
      tmp110 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1572
type: ALGORITHM

  assert(valve.port_a_T >= 1.0 and valve.port_a_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= valve.port_a_T <= 10000.0, has value: " + String(valve.port_a_T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1572};
  modelica_boolean tmp111;
  modelica_boolean tmp112;
  static const MMC_DEFSTRINGLIT(tmp113,84,"Variable violating min/max constraint: 1.0 <= valve.port_a_T <= 10000.0, has value: ");
  modelica_string tmp114;
  modelica_metatype tmpMeta115;
  static int tmp116 = 0;
  if(!tmp116)
  {
    tmp111 = GreaterEq((data->localData[0]->realVars[363] /* valve.port_a_T variable */),1.0);
    tmp112 = LessEq((data->localData[0]->realVars[363] /* valve.port_a_T variable */),10000.0);
    if(!(tmp111 && tmp112))
    {
      tmp114 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[363] /* valve.port_a_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta115 = stringAppend(MMC_REFSTRINGLIT(tmp113),tmp114);
      {
        const char* assert_cond = "(valve.port_a_T >= 1.0 and valve.port_a_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",319,3,324,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta115));
        }
      }
      tmp116 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1573
type: ALGORITHM

  assert(valve.port_b_T >= 1.0 and valve.port_b_T <= 10000.0, "Variable violating min/max constraint: 1.0 <= valve.port_b_T <= 10000.0, has value: " + String(valve.port_b_T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1573};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,84,"Variable violating min/max constraint: 1.0 <= valve.port_b_T <= 10000.0, has value: ");
  modelica_string tmp120;
  modelica_metatype tmpMeta121;
  static int tmp122 = 0;
  if(!tmp122)
  {
    tmp117 = GreaterEq((data->localData[0]->realVars[364] /* valve.port_b_T variable */),1.0);
    tmp118 = LessEq((data->localData[0]->realVars[364] /* valve.port_b_T variable */),10000.0);
    if(!(tmp117 && tmp118))
    {
      tmp120 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[364] /* valve.port_b_T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta121 = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        const char* assert_cond = "(valve.port_b_T >= 1.0 and valve.port_b_T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta121));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",325,3,330,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta121));
        }
      }
      tmp122 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1574
type: ALGORITHM

  assert(valve.state_a.T >= 1.0 and valve.state_a.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= valve.state_a.T <= 10000.0, has value: " + String(valve.state_a.T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1574};
  modelica_boolean tmp123;
  modelica_boolean tmp124;
  static const MMC_DEFSTRINGLIT(tmp125,85,"Variable violating min/max constraint: 1.0 <= valve.state_a.T <= 10000.0, has value: ");
  modelica_string tmp126;
  modelica_metatype tmpMeta127;
  static int tmp128 = 0;
  if(!tmp128)
  {
    tmp123 = GreaterEq((data->localData[0]->realVars[366] /* valve.state_a.T variable */),1.0);
    tmp124 = LessEq((data->localData[0]->realVars[366] /* valve.state_a.T variable */),10000.0);
    if(!(tmp123 && tmp124))
    {
      tmp126 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[366] /* valve.state_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta127 = stringAppend(MMC_REFSTRINGLIT(tmp125),tmp126);
      {
        const char* assert_cond = "(valve.state_a.T >= 1.0 and valve.state_a.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta127));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta127));
        }
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1575
type: ALGORITHM

  assert(valve.state_b.T >= 1.0 and valve.state_b.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= valve.state_b.T <= 10000.0, has value: " + String(valve.state_b.T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1575};
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,85,"Variable violating min/max constraint: 1.0 <= valve.state_b.T <= 10000.0, has value: ");
  modelica_string tmp132;
  modelica_metatype tmpMeta133;
  static int tmp134 = 0;
  if(!tmp134)
  {
    tmp129 = GreaterEq((data->localData[0]->realVars[367] /* valve.state_b.T variable */),1.0);
    tmp130 = LessEq((data->localData[0]->realVars[367] /* valve.state_b.T variable */),10000.0);
    if(!(tmp129 && tmp130))
    {
      tmp132 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[367] /* valve.state_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta133 = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        const char* assert_cond = "(valve.state_b.T >= 1.0 and valve.state_b.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta133));
        }
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1576
type: ALGORITHM

  assert(m_flow >= 0.0 and m_flow <= 100000.0, "Variable violating min/max constraint: 0.0 <= m_flow <= 100000.0, has value: " + String(m_flow, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1576};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,77,"Variable violating min/max constraint: 0.0 <= m_flow <= 100000.0, has value: ");
  modelica_string tmp138;
  modelica_metatype tmpMeta139;
  static int tmp140 = 0;
  if(!tmp140)
  {
    tmp135 = GreaterEq((data->localData[0]->realVars[178] /* m_flow variable */),0.0);
    tmp136 = LessEq((data->localData[0]->realVars[178] /* m_flow variable */),100000.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[178] /* m_flow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta139 = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        const char* assert_cond = "(m_flow >= 0.0 and m_flow <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Programmes/OpenModelica/share/OMSens/resource/HeatingSystemfonctional.mo",44,3,45,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta139));
        } else {
          FILE_INFO info = {"C:/Programmes/OpenModelica/share/OMSens/resource/HeatingSystemfonctional.mo",44,3,45,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta139));
        }
      }
      tmp140 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1577
type: ALGORITHM

  assert(sensor_m_flow.port_b.h_outflow >= -10000000000.0 and sensor_m_flow.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sensor_m_flow.port_b.h_outflow <= 10000000000.0, has value: " + String(sensor_m_flow.port_b.h_outflow, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1577};
  modelica_boolean tmp141;
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,117,"Variable violating min/max constraint: -10000000000.0 <= sensor_m_flow.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp144;
  modelica_metatype tmpMeta145;
  static int tmp146 = 0;
  if(!tmp146)
  {
    tmp141 = GreaterEq((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */),-10000000000.0);
    tmp142 = LessEq((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */),10000000000.0);
    if(!(tmp141 && tmp142))
    {
      tmp144 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[323] /* sensor_m_flow.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta145 = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        const char* assert_cond = "(sensor_m_flow.port_b.h_outflow >= -10000000000.0 and sensor_m_flow.port_b.h_outflow <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta145));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta145));
        }
      }
      tmp146 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1578
type: ALGORITHM

  assert(heater.ms[1] >= 0.0, "Variable violating min constraint: 0.0 <= heater.ms[1], has value: " + String(heater.ms[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1578};
  modelica_boolean tmp147;
  static const MMC_DEFSTRINGLIT(tmp148,67,"Variable violating min constraint: 0.0 <= heater.ms[1], has value: ");
  modelica_string tmp149;
  modelica_metatype tmpMeta150;
  static int tmp151 = 0;
  if(!tmp151)
  {
    tmp147 = GreaterEq((data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */),0.0);
    if(!tmp147)
    {
      tmp149 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[172] /* heater.ms[1] DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta150 = stringAppend(MMC_REFSTRINGLIT(tmp148),tmp149);
      {
        const char* assert_cond = "(heater.ms[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta150));
        }
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1579
type: ALGORITHM

  assert(heater.mediums[1].p >= 0.0 and heater.mediums[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= heater.mediums[1].p <= 100000000.0, has value: " + String(heater.mediums[1].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1579};
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,93,"Variable violating min/max constraint: 0.0 <= heater.mediums[1].p <= 100000000.0, has value: ");
  modelica_string tmp155;
  modelica_metatype tmpMeta156;
  static int tmp157 = 0;
  if(!tmp157)
  {
    tmp152 = GreaterEq((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */),0.0);
    tmp153 = LessEq((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */),100000000.0);
    if(!(tmp152 && tmp153))
    {
      tmp155 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[1] /* heater.mediums[1].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta156 = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        const char* assert_cond = "(heater.mediums[1].p >= 0.0 and heater.mediums[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta156));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta156));
        }
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1580
type: ALGORITHM

  assert(heater.mediums[1].h >= -10000000000.0 and heater.mediums[1].h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= heater.mediums[1].h <= 10000000000.0, has value: " + String(heater.mediums[1].h, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1580};
  modelica_boolean tmp158;
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,106,"Variable violating min/max constraint: -10000000000.0 <= heater.mediums[1].h <= 10000000000.0, has value: ");
  modelica_string tmp161;
  modelica_metatype tmpMeta162;
  static int tmp163 = 0;
  if(!tmp163)
  {
    tmp158 = GreaterEq((data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */),-10000000000.0);
    tmp159 = LessEq((data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */),10000000000.0);
    if(!(tmp158 && tmp159))
    {
      tmp161 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[169] /* heater.mediums[1].h DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta162 = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        const char* assert_cond = "(heater.mediums[1].h >= -10000000000.0 and heater.mediums[1].h <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta162));
        }
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1581
type: ALGORITHM

  assert(heater.mediums[1].d >= 0.0 and heater.mediums[1].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= heater.mediums[1].d <= 100000.0, has value: " + String(heater.mediums[1].d, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1581};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,90,"Variable violating min/max constraint: 0.0 <= heater.mediums[1].d <= 100000.0, has value: ");
  modelica_string tmp167;
  modelica_metatype tmpMeta168;
  static int tmp169 = 0;
  if(!tmp169)
  {
    tmp164 = GreaterEq((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),0.0);
    tmp165 = LessEq((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),100000.0);
    if(!(tmp164 && tmp165))
    {
      tmp167 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta168 = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        const char* assert_cond = "(heater.mediums[1].d >= 0.0 and heater.mediums[1].d <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta168));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta168));
        }
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1582
type: ALGORITHM

  assert(heater.mediums[1].T >= 1.0 and heater.mediums[1].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= heater.mediums[1].T <= 10000.0, has value: " + String(heater.mediums[1].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1582};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,89,"Variable violating min/max constraint: 1.0 <= heater.mediums[1].T <= 10000.0, has value: ");
  modelica_string tmp173;
  modelica_metatype tmpMeta174;
  static int tmp175 = 0;
  if(!tmp175)
  {
    tmp170 = GreaterEq((data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */),1.0);
    tmp171 = LessEq((data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */),10000.0);
    if(!(tmp170 && tmp171))
    {
      tmp173 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[0] /* heater.mediums[1].T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta174 = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        const char* assert_cond = "(heater.mediums[1].T >= 1.0 and heater.mediums[1].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta174));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta174));
        }
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1583
type: ALGORITHM

  assert(heater.mediums[1].u >= -100000000.0 and heater.mediums[1].u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= heater.mediums[1].u <= 100000000.0, has value: " + String(heater.mediums[1].u, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1583};
  modelica_boolean tmp176;
  modelica_boolean tmp177;
  static const MMC_DEFSTRINGLIT(tmp178,102,"Variable violating min/max constraint: -100000000.0 <= heater.mediums[1].u <= 100000000.0, has value: ");
  modelica_string tmp179;
  modelica_metatype tmpMeta180;
  static int tmp181 = 0;
  if(!tmp181)
  {
    tmp176 = GreaterEq((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */),-100000000.0);
    tmp177 = LessEq((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */),100000000.0);
    if(!(tmp176 && tmp177))
    {
      tmp179 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[171] /* heater.mediums[1].u DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta180 = stringAppend(MMC_REFSTRINGLIT(tmp178),tmp179);
      {
        const char* assert_cond = "(heater.mediums[1].u >= -100000000.0 and heater.mediums[1].u <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta180));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta180));
        }
      }
      tmp181 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1584
type: ALGORITHM

  assert(heater.mb_flows[1] >= -100000.0 and heater.mb_flows[1] <= 100000.0, "Variable violating min/max constraint: -100000.0 <= heater.mb_flows[1] <= 100000.0, has value: " + String(heater.mb_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1584};
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  static const MMC_DEFSTRINGLIT(tmp184,95,"Variable violating min/max constraint: -100000.0 <= heater.mb_flows[1] <= 100000.0, has value: ");
  modelica_string tmp185;
  modelica_metatype tmpMeta186;
  static int tmp187 = 0;
  if(!tmp187)
  {
    tmp182 = GreaterEq((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */),-100000.0);
    tmp183 = LessEq((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */),100000.0);
    if(!(tmp182 && tmp183))
    {
      tmp185 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[163] /* heater.mb_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta186 = stringAppend(MMC_REFSTRINGLIT(tmp184),tmp185);
      {
        const char* assert_cond = "(heater.mb_flows[1] >= -100000.0 and heater.mb_flows[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta186));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta186));
        }
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1585
type: ALGORITHM

  assert(heater.statesFM[1].T >= 1.0 and heater.statesFM[1].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= heater.statesFM[1].T <= 10000.0, has value: " + String(heater.statesFM[1].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1585};
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,90,"Variable violating min/max constraint: 1.0 <= heater.statesFM[1].T <= 10000.0, has value: ");
  modelica_string tmp191;
  modelica_metatype tmpMeta192;
  static int tmp193 = 0;
  if(!tmp193)
  {
    tmp188 = GreaterEq((data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */),1.0);
    tmp189 = LessEq((data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */),10000.0);
    if(!(tmp188 && tmp189))
    {
      tmp191 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[175] /* heater.statesFM[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta192 = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        const char* assert_cond = "(heater.statesFM[1].T >= 1.0 and heater.statesFM[1].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta192));
        }
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1586
type: ALGORITHM

  assert(heater.statesFM[3].T >= 1.0 and heater.statesFM[3].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= heater.statesFM[3].T <= 10000.0, has value: " + String(heater.statesFM[3].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1586};
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  static const MMC_DEFSTRINGLIT(tmp196,90,"Variable violating min/max constraint: 1.0 <= heater.statesFM[3].T <= 10000.0, has value: ");
  modelica_string tmp197;
  modelica_metatype tmpMeta198;
  static int tmp199 = 0;
  if(!tmp199)
  {
    tmp194 = GreaterEq((data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */),1.0);
    tmp195 = LessEq((data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */),10000.0);
    if(!(tmp194 && tmp195))
    {
      tmp197 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[176] /* heater.statesFM[3].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta198 = stringAppend(MMC_REFSTRINGLIT(tmp196),tmp197);
      {
        const char* assert_cond = "(heater.statesFM[3].T >= 1.0 and heater.statesFM[3].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta198));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta198));
        }
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1587
type: ALGORITHM

  assert(heater.flowModel.rhos[1] >= 0.0 and heater.flowModel.rhos[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos[1] <= 100000.0, has value: " + String(heater.flowModel.rhos[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1587};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,95,"Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos[1] <= 100000.0, has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp200 = GreaterEq((data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */),0.0);
    tmp201 = LessEq((data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */),100000.0);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[152] /* heater.flowModel.rhos[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        const char* assert_cond = "(heater.flowModel.rhos[1] >= 0.0 and heater.flowModel.rhos[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1588
type: ALGORITHM

  assert(heater.flowModel.rhos[2] >= 0.0 and heater.flowModel.rhos[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos[2] <= 100000.0, has value: " + String(heater.flowModel.rhos[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1588};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,95,"Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos[2] <= 100000.0, has value: ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static int tmp211 = 0;
  if(!tmp211)
  {
    tmp206 = GreaterEq((data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */),0.0);
    tmp207 = LessEq((data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */),100000.0);
    if(!(tmp206 && tmp207))
    {
      tmp209 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[153] /* heater.flowModel.rhos[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        const char* assert_cond = "(heater.flowModel.rhos[2] >= 0.0 and heater.flowModel.rhos[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        }
      }
      tmp211 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1589
type: ALGORITHM

  assert(heater.flowModel.rhos[3] >= 0.0 and heater.flowModel.rhos[3] <= 100000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos[3] <= 100000.0, has value: " + String(heater.flowModel.rhos[3], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1589};
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  static const MMC_DEFSTRINGLIT(tmp214,95,"Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos[3] <= 100000.0, has value: ");
  modelica_string tmp215;
  modelica_metatype tmpMeta216;
  static int tmp217 = 0;
  if(!tmp217)
  {
    tmp212 = GreaterEq((data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */),0.0);
    tmp213 = LessEq((data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */),100000.0);
    if(!(tmp212 && tmp213))
    {
      tmp215 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[154] /* heater.flowModel.rhos[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta216 = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      {
        const char* assert_cond = "(heater.flowModel.rhos[3] >= 0.0 and heater.flowModel.rhos[3] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        }
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1590
type: ALGORITHM

  assert(heater.flowModel.rhos_act[1] >= 0.0 and heater.flowModel.rhos_act[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos_act[1] <= 100000.0, has value: " + String(heater.flowModel.rhos_act[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,99,"Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos_act[1] <= 100000.0, has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp218 = GreaterEq((data->localData[0]->realVars[155] /* heater.flowModel.rhos_act[1] variable */),0.0);
    tmp219 = LessEq((data->localData[0]->realVars[155] /* heater.flowModel.rhos_act[1] variable */),100000.0);
    if(!(tmp218 && tmp219))
    {
      tmp221 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[155] /* heater.flowModel.rhos_act[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(heater.flowModel.rhos_act[1] >= 0.0 and heater.flowModel.rhos_act[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1591
type: ALGORITHM

  assert(heater.flowModel.rhos_act[2] >= 0.0 and heater.flowModel.rhos_act[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos_act[2] <= 100000.0, has value: " + String(heater.flowModel.rhos_act[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,99,"Variable violating min/max constraint: 0.0 <= heater.flowModel.rhos_act[2] <= 100000.0, has value: ");
  modelica_string tmp227;
  modelica_metatype tmpMeta228;
  static int tmp229 = 0;
  if(!tmp229)
  {
    tmp224 = GreaterEq((data->localData[0]->realVars[156] /* heater.flowModel.rhos_act[2] variable */),0.0);
    tmp225 = LessEq((data->localData[0]->realVars[156] /* heater.flowModel.rhos_act[2] variable */),100000.0);
    if(!(tmp224 && tmp225))
    {
      tmp227 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[156] /* heater.flowModel.rhos_act[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta228 = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        const char* assert_cond = "(heater.flowModel.rhos_act[2] >= 0.0 and heater.flowModel.rhos_act[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        }
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1592
type: ALGORITHM

  assert(heater.H_flows[1] >= -100000000.0 and heater.H_flows[1] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= heater.H_flows[1] <= 100000000.0, has value: " + String(heater.H_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,100,"Variable violating min/max constraint: -100000000.0 <= heater.H_flows[1] <= 100000000.0, has value: ");
  modelica_string tmp233;
  modelica_metatype tmpMeta234;
  static int tmp235 = 0;
  if(!tmp235)
  {
    tmp230 = GreaterEq((data->localData[0]->realVars[130] /* heater.H_flows[1] variable */),-100000000.0);
    tmp231 = LessEq((data->localData[0]->realVars[130] /* heater.H_flows[1] variable */),100000000.0);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[130] /* heater.H_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta234 = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        const char* assert_cond = "(heater.H_flows[1] >= -100000000.0 and heater.H_flows[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta234));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta234));
        }
      }
      tmp235 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1593
type: ALGORITHM

  assert(heater.H_flows[2] >= -100000000.0 and heater.H_flows[2] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= heater.H_flows[2] <= 100000000.0, has value: " + String(heater.H_flows[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,100,"Variable violating min/max constraint: -100000000.0 <= heater.H_flows[2] <= 100000000.0, has value: ");
  modelica_string tmp239;
  modelica_metatype tmpMeta240;
  static int tmp241 = 0;
  if(!tmp241)
  {
    tmp236 = GreaterEq((data->localData[0]->realVars[131] /* heater.H_flows[2] variable */),-100000000.0);
    tmp237 = LessEq((data->localData[0]->realVars[131] /* heater.H_flows[2] variable */),100000000.0);
    if(!(tmp236 && tmp237))
    {
      tmp239 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[131] /* heater.H_flows[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta240 = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        const char* assert_cond = "(heater.H_flows[2] >= -100000000.0 and heater.H_flows[2] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta240));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta240));
        }
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1594
type: ALGORITHM

  assert(heater.heatTransfer.Ts[1] >= 0.0, "Variable violating min constraint: 0.0 <= heater.heatTransfer.Ts[1], has value: " + String(heater.heatTransfer.Ts[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  modelica_boolean tmp242;
  static const MMC_DEFSTRINGLIT(tmp243,80,"Variable violating min constraint: 0.0 <= heater.heatTransfer.Ts[1], has value: ");
  modelica_string tmp244;
  modelica_metatype tmpMeta245;
  static int tmp246 = 0;
  if(!tmp246)
  {
    tmp242 = GreaterEq((data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */),0.0);
    if(!tmp242)
    {
      tmp244 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[160] /* heater.heatTransfer.Ts[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta245 = stringAppend(MMC_REFSTRINGLIT(tmp243),tmp244);
      {
        const char* assert_cond = "(heater.heatTransfer.Ts[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta245));
        }
      }
      tmp246 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1595
type: ALGORITHM

  assert(radiator.ms[1] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.ms[1], has value: " + String(radiator.ms[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  modelica_boolean tmp247;
  static const MMC_DEFSTRINGLIT(tmp248,69,"Variable violating min constraint: 0.0 <= radiator.ms[1], has value: ");
  modelica_string tmp249;
  modelica_metatype tmpMeta250;
  static int tmp251 = 0;
  if(!tmp251)
  {
    tmp247 = GreaterEq((data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */),0.0);
    if(!tmp247)
    {
      tmp249 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[311] /* radiator.ms[1] DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta250 = stringAppend(MMC_REFSTRINGLIT(tmp248),tmp249);
      {
        const char* assert_cond = "(radiator.ms[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta250));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta250));
        }
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1596
type: ALGORITHM

  assert(radiator.mediums[1].p >= 0.0 and radiator.mediums[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.mediums[1].p <= 100000000.0, has value: " + String(radiator.mediums[1].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,95,"Variable violating min/max constraint: 0.0 <= radiator.mediums[1].p <= 100000000.0, has value: ");
  modelica_string tmp255;
  modelica_metatype tmpMeta256;
  static int tmp257 = 0;
  if(!tmp257)
  {
    tmp252 = GreaterEq((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */),0.0);
    tmp253 = LessEq((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */),100000000.0);
    if(!(tmp252 && tmp253))
    {
      tmp255 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[7] /* radiator.mediums[1].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta256 = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        const char* assert_cond = "(radiator.mediums[1].p >= 0.0 and radiator.mediums[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta256));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta256));
        }
      }
      tmp257 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1597
type: ALGORITHM

  assert(radiator.mediums[1].h >= -10000000000.0 and radiator.mediums[1].h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= radiator.mediums[1].h <= 10000000000.0, has value: " + String(radiator.mediums[1].h, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  modelica_boolean tmp258;
  modelica_boolean tmp259;
  static const MMC_DEFSTRINGLIT(tmp260,108,"Variable violating min/max constraint: -10000000000.0 <= radiator.mediums[1].h <= 10000000000.0, has value: ");
  modelica_string tmp261;
  modelica_metatype tmpMeta262;
  static int tmp263 = 0;
  if(!tmp263)
  {
    tmp258 = GreaterEq((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */),-10000000000.0);
    tmp259 = LessEq((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */),10000000000.0);
    if(!(tmp258 && tmp259))
    {
      tmp261 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[308] /* radiator.mediums[1].h DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta262 = stringAppend(MMC_REFSTRINGLIT(tmp260),tmp261);
      {
        const char* assert_cond = "(radiator.mediums[1].h >= -10000000000.0 and radiator.mediums[1].h <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta262));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta262));
        }
      }
      tmp263 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1598
type: ALGORITHM

  assert(radiator.mediums[1].d >= 0.0 and radiator.mediums[1].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.mediums[1].d <= 100000.0, has value: " + String(radiator.mediums[1].d, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  modelica_boolean tmp264;
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,92,"Variable violating min/max constraint: 0.0 <= radiator.mediums[1].d <= 100000.0, has value: ");
  modelica_string tmp267;
  modelica_metatype tmpMeta268;
  static int tmp269 = 0;
  if(!tmp269)
  {
    tmp264 = GreaterEq((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),0.0);
    tmp265 = LessEq((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),100000.0);
    if(!(tmp264 && tmp265))
    {
      tmp267 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta268 = stringAppend(MMC_REFSTRINGLIT(tmp266),tmp267);
      {
        const char* assert_cond = "(radiator.mediums[1].d >= 0.0 and radiator.mediums[1].d <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta268));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta268));
        }
      }
      tmp269 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1599
type: ALGORITHM

  assert(radiator.mediums[1].T >= 1.0 and radiator.mediums[1].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= radiator.mediums[1].T <= 10000.0, has value: " + String(radiator.mediums[1].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  modelica_boolean tmp270;
  modelica_boolean tmp271;
  static const MMC_DEFSTRINGLIT(tmp272,91,"Variable violating min/max constraint: 1.0 <= radiator.mediums[1].T <= 10000.0, has value: ");
  modelica_string tmp273;
  modelica_metatype tmpMeta274;
  static int tmp275 = 0;
  if(!tmp275)
  {
    tmp270 = GreaterEq((data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */),1.0);
    tmp271 = LessEq((data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */),10000.0);
    if(!(tmp270 && tmp271))
    {
      tmp273 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[6] /* radiator.mediums[1].T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta274 = stringAppend(MMC_REFSTRINGLIT(tmp272),tmp273);
      {
        const char* assert_cond = "(radiator.mediums[1].T >= 1.0 and radiator.mediums[1].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta274));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta274));
        }
      }
      tmp275 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1600
type: ALGORITHM

  assert(radiator.mediums[1].u >= -100000000.0 and radiator.mediums[1].u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= radiator.mediums[1].u <= 100000000.0, has value: " + String(radiator.mediums[1].u, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  modelica_boolean tmp276;
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,104,"Variable violating min/max constraint: -100000000.0 <= radiator.mediums[1].u <= 100000000.0, has value: ");
  modelica_string tmp279;
  modelica_metatype tmpMeta280;
  static int tmp281 = 0;
  if(!tmp281)
  {
    tmp276 = GreaterEq((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */),-100000000.0);
    tmp277 = LessEq((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */),100000000.0);
    if(!(tmp276 && tmp277))
    {
      tmp279 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[310] /* radiator.mediums[1].u DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta280 = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        const char* assert_cond = "(radiator.mediums[1].u >= -100000000.0 and radiator.mediums[1].u <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta280));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta280));
        }
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1601
type: ALGORITHM

  assert(radiator.mb_flows[1] >= -100000.0 and radiator.mb_flows[1] <= 100000.0, "Variable violating min/max constraint: -100000.0 <= radiator.mb_flows[1] <= 100000.0, has value: " + String(radiator.mb_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  static const MMC_DEFSTRINGLIT(tmp284,97,"Variable violating min/max constraint: -100000.0 <= radiator.mb_flows[1] <= 100000.0, has value: ");
  modelica_string tmp285;
  modelica_metatype tmpMeta286;
  static int tmp287 = 0;
  if(!tmp287)
  {
    tmp282 = GreaterEq((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */),-100000.0);
    tmp283 = LessEq((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */),100000.0);
    if(!(tmp282 && tmp283))
    {
      tmp285 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[302] /* radiator.mb_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta286 = stringAppend(MMC_REFSTRINGLIT(tmp284),tmp285);
      {
        const char* assert_cond = "(radiator.mb_flows[1] >= -100000.0 and radiator.mb_flows[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta286));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta286));
        }
      }
      tmp287 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1602
type: ALGORITHM

  assert(radiator.statesFM[1].p >= 0.0 and radiator.statesFM[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= radiator.statesFM[1].p <= 100000000.0, has value: " + String(radiator.statesFM[1].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  modelica_boolean tmp288;
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,96,"Variable violating min/max constraint: 0.0 <= radiator.statesFM[1].p <= 100000000.0, has value: ");
  modelica_string tmp291;
  modelica_metatype tmpMeta292;
  static int tmp293 = 0;
  if(!tmp293)
  {
    tmp288 = GreaterEq((data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */),0.0);
    tmp289 = LessEq((data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */),100000000.0);
    if(!(tmp288 && tmp289))
    {
      tmp291 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[316] /* radiator.statesFM[1].p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta292 = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        const char* assert_cond = "(radiator.statesFM[1].p >= 0.0 and radiator.statesFM[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta292));
        }
      }
      tmp293 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1603
type: ALGORITHM

  assert(radiator.statesFM[1].T >= 1.0 and radiator.statesFM[1].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= radiator.statesFM[1].T <= 10000.0, has value: " + String(radiator.statesFM[1].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  modelica_boolean tmp294;
  modelica_boolean tmp295;
  static const MMC_DEFSTRINGLIT(tmp296,92,"Variable violating min/max constraint: 1.0 <= radiator.statesFM[1].T <= 10000.0, has value: ");
  modelica_string tmp297;
  modelica_metatype tmpMeta298;
  static int tmp299 = 0;
  if(!tmp299)
  {
    tmp294 = GreaterEq((data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */),1.0);
    tmp295 = LessEq((data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */),10000.0);
    if(!(tmp294 && tmp295))
    {
      tmp297 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[314] /* radiator.statesFM[1].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta298 = stringAppend(MMC_REFSTRINGLIT(tmp296),tmp297);
      {
        const char* assert_cond = "(radiator.statesFM[1].T >= 1.0 and radiator.statesFM[1].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta298));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta298));
        }
      }
      tmp299 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1604
type: ALGORITHM

  assert(radiator.statesFM[3].p >= 611.657 and radiator.statesFM[3].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= radiator.statesFM[3].p <= 100000000.0, has value: " + String(radiator.statesFM[3].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,100,"Variable violating min/max constraint: 611.657 <= radiator.statesFM[3].p <= 100000000.0, has value: ");
  modelica_string tmp303;
  modelica_metatype tmpMeta304;
  static int tmp305 = 0;
  if(!tmp305)
  {
    tmp300 = GreaterEq((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */),611.657);
    tmp301 = LessEq((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */),100000000.0);
    if(!(tmp300 && tmp301))
    {
      tmp303 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[317] /* radiator.statesFM[3].p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta304 = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      {
        const char* assert_cond = "(radiator.statesFM[3].p >= 611.657 and radiator.statesFM[3].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4752,7,4752,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        }
      }
      tmp305 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1605
type: ALGORITHM

  assert(radiator.statesFM[3].T >= 1.0 and radiator.statesFM[3].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= radiator.statesFM[3].T <= 10000.0, has value: " + String(radiator.statesFM[3].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,92,"Variable violating min/max constraint: 1.0 <= radiator.statesFM[3].T <= 10000.0, has value: ");
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  static int tmp311 = 0;
  if(!tmp311)
  {
    tmp306 = GreaterEq((data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */),1.0);
    tmp307 = LessEq((data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */),10000.0);
    if(!(tmp306 && tmp307))
    {
      tmp309 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[315] /* radiator.statesFM[3].T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta310 = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        const char* assert_cond = "(radiator.statesFM[3].T >= 1.0 and radiator.statesFM[3].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        }
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1606
type: ALGORITHM

  assert(radiator.flowModel.rhos[1] >= 0.0 and radiator.flowModel.rhos[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos[1] <= 100000.0, has value: " + String(radiator.flowModel.rhos[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,97,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos[1] <= 100000.0, has value: ");
  modelica_string tmp315;
  modelica_metatype tmpMeta316;
  static int tmp317 = 0;
  if(!tmp317)
  {
    tmp312 = GreaterEq((data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */),0.0);
    tmp313 = LessEq((data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */),100000.0);
    if(!(tmp312 && tmp313))
    {
      tmp315 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[289] /* radiator.flowModel.rhos[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta316 = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        const char* assert_cond = "(radiator.flowModel.rhos[1] >= 0.0 and radiator.flowModel.rhos[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        }
      }
      tmp317 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1607
type: ALGORITHM

  assert(radiator.flowModel.rhos[2] >= 0.0 and radiator.flowModel.rhos[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos[2] <= 100000.0, has value: " + String(radiator.flowModel.rhos[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  modelica_boolean tmp318;
  modelica_boolean tmp319;
  static const MMC_DEFSTRINGLIT(tmp320,97,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos[2] <= 100000.0, has value: ");
  modelica_string tmp321;
  modelica_metatype tmpMeta322;
  static int tmp323 = 0;
  if(!tmp323)
  {
    tmp318 = GreaterEq((data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */),0.0);
    tmp319 = LessEq((data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */),100000.0);
    if(!(tmp318 && tmp319))
    {
      tmp321 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[290] /* radiator.flowModel.rhos[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta322 = stringAppend(MMC_REFSTRINGLIT(tmp320),tmp321);
      {
        const char* assert_cond = "(radiator.flowModel.rhos[2] >= 0.0 and radiator.flowModel.rhos[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta322));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta322));
        }
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1608
type: ALGORITHM

  assert(radiator.flowModel.rhos[3] >= 0.0 and radiator.flowModel.rhos[3] <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos[3] <= 100000.0, has value: " + String(radiator.flowModel.rhos[3], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  modelica_boolean tmp324;
  modelica_boolean tmp325;
  static const MMC_DEFSTRINGLIT(tmp326,97,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos[3] <= 100000.0, has value: ");
  modelica_string tmp327;
  modelica_metatype tmpMeta328;
  static int tmp329 = 0;
  if(!tmp329)
  {
    tmp324 = GreaterEq((data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */),0.0);
    tmp325 = LessEq((data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */),100000.0);
    if(!(tmp324 && tmp325))
    {
      tmp327 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[291] /* radiator.flowModel.rhos[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta328 = stringAppend(MMC_REFSTRINGLIT(tmp326),tmp327);
      {
        const char* assert_cond = "(radiator.flowModel.rhos[3] >= 0.0 and radiator.flowModel.rhos[3] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta328));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta328));
        }
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1609
type: ALGORITHM

  assert(radiator.flowModel.rhos_act[1] >= 0.0 and radiator.flowModel.rhos_act[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos_act[1] <= 100000.0, has value: " + String(radiator.flowModel.rhos_act[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  modelica_boolean tmp330;
  modelica_boolean tmp331;
  static const MMC_DEFSTRINGLIT(tmp332,101,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos_act[1] <= 100000.0, has value: ");
  modelica_string tmp333;
  modelica_metatype tmpMeta334;
  static int tmp335 = 0;
  if(!tmp335)
  {
    tmp330 = GreaterEq((data->localData[0]->realVars[292] /* radiator.flowModel.rhos_act[1] variable */),0.0);
    tmp331 = LessEq((data->localData[0]->realVars[292] /* radiator.flowModel.rhos_act[1] variable */),100000.0);
    if(!(tmp330 && tmp331))
    {
      tmp333 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[292] /* radiator.flowModel.rhos_act[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta334 = stringAppend(MMC_REFSTRINGLIT(tmp332),tmp333);
      {
        const char* assert_cond = "(radiator.flowModel.rhos_act[1] >= 0.0 and radiator.flowModel.rhos_act[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta334));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta334));
        }
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1610
type: ALGORITHM

  assert(radiator.flowModel.rhos_act[2] >= 0.0 and radiator.flowModel.rhos_act[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos_act[2] <= 100000.0, has value: " + String(radiator.flowModel.rhos_act[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  static const MMC_DEFSTRINGLIT(tmp338,101,"Variable violating min/max constraint: 0.0 <= radiator.flowModel.rhos_act[2] <= 100000.0, has value: ");
  modelica_string tmp339;
  modelica_metatype tmpMeta340;
  static int tmp341 = 0;
  if(!tmp341)
  {
    tmp336 = GreaterEq((data->localData[0]->realVars[293] /* radiator.flowModel.rhos_act[2] variable */),0.0);
    tmp337 = LessEq((data->localData[0]->realVars[293] /* radiator.flowModel.rhos_act[2] variable */),100000.0);
    if(!(tmp336 && tmp337))
    {
      tmp339 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[293] /* radiator.flowModel.rhos_act[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta340 = stringAppend(MMC_REFSTRINGLIT(tmp338),tmp339);
      {
        const char* assert_cond = "(radiator.flowModel.rhos_act[2] >= 0.0 and radiator.flowModel.rhos_act[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta340));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta340));
        }
      }
      tmp341 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1611
type: ALGORITHM

  assert(radiator.m_flows[1] >= 0.0 and radiator.m_flows[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= radiator.m_flows[1] <= 100000.0, has value: " + String(radiator.m_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  modelica_boolean tmp342;
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,90,"Variable violating min/max constraint: 0.0 <= radiator.m_flows[1] <= 100000.0, has value: ");
  modelica_string tmp345;
  modelica_metatype tmpMeta346;
  static int tmp347 = 0;
  if(!tmp347)
  {
    tmp342 = GreaterEq((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),0.0);
    tmp343 = LessEq((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */),100000.0);
    if(!(tmp342 && tmp343))
    {
      tmp345 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[300] /* radiator.m_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta346 = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        const char* assert_cond = "(radiator.m_flows[1] >= 0.0 and radiator.m_flows[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta346));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta346));
        }
      }
      tmp347 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1612
type: ALGORITHM

  assert(radiator.m_flows[2] >= -100000.0 and radiator.m_flows[2] <= 100000.0, "Variable violating min/max constraint: -100000.0 <= radiator.m_flows[2] <= 100000.0, has value: " + String(radiator.m_flows[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  modelica_boolean tmp348;
  modelica_boolean tmp349;
  static const MMC_DEFSTRINGLIT(tmp350,96,"Variable violating min/max constraint: -100000.0 <= radiator.m_flows[2] <= 100000.0, has value: ");
  modelica_string tmp351;
  modelica_metatype tmpMeta352;
  static int tmp353 = 0;
  if(!tmp353)
  {
    tmp348 = GreaterEq((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),-100000.0);
    tmp349 = LessEq((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */),100000.0);
    if(!(tmp348 && tmp349))
    {
      tmp351 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[301] /* radiator.m_flows[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta352 = stringAppend(MMC_REFSTRINGLIT(tmp350),tmp351);
      {
        const char* assert_cond = "(radiator.m_flows[2] >= -100000.0 and radiator.m_flows[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta352));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta352));
        }
      }
      tmp353 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1613
type: ALGORITHM

  assert(radiator.H_flows[1] >= -100000000.0 and radiator.H_flows[1] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= radiator.H_flows[1] <= 100000000.0, has value: " + String(radiator.H_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  modelica_boolean tmp354;
  modelica_boolean tmp355;
  static const MMC_DEFSTRINGLIT(tmp356,102,"Variable violating min/max constraint: -100000000.0 <= radiator.H_flows[1] <= 100000000.0, has value: ");
  modelica_string tmp357;
  modelica_metatype tmpMeta358;
  static int tmp359 = 0;
  if(!tmp359)
  {
    tmp354 = GreaterEq((data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */),-100000000.0);
    tmp355 = LessEq((data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */),100000000.0);
    if(!(tmp354 && tmp355))
    {
      tmp357 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[265] /* radiator.H_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta358 = stringAppend(MMC_REFSTRINGLIT(tmp356),tmp357);
      {
        const char* assert_cond = "(radiator.H_flows[1] >= -100000000.0 and radiator.H_flows[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta358));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta358));
        }
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1614
type: ALGORITHM

  assert(radiator.H_flows[2] >= -100000000.0 and radiator.H_flows[2] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= radiator.H_flows[2] <= 100000000.0, has value: " + String(radiator.H_flows[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,102,"Variable violating min/max constraint: -100000000.0 <= radiator.H_flows[2] <= 100000000.0, has value: ");
  modelica_string tmp363;
  modelica_metatype tmpMeta364;
  static int tmp365 = 0;
  if(!tmp365)
  {
    tmp360 = GreaterEq((data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */),-100000000.0);
    tmp361 = LessEq((data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */),100000000.0);
    if(!(tmp360 && tmp361))
    {
      tmp363 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[266] /* radiator.H_flows[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta364 = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        const char* assert_cond = "(radiator.H_flows[2] >= -100000000.0 and radiator.H_flows[2] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta364));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta364));
        }
      }
      tmp365 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1615
type: ALGORITHM

  assert(radiator.heatTransfer.Ts[1] >= 0.0, "Variable violating min constraint: 0.0 <= radiator.heatTransfer.Ts[1], has value: " + String(radiator.heatTransfer.Ts[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,82,"Variable violating min constraint: 0.0 <= radiator.heatTransfer.Ts[1], has value: ");
  modelica_string tmp368;
  modelica_metatype tmpMeta369;
  static int tmp370 = 0;
  if(!tmp370)
  {
    tmp366 = GreaterEq((data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */),0.0);
    if(!tmp366)
    {
      tmp368 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[297] /* radiator.heatTransfer.Ts[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta369 = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        const char* assert_cond = "(radiator.heatTransfer.Ts[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        }
      }
      tmp370 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1616
type: ALGORITHM

  assert(T_forward >= 0.0, "Variable violating min constraint: 0.0 <= T_forward, has value: " + String(T_forward, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,64,"Variable violating min constraint: 0.0 <= T_forward, has value: ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  static int tmp375 = 0;
  if(!tmp375)
  {
    tmp371 = GreaterEq((data->localData[0]->realVars[127] /* T_forward variable */),0.0);
    if(!tmp371)
    {
      tmp373 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[127] /* T_forward variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        const char* assert_cond = "(T_forward >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Programmes/OpenModelica/share/OMSens/resource/HeatingSystemfonctional.mo",100,3,101,69,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        } else {
          FILE_INFO info = {"C:/Programmes/OpenModelica/share/OMSens/resource/HeatingSystemfonctional.mo",100,3,101,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta374));
        }
      }
      tmp375 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1617
type: ALGORITHM

  assert(T_return >= 0.0, "Variable violating min constraint: 0.0 <= T_return, has value: " + String(T_return, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,63,"Variable violating min constraint: 0.0 <= T_return, has value: ");
  modelica_string tmp378;
  modelica_metatype tmpMeta379;
  static int tmp380 = 0;
  if(!tmp380)
  {
    tmp376 = GreaterEq((data->localData[0]->realVars[128] /* T_return variable */),0.0);
    if(!tmp376)
    {
      tmp378 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[128] /* T_return variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta379 = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        const char* assert_cond = "(T_return >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Programmes/OpenModelica/share/OMSens/resource/HeatingSystemfonctional.mo",102,3,103,73,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        } else {
          FILE_INFO info = {"C:/Programmes/OpenModelica/share/OMSens/resource/HeatingSystemfonctional.mo",102,3,103,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta379));
        }
      }
      tmp380 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1618
type: ALGORITHM

  assert(handle.y >= 0.0 and handle.y <= 1.0, "Variable violating min/max constraint: 0.0 <= handle.y <= 1.0, has value: " + String(handle.y, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  modelica_boolean tmp381;
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,74,"Variable violating min/max constraint: 0.0 <= handle.y <= 1.0, has value: ");
  modelica_string tmp384;
  modelica_metatype tmpMeta385;
  static int tmp386 = 0;
  if(!tmp386)
  {
    tmp381 = GreaterEq((data->localData[0]->realVars[129] /* handle.y variable */),0.0);
    tmp382 = LessEq((data->localData[0]->realVars[129] /* handle.y variable */),1.0);
    if(!(tmp381 && tmp382))
    {
      tmp384 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[129] /* handle.y variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta385 = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        const char* assert_cond = "(handle.y >= 0.0 and handle.y <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",300,5,301,56,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",300,5,301,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta385));
        }
      }
      tmp386 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1619
type: ALGORITHM

  assert(pipe.ms[1] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.ms[1], has value: " + String(pipe.ms[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  modelica_boolean tmp387;
  static const MMC_DEFSTRINGLIT(tmp388,65,"Variable violating min constraint: 0.0 <= pipe.ms[1], has value: ");
  modelica_string tmp389;
  modelica_metatype tmpMeta390;
  static int tmp391 = 0;
  if(!tmp391)
  {
    tmp387 = GreaterEq((data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */),0.0);
    if(!tmp387)
    {
      tmp389 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[232] /* pipe.ms[1] DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta390 = stringAppend(MMC_REFSTRINGLIT(tmp388),tmp389);
      {
        const char* assert_cond = "(pipe.ms[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta390));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta390));
        }
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1620
type: ALGORITHM

  assert(pipe.ms[2] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.ms[2], has value: " + String(pipe.ms[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  modelica_boolean tmp392;
  static const MMC_DEFSTRINGLIT(tmp393,65,"Variable violating min constraint: 0.0 <= pipe.ms[2], has value: ");
  modelica_string tmp394;
  modelica_metatype tmpMeta395;
  static int tmp396 = 0;
  if(!tmp396)
  {
    tmp392 = GreaterEq((data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */),0.0);
    if(!tmp392)
    {
      tmp394 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[233] /* pipe.ms[2] DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta395 = stringAppend(MMC_REFSTRINGLIT(tmp393),tmp394);
      {
        const char* assert_cond = "(pipe.ms[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",844,3,844,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        }
      }
      tmp396 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1621
type: ALGORITHM

  assert(pipe.mediums[1].p >= 0.0 and pipe.mediums[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.mediums[1].p <= 100000000.0, has value: " + String(pipe.mediums[1].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,91,"Variable violating min/max constraint: 0.0 <= pipe.mediums[1].p <= 100000000.0, has value: ");
  modelica_string tmp400;
  modelica_metatype tmpMeta401;
  static int tmp402 = 0;
  if(!tmp402)
  {
    tmp397 = GreaterEq((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */),0.0);
    tmp398 = LessEq((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */),100000000.0);
    if(!(tmp397 && tmp398))
    {
      tmp400 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[4] /* pipe.mediums[1].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta401 = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        const char* assert_cond = "(pipe.mediums[1].p >= 0.0 and pipe.mediums[1].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta401));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta401));
        }
      }
      tmp402 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1622
type: ALGORITHM

  assert(pipe.mediums[1].h >= -10000000000.0 and pipe.mediums[1].h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= pipe.mediums[1].h <= 10000000000.0, has value: " + String(pipe.mediums[1].h, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,104,"Variable violating min/max constraint: -10000000000.0 <= pipe.mediums[1].h <= 10000000000.0, has value: ");
  modelica_string tmp406;
  modelica_metatype tmpMeta407;
  static int tmp408 = 0;
  if(!tmp408)
  {
    tmp403 = GreaterEq((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */),-10000000000.0);
    tmp404 = LessEq((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */),10000000000.0);
    if(!(tmp403 && tmp404))
    {
      tmp406 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[226] /* pipe.mediums[1].h DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta407 = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        const char* assert_cond = "(pipe.mediums[1].h >= -10000000000.0 and pipe.mediums[1].h <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        }
      }
      tmp408 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1623
type: ALGORITHM

  assert(pipe.mediums[1].d >= 0.0 and pipe.mediums[1].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.mediums[1].d <= 100000.0, has value: " + String(pipe.mediums[1].d, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  modelica_boolean tmp409;
  modelica_boolean tmp410;
  static const MMC_DEFSTRINGLIT(tmp411,88,"Variable violating min/max constraint: 0.0 <= pipe.mediums[1].d <= 100000.0, has value: ");
  modelica_string tmp412;
  modelica_metatype tmpMeta413;
  static int tmp414 = 0;
  if(!tmp414)
  {
    tmp409 = GreaterEq((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),0.0);
    tmp410 = LessEq((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),100000.0);
    if(!(tmp409 && tmp410))
    {
      tmp412 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta413 = stringAppend(MMC_REFSTRINGLIT(tmp411),tmp412);
      {
        const char* assert_cond = "(pipe.mediums[1].d >= 0.0 and pipe.mediums[1].d <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta413));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta413));
        }
      }
      tmp414 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1624
type: ALGORITHM

  assert(pipe.mediums[1].T >= 1.0 and pipe.mediums[1].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= pipe.mediums[1].T <= 10000.0, has value: " + String(pipe.mediums[1].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  static const MMC_DEFSTRINGLIT(tmp417,87,"Variable violating min/max constraint: 1.0 <= pipe.mediums[1].T <= 10000.0, has value: ");
  modelica_string tmp418;
  modelica_metatype tmpMeta419;
  static int tmp420 = 0;
  if(!tmp420)
  {
    tmp415 = GreaterEq((data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */),1.0);
    tmp416 = LessEq((data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */),10000.0);
    if(!(tmp415 && tmp416))
    {
      tmp418 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[2] /* pipe.mediums[1].T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta419 = stringAppend(MMC_REFSTRINGLIT(tmp417),tmp418);
      {
        const char* assert_cond = "(pipe.mediums[1].T >= 1.0 and pipe.mediums[1].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta419));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta419));
        }
      }
      tmp420 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1625
type: ALGORITHM

  assert(pipe.mediums[1].u >= -100000000.0 and pipe.mediums[1].u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= pipe.mediums[1].u <= 100000000.0, has value: " + String(pipe.mediums[1].u, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  modelica_boolean tmp421;
  modelica_boolean tmp422;
  static const MMC_DEFSTRINGLIT(tmp423,100,"Variable violating min/max constraint: -100000000.0 <= pipe.mediums[1].u <= 100000000.0, has value: ");
  modelica_string tmp424;
  modelica_metatype tmpMeta425;
  static int tmp426 = 0;
  if(!tmp426)
  {
    tmp421 = GreaterEq((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */),-100000000.0);
    tmp422 = LessEq((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */),100000000.0);
    if(!(tmp421 && tmp422))
    {
      tmp424 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[230] /* pipe.mediums[1].u DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta425 = stringAppend(MMC_REFSTRINGLIT(tmp423),tmp424);
      {
        const char* assert_cond = "(pipe.mediums[1].u >= -100000000.0 and pipe.mediums[1].u <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta425));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta425));
        }
      }
      tmp426 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1626
type: ALGORITHM

  assert(pipe.mediums[2].p >= 0.0 and pipe.mediums[2].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.mediums[2].p <= 100000000.0, has value: " + String(pipe.mediums[2].p, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  static const MMC_DEFSTRINGLIT(tmp429,91,"Variable violating min/max constraint: 0.0 <= pipe.mediums[2].p <= 100000000.0, has value: ");
  modelica_string tmp430;
  modelica_metatype tmpMeta431;
  static int tmp432 = 0;
  if(!tmp432)
  {
    tmp427 = GreaterEq((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */),0.0);
    tmp428 = LessEq((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */),100000000.0);
    if(!(tmp427 && tmp428))
    {
      tmp430 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[5] /* pipe.mediums[2].p STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta431 = stringAppend(MMC_REFSTRINGLIT(tmp429),tmp430);
      {
        const char* assert_cond = "(pipe.mediums[2].p >= 0.0 and pipe.mediums[2].p <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta431));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3978,7,3978,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta431));
        }
      }
      tmp432 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1627
type: ALGORITHM

  assert(pipe.mediums[2].h >= -10000000000.0 and pipe.mediums[2].h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= pipe.mediums[2].h <= 10000000000.0, has value: " + String(pipe.mediums[2].h, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  static const MMC_DEFSTRINGLIT(tmp435,104,"Variable violating min/max constraint: -10000000000.0 <= pipe.mediums[2].h <= 10000000000.0, has value: ");
  modelica_string tmp436;
  modelica_metatype tmpMeta437;
  static int tmp438 = 0;
  if(!tmp438)
  {
    tmp433 = GreaterEq((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */),-10000000000.0);
    tmp434 = LessEq((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */),10000000000.0);
    if(!(tmp433 && tmp434))
    {
      tmp436 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[227] /* pipe.mediums[2].h DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta437 = stringAppend(MMC_REFSTRINGLIT(tmp435),tmp436);
      {
        const char* assert_cond = "(pipe.mediums[2].h >= -10000000000.0 and pipe.mediums[2].h <= 10000000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta437));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3981,7,3981,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta437));
        }
      }
      tmp438 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1628
type: ALGORITHM

  assert(pipe.mediums[2].d >= 0.0 and pipe.mediums[2].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.mediums[2].d <= 100000.0, has value: " + String(pipe.mediums[2].d, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  modelica_boolean tmp439;
  modelica_boolean tmp440;
  static const MMC_DEFSTRINGLIT(tmp441,88,"Variable violating min/max constraint: 0.0 <= pipe.mediums[2].d <= 100000.0, has value: ");
  modelica_string tmp442;
  modelica_metatype tmpMeta443;
  static int tmp444 = 0;
  if(!tmp444)
  {
    tmp439 = GreaterEq((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */),0.0);
    tmp440 = LessEq((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */),100000.0);
    if(!(tmp439 && tmp440))
    {
      tmp442 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta443 = stringAppend(MMC_REFSTRINGLIT(tmp441),tmp442);
      {
        const char* assert_cond = "(pipe.mediums[2].d >= 0.0 and pipe.mediums[2].d <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta443));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3982,7,3982,36,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta443));
        }
      }
      tmp444 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1629
type: ALGORITHM

  assert(pipe.mediums[2].T >= 1.0 and pipe.mediums[2].T <= 10000.0, "Variable violating min/max constraint: 1.0 <= pipe.mediums[2].T <= 10000.0, has value: " + String(pipe.mediums[2].T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  static const MMC_DEFSTRINGLIT(tmp447,87,"Variable violating min/max constraint: 1.0 <= pipe.mediums[2].T <= 10000.0, has value: ");
  modelica_string tmp448;
  modelica_metatype tmpMeta449;
  static int tmp450 = 0;
  if(!tmp450)
  {
    tmp445 = GreaterEq((data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */),1.0);
    tmp446 = LessEq((data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */),10000.0);
    if(!(tmp445 && tmp446))
    {
      tmp448 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[3] /* pipe.mediums[2].T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta449 = stringAppend(MMC_REFSTRINGLIT(tmp447),tmp448);
      {
        const char* assert_cond = "(pipe.mediums[2].T >= 1.0 and pipe.mediums[2].T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta449));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3983,7,3983,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta449));
        }
      }
      tmp450 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1630
type: ALGORITHM

  assert(pipe.mediums[2].u >= -100000000.0 and pipe.mediums[2].u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= pipe.mediums[2].u <= 100000000.0, has value: " + String(pipe.mediums[2].u, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  modelica_boolean tmp451;
  modelica_boolean tmp452;
  static const MMC_DEFSTRINGLIT(tmp453,100,"Variable violating min/max constraint: -100000000.0 <= pipe.mediums[2].u <= 100000000.0, has value: ");
  modelica_string tmp454;
  modelica_metatype tmpMeta455;
  static int tmp456 = 0;
  if(!tmp456)
  {
    tmp451 = GreaterEq((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */),-100000000.0);
    tmp452 = LessEq((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */),100000000.0);
    if(!(tmp451 && tmp452))
    {
      tmp454 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[231] /* pipe.mediums[2].u DUMMY_STATE */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta455 = stringAppend(MMC_REFSTRINGLIT(tmp453),tmp454);
      {
        const char* assert_cond = "(pipe.mediums[2].u >= -100000000.0 and pipe.mediums[2].u <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta455));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",3986,7,3986,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta455));
        }
      }
      tmp456 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1631
type: ALGORITHM

  assert(pipe.mb_flows[1] >= -100000.0 and pipe.mb_flows[1] <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pipe.mb_flows[1] <= 100000.0, has value: " + String(pipe.mb_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  modelica_boolean tmp457;
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,93,"Variable violating min/max constraint: -100000.0 <= pipe.mb_flows[1] <= 100000.0, has value: ");
  modelica_string tmp460;
  modelica_metatype tmpMeta461;
  static int tmp462 = 0;
  if(!tmp462)
  {
    tmp457 = GreaterEq((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */),-100000.0);
    tmp458 = LessEq((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */),100000.0);
    if(!(tmp457 && tmp458))
    {
      tmp460 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[214] /* pipe.mb_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta461 = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        const char* assert_cond = "(pipe.mb_flows[1] >= -100000.0 and pipe.mb_flows[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta461));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta461));
        }
      }
      tmp462 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1632
type: ALGORITHM

  assert(pipe.mb_flows[2] >= -100000.0 and pipe.mb_flows[2] <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pipe.mb_flows[2] <= 100000.0, has value: " + String(pipe.mb_flows[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  modelica_boolean tmp463;
  modelica_boolean tmp464;
  static const MMC_DEFSTRINGLIT(tmp465,93,"Variable violating min/max constraint: -100000.0 <= pipe.mb_flows[2] <= 100000.0, has value: ");
  modelica_string tmp466;
  modelica_metatype tmpMeta467;
  static int tmp468 = 0;
  if(!tmp468)
  {
    tmp463 = GreaterEq((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */),-100000.0);
    tmp464 = LessEq((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */),100000.0);
    if(!(tmp463 && tmp464))
    {
      tmp466 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[215] /* pipe.mb_flows[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta467 = stringAppend(MMC_REFSTRINGLIT(tmp465),tmp466);
      {
        const char* assert_cond = "(pipe.mb_flows[2] >= -100000.0 and pipe.mb_flows[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta467));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",860,3,860,67,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta467));
        }
      }
      tmp468 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1633
type: ALGORITHM

  assert(pipe.state_a.T >= 1.0 and pipe.state_a.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= pipe.state_a.T <= 10000.0, has value: " + String(pipe.state_a.T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  modelica_boolean tmp469;
  modelica_boolean tmp470;
  static const MMC_DEFSTRINGLIT(tmp471,84,"Variable violating min/max constraint: 1.0 <= pipe.state_a.T <= 10000.0, has value: ");
  modelica_string tmp472;
  modelica_metatype tmpMeta473;
  static int tmp474 = 0;
  if(!tmp474)
  {
    tmp469 = GreaterEq((data->localData[0]->realVars[235] /* pipe.state_a.T variable */),1.0);
    tmp470 = LessEq((data->localData[0]->realVars[235] /* pipe.state_a.T variable */),10000.0);
    if(!(tmp469 && tmp470))
    {
      tmp472 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[235] /* pipe.state_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta473 = stringAppend(MMC_REFSTRINGLIT(tmp471),tmp472);
      {
        const char* assert_cond = "(pipe.state_a.T >= 1.0 and pipe.state_a.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta473));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta473));
        }
      }
      tmp474 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1634
type: ALGORITHM

  assert(pipe.state_b.T >= 1.0 and pipe.state_b.T <= 10000.0, "Variable violating min/max constraint: 1.0 <= pipe.state_b.T <= 10000.0, has value: " + String(pipe.state_b.T, "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,84,"Variable violating min/max constraint: 1.0 <= pipe.state_b.T <= 10000.0, has value: ");
  modelica_string tmp478;
  modelica_metatype tmpMeta479;
  static int tmp480 = 0;
  if(!tmp480)
  {
    tmp475 = GreaterEq((data->localData[0]->realVars[236] /* pipe.state_b.T variable */),1.0);
    tmp476 = LessEq((data->localData[0]->realVars[236] /* pipe.state_b.T variable */),10000.0);
    if(!(tmp475 && tmp476))
    {
      tmp478 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[236] /* pipe.state_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta479 = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        const char* assert_cond = "(pipe.state_b.T >= 1.0 and pipe.state_b.T <= 10000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta479));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",4753,7,4753,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta479));
        }
      }
      tmp480 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1635
type: ALGORITHM

  assert(pipe.flowModel.rhos[1] >= 0.0 and pipe.flowModel.rhos[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[1] <= 100000.0, has value: " + String(pipe.flowModel.rhos[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,93,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[1] <= 100000.0, has value: ");
  modelica_string tmp484;
  modelica_metatype tmpMeta485;
  static int tmp486 = 0;
  if(!tmp486)
  {
    tmp481 = GreaterEq((data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */),0.0);
    tmp482 = LessEq((data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */),100000.0);
    if(!(tmp481 && tmp482))
    {
      tmp484 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[199] /* pipe.flowModel.rhos[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta485 = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        const char* assert_cond = "(pipe.flowModel.rhos[1] >= 0.0 and pipe.flowModel.rhos[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta485));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta485));
        }
      }
      tmp486 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1636
type: ALGORITHM

  assert(pipe.flowModel.rhos[2] >= 0.0 and pipe.flowModel.rhos[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[2] <= 100000.0, has value: " + String(pipe.flowModel.rhos[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  modelica_boolean tmp487;
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,93,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[2] <= 100000.0, has value: ");
  modelica_string tmp490;
  modelica_metatype tmpMeta491;
  static int tmp492 = 0;
  if(!tmp492)
  {
    tmp487 = GreaterEq((data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */),0.0);
    tmp488 = LessEq((data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */),100000.0);
    if(!(tmp487 && tmp488))
    {
      tmp490 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[200] /* pipe.flowModel.rhos[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta491 = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        const char* assert_cond = "(pipe.flowModel.rhos[2] >= 0.0 and pipe.flowModel.rhos[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta491));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",979,13,979,110,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta491));
        }
      }
      tmp492 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1637
type: ALGORITHM

  assert(pipe.flowModel.rhos_act[1] >= 0.0 and pipe.flowModel.rhos_act[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos_act[1] <= 100000.0, has value: " + String(pipe.flowModel.rhos_act[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,97,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos_act[1] <= 100000.0, has value: ");
  modelica_string tmp496;
  modelica_metatype tmpMeta497;
  static int tmp498 = 0;
  if(!tmp498)
  {
    tmp493 = GreaterEq((data->localData[0]->realVars[201] /* pipe.flowModel.rhos_act[1] variable */),0.0);
    tmp494 = LessEq((data->localData[0]->realVars[201] /* pipe.flowModel.rhos_act[1] variable */),100000.0);
    if(!(tmp493 && tmp494))
    {
      tmp496 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[201] /* pipe.flowModel.rhos_act[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta497 = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        const char* assert_cond = "(pipe.flowModel.rhos_act[1] >= 0.0 and pipe.flowModel.rhos_act[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta497));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",980,13,980,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta497));
        }
      }
      tmp498 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1638
type: ALGORITHM

  assert(pipe.m_flows[1] >= -9.999999999999999e+59 and pipe.m_flows[1] <= 100000.0, "Variable violating min/max constraint: -9.999999999999999e+59 <= pipe.m_flows[1] <= 100000.0, has value: " + String(pipe.m_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  modelica_boolean tmp499;
  modelica_boolean tmp500;
  static const MMC_DEFSTRINGLIT(tmp501,105,"Variable violating min/max constraint: -9.999999999999999e+59 <= pipe.m_flows[1] <= 100000.0, has value: ");
  modelica_string tmp502;
  modelica_metatype tmpMeta503;
  static int tmp504 = 0;
  if(!tmp504)
  {
    tmp499 = GreaterEq((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),-9.999999999999999e+59);
    tmp500 = LessEq((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */),100000.0);
    if(!(tmp499 && tmp500))
    {
      tmp502 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[212] /* pipe.m_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta503 = stringAppend(MMC_REFSTRINGLIT(tmp501),tmp502);
      {
        const char* assert_cond = "(pipe.m_flows[1] >= -9.999999999999999e+59 and pipe.m_flows[1] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta503));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta503));
        }
      }
      tmp504 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1639
type: ALGORITHM

  assert(pipe.m_flows[2] >= -9.999999999999999e+59 and pipe.m_flows[2] <= 100000.0, "Variable violating min/max constraint: -9.999999999999999e+59 <= pipe.m_flows[2] <= 100000.0, has value: " + String(pipe.m_flows[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,105,"Variable violating min/max constraint: -9.999999999999999e+59 <= pipe.m_flows[2] <= 100000.0, has value: ");
  modelica_string tmp508;
  modelica_metatype tmpMeta509;
  static int tmp510 = 0;
  if(!tmp510)
  {
    tmp505 = GreaterEq((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */),-9.999999999999999e+59);
    tmp506 = LessEq((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */),100000.0);
    if(!(tmp505 && tmp506))
    {
      tmp508 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[213] /* pipe.m_flows[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta509 = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        const char* assert_cond = "(pipe.m_flows[2] >= -9.999999999999999e+59 and pipe.m_flows[2] <= 100000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta509));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",380,7,383,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta509));
        }
      }
      tmp510 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1640
type: ALGORITHM

  assert(pipe.H_flows[1] >= -100000000.0 and pipe.H_flows[1] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= pipe.H_flows[1] <= 100000000.0, has value: " + String(pipe.H_flows[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  modelica_boolean tmp511;
  modelica_boolean tmp512;
  static const MMC_DEFSTRINGLIT(tmp513,98,"Variable violating min/max constraint: -100000000.0 <= pipe.H_flows[1] <= 100000000.0, has value: ");
  modelica_string tmp514;
  modelica_metatype tmpMeta515;
  static int tmp516 = 0;
  if(!tmp516)
  {
    tmp511 = GreaterEq((data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */),-100000000.0);
    tmp512 = LessEq((data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */),100000000.0);
    if(!(tmp511 && tmp512))
    {
      tmp514 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[179] /* pipe.H_flows[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta515 = stringAppend(MMC_REFSTRINGLIT(tmp513),tmp514);
      {
        const char* assert_cond = "(pipe.H_flows[1] >= -100000000.0 and pipe.H_flows[1] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta515));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta515));
        }
      }
      tmp516 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1641
type: ALGORITHM

  assert(pipe.H_flows[2] >= -100000000.0 and pipe.H_flows[2] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= pipe.H_flows[2] <= 100000000.0, has value: " + String(pipe.H_flows[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  modelica_boolean tmp517;
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,98,"Variable violating min/max constraint: -100000000.0 <= pipe.H_flows[2] <= 100000000.0, has value: ");
  modelica_string tmp520;
  modelica_metatype tmpMeta521;
  static int tmp522 = 0;
  if(!tmp522)
  {
    tmp517 = GreaterEq((data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */),-100000000.0);
    tmp518 = LessEq((data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */),100000000.0);
    if(!(tmp517 && tmp518))
    {
      tmp520 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[180] /* pipe.H_flows[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta521 = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        const char* assert_cond = "(pipe.H_flows[2] >= -100000000.0 and pipe.H_flows[2] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta521));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta521));
        }
      }
      tmp522 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1642
type: ALGORITHM

  assert(pipe.H_flows[3] >= -100000000.0 and pipe.H_flows[3] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= pipe.H_flows[3] <= 100000000.0, has value: " + String(pipe.H_flows[3], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  static const MMC_DEFSTRINGLIT(tmp525,98,"Variable violating min/max constraint: -100000000.0 <= pipe.H_flows[3] <= 100000000.0, has value: ");
  modelica_string tmp526;
  modelica_metatype tmpMeta527;
  static int tmp528 = 0;
  if(!tmp528)
  {
    tmp523 = GreaterEq((data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */),-100000000.0);
    tmp524 = LessEq((data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */),100000000.0);
    if(!(tmp523 && tmp524))
    {
      tmp526 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[181] /* pipe.H_flows[3] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta527 = stringAppend(MMC_REFSTRINGLIT(tmp525),tmp526);
      {
        const char* assert_cond = "(pipe.H_flows[3] >= -100000000.0 and pipe.H_flows[3] <= 100000000.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta527));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Pipes.mo",388,7,389,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta527));
        }
      }
      tmp528 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1643
type: ALGORITHM

  assert(pipe.heatTransfer.Ts[1] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.heatTransfer.Ts[1], has value: " + String(pipe.heatTransfer.Ts[1], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  modelica_boolean tmp529;
  static const MMC_DEFSTRINGLIT(tmp530,78,"Variable violating min constraint: 0.0 <= pipe.heatTransfer.Ts[1], has value: ");
  modelica_string tmp531;
  modelica_metatype tmpMeta532;
  static int tmp533 = 0;
  if(!tmp533)
  {
    tmp529 = GreaterEq((data->localData[0]->realVars[204] /* pipe.heatTransfer.Ts[1] variable */),0.0);
    if(!tmp529)
    {
      tmp531 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[204] /* pipe.heatTransfer.Ts[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta532 = stringAppend(MMC_REFSTRINGLIT(tmp530),tmp531);
      {
        const char* assert_cond = "(pipe.heatTransfer.Ts[1] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta532));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta532));
        }
      }
      tmp533 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1644
type: ALGORITHM

  assert(pipe.heatTransfer.Ts[2] >= 0.0, "Variable violating min constraint: 0.0 <= pipe.heatTransfer.Ts[2], has value: " + String(pipe.heatTransfer.Ts[2], "g"));
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  modelica_boolean tmp534;
  static const MMC_DEFSTRINGLIT(tmp535,78,"Variable violating min constraint: 0.0 <= pipe.heatTransfer.Ts[2], has value: ");
  modelica_string tmp536;
  modelica_metatype tmpMeta537;
  static int tmp538 = 0;
  if(!tmp538)
  {
    tmp534 = GreaterEq((data->localData[0]->realVars[205] /* pipe.heatTransfer.Ts[2] variable */),0.0);
    if(!tmp534)
    {
      tmp536 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[205] /* pipe.heatTransfer.Ts[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta537 = stringAppend(MMC_REFSTRINGLIT(tmp535),tmp536);
      {
        const char* assert_cond = "(pipe.heatTransfer.Ts[2] >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta537));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",476,5,477,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta537));
        }
      }
      tmp538 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1553(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1554(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1555(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1556(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1557(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1558(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1559(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1560(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1561(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1562(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1563(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1564(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1565(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1566(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1567(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1568(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1569(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1570(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1571(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1572(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1573(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1574(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1575(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1576(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1577(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1578(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1579(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1580(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1581(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1582(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1583(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1584(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1585(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1586(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1587(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1588(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1589(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1590(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1591(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1592(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1593(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1594(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1595(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1596(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1597(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1598(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1599(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1600(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1601(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1602(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1603(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1604(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1605(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1606(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1607(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1608(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1609(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1610(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1611(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1612(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1613(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1614(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1615(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1616(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1617(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1618(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1619(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1620(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1621(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1622(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1623(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1624(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1625(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1626(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1627(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1628(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1629(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1630(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1631(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1632(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1633(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1634(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1635(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1636(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1637(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1638(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1639(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1640(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1641(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1642(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1643(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_1644(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

