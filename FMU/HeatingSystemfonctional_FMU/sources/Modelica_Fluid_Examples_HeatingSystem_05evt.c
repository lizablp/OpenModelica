/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void Modelica_Fluid_Examples_HeatingSystem_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *Modelica_Fluid_Examples_HeatingSystem_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"tank.medium.h < $cse40.h or tank.medium.h > $cse41.h or tank.p_ambient > 22064000.0",
  "tank.level >= tank.portsData[1].height",
  "tank.level >= tank.portsData[2].height",
  "not tank.regularFlow[1] and (tank.s[1] > 0.0 or tank.portsData[1].height >= tank.fluidLevel_max)",
  "time < handle.startTime",
  "not tank.regularFlow[2] and (tank.s[2] > 0.0 or tank.portsData[2].height >= tank.fluidLevel_max)"};
  static const int occurEqs0[] = {1,615};
  static const int occurEqs1[] = {1,613};
  static const int occurEqs2[] = {1,612};
  static const int occurEqs3[] = {1,-1};
  static const int occurEqs4[] = {1,609};
  static const int occurEqs5[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
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

int Modelica_Fluid_Examples_HeatingSystem_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_609(data, threadData);

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

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_623(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_624(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_626(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_627(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_628(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_629(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_632(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_633(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_634(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_637(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_639(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_640(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_641(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_642(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_644(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_645(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_646(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_648(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_649(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_650(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_651(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_653(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_654(data, threadData);

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

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_680(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_703(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_710(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_712(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_713(data, threadData);

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

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_737(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_738(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_739(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_740(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_744(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_751(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_752(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_768(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_769(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_770(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_771(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_772(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_774(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_777(data, threadData);

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

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_812(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_813(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_814(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_815(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_817(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_818(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_819(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_820(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_821(data, threadData);

  Modelica_Fluid_Examples_HeatingSystem_eqFunction_828(data, threadData);

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
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp0 = LessZC((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->simulationInfo->realParameter[6] /* $cse40.h PARAM */), data->simulationInfo->storedRelations[0]);
  tmp1 = GreaterZC((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->simulationInfo->realParameter[18] /* $cse41.h PARAM */), data->simulationInfo->storedRelations[1]);
  tmp2 = Greater((data->simulationInfo->realParameter[271] /* tank.p_ambient PARAM */),22064000.0);
  gout[0] = (((tmp0 || tmp1) || tmp2)) ? 1 : -1;

  tmp3 = GreaterEqZC((data->localData[0]->realVars[8] /* tank.level STATE(1) */), (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */), data->simulationInfo->storedRelations[2]);
  gout[1] = (tmp3) ? 1 : -1;

  tmp4 = GreaterEqZC((data->localData[0]->realVars[8] /* tank.level STATE(1) */), (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */), data->simulationInfo->storedRelations[3]);
  gout[2] = (tmp4) ? 1 : -1;

  tmp5 = GreaterZC((data->localData[0]->realVars[355] /* tank.s[1] variable */), 0.0, data->simulationInfo->storedRelations[4]);
  tmp6 = GreaterEq((data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  gout[3] = (((!(data->localData[0]->booleanVars[2] /* tank.regularFlow[1] DISCRETE */)) && (tmp5 || tmp6))) ? 1 : -1;

  tmp7 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[31] /* handle.startTime PARAM */), data->simulationInfo->storedRelations[5]);
  gout[4] = (tmp7) ? 1 : -1;

  tmp8 = GreaterZC((data->localData[0]->realVars[356] /* tank.s[2] variable */), 0.0, data->simulationInfo->storedRelations[6]);
  tmp9 = GreaterEq((data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */),(data->simulationInfo->realParameter[256] /* tank.fluidLevel_max PARAM */));
  gout[5] = (((!(data->localData[0]->booleanVars[3] /* tank.regularFlow[2] DISCRETE */)) && (tmp8 || tmp9))) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *Modelica_Fluid_Examples_HeatingSystem_relationDescription(int i)
{
  const char *res[] = {"tank.medium.h < $cse40.h",
  "tank.medium.h > $cse41.h",
  "tank.level >= tank.portsData[1].height",
  "tank.level >= tank.portsData[2].height",
  "tank.s[1] > 0.0",
  "time < handle.startTime",
  "tank.s[2] > 0.0"};
  return res[i];
}

int Modelica_Fluid_Examples_HeatingSystem_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;

  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  
  if(evalforZeroCross) {
    tmp10 = LessZC((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->simulationInfo->realParameter[6] /* $cse40.h PARAM */), data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp10;

    tmp11 = GreaterZC((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */), (data->simulationInfo->realParameter[18] /* $cse41.h PARAM */), data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp11;

    tmp12 = GreaterEqZC((data->localData[0]->realVars[8] /* tank.level STATE(1) */), (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */), data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp12;

    tmp13 = GreaterEqZC((data->localData[0]->realVars[8] /* tank.level STATE(1) */), (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */), data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp13;

    tmp14 = GreaterZC((data->localData[0]->realVars[355] /* tank.s[1] variable */), 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp14;

    tmp15 = LessZC(data->localData[0]->timeValue, (data->simulationInfo->realParameter[31] /* handle.startTime PARAM */), data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp15;

    tmp16 = GreaterZC((data->localData[0]->realVars[356] /* tank.s[2] variable */), 0.0, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp16;
  } else {
    data->simulationInfo->relations[0] = ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) < (data->simulationInfo->realParameter[6] /* $cse40.h PARAM */));

    data->simulationInfo->relations[1] = ((data->localData[0]->realVars[9] /* tank.medium.h STATE(1) */) > (data->simulationInfo->realParameter[18] /* $cse41.h PARAM */));

    data->simulationInfo->relations[2] = ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) >= (data->simulationInfo->realParameter[275] /* tank.portsData[1].height PARAM */));

    data->simulationInfo->relations[3] = ((data->localData[0]->realVars[8] /* tank.level STATE(1) */) >= (data->simulationInfo->realParameter[276] /* tank.portsData[2].height PARAM */));

    data->simulationInfo->relations[4] = ((data->localData[0]->realVars[355] /* tank.s[1] variable */) > 0.0);

    data->simulationInfo->relations[5] = (data->localData[0]->timeValue < (data->simulationInfo->realParameter[31] /* handle.startTime PARAM */));

    data->simulationInfo->relations[6] = ((data->localData[0]->realVars[356] /* tank.s[2] variable */) > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

