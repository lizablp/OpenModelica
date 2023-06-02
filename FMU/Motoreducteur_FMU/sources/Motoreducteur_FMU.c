// define class name and unique id
#define MODEL_IDENTIFIER Motoreducteur
#define MODEL_GUID "{8f910c94-4db5-44a9-ba5f-219ef7355db0}"

// include fmu header files, typedefs and macros
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "util/omc_error.h"
#include "Motoreducteur_functions.h"
#include "simulation/solver/initialization/initialization.h"
#include "simulation/solver/events.h"
#include "fmi-export/fmu2_model_interface.h"
#include "fmi-export/fmu_read_flags.h"

#ifdef __cplusplus
extern "C" {
#endif

void setStartValues(ModelInstance *comp);
void setDefaultStartValues(ModelInstance *comp);
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo);
fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value);
fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value);
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value);
fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr);
fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value);
fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value);
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr);
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr);
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr);

// define model size
#define NUMBER_OF_STATES 2
#define NUMBER_OF_EVENT_INDICATORS 9
#define NUMBER_OF_REALS 115
#define NUMBER_OF_REAL_INPUTS 0
#define NUMBER_OF_INTEGERS 2
#define NUMBER_OF_STRINGS 0
#define NUMBER_OF_BOOLEANS 12
#define NUMBER_OF_EXTERNALFUNCTIONS 0

// define initial state vector as vector of value references
#define STATES { 0, 1 }
#define STATESDERIVATIVES { 2, 3 }


// implementation of the Model Exchange functions
extern void Motoreducteur_setupDataStruc(DATA *data, threadData_t *threadData);
#define fmu2_model_interface_setupDataStruc Motoreducteur_setupDataStruc
#include "fmi-export/fmu2_model_interface.c.inc"
#include "fmi-export/fmu_read_flags.c.inc"

// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setDefaultStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[1].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[5].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[6].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[7].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[8].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[9].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[10].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[11].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[12].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[13].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[14].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[15].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[16].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[17].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[18].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[19].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[20].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[21].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[22].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[23].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[24].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[25].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[26].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[27].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[28].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[29].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[30].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[31].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[32].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[33].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[34].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[35].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[36].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[37].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[38].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[39].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[40].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[41].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[42].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[43].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[44].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[45].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[46].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[47].attribute.start = 0;
  comp->fmuData->modelData->realVarsData[48].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[49].attribute.start = 0.0;
  comp->fmuData->modelData->realVarsData[50].attribute.start = 0;
  comp->fmuData->modelData->integerVarsData[0].attribute.start = 2;
  comp->fmuData->modelData->booleanVarsData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanVarsData[4].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[0].attribute.start = -0.001;
  comp->fmuData->modelData->realParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[2].attribute.start = 6.0;
  comp->fmuData->modelData->realParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[4].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[5].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[6].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[7].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[8].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[9].attribute.start = 0.0068;
  comp->fmuData->modelData->realParameterData[10].attribute.start = 1e-06;
  comp->fmuData->modelData->realParameterData[11].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[12].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[13].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[14].attribute.start = 0.9;
  comp->fmuData->modelData->realParameterData[15].attribute.start = 0.9;
  comp->fmuData->modelData->realParameterData[16].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[17].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[18].attribute.start = 19.0;
  comp->fmuData->modelData->realParameterData[19].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[20].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[21].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[22].attribute.start = 5.0;
  comp->fmuData->modelData->realParameterData[23].attribute.start = -0.05;
  comp->fmuData->modelData->realParameterData[24].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[25].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[26].attribute.start = 4.0;
  comp->fmuData->modelData->realParameterData[27].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[28].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[29].attribute.start = 300.15;
  comp->fmuData->modelData->realParameterData[30].attribute.start = 0.0;
  comp->fmuData->modelData->realParameterData[31].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[32].attribute.start = 0;
  comp->fmuData->modelData->realParameterData[33].attribute.start = 0;
  comp->fmuData->modelData->integerParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = 0;
  comp->fmuData->modelData->booleanParameterData[5].attribute.start = 0;
}
// Set values for all variables that define a start value
OMC_DISABLE_OPT
void setStartValues(ModelInstance *comp) {
  comp->fmuData->modelData->realVarsData[0].attribute.start =  comp->fmuData->localData[0]->realVars[0];
  comp->fmuData->modelData->realVarsData[1].attribute.start =  comp->fmuData->localData[0]->realVars[1];
  comp->fmuData->modelData->realVarsData[2].attribute.start =  comp->fmuData->localData[0]->realVars[2];
  comp->fmuData->modelData->realVarsData[3].attribute.start =  comp->fmuData->localData[0]->realVars[3];
  comp->fmuData->modelData->realVarsData[4].attribute.start =  comp->fmuData->localData[0]->realVars[4];
  comp->fmuData->modelData->realVarsData[5].attribute.start =  comp->fmuData->localData[0]->realVars[5];
  comp->fmuData->modelData->realVarsData[6].attribute.start =  comp->fmuData->localData[0]->realVars[6];
  comp->fmuData->modelData->realVarsData[7].attribute.start =  comp->fmuData->localData[0]->realVars[7];
  comp->fmuData->modelData->realVarsData[8].attribute.start =  comp->fmuData->localData[0]->realVars[8];
  comp->fmuData->modelData->realVarsData[9].attribute.start =  comp->fmuData->localData[0]->realVars[9];
  comp->fmuData->modelData->realVarsData[10].attribute.start =  comp->fmuData->localData[0]->realVars[10];
  comp->fmuData->modelData->realVarsData[11].attribute.start =  comp->fmuData->localData[0]->realVars[11];
  comp->fmuData->modelData->realVarsData[12].attribute.start =  comp->fmuData->localData[0]->realVars[12];
  comp->fmuData->modelData->realVarsData[13].attribute.start =  comp->fmuData->localData[0]->realVars[13];
  comp->fmuData->modelData->realVarsData[14].attribute.start =  comp->fmuData->localData[0]->realVars[14];
  comp->fmuData->modelData->realVarsData[15].attribute.start =  comp->fmuData->localData[0]->realVars[15];
  comp->fmuData->modelData->realVarsData[16].attribute.start =  comp->fmuData->localData[0]->realVars[16];
  comp->fmuData->modelData->realVarsData[17].attribute.start =  comp->fmuData->localData[0]->realVars[17];
  comp->fmuData->modelData->realVarsData[18].attribute.start =  comp->fmuData->localData[0]->realVars[18];
  comp->fmuData->modelData->realVarsData[19].attribute.start =  comp->fmuData->localData[0]->realVars[19];
  comp->fmuData->modelData->realVarsData[20].attribute.start =  comp->fmuData->localData[0]->realVars[20];
  comp->fmuData->modelData->realVarsData[21].attribute.start =  comp->fmuData->localData[0]->realVars[21];
  comp->fmuData->modelData->realVarsData[22].attribute.start =  comp->fmuData->localData[0]->realVars[22];
  comp->fmuData->modelData->realVarsData[23].attribute.start =  comp->fmuData->localData[0]->realVars[23];
  comp->fmuData->modelData->realVarsData[24].attribute.start =  comp->fmuData->localData[0]->realVars[24];
  comp->fmuData->modelData->realVarsData[25].attribute.start =  comp->fmuData->localData[0]->realVars[25];
  comp->fmuData->modelData->realVarsData[26].attribute.start =  comp->fmuData->localData[0]->realVars[26];
  comp->fmuData->modelData->realVarsData[27].attribute.start =  comp->fmuData->localData[0]->realVars[27];
  comp->fmuData->modelData->realVarsData[28].attribute.start =  comp->fmuData->localData[0]->realVars[28];
  comp->fmuData->modelData->realVarsData[29].attribute.start =  comp->fmuData->localData[0]->realVars[29];
  comp->fmuData->modelData->realVarsData[30].attribute.start =  comp->fmuData->localData[0]->realVars[30];
  comp->fmuData->modelData->realVarsData[31].attribute.start =  comp->fmuData->localData[0]->realVars[31];
  comp->fmuData->modelData->realVarsData[32].attribute.start =  comp->fmuData->localData[0]->realVars[32];
  comp->fmuData->modelData->realVarsData[33].attribute.start =  comp->fmuData->localData[0]->realVars[33];
  comp->fmuData->modelData->realVarsData[34].attribute.start =  comp->fmuData->localData[0]->realVars[34];
  comp->fmuData->modelData->realVarsData[35].attribute.start =  comp->fmuData->localData[0]->realVars[35];
  comp->fmuData->modelData->realVarsData[36].attribute.start =  comp->fmuData->localData[0]->realVars[36];
  comp->fmuData->modelData->realVarsData[37].attribute.start =  comp->fmuData->localData[0]->realVars[37];
  comp->fmuData->modelData->realVarsData[38].attribute.start =  comp->fmuData->localData[0]->realVars[38];
  comp->fmuData->modelData->realVarsData[39].attribute.start =  comp->fmuData->localData[0]->realVars[39];
  comp->fmuData->modelData->realVarsData[40].attribute.start =  comp->fmuData->localData[0]->realVars[40];
  comp->fmuData->modelData->realVarsData[41].attribute.start =  comp->fmuData->localData[0]->realVars[41];
  comp->fmuData->modelData->realVarsData[42].attribute.start =  comp->fmuData->localData[0]->realVars[42];
  comp->fmuData->modelData->realVarsData[43].attribute.start =  comp->fmuData->localData[0]->realVars[43];
  comp->fmuData->modelData->realVarsData[44].attribute.start =  comp->fmuData->localData[0]->realVars[44];
  comp->fmuData->modelData->realVarsData[45].attribute.start =  comp->fmuData->localData[0]->realVars[45];
  comp->fmuData->modelData->realVarsData[46].attribute.start =  comp->fmuData->localData[0]->realVars[46];
  comp->fmuData->modelData->realVarsData[47].attribute.start =  comp->fmuData->localData[0]->realVars[47];
  comp->fmuData->modelData->realVarsData[48].attribute.start =  comp->fmuData->localData[0]->realVars[48];
  comp->fmuData->modelData->realVarsData[49].attribute.start =  comp->fmuData->localData[0]->realVars[49];
  comp->fmuData->modelData->realVarsData[50].attribute.start =  comp->fmuData->localData[0]->realVars[50];
  comp->fmuData->modelData->integerVarsData[0].attribute.start =  comp->fmuData->localData[0]->integerVars[0];
  comp->fmuData->modelData->booleanVarsData[0].attribute.start =  comp->fmuData->localData[0]->booleanVars[0];
  comp->fmuData->modelData->booleanVarsData[1].attribute.start =  comp->fmuData->localData[0]->booleanVars[1];
  comp->fmuData->modelData->booleanVarsData[2].attribute.start =  comp->fmuData->localData[0]->booleanVars[2];
  comp->fmuData->modelData->booleanVarsData[3].attribute.start =  comp->fmuData->localData[0]->booleanVars[3];
  comp->fmuData->modelData->booleanVarsData[4].attribute.start =  comp->fmuData->localData[0]->booleanVars[4];
  comp->fmuData->modelData->realParameterData[0].attribute.start = comp->fmuData->simulationInfo->realParameter[0];
  comp->fmuData->modelData->realParameterData[1].attribute.start = comp->fmuData->simulationInfo->realParameter[1];
  comp->fmuData->modelData->realParameterData[2].attribute.start = comp->fmuData->simulationInfo->realParameter[2];
  comp->fmuData->modelData->realParameterData[3].attribute.start = comp->fmuData->simulationInfo->realParameter[3];
  comp->fmuData->modelData->realParameterData[4].attribute.start = comp->fmuData->simulationInfo->realParameter[4];
  comp->fmuData->modelData->realParameterData[5].attribute.start = comp->fmuData->simulationInfo->realParameter[5];
  comp->fmuData->modelData->realParameterData[6].attribute.start = comp->fmuData->simulationInfo->realParameter[6];
  comp->fmuData->modelData->realParameterData[7].attribute.start = comp->fmuData->simulationInfo->realParameter[7];
  comp->fmuData->modelData->realParameterData[8].attribute.start = comp->fmuData->simulationInfo->realParameter[8];
  comp->fmuData->modelData->realParameterData[9].attribute.start = comp->fmuData->simulationInfo->realParameter[9];
  comp->fmuData->modelData->realParameterData[10].attribute.start = comp->fmuData->simulationInfo->realParameter[10];
  comp->fmuData->modelData->realParameterData[11].attribute.start = comp->fmuData->simulationInfo->realParameter[11];
  comp->fmuData->modelData->realParameterData[12].attribute.start = comp->fmuData->simulationInfo->realParameter[12];
  comp->fmuData->modelData->realParameterData[13].attribute.start = comp->fmuData->simulationInfo->realParameter[13];
  comp->fmuData->modelData->realParameterData[14].attribute.start = comp->fmuData->simulationInfo->realParameter[14];
  comp->fmuData->modelData->realParameterData[15].attribute.start = comp->fmuData->simulationInfo->realParameter[15];
  comp->fmuData->modelData->realParameterData[16].attribute.start = comp->fmuData->simulationInfo->realParameter[16];
  comp->fmuData->modelData->realParameterData[17].attribute.start = comp->fmuData->simulationInfo->realParameter[17];
  comp->fmuData->modelData->realParameterData[18].attribute.start = comp->fmuData->simulationInfo->realParameter[18];
  comp->fmuData->modelData->realParameterData[19].attribute.start = comp->fmuData->simulationInfo->realParameter[19];
  comp->fmuData->modelData->realParameterData[20].attribute.start = comp->fmuData->simulationInfo->realParameter[20];
  comp->fmuData->modelData->realParameterData[21].attribute.start = comp->fmuData->simulationInfo->realParameter[21];
  comp->fmuData->modelData->realParameterData[22].attribute.start = comp->fmuData->simulationInfo->realParameter[22];
  comp->fmuData->modelData->realParameterData[23].attribute.start = comp->fmuData->simulationInfo->realParameter[23];
  comp->fmuData->modelData->realParameterData[24].attribute.start = comp->fmuData->simulationInfo->realParameter[24];
  comp->fmuData->modelData->realParameterData[25].attribute.start = comp->fmuData->simulationInfo->realParameter[25];
  comp->fmuData->modelData->realParameterData[26].attribute.start = comp->fmuData->simulationInfo->realParameter[26];
  comp->fmuData->modelData->realParameterData[27].attribute.start = comp->fmuData->simulationInfo->realParameter[27];
  comp->fmuData->modelData->realParameterData[28].attribute.start = comp->fmuData->simulationInfo->realParameter[28];
  comp->fmuData->modelData->realParameterData[29].attribute.start = comp->fmuData->simulationInfo->realParameter[29];
  comp->fmuData->modelData->realParameterData[30].attribute.start = comp->fmuData->simulationInfo->realParameter[30];
  comp->fmuData->modelData->realParameterData[31].attribute.start = comp->fmuData->simulationInfo->realParameter[31];
  comp->fmuData->modelData->realParameterData[32].attribute.start = comp->fmuData->simulationInfo->realParameter[32];
  comp->fmuData->modelData->realParameterData[33].attribute.start = comp->fmuData->simulationInfo->realParameter[33];
  comp->fmuData->modelData->integerParameterData[0].attribute.start = comp->fmuData->simulationInfo->integerParameter[0];
  comp->fmuData->modelData->booleanParameterData[0].attribute.start = comp->fmuData->simulationInfo->booleanParameter[0];
  comp->fmuData->modelData->booleanParameterData[1].attribute.start = comp->fmuData->simulationInfo->booleanParameter[1];
  comp->fmuData->modelData->booleanParameterData[2].attribute.start = comp->fmuData->simulationInfo->booleanParameter[2];
  comp->fmuData->modelData->booleanParameterData[3].attribute.start = comp->fmuData->simulationInfo->booleanParameter[3];
  comp->fmuData->modelData->booleanParameterData[4].attribute.start = comp->fmuData->simulationInfo->booleanParameter[4];
  comp->fmuData->modelData->booleanParameterData[5].attribute.start = comp->fmuData->simulationInfo->booleanParameter[5];
}

// Used to set the next time event, if any.
void eventUpdate(ModelInstance* comp, fmi2EventInfo* eventInfo) {
}

static const int realAliasIndexes[30] = {
  -47, 46, 10, -47, 6, 1, 6, 46, -7, -7, -47, 10, 46, 7, -7, 1, 1, -17, 1, 1,
  22, 50, 0, 50, -47, 7, 46, 1, 22, -51
};

fmi2Real getReal(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 51) {
    return comp->fmuData->localData[0]->realVars[vr];
  }
  if (vr < 85) {
    return comp->fmuData->simulationInfo->realParameter[vr-51];
  }
  if (vr < 115) {
    int ix = realAliasIndexes[vr-85];
    return ix>=0 ? getReal(comp, ix) : -getReal(comp, -(ix+1));
  }
  return NAN;
}

fmi2Status setReal(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Real value) {
  // set start value attribute for all variable that has start value, till initialization mode
  if (vr < 51 && (comp->state == model_state_instantiated || comp->state == model_state_initialization_mode)) {
    comp->fmuData->modelData->realVarsData[vr].attribute.start = value;
  }
  if (vr < 51) {
    comp->fmuData->localData[0]->realVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 85) {
    comp->fmuData->simulationInfo->realParameter[vr-51] = value;
    return fmi2OK;
  }
  if (vr < 115) {
    int ix = realAliasIndexes[vr-85];
    return ix >= 0 ? setReal(comp, ix, value) : setReal(comp, -(ix+1), -value);
  }
  return fmi2Error;
}

fmi2Integer getInteger(ModelInstance* comp, const fmi2ValueReference vr) {
  if (vr < 1) {
    return comp->fmuData->localData[0]->integerVars[vr];
  }
  if (vr < 2) {
    return comp->fmuData->simulationInfo->integerParameter[vr-1];
  }
  return 0;
}

fmi2Status setInteger(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Integer value) {
  // set start value attribute for all variable that has start value, till initialization mode
  if (vr < 1 && (comp->state == model_state_instantiated || comp->state == model_state_initialization_mode)) {
    comp->fmuData->modelData->integerVarsData[vr].attribute.start = value;
  }
  if (vr < 1) {
    comp->fmuData->localData[0]->integerVars[vr] = value;
    return fmi2OK;
  }
  if (vr < 2) {
    comp->fmuData->simulationInfo->integerParameter[vr-1] = value;
    return fmi2OK;
  }
  return fmi2Error;
}
fmi2Boolean getBoolean(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    case 0 : return comp->fmuData->localData[0]->booleanVars[0]; break;
    case 1 : return comp->fmuData->localData[0]->booleanVars[1]; break;
    case 2 : return comp->fmuData->localData[0]->booleanVars[2]; break;
    case 3 : return comp->fmuData->localData[0]->booleanVars[3]; break;
    case 4 : return comp->fmuData->localData[0]->booleanVars[4]; break;
    case 5 : return comp->fmuData->simulationInfo->booleanParameter[0]; break;
    case 6 : return comp->fmuData->simulationInfo->booleanParameter[1]; break;
    case 7 : return comp->fmuData->simulationInfo->booleanParameter[2]; break;
    case 8 : return comp->fmuData->simulationInfo->booleanParameter[3]; break;
    case 9 : return comp->fmuData->simulationInfo->booleanParameter[4]; break;
    case 10 : return comp->fmuData->simulationInfo->booleanParameter[5]; break;
    case 11 : return getBoolean(comp, 4); break;
    default:
      return fmi2False;
  }
}

fmi2Status setBoolean(ModelInstance* comp, const fmi2ValueReference vr, const fmi2Boolean value) {
  switch (vr) {
    case 0 : comp->fmuData->localData[0]->booleanVars[0] = value; break;
    case 1 : comp->fmuData->localData[0]->booleanVars[1] = value; break;
    case 2 : comp->fmuData->localData[0]->booleanVars[2] = value; break;
    case 3 : comp->fmuData->localData[0]->booleanVars[3] = value; break;
    case 4 : comp->fmuData->localData[0]->booleanVars[4] = value; break;
    case 5 : comp->fmuData->simulationInfo->booleanParameter[0] = value; break;
    case 6 : comp->fmuData->simulationInfo->booleanParameter[1] = value; break;
    case 7 : comp->fmuData->simulationInfo->booleanParameter[2] = value; break;
    case 8 : comp->fmuData->simulationInfo->booleanParameter[3] = value; break;
    case 9 : comp->fmuData->simulationInfo->booleanParameter[4] = value; break;
    case 10 : comp->fmuData->simulationInfo->booleanParameter[5] = value; break;
    case 11 : return setBoolean(comp, 4, value); break;
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2String getString(ModelInstance* comp, const fmi2ValueReference vr) {
  switch (vr) {
    default:
      return "";
  }
}

fmi2Status setString(ModelInstance* comp, const fmi2ValueReference vr, fmi2String value) {
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

fmi2Status setExternalFunction(ModelInstance* c, const fmi2ValueReference vr, const void* value){
  switch (vr) {
    default:
      return fmi2Error;
  }
  return fmi2OK;
}

/* function maps input references to a input index used in partialDerivatives */
fmi2ValueReference mapInputReference2InputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps output references to a input index used in partialDerivatives */
fmi2ValueReference mapOutputReference2OutputNumber(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps output references to an internal output Real derivatives */
fmi2ValueReference mapOutputReference2RealOutputDerivatives(const fmi2ValueReference vr) {
    switch (vr) {
      default:
        return -1;
    }
}
/* function maps initialUnknowns UnknownVars ValueReferences to an internal partial derivatives index */
fmi2ValueReference mapInitialUnknownsdependentIndex(const fmi2ValueReference vr) {
    switch (vr) {
      case 72: return 0; break;
      case 71: return 1; break;
      case 70: return 2; break;
      case 63: return 3; break;
      case 62: return 4; break;
      case 56: return 5; break;
      case 58: return 6; break;
      case 59: return 7; break;
      case 57: return 8; break;
      case 2: return 9; break;
      case 3: return 10; break;
      case 52: return 11; break;
      case 54: return 12; break;
      case 55: return 13; break;
      case 78: return 14; break;
      case 79: return 15; break;
      case 82: return 16; break;
      case 83: return 17; break;
      case 84: return 18; break;
      default:
        return -1;
    }
}
/* function maps initialUnknowns knownVars ValueReferences to an internal partial derivatives index */
fmi2ValueReference mapInitialUnknownsIndependentIndex(const fmi2ValueReference vr) {
    switch (vr) {
      case 0: return 0; break;
      case 51: return 1; break;
      case 53: return 2; break;
      case 60: return 3; break;
      case 61: return 4; break;
      case 64: return 5; break;
      case 65: return 6; break;
      case 66: return 7; break;
      case 67: return 8; break;
      case 68: return 9; break;
      case 69: return 10; break;
      case 73: return 11; break;
      case 74: return 12; break;
      case 75: return 13; break;
      case 76: return 14; break;
      case 77: return 15; break;
      case 80: return 16; break;
      case 81: return 17; break;
      default:
        return -1;
    }
}

#ifdef __cplusplus
}
#endif

