/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Motoreducteur_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int Motoreducteur_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void Motoreducteur_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 148
type: SIMPLE_ASSIGN
constantVoltage.p.v = constantVoltage.V
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  (data->simulationInfo->realParameter[3] /* constantVoltage.p.v PARAM */) = (data->simulationInfo->realParameter[2] /* constantVoltage.V PARAM */);
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
resistor.p.v = constantVoltage.V
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  (data->simulationInfo->realParameter[31] /* resistor.p.v PARAM */) = (data->simulationInfo->realParameter[2] /* constantVoltage.V PARAM */);
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
constantVoltage.v = constantVoltage.V
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  (data->simulationInfo->realParameter[4] /* constantVoltage.v PARAM */) = (data->simulationInfo->realParameter[2] /* constantVoltage.V PARAM */);
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
emf.internalSupport.phi = emf.fixed.phi0
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  (data->simulationInfo->realParameter[8] /* emf.internalSupport.phi PARAM */) = (data->simulationInfo->realParameter[6] /* emf.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
emf.internalSupport.flange.phi = emf.fixed.phi0
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  (data->simulationInfo->realParameter[7] /* emf.internalSupport.flange.phi PARAM */) = (data->simulationInfo->realParameter[6] /* emf.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
emf.fixed.flange.phi = emf.fixed.phi0
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  (data->simulationInfo->realParameter[5] /* emf.fixed.flange.phi PARAM */) = (data->simulationInfo->realParameter[6] /* emf.fixed.phi0 PARAM */);
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
resistor.T = resistor.T_ref
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  (data->simulationInfo->realParameter[27] /* resistor.T PARAM */) = (data->simulationInfo->realParameter[29] /* resistor.T_ref PARAM */);
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
resistor.T_heatPort = resistor.T
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  (data->simulationInfo->realParameter[28] /* resistor.T_heatPort PARAM */) = (data->simulationInfo->realParameter[27] /* resistor.T PARAM */);
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
torque.flange.tau = -const.k
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  (data->simulationInfo->realParameter[32] /* torque.flange.tau PARAM */) = (-(data->simulationInfo->realParameter[0] /* const.k PARAM */));
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
torque.tau = const.k
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  (data->simulationInfo->realParameter[33] /* torque.tau PARAM */) = (data->simulationInfo->realParameter[0] /* const.k PARAM */);
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
const.y = const.k
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  (data->simulationInfo->realParameter[1] /* const.y PARAM */) = (data->simulationInfo->realParameter[0] /* const.k PARAM */);
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
lossyGear.eta_mf1_0 = Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,2], 0.0, 1)[1]
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  real_array tmp0;
  real_array tmp1;
  index_spec_t tmp2;
  real_array tmp3;
  real_array tmp4;
  index_spec_t tmp5;
  real_array_create(&tmp0, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp2, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
  index_alloc_real_array(&tmp0, &tmp2, &tmp1);
  real_array_create(&tmp3, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp5, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 2)), 'S');
  index_alloc_real_array(&tmp3, &tmp5, &tmp4);
  (data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */) = omc_Modelica_Math_Vectors_interpolate(threadData, tmp1, tmp4, 0.0, ((modelica_integer) 1), NULL);
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
lossyGear.eta_mf2_0 = Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,3], 0.0, 1)[1]
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  real_array tmp6;
  real_array tmp7;
  index_spec_t tmp8;
  real_array tmp9;
  real_array tmp10;
  index_spec_t tmp11;
  real_array_create(&tmp6, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp8, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
  index_alloc_real_array(&tmp6, &tmp8, &tmp7);
  real_array_create(&tmp9, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp11, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 3)), 'S');
  index_alloc_real_array(&tmp9, &tmp11, &tmp10);
  (data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */) = omc_Modelica_Math_Vectors_interpolate(threadData, tmp7, tmp10, 0.0, ((modelica_integer) 1), NULL);
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
lossyGear.tau_bf1_0 = abs(Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,4], 0.0, 1)[1])
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  real_array tmp12;
  real_array tmp13;
  index_spec_t tmp14;
  real_array tmp15;
  real_array tmp16;
  index_spec_t tmp17;
  real_array_create(&tmp12, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp14, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
  index_alloc_real_array(&tmp12, &tmp14, &tmp13);
  real_array_create(&tmp15, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp17, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 4)), 'S');
  index_alloc_real_array(&tmp15, &tmp17, &tmp16);
  (data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */) = fabs(omc_Modelica_Math_Vectors_interpolate(threadData, tmp13, tmp16, 0.0, ((modelica_integer) 1), NULL));
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
lossyGear.tau_bf2_0 = abs(Modelica.Math.Vectors.interpolate(lossyGear.lossTable[:,1], lossyGear.lossTable[:,5], 0.0, 1)[1])
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  real_array tmp18;
  real_array tmp19;
  index_spec_t tmp20;
  real_array tmp21;
  real_array tmp22;
  index_spec_t tmp23;
  real_array_create(&tmp18, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp20, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 1)), 'S');
  index_alloc_real_array(&tmp18, &tmp20, &tmp19);
  real_array_create(&tmp21, (modelica_real*)&(data->simulationInfo->realParameter[13] /* lossyGear.lossTable[1,1] PARAM */), 2, (_index_t)1, (_index_t)5);
  create_index_spec(&tmp23, 2, (modelica_integer)(1), (int*)0, 'W', (modelica_integer)(0), make_index_array(1, (modelica_integer) ((modelica_integer) 5)), 'S');
  index_alloc_real_array(&tmp21, &tmp23, &tmp22);
  (data->simulationInfo->realParameter[20] /* lossyGear.tau_bf2_0 PARAM */) = fabs(omc_Modelica_Math_Vectors_interpolate(threadData, tmp19, tmp22, 0.0, ((modelica_integer) 1), NULL));
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
lossyGear.tau_bf_a_0 = if noEvent(abs(lossyGear.eta_mf1_0 - 1.0) <= 1e-15) and noEvent(abs(lossyGear.eta_mf2_0 - 1.0) <= 1e-15) then 0.5 * lossyGear.tau_bf1_0 else (lossyGear.tau_bf1_0 - lossyGear.tau_bf2_0) / (lossyGear.eta_mf1_0 - 1.0 / lossyGear.eta_mf2_0)
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  tmp24 = LessEq(fabs((data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */) - 1.0),1e-15);
  tmp25 = LessEq(fabs((data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */) - 1.0),1e-15);
  (data->simulationInfo->realParameter[21] /* lossyGear.tau_bf_a_0 PARAM */) = ((tmp24 && tmp25)?(0.5) * ((data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */)):DIVISION_SIM((data->simulationInfo->realParameter[19] /* lossyGear.tau_bf1_0 PARAM */) - (data->simulationInfo->realParameter[20] /* lossyGear.tau_bf2_0 PARAM */),(data->simulationInfo->realParameter[11] /* lossyGear.eta_mf1_0 PARAM */) - (DIVISION_SIM(1.0,(data->simulationInfo->realParameter[12] /* lossyGear.eta_mf2_0 PARAM */),"lossyGear.eta_mf2_0",equationIndexes)),"lossyGear.eta_mf1_0 - 1.0 / lossyGear.eta_mf2_0",equationIndexes));
  TRACE_POP
}
extern void Motoreducteur_eqFunction_73(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_15(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_72(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_71(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_10(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_2(DATA *data, threadData_t *threadData);

extern void Motoreducteur_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 179
type: ALGORITHM

  assert(resistor.T_ref >= 0.0, "Variable violating min constraint: 0.0 <= resistor.T_ref, has value: " + String(resistor.T_ref, "g"));
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,69,"Variable violating min constraint: 0.0 <= resistor.T_ref, has value: ");
  modelica_string tmp28;
  modelica_metatype tmpMeta29;
  static int tmp30 = 0;
  if(!tmp30)
  {
    tmp26 = GreaterEq((data->simulationInfo->realParameter[29] /* resistor.T_ref PARAM */),0.0);
    if(!tmp26)
    {
      tmp28 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[29] /* resistor.T_ref PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta29 = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      {
        const char* assert_cond = "(resistor.T_ref >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Basic/Resistor.mo",5,3,5,64,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta29));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Basic/Resistor.mo",5,3,5,64,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta29));
        }
      }
      tmp30 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 180
type: ALGORITHM

  assert(resistor.T >= 0.0, "Variable violating min constraint: 0.0 <= resistor.T, has value: " + String(resistor.T, "g"));
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,65,"Variable violating min constraint: 0.0 <= resistor.T, has value: ");
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  static int tmp35 = 0;
  if(!tmp35)
  {
    tmp31 = GreaterEq((data->simulationInfo->realParameter[27] /* resistor.T PARAM */),0.0);
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[27] /* resistor.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta34 = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        const char* assert_cond = "(resistor.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",7,3,8,97,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",7,3,8,97,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta34));
        }
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 181
type: ALGORITHM

  assert(resistor.T_heatPort >= 0.0, "Variable violating min constraint: 0.0 <= resistor.T_heatPort, has value: " + String(resistor.T_heatPort, "g"));
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,74,"Variable violating min constraint: 0.0 <= resistor.T_heatPort, has value: ");
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  static int tmp40 = 0;
  if(!tmp40)
  {
    tmp36 = GreaterEq((data->simulationInfo->realParameter[28] /* resistor.T_heatPort PARAM */),0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[28] /* resistor.T_heatPort PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta39 = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        const char* assert_cond = "(resistor.T_heatPort >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",14,3,14,54,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta39));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",14,3,14,54,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta39));
        }
      }
      tmp40 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 182
type: ALGORITHM

  assert(ramp.duration >= 0.0, "Variable violating min constraint: 0.0 <= ramp.duration, has value: " + String(ramp.duration, "g"));
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,68,"Variable violating min constraint: 0.0 <= ramp.duration, has value: ");
  modelica_string tmp43;
  modelica_metatype tmpMeta44;
  static int tmp45 = 0;
  if(!tmp45)
  {
    tmp41 = GreaterEq((data->simulationInfo->realParameter[22] /* ramp.duration PARAM */),0.0);
    if(!tmp41)
    {
      tmp43 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[22] /* ramp.duration PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta44 = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        const char* assert_cond = "(ramp.duration >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Sources.mo",247,5,248,46,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta44));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Sources.mo",247,5,248,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta44));
        }
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 183
type: ALGORITHM

  assert(inertia.stateSelect >= StateSelect.never and inertia.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= inertia.stateSelect <= StateSelect.always, has value: " + String(inertia.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  modelica_boolean tmp46;
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,114,"Variable violating min/max constraint: StateSelect.never <= inertia.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp49;
  modelica_metatype tmpMeta50;
  static int tmp51 = 0;
  if(!tmp51)
  {
    tmp46 = GreaterEq((data->simulationInfo->integerParameter[0] /* inertia.stateSelect PARAM */),1);
    tmp47 = LessEq((data->simulationInfo->integerParameter[0] /* inertia.stateSelect PARAM */),5);
    if(!(tmp46 && tmp47))
    {
      tmp49 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[0] /* inertia.stateSelect PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta50 = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
      {
        const char* assert_cond = "(inertia.stateSelect >= StateSelect.never and inertia.stateSelect <= StateSelect.always)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta50));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta50));
        }
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 184
type: ALGORITHM

  assert(inertia.J >= 0.0, "Variable violating min constraint: 0.0 <= inertia.J, has value: " + String(inertia.J, "g"));
*/
OMC_DISABLE_OPT
static void Motoreducteur_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,64,"Variable violating min constraint: 0.0 <= inertia.J, has value: ");
  modelica_string tmp54;
  modelica_metatype tmpMeta55;
  static int tmp56 = 0;
  if(!tmp56)
  {
    tmp52 = GreaterEq((data->simulationInfo->realParameter[10] /* inertia.J PARAM */),0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[10] /* inertia.J PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta55 = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        const char* assert_cond = "(inertia.J >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta55));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta55));
        }
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void Motoreducteur_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Motoreducteur_eqFunction_148(data, threadData);
  Motoreducteur_eqFunction_149(data, threadData);
  Motoreducteur_eqFunction_150(data, threadData);
  Motoreducteur_eqFunction_152(data, threadData);
  Motoreducteur_eqFunction_153(data, threadData);
  Motoreducteur_eqFunction_154(data, threadData);
  Motoreducteur_eqFunction_155(data, threadData);
  Motoreducteur_eqFunction_156(data, threadData);
  Motoreducteur_eqFunction_157(data, threadData);
  Motoreducteur_eqFunction_158(data, threadData);
  Motoreducteur_eqFunction_159(data, threadData);
  Motoreducteur_eqFunction_162(data, threadData);
  Motoreducteur_eqFunction_163(data, threadData);
  Motoreducteur_eqFunction_164(data, threadData);
  Motoreducteur_eqFunction_165(data, threadData);
  Motoreducteur_eqFunction_166(data, threadData);
  Motoreducteur_eqFunction_73(data, threadData);
  Motoreducteur_eqFunction_15(data, threadData);
  Motoreducteur_eqFunction_72(data, threadData);
  Motoreducteur_eqFunction_71(data, threadData);
  Motoreducteur_eqFunction_10(data, threadData);
  Motoreducteur_eqFunction_2(data, threadData);
  Motoreducteur_eqFunction_1(data, threadData);
  Motoreducteur_eqFunction_179(data, threadData);
  Motoreducteur_eqFunction_180(data, threadData);
  Motoreducteur_eqFunction_181(data, threadData);
  Motoreducteur_eqFunction_182(data, threadData);
  Motoreducteur_eqFunction_183(data, threadData);
  Motoreducteur_eqFunction_184(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int Motoreducteur_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  (data->simulationInfo->realParameter[6]/* emf.fixed.phi0 PARAM */) = 0.0;
  data->modelData->realParameterData[6].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[0]/* emf.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[1]/* lossyGear.useHeatPort PARAM */) = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[2]/* lossyGear.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[3]/* resistor.useHeatPort PARAM */) = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[4]/* torque.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  (data->simulationInfo->booleanParameter[5]/* torque2.useSupport PARAM */) = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  (data->simulationInfo->integerParameter[0]/* inertia.stateSelect PARAM */) = 3;
  data->modelData->integerParameterData[0].time_unvarying = 1;
  Motoreducteur_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

