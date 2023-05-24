#ifndef Modelica_Fluid_Examples_HeatingSystem__H
#define Modelica_Fluid_Examples_HeatingSystem__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_real _p;
  modelica_real _T;
} Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState), __VA_ARGS__)

typedef struct {
  modelica_real _psat;
  modelica_real _Tsat;
} Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties__desc;

void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_psat, modelica_real in_Tsat);
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_wrap_vars(td, dst , in_psat, in_Tsat) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_wrap_vars_p(td, &dst , in_psat, in_Tsat)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_to_vars_p(void* v_src , modelica_real* in_psat, modelica_real* in_Tsat);
// #define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties))
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties))
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties), __VA_ARGS__)

typedef struct {
  modelica_integer _phase;
  modelica_real _h;
  modelica_real _d;
  modelica_real _T;
  modelica_real _p;
} Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_integer in_phase, modelica_real in_h, modelica_real in_d, modelica_real in_T, modelica_real in_p);
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_wrap_vars(td, dst , in_phase, in_h, in_d, in_T, in_p) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_phase, in_h, in_d, in_T, in_p)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_integer* in_phase, modelica_real* in_h, modelica_real* in_d, modelica_real* in_T, modelica_real* in_p);
// #define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _T;
  modelica_real _R_s;
  modelica_real _pi;
  modelica_real _tau;
  modelica_real _g;
  modelica_real _gpi;
  modelica_real _gpipi;
  modelica_real _gtau;
  modelica_real _gtautau;
  modelica_real _gtaupi;
} Modelica_Media_Common_GibbsDerivs;
extern struct record_description Modelica_Media_Common_GibbsDerivs__desc;

void Modelica_Media_Common_GibbsDerivs_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_GibbsDerivs_construct(td, ths ) Modelica_Media_Common_GibbsDerivs_construct_p(td, &ths )
void Modelica_Media_Common_GibbsDerivs_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_GibbsDerivs_copy(src,dst) Modelica_Media_Common_GibbsDerivs_copy_p(&src, &dst)


void Modelica_Media_Common_GibbsDerivs_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T, modelica_real in_R_s, modelica_real in_pi, modelica_real in_tau, modelica_real in_g, modelica_real in_gpi, modelica_real in_gpipi, modelica_real in_gtau, modelica_real in_gtautau, modelica_real in_gtaupi);
#define Modelica_Media_Common_GibbsDerivs_wrap_vars(td, dst , in_p, in_T, in_R_s, in_pi, in_tau, in_g, in_gpi, in_gpipi, in_gtau, in_gtautau, in_gtaupi) Modelica_Media_Common_GibbsDerivs_wrap_vars_p(td, &dst , in_p, in_T, in_R_s, in_pi, in_tau, in_g, in_gpi, in_gpipi, in_gtau, in_gtautau, in_gtaupi)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_GibbsDerivs_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T, modelica_real* in_R_s, modelica_real* in_pi, modelica_real* in_tau, modelica_real* in_g, modelica_real* in_gpi, modelica_real* in_gpipi, modelica_real* in_gtau, modelica_real* in_gtautau, modelica_real* in_gtaupi);
// #define Modelica_Media_Common_GibbsDerivs_copy_to_vars(src,...) Modelica_Media_Common_GibbsDerivs_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_GibbsDerivs_array;
#define alloc_Modelica_Media_Common_GibbsDerivs_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_GibbsDerivs_construct_p, ndims, sizeof(Modelica_Media_Common_GibbsDerivs), __VA_ARGS__)
#define Modelica_Media_Common_GibbsDerivs_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs))
#define Modelica_Media_Common_GibbsDerivs_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs))
#define Modelica_Media_Common_GibbsDerivs_array_get(src,ndims,...)   (*(Modelica_Media_Common_GibbsDerivs*)(generic_array_get(&src, sizeof(Modelica_Media_Common_GibbsDerivs), __VA_ARGS__)))
#define Modelica_Media_Common_GibbsDerivs_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_GibbsDerivs_copy_p, sizeof(Modelica_Media_Common_GibbsDerivs), __VA_ARGS__)

typedef struct {
  modelica_real _d;
  modelica_real _T;
  modelica_real _R_s;
  modelica_real _delta;
  modelica_real _tau;
  modelica_real _f;
  modelica_real _fdelta;
  modelica_real _fdeltadelta;
  modelica_real _ftau;
  modelica_real _ftautau;
  modelica_real _fdeltatau;
} Modelica_Media_Common_HelmholtzDerivs;
extern struct record_description Modelica_Media_Common_HelmholtzDerivs__desc;

void Modelica_Media_Common_HelmholtzDerivs_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_HelmholtzDerivs_construct(td, ths ) Modelica_Media_Common_HelmholtzDerivs_construct_p(td, &ths )
void Modelica_Media_Common_HelmholtzDerivs_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_HelmholtzDerivs_copy(src,dst) Modelica_Media_Common_HelmholtzDerivs_copy_p(&src, &dst)


void Modelica_Media_Common_HelmholtzDerivs_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_d, modelica_real in_T, modelica_real in_R_s, modelica_real in_delta, modelica_real in_tau, modelica_real in_f, modelica_real in_fdelta, modelica_real in_fdeltadelta, modelica_real in_ftau, modelica_real in_ftautau, modelica_real in_fdeltatau);
#define Modelica_Media_Common_HelmholtzDerivs_wrap_vars(td, dst , in_d, in_T, in_R_s, in_delta, in_tau, in_f, in_fdelta, in_fdeltadelta, in_ftau, in_ftautau, in_fdeltatau) Modelica_Media_Common_HelmholtzDerivs_wrap_vars_p(td, &dst , in_d, in_T, in_R_s, in_delta, in_tau, in_f, in_fdelta, in_fdeltadelta, in_ftau, in_ftautau, in_fdeltatau)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_HelmholtzDerivs_copy_to_vars_p(void* v_src , modelica_real* in_d, modelica_real* in_T, modelica_real* in_R_s, modelica_real* in_delta, modelica_real* in_tau, modelica_real* in_f, modelica_real* in_fdelta, modelica_real* in_fdeltadelta, modelica_real* in_ftau, modelica_real* in_ftautau, modelica_real* in_fdeltatau);
// #define Modelica_Media_Common_HelmholtzDerivs_copy_to_vars(src,...) Modelica_Media_Common_HelmholtzDerivs_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_HelmholtzDerivs_array;
#define alloc_Modelica_Media_Common_HelmholtzDerivs_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_HelmholtzDerivs_construct_p, ndims, sizeof(Modelica_Media_Common_HelmholtzDerivs), __VA_ARGS__)
#define Modelica_Media_Common_HelmholtzDerivs_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs))
#define Modelica_Media_Common_HelmholtzDerivs_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs))
#define Modelica_Media_Common_HelmholtzDerivs_array_get(src,ndims,...)   (*(Modelica_Media_Common_HelmholtzDerivs*)(generic_array_get(&src, sizeof(Modelica_Media_Common_HelmholtzDerivs), __VA_ARGS__)))
#define Modelica_Media_Common_HelmholtzDerivs_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_HelmholtzDerivs_copy_p, sizeof(Modelica_Media_Common_HelmholtzDerivs), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _pd;
} Modelica_Media_Common_NewtonDerivatives__pT;
extern struct record_description Modelica_Media_Common_NewtonDerivatives__pT__desc;

void Modelica_Media_Common_NewtonDerivatives__pT_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_NewtonDerivatives__pT_construct(td, ths ) Modelica_Media_Common_NewtonDerivatives__pT_construct_p(td, &ths )
void Modelica_Media_Common_NewtonDerivatives__pT_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_NewtonDerivatives__pT_copy(src,dst) Modelica_Media_Common_NewtonDerivatives__pT_copy_p(&src, &dst)


void Modelica_Media_Common_NewtonDerivatives__pT_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_pd);
#define Modelica_Media_Common_NewtonDerivatives__pT_wrap_vars(td, dst , in_p, in_pd) Modelica_Media_Common_NewtonDerivatives__pT_wrap_vars_p(td, &dst , in_p, in_pd)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_NewtonDerivatives__pT_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_pd);
// #define Modelica_Media_Common_NewtonDerivatives__pT_copy_to_vars(src,...) Modelica_Media_Common_NewtonDerivatives__pT_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_NewtonDerivatives__pT_array;
#define alloc_Modelica_Media_Common_NewtonDerivatives__pT_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_NewtonDerivatives__pT_construct_p, ndims, sizeof(Modelica_Media_Common_NewtonDerivatives__pT), __VA_ARGS__)
#define Modelica_Media_Common_NewtonDerivatives__pT_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT))
#define Modelica_Media_Common_NewtonDerivatives__pT_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT))
#define Modelica_Media_Common_NewtonDerivatives__pT_array_get(src,ndims,...)   (*(Modelica_Media_Common_NewtonDerivatives__pT*)(generic_array_get(&src, sizeof(Modelica_Media_Common_NewtonDerivatives__pT), __VA_ARGS__)))
#define Modelica_Media_Common_NewtonDerivatives__pT_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_NewtonDerivatives__pT_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__pT), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _h;
  modelica_real _pd;
  modelica_real _pt;
  modelica_real _hd;
  modelica_real _ht;
} Modelica_Media_Common_NewtonDerivatives__ph;
extern struct record_description Modelica_Media_Common_NewtonDerivatives__ph__desc;

void Modelica_Media_Common_NewtonDerivatives__ph_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_NewtonDerivatives__ph_construct(td, ths ) Modelica_Media_Common_NewtonDerivatives__ph_construct_p(td, &ths )
void Modelica_Media_Common_NewtonDerivatives__ph_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_NewtonDerivatives__ph_copy(src,dst) Modelica_Media_Common_NewtonDerivatives__ph_copy_p(&src, &dst)


void Modelica_Media_Common_NewtonDerivatives__ph_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_h, modelica_real in_pd, modelica_real in_pt, modelica_real in_hd, modelica_real in_ht);
#define Modelica_Media_Common_NewtonDerivatives__ph_wrap_vars(td, dst , in_p, in_h, in_pd, in_pt, in_hd, in_ht) Modelica_Media_Common_NewtonDerivatives__ph_wrap_vars_p(td, &dst , in_p, in_h, in_pd, in_pt, in_hd, in_ht)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_NewtonDerivatives__ph_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_h, modelica_real* in_pd, modelica_real* in_pt, modelica_real* in_hd, modelica_real* in_ht);
// #define Modelica_Media_Common_NewtonDerivatives__ph_copy_to_vars(src,...) Modelica_Media_Common_NewtonDerivatives__ph_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_NewtonDerivatives__ph_array;
#define alloc_Modelica_Media_Common_NewtonDerivatives__ph_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_NewtonDerivatives__ph_construct_p, ndims, sizeof(Modelica_Media_Common_NewtonDerivatives__ph), __VA_ARGS__)
#define Modelica_Media_Common_NewtonDerivatives__ph_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph))
#define Modelica_Media_Common_NewtonDerivatives__ph_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph))
#define Modelica_Media_Common_NewtonDerivatives__ph_array_get(src,ndims,...)   (*(Modelica_Media_Common_NewtonDerivatives__ph*)(generic_array_get(&src, sizeof(Modelica_Media_Common_NewtonDerivatives__ph), __VA_ARGS__)))
#define Modelica_Media_Common_NewtonDerivatives__ph_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_NewtonDerivatives__ph_copy_p, sizeof(Modelica_Media_Common_NewtonDerivatives__ph), __VA_ARGS__)

typedef struct {
  modelica_integer _phase;
  modelica_integer _region;
  modelica_real _p;
  modelica_real _T;
  modelica_real _h;
  modelica_real _R_s;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _rho;
  modelica_real _s;
  modelica_real _pt;
  modelica_real _pd;
  modelica_real _vt;
  modelica_real _vp;
  modelica_real _x;
  modelica_real _dpT;
} Modelica_Media_Common_IF97BaseTwoPhase;
extern struct record_description Modelica_Media_Common_IF97BaseTwoPhase__desc;

void Modelica_Media_Common_IF97BaseTwoPhase_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_IF97BaseTwoPhase_construct(td, ths ) Modelica_Media_Common_IF97BaseTwoPhase_construct_p(td, &ths )
void Modelica_Media_Common_IF97BaseTwoPhase_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_IF97BaseTwoPhase_copy(src,dst) Modelica_Media_Common_IF97BaseTwoPhase_copy_p(&src, &dst)


void Modelica_Media_Common_IF97BaseTwoPhase_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_integer in_phase, modelica_integer in_region, modelica_real in_p, modelica_real in_T, modelica_real in_h, modelica_real in_R_s, modelica_real in_cp, modelica_real in_cv, modelica_real in_rho, modelica_real in_s, modelica_real in_pt, modelica_real in_pd, modelica_real in_vt, modelica_real in_vp, modelica_real in_x, modelica_real in_dpT);
#define Modelica_Media_Common_IF97BaseTwoPhase_wrap_vars(td, dst , in_phase, in_region, in_p, in_T, in_h, in_R_s, in_cp, in_cv, in_rho, in_s, in_pt, in_pd, in_vt, in_vp, in_x, in_dpT) Modelica_Media_Common_IF97BaseTwoPhase_wrap_vars_p(td, &dst , in_phase, in_region, in_p, in_T, in_h, in_R_s, in_cp, in_cv, in_rho, in_s, in_pt, in_pd, in_vt, in_vp, in_x, in_dpT)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars_p(void* v_src , modelica_integer* in_phase, modelica_integer* in_region, modelica_real* in_p, modelica_real* in_T, modelica_real* in_h, modelica_real* in_R_s, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_rho, modelica_real* in_s, modelica_real* in_pt, modelica_real* in_pd, modelica_real* in_vt, modelica_real* in_vp, modelica_real* in_x, modelica_real* in_dpT);
// #define Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars(src,...) Modelica_Media_Common_IF97BaseTwoPhase_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_IF97BaseTwoPhase_array;
#define alloc_Modelica_Media_Common_IF97BaseTwoPhase_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_IF97BaseTwoPhase_construct_p, ndims, sizeof(Modelica_Media_Common_IF97BaseTwoPhase), __VA_ARGS__)
#define Modelica_Media_Common_IF97BaseTwoPhase_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase))
#define Modelica_Media_Common_IF97BaseTwoPhase_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase))
#define Modelica_Media_Common_IF97BaseTwoPhase_array_get(src,ndims,...)   (*(Modelica_Media_Common_IF97BaseTwoPhase*)(generic_array_get(&src, sizeof(Modelica_Media_Common_IF97BaseTwoPhase), __VA_ARGS__)))
#define Modelica_Media_Common_IF97BaseTwoPhase_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_IF97BaseTwoPhase_copy_p, sizeof(Modelica_Media_Common_IF97BaseTwoPhase), __VA_ARGS__)

typedef struct {
  modelica_boolean _region3boundary;
  modelica_real _R_s;
  modelica_real _T;
  modelica_real _d;
  modelica_real _h;
  modelica_real _s;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _dpT;
  modelica_real _pt;
  modelica_real _pd;
  modelica_real _vt;
  modelica_real _vp;
} Modelica_Media_Common_IF97PhaseBoundaryProperties;
extern struct record_description Modelica_Media_Common_IF97PhaseBoundaryProperties__desc;

void Modelica_Media_Common_IF97PhaseBoundaryProperties_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_construct(td, ths ) Modelica_Media_Common_IF97PhaseBoundaryProperties_construct_p(td, &ths )
void Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_copy(src,dst) Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p(&src, &dst)


void Modelica_Media_Common_IF97PhaseBoundaryProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_boolean in_region3boundary, modelica_real in_R_s, modelica_real in_T, modelica_real in_d, modelica_real in_h, modelica_real in_s, modelica_real in_cp, modelica_real in_cv, modelica_real in_dpT, modelica_real in_pt, modelica_real in_pd, modelica_real in_vt, modelica_real in_vp);
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_wrap_vars(td, dst , in_region3boundary, in_R_s, in_T, in_d, in_h, in_s, in_cp, in_cv, in_dpT, in_pt, in_pd, in_vt, in_vp) Modelica_Media_Common_IF97PhaseBoundaryProperties_wrap_vars_p(td, &dst , in_region3boundary, in_R_s, in_T, in_d, in_h, in_s, in_cp, in_cv, in_dpT, in_pt, in_pd, in_vt, in_vp)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars_p(void* v_src , modelica_boolean* in_region3boundary, modelica_real* in_R_s, modelica_real* in_T, modelica_real* in_d, modelica_real* in_h, modelica_real* in_s, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_dpT, modelica_real* in_pt, modelica_real* in_pd, modelica_real* in_vt, modelica_real* in_vp);
// #define Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars(src,...) Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_IF97PhaseBoundaryProperties_array;
#define alloc_Modelica_Media_Common_IF97PhaseBoundaryProperties_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_construct_p, ndims, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties), __VA_ARGS__)
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties))
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties))
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_array_get(src,ndims,...)   (*(Modelica_Media_Common_IF97PhaseBoundaryProperties*)(generic_array_get(&src, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties), __VA_ARGS__)))
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_IF97PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_IF97PhaseBoundaryProperties), __VA_ARGS__)

typedef struct {
  modelica_real _d;
  modelica_real _h;
  modelica_real _u;
  modelica_real _s;
  modelica_real _cp;
  modelica_real _cv;
  modelica_real _pt;
  modelica_real _pd;
} Modelica_Media_Common_PhaseBoundaryProperties;
extern struct record_description Modelica_Media_Common_PhaseBoundaryProperties__desc;

void Modelica_Media_Common_PhaseBoundaryProperties_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Media_Common_PhaseBoundaryProperties_construct(td, ths ) Modelica_Media_Common_PhaseBoundaryProperties_construct_p(td, &ths )
void Modelica_Media_Common_PhaseBoundaryProperties_copy_p(void* v_src, void* v_dst);
#define Modelica_Media_Common_PhaseBoundaryProperties_copy(src,dst) Modelica_Media_Common_PhaseBoundaryProperties_copy_p(&src, &dst)


void Modelica_Media_Common_PhaseBoundaryProperties_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_d, modelica_real in_h, modelica_real in_u, modelica_real in_s, modelica_real in_cp, modelica_real in_cv, modelica_real in_pt, modelica_real in_pd);
#define Modelica_Media_Common_PhaseBoundaryProperties_wrap_vars(td, dst , in_d, in_h, in_u, in_s, in_cp, in_cv, in_pt, in_pd) Modelica_Media_Common_PhaseBoundaryProperties_wrap_vars_p(td, &dst , in_d, in_h, in_u, in_s, in_cp, in_cv, in_pt, in_pd)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Media_Common_PhaseBoundaryProperties_copy_to_vars_p(void* v_src , modelica_real* in_d, modelica_real* in_h, modelica_real* in_u, modelica_real* in_s, modelica_real* in_cp, modelica_real* in_cv, modelica_real* in_pt, modelica_real* in_pd);
// #define Modelica_Media_Common_PhaseBoundaryProperties_copy_to_vars(src,...) Modelica_Media_Common_PhaseBoundaryProperties_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Media_Common_PhaseBoundaryProperties_array;
#define alloc_Modelica_Media_Common_PhaseBoundaryProperties_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Media_Common_PhaseBoundaryProperties_construct_p, ndims, sizeof(Modelica_Media_Common_PhaseBoundaryProperties), __VA_ARGS__)
#define Modelica_Media_Common_PhaseBoundaryProperties_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties))
#define Modelica_Media_Common_PhaseBoundaryProperties_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties))
#define Modelica_Media_Common_PhaseBoundaryProperties_array_get(src,ndims,...)   (*(Modelica_Media_Common_PhaseBoundaryProperties*)(generic_array_get(&src, sizeof(Modelica_Media_Common_PhaseBoundaryProperties), __VA_ARGS__)))
#define Modelica_Media_Common_PhaseBoundaryProperties_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Media_Common_PhaseBoundaryProperties_copy_p, sizeof(Modelica_Media_Common_PhaseBoundaryProperties), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState), __VA_ARGS__)

typedef Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState;
extern struct record_description Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState__desc;

void Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_construct(td, ths ) Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_construct_p(td, &ths )
void Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy(src,dst) Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_p(&src, &dst)


void Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_integer in_phase, modelica_real in_h, modelica_real in_d, modelica_real in_T, modelica_real in_p);
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_wrap_vars(td, dst , in_phase, in_h, in_d, in_T, in_p) Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_phase, in_h, in_d, in_T, in_p)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_integer* in_phase, modelica_real* in_h, modelica_real* in_d, modelica_real* in_T, modelica_real* in_p);
// #define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_to_vars(src,...) Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_array;
#define alloc_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_construct_p, ndims, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState))
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)))
#define Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState_copy_p, sizeof(Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState), __VA_ARGS__)

DLLExport
Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData_t *threadData, modelica_real _V_flow, modelica_real _eta_nominal);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _eta_nominal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData_t *threadData, modelica_real _V_flow, real_array _V_flow_nominal, real_array _head_nominal);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _V_flow_nominal, modelica_metatype _head_nominal);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties (threadData_t *threadData, modelica_real omc_psat, modelica_real omc_Tsat);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _psat, modelica_metatype _Tsat);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState (threadData_t *threadData, modelica_integer omc_phase, modelica_real omc_h, modelica_real omc_d, modelica_real omc_T, modelica_real omc_p);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _h, modelica_metatype _d, modelica_metatype _T, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X, modelica_integer _phase, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X, modelica_metatype _phase, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X, modelica_integer _phase);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X, modelica_metatype _phase);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState (threadData_t *threadData, modelica_integer omc_phase, modelica_real omc_h, modelica_real omc_d, modelica_real omc_T, modelica_real omc_p);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _h, modelica_metatype _d, modelica_metatype _T, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData_t *threadData, modelica_real _pos);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density)


DLLExport
Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX)


DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState _state);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature,2,0) {(void*) boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature,0}};
#define boxvar_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real *out_dy_dx);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype *out_dy_dx);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite__withDerivative,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_cubicHermite__withDerivative,0}};
#define boxvar_Modelica_Fluid_Utilities_cubicHermite__withDerivative MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite__withDerivative)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _y1, modelica_real _y1d, modelica_real _y0d);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _y1, modelica_metatype _y1d, modelica_metatype _y0d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero,0}};
#define boxvar_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regFun3(threadData_t *threadData, modelica_real _x, modelica_real _x0, modelica_real _x1, modelica_real _y0, modelica_real _y1, modelica_real _y0d, modelica_real _y1d, modelica_real *out_c);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regFun3(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x0, modelica_metatype _x1, modelica_metatype _y0, modelica_metatype _y1, modelica_metatype _y0d, modelica_metatype _y1d, modelica_metatype *out_c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regFun3,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regFun3,0}};
#define boxvar_Modelica_Fluid_Utilities_regFun3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regFun3)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_real _x, modelica_real _delta);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regRoot,0}};
#define boxvar_Modelica_Fluid_Utilities_regRoot MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regRoot)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare2(threadData_t *threadData, modelica_real _x, modelica_real _x_small, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare2(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x_small, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regSquare2,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regSquare2,0}};
#define boxvar_Modelica_Fluid_Utilities_regSquare2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regSquare2)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regStep,0}};
#define boxvar_Modelica_Fluid_Utilities_regStep MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep)


DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0);
DLLExport
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility,0}};
#define boxvar_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility)


DLLExport
real_array omc_Modelica_Math_Matrices_solve(threadData_t *threadData, real_array _A, real_array _b);
DLLExport
modelica_metatype boxptr_Modelica_Math_Matrices_solve(threadData_t *threadData, modelica_metatype _A, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Matrices_solve,2,0) {(void*) boxptr_Modelica_Math_Matrices_solve,0}};
#define boxvar_Modelica_Math_Matrices_solve MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Matrices_solve)


DLLExport
real_array omc_Modelica_Math_Matrices_LAPACK_dgesv__vec(threadData_t *threadData, real_array _A, real_array _b, modelica_integer *out_info);
DLLExport
modelica_metatype boxptr_Modelica_Math_Matrices_LAPACK_dgesv__vec(threadData_t *threadData, modelica_metatype _A, modelica_metatype _b, modelica_metatype *out_info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Math_Matrices_LAPACK_dgesv__vec,2,0) {(void*) boxptr_Modelica_Math_Matrices_LAPACK_dgesv__vec,0}};
#define boxvar_Modelica_Math_Matrices_LAPACK_dgesv__vec MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Math_Matrices_LAPACK_dgesv__vec)

extern void dgesv_(int* /*_n*/, int* /*_nrhs*/, double* /*_Awork*/, int* /*_lda*/, int* /*_ipiv*/, double* /*_x*/, int* /*_ldb*/, int* /*_info*/);

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Common_GibbsDerivs (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_pi, modelica_real omc_tau, modelica_real omc_g, modelica_real omc_gpi, modelica_real omc_gpipi, modelica_real omc_gtau, modelica_real omc_gtautau, modelica_real omc_gtaupi);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _pi, modelica_metatype _tau, modelica_metatype _g, modelica_metatype _gpi, modelica_metatype _gpipi, modelica_metatype _gtau, modelica_metatype _gtautau, modelica_metatype _gtaupi);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_GibbsDerivs,2,0) {(void*) boxptr_Modelica_Media_Common_GibbsDerivs,0}};
#define boxvar_Modelica_Media_Common_GibbsDerivs MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_GibbsDerivs)


DLLExport
Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Common_HelmholtzDerivs (threadData_t *threadData, modelica_real omc_d, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_delta, modelica_real omc_tau, modelica_real omc_f, modelica_real omc_fdelta, modelica_real omc_fdeltadelta, modelica_real omc_ftau, modelica_real omc_ftautau, modelica_real omc_fdeltatau);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _delta, modelica_metatype _tau, modelica_metatype _f, modelica_metatype _fdelta, modelica_metatype _fdeltadelta, modelica_metatype _ftau, modelica_metatype _ftautau, modelica_metatype _fdeltatau);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_HelmholtzDerivs,2,0) {(void*) boxptr_Modelica_Media_Common_HelmholtzDerivs,0}};
#define boxvar_Modelica_Media_Common_HelmholtzDerivs MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_HelmholtzDerivs)


DLLExport
Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__pT,2,0) {(void*) boxptr_Modelica_Media_Common_Helmholtz__pT,0}};
#define boxvar_Modelica_Media_Common_Helmholtz__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__pT)


DLLExport
Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__ph,2,0) {(void*) boxptr_Modelica_Media_Common_Helmholtz__ph,0}};
#define boxvar_Modelica_Media_Common_Helmholtz__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_Helmholtz__ph)


DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Common_IF97BaseTwoPhase (threadData_t *threadData, modelica_integer omc_phase, modelica_integer omc_region, modelica_real omc_p, modelica_real omc_T, modelica_real omc_h, modelica_real omc_R_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_rho, modelica_real omc_s, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp, modelica_real omc_x, modelica_real omc_dpT);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _region, modelica_metatype _p, modelica_metatype _T, modelica_metatype _h, modelica_metatype _R_s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _rho, modelica_metatype _s, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp, modelica_metatype _x, modelica_metatype _dpT);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97BaseTwoPhase,2,0) {(void*) boxptr_Modelica_Media_Common_IF97BaseTwoPhase,0}};
#define boxvar_Modelica_Media_Common_IF97BaseTwoPhase MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97BaseTwoPhase)


DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Common_IF97PhaseBoundaryProperties (threadData_t *threadData, modelica_boolean omc_region3boundary, modelica_real omc_R_s, modelica_real omc_T, modelica_real omc_d, modelica_real omc_h, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_dpT, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _region3boundary, modelica_metatype _R_s, modelica_metatype _T, modelica_metatype _d, modelica_metatype _h, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _dpT, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97PhaseBoundaryProperties,2,0) {(void*) boxptr_Modelica_Media_Common_IF97PhaseBoundaryProperties,0}};
#define boxvar_Modelica_Media_Common_IF97PhaseBoundaryProperties MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_IF97PhaseBoundaryProperties)


DLLExport
Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_NewtonDerivatives__pT (threadData_t *threadData, modelica_real omc_p, modelica_real omc_pd);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _pd);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__pT,2,0) {(void*) boxptr_Modelica_Media_Common_NewtonDerivatives__pT,0}};
#define boxvar_Modelica_Media_Common_NewtonDerivatives__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__pT)


DLLExport
Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_NewtonDerivatives__ph (threadData_t *threadData, modelica_real omc_p, modelica_real omc_h, modelica_real omc_pd, modelica_real omc_pt, modelica_real omc_hd, modelica_real omc_ht);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _pd, modelica_metatype _pt, modelica_metatype _hd, modelica_metatype _ht);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__ph,2,0) {(void*) boxptr_Modelica_Media_Common_NewtonDerivatives__ph,0}};
#define boxvar_Modelica_Media_Common_NewtonDerivatives__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_NewtonDerivatives__ph)


DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_PhaseBoundaryProperties (threadData_t *threadData, modelica_real omc_d, modelica_real omc_h, modelica_real omc_u, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_pt, modelica_real omc_pd);

DLLExport
modelica_metatype boxptr_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _d, modelica_metatype _h, modelica_metatype _u, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _pt, modelica_metatype _pd);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_PhaseBoundaryProperties,2,0) {(void*) boxptr_Modelica_Media_Common_PhaseBoundaryProperties,0}};
#define boxvar_Modelica_Media_Common_PhaseBoundaryProperties MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_PhaseBoundaryProperties)


DLLExport
modelica_real omc_Modelica_Media_Common_cv2Phase(threadData_t *threadData, Modelica_Media_Common_PhaseBoundaryProperties _liq, Modelica_Media_Common_PhaseBoundaryProperties _vap, modelica_real _x, modelica_real _T, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_cv2Phase(threadData_t *threadData, modelica_metatype _liq, modelica_metatype _vap, modelica_metatype _x, modelica_metatype _T, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_cv2Phase,2,0) {(void*) boxptr_Modelica_Media_Common_cv2Phase,0}};
#define boxvar_Modelica_Media_Common_cv2Phase MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_cv2Phase)


DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_GibbsDerivs _g);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, modelica_metatype _g);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_gibbsToBoundaryProps,2,0) {(void*) boxptr_Modelica_Media_Common_gibbsToBoundaryProps,0}};
#define boxvar_Modelica_Media_Common_gibbsToBoundaryProps MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_gibbsToBoundaryProps)


DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f);
DLLExport
modelica_metatype boxptr_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, modelica_metatype _f);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_helmholtzToBoundaryProps,2,0) {(void*) boxptr_Modelica_Media_Common_helmholtzToBoundaryProps,0}};
#define boxvar_Modelica_Media_Common_helmholtzToBoundaryProps MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Common_helmholtzToBoundaryProps)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_h__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_h__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_h__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_h__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_h__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_h__pT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_h__props__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, Modelica_Media_Common_IF97BaseTwoPhase _aux);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_h__props__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _aux);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_h__props__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_h__props__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_h__props__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_h__props__pT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hl__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_hl__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_hl__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hl__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hv__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_hv__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_hv__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_hv__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rho__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rho__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rho__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rho__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rho__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rho__pT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData_t *threadData, modelica_real _p, modelica_real _h, Modelica_Media_Common_IF97BaseTwoPhase _properties, modelica_real _p_der, modelica_real _h_der);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _properties, modelica_metatype _p_der, modelica_metatype _h_der);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rho__ph__der,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rho__ph__der,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rho__ph__der MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rho__ph__der)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rho__props__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, Modelica_Media_Common_IF97BaseTwoPhase _aux);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rho__props__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _aux);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rho__props__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rho__props__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rho__props__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rho__props__pT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhol__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rhol__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rhol__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhol__T)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhov__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_rhov__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_rhov__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_rhov__T)


DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT)


DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _region);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _region);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT)


DLLExport
Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_real _d, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_boolean _checkLimits);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _checkLimits);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2)


DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_real _delp, modelica_integer *out_error);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _delp, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _delp, modelica_real _delh, modelica_real *out_T, modelica_integer *out_error);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _delp, modelica_metatype _delh, modelica_metatype *out_T, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_real _din, modelica_real _Tin, modelica_real *out_Tout);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_metatype _din, modelica_metatype _Tin, modelica_metatype *out_Tout);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _reldh, modelica_integer *out_error);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _reldh, modelica_metatype *out_error);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2)


DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_real _t);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_metatype _t);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_real _p, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n)


DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_real _p, Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_metatype _p, modelica_metatype _bpro);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p)


DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _mode);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _mode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT)


DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _mode);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _mode);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_real _T);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T)


DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_real _p);
DLLExport
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_metatype _p);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b,2,0) {(void*) boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b,0}};
#define boxvar_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b)
#include "Modelica_Fluid_Examples_HeatingSystem_model.h"


#ifdef __cplusplus
}
#endif
#endif

