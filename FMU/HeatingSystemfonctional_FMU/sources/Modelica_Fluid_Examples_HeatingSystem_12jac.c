/* Jacobians 10 */
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"
#include "Modelica_Fluid_Examples_HeatingSystem_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
/* constant equations */
/* dynamic equations */

/*
equation index: 798
type: SIMPLE_ASSIGN
$DER.radiator.mediums.1.h.$pDERLSJac16.dummyVarLSJac16 = $DER.radiator.mediums[1].p.SeedLSJac16 / radiator.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_798(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,798};
  jacobian->tmpVars[0] /* der(radiator.mediums.1.h.$pDERLSJac16.dummyVarLSJac16) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* der(radiator.mediums[1].p.SeedLSJac16) SEED_VAR */,(data->localData[0]->realVars[307] /* radiator.mediums[1].d DUMMY_STATE */),"radiator.mediums[1].d");
  TRACE_POP
}

/*
equation index: 799
type: SIMPLE_ASSIGN
$DER.radiator.mediums.1.T.$pDERLSJac16.dummyVarLSJac16 = 1.756077245136214e-06 * $DER.radiator.mediums[1].p.SeedLSJac16
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_799(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,799};
  jacobian->tmpVars[1] /* der(radiator.mediums.1.T.$pDERLSJac16.dummyVarLSJac16) JACOBIAN_DIFF_VAR */ = (1.756077245136214e-06) * (jacobian->seedVars[0] /* der(radiator.mediums[1].p.SeedLSJac16) SEED_VAR */);
  TRACE_POP
}

/*
equation index: 800
type: SIMPLE_ASSIGN
$res_LSJac16_1.$pDERLSJac16.dummyVarLSJac16 = 0.0009260700016004721 * $DER.radiator.mediums[1].p.SeedLSJac16 + 4181.885502948851 * $DER.radiator.mediums.1.T.$pDERLSJac16.dummyVarLSJac16 - $DER.radiator.mediums.1.h.$pDERLSJac16.dummyVarLSJac16
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_800(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,800};
  jacobian->resultVars[0] /* $res_LSJac16_1.$pDERLSJac16.dummyVarLSJac16 JACOBIAN_VAR */ = (0.0009260700016004721) * (jacobian->seedVars[0] /* der(radiator.mediums[1].p.SeedLSJac16) SEED_VAR */) + (4181.885502948851) * (jacobian->tmpVars[1] /* der(radiator.mediums.1.T.$pDERLSJac16.dummyVarLSJac16) JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[0] /* der(radiator.mediums.1.h.$pDERLSJac16.dummyVarLSJac16) JACOBIAN_DIFF_VAR */;
  TRACE_POP
}

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac16_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac16;
  
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac16_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac16;
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_798(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_799(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_800(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 825
type: SIMPLE_ASSIGN
$DER.heater.mediums.1.h.$pDERLSJac17.dummyVarLSJac17 = $DER.heater.mediums[1].p.SeedLSJac17 / heater.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_825(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,825};
  jacobian->tmpVars[0] /* der(heater.mediums.1.h.$pDERLSJac17.dummyVarLSJac17) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* der(heater.mediums[1].p.SeedLSJac17) SEED_VAR */,(data->localData[0]->realVars[168] /* heater.mediums[1].d DUMMY_STATE */),"heater.mediums[1].d");
  TRACE_POP
}

/*
equation index: 826
type: SIMPLE_ASSIGN
$DER.heater.mediums.1.T.$pDERLSJac17.dummyVarLSJac17 = (-2.214479571349945e-07) * $DER.heater.mediums[1].p.SeedLSJac17 - $DER.heater.mediums.1.h.$pDERLSJac17.dummyVarLSJac17 / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_826(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,826};
  jacobian->tmpVars[1] /* der(heater.mediums.1.T.$pDERLSJac17.dummyVarLSJac17) JACOBIAN_DIFF_VAR */ = (-2.214479571349945e-07) * (jacobian->seedVars[0] /* der(heater.mediums[1].p.SeedLSJac17) SEED_VAR */) - (DIVISION(jacobian->tmpVars[0] /* der(heater.mediums.1.h.$pDERLSJac17.dummyVarLSJac17) JACOBIAN_DIFF_VAR */,-4181.885502948851,"-4181.885502948851"));
  TRACE_POP
}

/*
equation index: 827
type: SIMPLE_ASSIGN
$res_LSJac17_1.$pDERLSJac17.dummyVarLSJac17 = 997.0480319717385 * (4.515426036491987e-10 * $DER.heater.mediums[1].p.SeedLSJac17 + (-0.0002571314017648316) * $DER.heater.mediums.1.T.$pDERLSJac17.dummyVarLSJac17)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_827(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,827};
  jacobian->resultVars[0] /* $res_LSJac17_1.$pDERLSJac17.dummyVarLSJac17 JACOBIAN_VAR */ = (997.0480319717385) * ((4.515426036491987e-10) * (jacobian->seedVars[0] /* der(heater.mediums[1].p.SeedLSJac17) SEED_VAR */) + (-0.0002571314017648316) * (jacobian->tmpVars[1] /* der(heater.mediums.1.T.$pDERLSJac17.dummyVarLSJac17) JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac17_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac17;
  
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac17_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac17;
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_825(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_826(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_827(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 840
type: SIMPLE_ASSIGN
$DER.pipe.mediums.1.h.$pDERLSJac18.dummyVarLSJac18 = $DER.pipe.mediums[1].p.SeedLSJac18 / pipe.mediums[1].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_840(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,840};
  jacobian->tmpVars[0] /* der(pipe.mediums.1.h.$pDERLSJac18.dummyVarLSJac18) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* der(pipe.mediums[1].p.SeedLSJac18) SEED_VAR */,(data->localData[0]->realVars[224] /* pipe.mediums[1].d DUMMY_STATE */),"pipe.mediums[1].d");
  TRACE_POP
}

/*
equation index: 841
type: SIMPLE_ASSIGN
$DER.pipe.mediums.1.T.$pDERLSJac18.dummyVarLSJac18 = (-2.214479571349945e-07) * $DER.pipe.mediums[1].p.SeedLSJac18 - $DER.pipe.mediums.1.h.$pDERLSJac18.dummyVarLSJac18 / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_841(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,841};
  jacobian->tmpVars[1] /* der(pipe.mediums.1.T.$pDERLSJac18.dummyVarLSJac18) JACOBIAN_DIFF_VAR */ = (-2.214479571349945e-07) * (jacobian->seedVars[0] /* der(pipe.mediums[1].p.SeedLSJac18) SEED_VAR */) - (DIVISION(jacobian->tmpVars[0] /* der(pipe.mediums.1.h.$pDERLSJac18.dummyVarLSJac18) JACOBIAN_DIFF_VAR */,-4181.885502948851,"-4181.885502948851"));
  TRACE_POP
}

/*
equation index: 842
type: SIMPLE_ASSIGN
$res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 = 997.0480319717385 * (4.515426036491987e-10 * $DER.pipe.mediums[1].p.SeedLSJac18 + (-0.0002571314017648316) * $DER.pipe.mediums.1.T.$pDERLSJac18.dummyVarLSJac18)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_842(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,842};
  jacobian->resultVars[0] /* $res_LSJac18_1.$pDERLSJac18.dummyVarLSJac18 JACOBIAN_VAR */ = (997.0480319717385) * ((4.515426036491987e-10) * (jacobian->seedVars[0] /* der(pipe.mediums[1].p.SeedLSJac18) SEED_VAR */) + (-0.0002571314017648316) * (jacobian->tmpVars[1] /* der(pipe.mediums.1.T.$pDERLSJac18.dummyVarLSJac18) JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac18_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac18;
  
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac18_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac18;
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_840(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_841(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_842(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

/*
equation index: 850
type: SIMPLE_ASSIGN
$DER.pipe.mediums.2.h.$pDERLSJac19.dummyVarLSJac19 = $DER.pipe.mediums[2].p.SeedLSJac19 / pipe.mediums[2].d
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_850(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 0;
  const int equationIndexes[2] = {1,850};
  jacobian->tmpVars[0] /* der(pipe.mediums.2.h.$pDERLSJac19.dummyVarLSJac19) JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->seedVars[0] /* der(pipe.mediums[2].p.SeedLSJac19) SEED_VAR */,(data->localData[0]->realVars[225] /* pipe.mediums[2].d DUMMY_STATE */),"pipe.mediums[2].d");
  TRACE_POP
}

/*
equation index: 851
type: SIMPLE_ASSIGN
$DER.pipe.mediums.2.T.$pDERLSJac19.dummyVarLSJac19 = (-2.214479571349945e-07) * $DER.pipe.mediums[2].p.SeedLSJac19 - $DER.pipe.mediums.2.h.$pDERLSJac19.dummyVarLSJac19 / (-4181.885502948851)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_851(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 1;
  const int equationIndexes[2] = {1,851};
  jacobian->tmpVars[1] /* der(pipe.mediums.2.T.$pDERLSJac19.dummyVarLSJac19) JACOBIAN_DIFF_VAR */ = (-2.214479571349945e-07) * (jacobian->seedVars[0] /* der(pipe.mediums[2].p.SeedLSJac19) SEED_VAR */) - (DIVISION(jacobian->tmpVars[0] /* der(pipe.mediums.2.h.$pDERLSJac19.dummyVarLSJac19) JACOBIAN_DIFF_VAR */,-4181.885502948851,"-4181.885502948851"));
  TRACE_POP
}

/*
equation index: 852
type: SIMPLE_ASSIGN
$res_LSJac19_1.$pDERLSJac19.dummyVarLSJac19 = 997.0480319717385 * (4.515426036491987e-10 * $DER.pipe.mediums[2].p.SeedLSJac19 + (-0.0002571314017648316) * $DER.pipe.mediums.2.T.$pDERLSJac19.dummyVarLSJac19)
*/
void Modelica_Fluid_Examples_HeatingSystem_eqFunction_852(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int baseClockIndex = 0;
  const int subClockIndex = 2;
  const int equationIndexes[2] = {1,852};
  jacobian->resultVars[0] /* $res_LSJac19_1.$pDERLSJac19.dummyVarLSJac19 JACOBIAN_VAR */ = (997.0480319717385) * ((4.515426036491987e-10) * (jacobian->seedVars[0] /* der(pipe.mediums[2].p.SeedLSJac19) SEED_VAR */) + (-0.0002571314017648316) * (jacobian->tmpVars[1] /* der(pipe.mediums.2.T.$pDERLSJac19.dummyVarLSJac19) JACOBIAN_DIFF_VAR */));
  TRACE_POP
}

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac19_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac19;
  
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_functionJacLSJac19_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_LSJac19;
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_850(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_851(data, threadData, jacobian, parentJacobian);
  Modelica_Fluid_Examples_HeatingSystem_eqFunction_852(data, threadData, jacobian, parentJacobian);
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_functionJacH_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_functionJacF_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_functionJacD_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_functionJacC_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_functionJacB_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_functionJacA_constantEqns(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_A;
  
  
  TRACE_POP
  return 0;
}

int Modelica_Fluid_Examples_HeatingSystem_functionJacA_column(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  int index = Modelica_Fluid_Examples_HeatingSystem_INDEX_JAC_A;
  TRACE_POP
  return 0;
}

OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac16(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Modelica_Fluid_Examples_HeatingSystem_JacLSJac16.bin");
  
  initAnalyticJacobian(jacobian, 1, 1, 3, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac17(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Modelica_Fluid_Examples_HeatingSystem_JacLSJac17.bin");
  
  initAnalyticJacobian(jacobian, 1, 1, 3, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac18(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Modelica_Fluid_Examples_HeatingSystem_JacLSJac18.bin");
  
  initAnalyticJacobian(jacobian, 1, 1, 3, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianLSJac19(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Modelica_Fluid_Examples_HeatingSystem_JacLSJac19.bin");
  
  initAnalyticJacobian(jacobian, 1, 1, 3, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(1, 1, 1);
  jacobian->availability = JACOBIAN_AVAILABLE;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 1+1, pFile, FALSE);
  if (count != 1+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 1, pFile, FALSE);
  if (count != 1) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 1+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int Modelica_Fluid_Examples_HeatingSystem_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "Modelica_Fluid_Examples_HeatingSystem_JacA.bin");
  
  initAnalyticJacobian(jacobian, 10, 10, 0, NULL, jacobian->sparsePattern);
  jacobian->sparsePattern = allocSparsePattern(10, 68, 10);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 10+1, pFile, FALSE);
  if (count != 10+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %ld", 10+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 68, pFile, FALSE);
  if (count != 68) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %ld", 10+1, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1);
  /* color 2 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 1);
  /* color 3 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 1);
  /* color 4 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 1);
  /* color 5 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 1);
  /* color 6 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 1);
  /* color 7 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 7, 1);
  /* color 8 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 8, 1);
  /* color 9 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 9, 1);
  /* color 10 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 10, 1);
  
  omc_fclose(pFile);
  
  TRACE_POP
  return 0;
}



