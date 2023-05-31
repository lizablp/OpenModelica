/* Asserts */
#include "Motoreducteur_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 185
type: ALGORITHM

  assert(lossyGear.mode >= -1 and lossyGear.mode <= 3, "Variable violating min/max constraint: -1 <= lossyGear.mode <= 3, has value: " + String(lossyGear.mode, "d"));
*/
void Motoreducteur_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,77,"Variable violating min/max constraint: -1 <= lossyGear.mode <= 3, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->integerVars[0] /* lossyGear.mode DISCRETE */),((modelica_integer) -1));
    tmp1 = LessEq((data->localData[0]->integerVars[0] /* lossyGear.mode DISCRETE */),((modelica_integer) 3));
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_integer_to_modelica_string_format((data->localData[0]->integerVars[0] /* lossyGear.mode DISCRETE */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(lossyGear.mode >= -1 and lossyGear.mode <= 3)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/LossyGear.mo",76,3,81,86,0};
          infoStreamPrintWithEquationIndexes(LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Mechanics/Rotational/Components/LossyGear.mo",76,3,81,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int Motoreducteur_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  Motoreducteur_eqFunction_185(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

