#ifndef Motoreducteur__H
#define Motoreducteur__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate(threadData_t *threadData, real_array _x, real_array _y, modelica_real _xi, modelica_integer _iLast, real_array __omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERx, real_array __omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERy, modelica_real __omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERxi, modelica_integer *out__omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERiNew);
DLLExport
modelica_metatype boxptr__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _xi, modelica_metatype _iLast, modelica_metatype __omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERx, modelica_metatype __omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERy, modelica_metatype __omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERxi, modelica_metatype *out__omcQ_24Modelica_24PMath_24PVectors_24Pinterpolate_24funDERiNew);
static const MMC_DEFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate,2,0) {(void*) boxptr__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate,0}};
#define boxvar__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate MMC_REFSTRUCTLIT(boxvar_lit__omcQ_24DER_24Modelica_24PMath_24PVectors_24Pinterpolate)


DLLExport
modelica_boolean omc_Modelica_Math_Matrices_isEqual(threadData_t *threadData, real_array _M1, real_array _M2, modelica_real _eps);
DLLExport
modelica_metatype boxptr_Modelica_Math_Matrices_isEqual(threadData_t *threadData, modelica_metatype _M1, modelica_metatype _M2, modelica_metatype _eps);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Matrices_isEqual,2,0) {(void*) boxptr_Modelica_Math_Matrices_isEqual,0}};
#define boxvar_Modelica_Math_Matrices_isEqual MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Matrices_isEqual)


DLLExport
modelica_real omc_Modelica_Math_Vectors_interpolate(threadData_t *threadData, real_array _x, real_array _y, modelica_real _xi, modelica_integer _iLast, modelica_integer *out_iNew);
DLLExport
modelica_metatype boxptr_Modelica_Math_Vectors_interpolate(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _xi, modelica_metatype _iLast, modelica_metatype *out_iNew);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_interpolate,2,0) {(void*) boxptr_Modelica_Math_Vectors_interpolate,0}};
#define boxvar_Modelica_Math_Vectors_interpolate MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Vectors_interpolate)
#include "Motoreducteur_model.h"


#ifdef __cplusplus
}
#endif
#endif

