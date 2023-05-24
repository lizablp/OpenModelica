#include "omc_simulation_settings.h"
#include "Modelica_Fluid_Examples_HeatingSystem_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "Modelica_Fluid_Examples_HeatingSystem_includes.h"


Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = (1.0 + (_state._p - 101325.0) * (4.515426036491987e-10) - ((_state._T - 298.15) * (0.0002571314017648316))) * (997.0480319717385);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_heater_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = (1.0 + (_state._p - 101325.0) * (4.515426036491987e-10) - ((_state._T - 298.15) * (0.0002571314017648316))) * (997.0480319717385);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  _p = _state._p;
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _p;
  modelica_metatype out_p;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _p = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_Medium_pressure(threadData, tmp1);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent)
{
  modelica_real _m_flow;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re;
  modelica_real _Re2;
  modelica_real _dp_a;
  modelica_real _dp_b;
  modelica_real _m_flow_a;
  modelica_real _m_flow_b;
  modelica_real _dm_flow_ddp_fric_a;
  modelica_real _dm_flow_ddp_fric_b;
  modelica_real _dp_grav_a;
  modelica_real _dp_grav_b;
  modelica_real _m_flow_zero;
  modelica_real _dm_flow_ddp_fric_zero;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp_zero;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "roughness / diameter");}
  _Delta = (_roughness) / tmp1;
  // _Re has no default value.
  _Re2 = _Re_turbulent;
  // _dp_a has no default value.
  // _dp_b has no default value.
  // _m_flow_a has no default value.
  // _m_flow_b has no default value.
  // _dm_flow_ddp_fric_a has no default value.
  // _dm_flow_ddp_fric_b has no default value.
  _dp_grav_a = (_g_times_height_ab) * (_rho_a);
  _dp_grav_b = (_g_times_height_ab) * (_rho_b);
  _m_flow_zero = 0.0;
  // _dm_flow_ddp_fric_zero has no default value.
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.0065 / Delta");}
    tmp4 = (0.0065) / tmp2;
  }
  tmp5 = (745.0) * (exp(tmp4));
  tmp6 = 0.97;
  if(tmp5 < 0.0 && tmp6 != 0.0)
  {
    tmp8 = modf(tmp6, &tmp9);
    
    if(tmp8 > 0.5)
    {
      tmp8 -= 1.0;
      tmp9 += 1.0;
    }
    else if(tmp8 < -0.5)
    {
      tmp8 += 1.0;
      tmp9 -= 1.0;
    }
    
    if(fabs(tmp8) < 1e-10)
      tmp7 = pow(tmp5, tmp9);
    else
    {
      tmp11 = modf(1.0/tmp6, &tmp10);
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp10 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp10 -= 1.0;
      }
      if(fabs(tmp11) < 1e-10 && ((unsigned long)tmp10 & 1))
      {
        tmp7 = -pow(-tmp5, tmp8)*pow(tmp5, tmp9);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
      }
    }
  }
  else
  {
    tmp7 = pow(tmp5, tmp6);
  }
  if(isnan(tmp7) || isinf(tmp7))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
  }
  _Re1 = fmin(tmp7,_Re_turbulent);
  tmp12 = 2.0;
  if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(dp_grav_a + dp_grav_b) / 2.0");}
  _dp_zero = (_dp_grav_a + _dp_grav_b) / tmp12;
  _dp_a = fmax(_dp_grav_a,_dp_grav_b) + _dp_small;

  _dp_b = fmin(_dp_grav_a,_dp_grav_b) - _dp_small;

  if((_dp >= _dp_a))
  {
    _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp - _dp_grav_a, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
  }
  else
  {
    if((_dp <= _dp_b))
    {
      _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp - _dp_grav_b, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
    }
    else
    {
      _m_flow_a = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp_a - _dp_grav_a, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_a);

      _m_flow_b = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp_b - _dp_grav_b, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_b);

      _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp_zero, _dp_b, _dp_a, _m_flow_b, _m_flow_a, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_a ,&_dm_flow_ddp_fric_zero);

      if((_dp > _dp_zero))
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_zero, _dp_a, _m_flow_zero, _m_flow_a, _dm_flow_ddp_fric_zero, _dm_flow_ddp_fric_a, NULL);
      }
      else
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_b, _dp_zero, _m_flow_b, _m_flow_zero, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_zero, NULL);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_g_times_height_ab);
  tmp9 = mmc_unbox_real(_crossArea);
  tmp10 = mmc_unbox_real(_roughness);
  tmp11 = mmc_unbox_real(_dp_small);
  tmp12 = mmc_unbox_real(_Re_turbulent);
  _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  out_m_flow = mmc_mk_rcon(_m_flow);
  return out_m_flow;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent)
{
  modelica_real _dp;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re2;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _Re;
  modelica_real _lambda2;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "roughness / diameter");}
  _Delta = (_roughness) / tmp1;
  _Re2 = _Re_turbulent;
  // _mu has no default value.
  // _rho has no default value.
  // _Re has no default value.
  // _lambda2 has no default value.
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.0065 / Delta");}
    tmp4 = (0.0065) / tmp2;
  }
  _Re1 = fmin((745.0) * (exp(tmp4)),_Re_turbulent);
  _rho = ((_m_flow >= 0.0)?_rho_a:_rho_b);

  _mu = ((_m_flow >= 0.0)?_mu_a:_mu_b);

  tmp5 = (_crossArea) * (_mu);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "diameter * abs(m_flow) / (crossArea * mu)");}
  _Re = ((_diameter) * (fabs(_m_flow))) / tmp5;

  tmp20 = (modelica_boolean)(_Re <= _Re1);
  if(tmp20)
  {
    tmp21 = (64.0) * (_Re);
  }
  else
  {
    tmp18 = (modelica_boolean)(_Re >= _Re2);
    if(tmp18)
    {
      tmp6 = 3.7;
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
      tmp7 = _Re;
      tmp8 = 0.9;
      if(tmp7 < 0.0 && tmp8 != 0.0)
      {
        tmp10 = modf(tmp8, &tmp11);
        
        if(tmp10 > 0.5)
        {
          tmp10 -= 1.0;
          tmp11 += 1.0;
        }
        else if(tmp10 < -0.5)
        {
          tmp10 += 1.0;
          tmp11 -= 1.0;
        }
        
        if(fabs(tmp10) < 1e-10)
          tmp9 = pow(tmp7, tmp11);
        else
        {
          tmp13 = modf(1.0/tmp8, &tmp12);
          if(tmp13 > 0.5)
          {
            tmp13 -= 1.0;
            tmp12 += 1.0;
          }
          else if(tmp13 < -0.5)
          {
            tmp13 += 1.0;
            tmp12 -= 1.0;
          }
          if(fabs(tmp13) < 1e-10 && ((unsigned long)tmp12 & 1))
          {
            tmp9 = -pow(-tmp7, tmp10)*pow(tmp7, tmp11);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
          }
        }
      }
      else
      {
        tmp9 = pow(tmp7, tmp8);
      }
      if(isnan(tmp9) || isinf(tmp9))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
      }tmp14 = tmp9;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re ^ 0.9");}
      tmp15 = (_Delta) / tmp6 + (5.74) / tmp14;
      if(!(tmp15 > 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of log10(Delta / 3.7 + 5.74 / Re ^ 0.9) was %g should be > 0", tmp15);
      }tmp16 = log10(tmp15);
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / log10(Delta / 3.7 + 5.74 / Re ^ 0.9)");}
      tmp17 = (_Re) / tmp16;
      tmp19 = (0.25) * ((tmp17 * tmp17));
    }
    else
    {
      tmp19 = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, _Re, _Re1, _Re2, _Delta);
    }
    tmp21 = tmp19;
  }
  _lambda2 = tmp21;

  tmp22 = ((((2.0) * (_rho)) * (_diameter)) * (_diameter)) * (_diameter);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "length * mu * mu / (2.0 * rho * diameter * diameter * diameter)");}
  _dp = ((((_length) * (_mu)) * (_mu)) / tmp22) * (((_m_flow >= 0.0)?_lambda2:(-_lambda2)));
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_roughness);
  tmp10 = mmc_unbox_real(_m_flow_small);
  tmp11 = mmc_unbox_real(_Re_turbulent);
  _dp = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric)
{
  modelica_real _m_flow;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _lambda2;
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  // _dm_flow_ddp_fric has no default value.
  // _mu has no default value.
  // _rho has no default value.
  // _lambda2 has no default value.
  // _Re has no default value.
  // _dRe_ddp has no default value.
  // _aux1 has no default value.
  // _aux2 has no default value.
  if((_dp_fric >= 0.0))
  {
    _rho = _rho_a;

    _mu = _mu_a;
  }
  else
  {
    _rho = _rho_b;

    _mu = _mu_b;
  }

  tmp1 = _diameter;
  tmp2 = ((_length) * (_mu)) * (_mu);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "abs(dp_fric) * 2.0 * diameter ^ 3.0 * rho / (length * mu * mu)");}
  _lambda2 = ((((fabs(_dp_fric)) * (2.0)) * ((tmp1 * tmp1 * tmp1))) * (_rho)) / tmp2;

  tmp3 = _diameter;
  tmp4 = _mu;
  tmp5 = (_length) * ((tmp4 * tmp4));
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * diameter ^ 3.0 * rho / (length * mu ^ 2.0)");}
  _aux1 = (((2.0) * ((tmp3 * tmp3 * tmp3))) * (_rho)) / tmp5;

  tmp6 = 64.0;
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lambda2 / 64.0");}
  _Re = (_lambda2) / tmp6;

  tmp7 = 64.0;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux1 / 64.0");}
  _dRe_ddp = (_aux1) / tmp7;

  if((_Re > _Re1))
  {
    tmp8 = _lambda2;
    if(!(tmp8 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp8);
    }tmp9 = _lambda2;
    if(!(tmp9 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp9);
    }tmp10 = sqrt(tmp9);
    if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(lambda2)");}
    tmp11 = (2.51) / tmp10 + (0.27) * (_Delta);
    if(!(tmp11 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(2.51 / sqrt(lambda2) + 0.27 * Delta) was %g should be > 0", tmp11);
    }
    _Re = (-(((2.0) * (sqrt(tmp8))) * (log10(tmp11))));

    tmp12 = (_aux1) * (fabs(_dp_fric));
    if(!(tmp12 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(aux1 * abs(dp_fric)) was %g should be >= 0", tmp12);
    }
    _aux2 = sqrt(tmp12);

    tmp13 = _aux2;
    if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / aux2");}
    tmp14 = (2.51) / tmp13 + (0.27) * (_Delta);
    if(!(tmp14 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(2.51 / aux2 + 0.27 * Delta) was %g should be > 0", tmp14);
    }tmp15 = (2.0) * (_aux2);
    if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * log(2.51 / aux2 + 0.27 * Delta) * aux1 / (2.0 * aux2)");}
    tmp16 = _aux2;
    if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / aux2");}
    tmp17 = ((2.0) * (fabs(_dp_fric))) * ((2.51) / tmp16 + (0.27) * (_Delta));
    if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.02 / (2.0 * abs(dp_fric) * (2.51 / aux2 + 0.27 * Delta))");}
    _dRe_ddp = (0.4342944819032518) * ((-((((2.0) * (log(tmp14))) * (_aux1)) / tmp15)) + (5.02) / tmp17);

    if((_Re < _Re2))
    {
      _Re = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, _lambda2, _Re1, _Re2, _Delta, _dp_fric ,&_dRe_ddp);
    }
  }

  tmp18 = _diameter;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "crossArea / diameter");}
  _m_flow = (((_crossArea) / tmp18) * (_mu)) * (((_dp_fric >= 0.0)?_Re:(-_Re)));

  tmp19 = _diameter;
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "crossArea / diameter");}
  _dm_flow_ddp_fric = (((_crossArea) / tmp19) * (_mu)) * (_dRe_ddp);
  _return: OMC_LABEL_UNUSED
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = _dm_flow_ddp_fric; }
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp_fric);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_Re1);
  tmp10 = mmc_unbox_real(_Re2);
  tmp11 = mmc_unbox_real(_Delta);
  _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, &_dm_flow_ddp_fric);
  out_m_flow = mmc_mk_rcon(_m_flow);
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = mmc_mk_rcon(_dm_flow_ddp_fric); }
  return out_m_flow;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp)
{
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _y1d;
  modelica_real _aux2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _x;
  modelica_real tmp12;
  modelica_real _y;
  modelica_real _dy_dx;
  modelica_real _aux3;
  modelica_real tmp13;
  modelica_real _L2;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real _aux4;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real _x2;
  modelica_real tmp18;
  modelica_real _aux5;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real _y2;
  modelica_real tmp21;
  modelica_real _y2d;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Re has no default value.
  // _dRe_ddp has no default value.
  tmp1 = (64.0) * (_Re1);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = _Re1;
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  _y1d = 1.0;
  tmp3 = 3.7;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
  tmp4 = _Re2;
  tmp5 = 0.9;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }tmp11 = tmp6;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re2 ^ 0.9");}
  _aux2 = (_Delta) / tmp3 + (5.74) / tmp11;
  tmp12 = _lambda2;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(lambda2) was %g should be > 0", tmp12);
  }
  _x = log10(tmp12);
  // _y has no default value.
  // _dy_dx has no default value.
  tmp13 = _aux2;
  if(!(tmp13 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp13);
  }
  _aux3 = log10(tmp13);
  tmp14 = _aux3;
  if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re2 / aux3");}
  tmp15 = (_Re2) / tmp14;
  _L2 = (0.25) * ((tmp15 * tmp15));
  tmp16 = _L2;
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp16);
  }tmp17 = sqrt(tmp16);
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(L2)");}
  _aux4 = (2.51) / tmp17 + (0.27) * (_Delta);
  tmp18 = _L2;
  if(!(tmp18 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp18);
  }
  _x2 = log10(tmp18);
  tmp19 = _L2;
  if(!(tmp19 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp19);
  }tmp20 = _aux4;
  if(!(tmp20 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp20);
  }
  _aux5 = (-(((2.0) * (sqrt(tmp19))) * (log10(tmp20))));
  tmp21 = _aux5;
  if(!(tmp21 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux5) was %g should be > 0", tmp21);
  }
  _y2 = log10(tmp21);
  tmp22 = (_aux5) * (_aux4);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.090079149577162 / (aux5 * aux4)");}
  _y2d = 0.5 + (1.090079149577162) / tmp22;
  _y = omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d ,&_dy_dx);

  tmp23 = 10.0;
  tmp24 = _y;
  if(tmp23 < 0.0 && tmp24 != 0.0)
  {
    tmp26 = modf(tmp24, &tmp27);
    
    if(tmp26 > 0.5)
    {
      tmp26 -= 1.0;
      tmp27 += 1.0;
    }
    else if(tmp26 < -0.5)
    {
      tmp26 += 1.0;
      tmp27 -= 1.0;
    }
    
    if(fabs(tmp26) < 1e-10)
      tmp25 = pow(tmp23, tmp27);
    else
    {
      tmp29 = modf(1.0/tmp24, &tmp28);
      if(tmp29 > 0.5)
      {
        tmp29 -= 1.0;
        tmp28 += 1.0;
      }
      else if(tmp29 < -0.5)
      {
        tmp29 += 1.0;
        tmp28 -= 1.0;
      }
      if(fabs(tmp29) < 1e-10 && ((unsigned long)tmp28 & 1))
      {
        tmp25 = -pow(-tmp23, tmp26)*pow(tmp23, tmp27);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
      }
    }
  }
  else
  {
    tmp25 = pow(tmp23, tmp24);
  }
  if(isnan(tmp25) || isinf(tmp25))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
  }
  _Re = tmp25;

  tmp30 = fabs(_dp_fric);
  if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / abs(dp_fric)");}
  _dRe_ddp = ((_Re) / tmp30) * (_dy_dx);
  _return: OMC_LABEL_UNUSED
  if (out_dRe_ddp) { *out_dRe_ddp = _dRe_ddp; }
  return _Re;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _dRe_ddp;
  modelica_real _Re;
  modelica_metatype out_Re;
  tmp1 = mmc_unbox_real(_lambda2);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  tmp5 = mmc_unbox_real(_dp_fric);
  _Re = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, &_dRe_ddp);
  out_Re = mmc_mk_rcon(_Re);
  if (out_dRe_ddp) { *out_dRe_ddp = mmc_mk_rcon(_dRe_ddp); }
  return out_Re;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta)
{
  modelica_real _lambda2;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _yd1;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _x2;
  modelica_real tmp12;
  modelica_real _dx;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real _aux3;
  modelica_real tmp15;
  modelica_real _diff_x;
  modelica_real _L2;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real _yd2;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real _aux4;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real _y2;
  modelica_real tmp28;
  modelica_real _aux5;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real _m;
  modelica_real tmp31;
  modelica_real _c2;
  modelica_real tmp32;
  modelica_real _c3;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lambda2 has no default value.
  tmp1 = _Re1;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = (64.0) * (_Re1);
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  _yd1 = 1.0;
  _aux1 = 1.121782646756099;
  tmp3 = 3.7;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
  tmp4 = _Re2;
  tmp5 = 0.9;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }tmp11 = tmp6;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re2 ^ 0.9");}
  _aux2 = (_Delta) / tmp3 + (5.74) / tmp11;
  tmp12 = _Re2;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re2) was %g should be > 0", tmp12);
  }
  _x2 = log10(tmp12);
  tmp13 = _Re1;
  if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / Re1");}
  tmp14 = (_Re) / tmp13;
  if(!(tmp14 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re / Re1) was %g should be > 0", tmp14);
  }
  _dx = log10(tmp14);
  tmp15 = _aux2;
  if(!(tmp15 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp15);
  }
  _aux3 = log10(tmp15);
  _diff_x = _x2 - _x1;
  tmp16 = _aux3;
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re2 / aux3");}
  tmp17 = (_Re2) / tmp16;
  _L2 = (0.25) * ((tmp17 * tmp17));
  tmp18 = _Re2;
  tmp19 = 0.9;
  if(tmp18 < 0.0 && tmp19 != 0.0)
  {
    tmp21 = modf(tmp19, &tmp22);
    
    if(tmp21 > 0.5)
    {
      tmp21 -= 1.0;
      tmp22 += 1.0;
    }
    else if(tmp21 < -0.5)
    {
      tmp21 += 1.0;
      tmp22 -= 1.0;
    }
    
    if(fabs(tmp21) < 1e-10)
      tmp20 = pow(tmp18, tmp22);
    else
    {
      tmp24 = modf(1.0/tmp19, &tmp23);
      if(tmp24 > 0.5)
      {
        tmp24 -= 1.0;
        tmp23 += 1.0;
      }
      else if(tmp24 < -0.5)
      {
        tmp24 += 1.0;
        tmp23 -= 1.0;
      }
      if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
      {
        tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
      }
    }
  }
  else
  {
    tmp20 = pow(tmp18, tmp19);
  }
  if(isnan(tmp20) || isinf(tmp20))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
  }tmp25 = ((_aux2) * (_aux3)) * (tmp20);
  if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "4.0 * aux1 / (aux2 * aux3 * Re2 ^ 0.9)");}
  _yd2 = 2.0 + ((4.0) * (_aux1)) / tmp25;
  tmp26 = _L2;
  if(!(tmp26 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp26);
  }tmp27 = sqrt(tmp26);
  if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(L2)");}
  _aux4 = (2.51) / tmp27 + (0.27) * (_Delta);
  tmp28 = _L2;
  if(!(tmp28 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp28);
  }
  _y2 = log10(tmp28);
  tmp29 = _L2;
  if(!(tmp29 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp29);
  }tmp30 = _aux4;
  if(!(tmp30 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp30);
  }
  _aux5 = (-(((2.0) * (sqrt(tmp29))) * (log10(tmp30))));
  tmp31 = _diff_x;
  if (tmp31 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y2 - y1) / diff_x");}
  _m = (_y2 - _y1) / tmp31;
  tmp32 = _diff_x;
  if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(3.0 * m - 2.0 * yd1 - yd2) / diff_x");}
  _c2 = ((3.0) * (_m) - ((2.0) * (_yd1)) - _yd2) / tmp32;
  tmp33 = (_diff_x) * (_diff_x);
  if (tmp33 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(yd1 + yd2 - 2.0 * m) / (diff_x * diff_x)");}
  _c3 = (_yd1 + _yd2 - ((2.0) * (_m))) / tmp33;
  tmp34 = _Re1;
  if (tmp34 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / Re1");}
  tmp35 = (_Re) / tmp34;
  tmp36 = _yd1 + (_dx) * (_c2 + (_dx) * (_c3));
  if(tmp35 < 0.0 && tmp36 != 0.0)
  {
    tmp38 = modf(tmp36, &tmp39);
    
    if(tmp38 > 0.5)
    {
      tmp38 -= 1.0;
      tmp39 += 1.0;
    }
    else if(tmp38 < -0.5)
    {
      tmp38 += 1.0;
      tmp39 -= 1.0;
    }
    
    if(fabs(tmp38) < 1e-10)
      tmp37 = pow(tmp35, tmp39);
    else
    {
      tmp41 = modf(1.0/tmp36, &tmp40);
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp40 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp40 -= 1.0;
      }
      if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
      {
        tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
      }
    }
  }
  else
  {
    tmp37 = pow(tmp35, tmp36);
  }
  if(isnan(tmp37) || isinf(tmp37))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
  }
  _lambda2 = ((64.0) * (_Re1)) * (tmp37);
  _return: OMC_LABEL_UNUSED
  return _lambda2;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _lambda2;
  modelica_metatype out_lambda2;
  tmp1 = mmc_unbox_real(_Re);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  _lambda2 = omc_Modelica_Fluid_Examples_HeatingSystem_heater_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, tmp1, tmp2, tmp3, tmp4);
  out_lambda2 = mmc_mk_rcon(_lambda2);
  return out_lambda2;
}

Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_heater_heatTransfer_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pipe_Medium_ThermodynamicState__desc, _p, _T);
}

Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = (1.0 + (_state._p - 101325.0) * (4.515426036491987e-10) - ((_state._T - 298.15) * (0.0002571314017648316))) * (997.0480319717385);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  _p = _state._p;
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _p;
  modelica_metatype out_p;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _p = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_Medium_pressure(threadData, tmp1);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent)
{
  modelica_real _m_flow;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re;
  modelica_real _Re2;
  modelica_real _dp_a;
  modelica_real _dp_b;
  modelica_real _m_flow_a;
  modelica_real _m_flow_b;
  modelica_real _dm_flow_ddp_fric_a;
  modelica_real _dm_flow_ddp_fric_b;
  modelica_real _dp_grav_a;
  modelica_real _dp_grav_b;
  modelica_real _m_flow_zero;
  modelica_real _dm_flow_ddp_fric_zero;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp_zero;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "roughness / diameter");}
  _Delta = (_roughness) / tmp1;
  // _Re has no default value.
  _Re2 = _Re_turbulent;
  // _dp_a has no default value.
  // _dp_b has no default value.
  // _m_flow_a has no default value.
  // _m_flow_b has no default value.
  // _dm_flow_ddp_fric_a has no default value.
  // _dm_flow_ddp_fric_b has no default value.
  _dp_grav_a = (_g_times_height_ab) * (_rho_a);
  _dp_grav_b = (_g_times_height_ab) * (_rho_b);
  _m_flow_zero = 0.0;
  // _dm_flow_ddp_fric_zero has no default value.
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.0065 / Delta");}
    tmp4 = (0.0065) / tmp2;
  }
  tmp5 = (745.0) * (exp(tmp4));
  tmp6 = 0.97;
  if(tmp5 < 0.0 && tmp6 != 0.0)
  {
    tmp8 = modf(tmp6, &tmp9);
    
    if(tmp8 > 0.5)
    {
      tmp8 -= 1.0;
      tmp9 += 1.0;
    }
    else if(tmp8 < -0.5)
    {
      tmp8 += 1.0;
      tmp9 -= 1.0;
    }
    
    if(fabs(tmp8) < 1e-10)
      tmp7 = pow(tmp5, tmp9);
    else
    {
      tmp11 = modf(1.0/tmp6, &tmp10);
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp10 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp10 -= 1.0;
      }
      if(fabs(tmp11) < 1e-10 && ((unsigned long)tmp10 & 1))
      {
        tmp7 = -pow(-tmp5, tmp8)*pow(tmp5, tmp9);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
      }
    }
  }
  else
  {
    tmp7 = pow(tmp5, tmp6);
  }
  if(isnan(tmp7) || isinf(tmp7))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
  }
  _Re1 = fmin(tmp7,_Re_turbulent);
  tmp12 = 2.0;
  if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(dp_grav_a + dp_grav_b) / 2.0");}
  _dp_zero = (_dp_grav_a + _dp_grav_b) / tmp12;
  _dp_a = fmax(_dp_grav_a,_dp_grav_b) + _dp_small;

  _dp_b = fmin(_dp_grav_a,_dp_grav_b) - _dp_small;

  if((_dp >= _dp_a))
  {
    _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp - _dp_grav_a, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
  }
  else
  {
    if((_dp <= _dp_b))
    {
      _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp - _dp_grav_b, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
    }
    else
    {
      _m_flow_a = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp_a - _dp_grav_a, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_a);

      _m_flow_b = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp_b - _dp_grav_b, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_b);

      _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp_zero, _dp_b, _dp_a, _m_flow_b, _m_flow_a, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_a ,&_dm_flow_ddp_fric_zero);

      if((_dp > _dp_zero))
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_zero, _dp_a, _m_flow_zero, _m_flow_a, _dm_flow_ddp_fric_zero, _dm_flow_ddp_fric_a, NULL);
      }
      else
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_b, _dp_zero, _m_flow_b, _m_flow_zero, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_zero, NULL);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_g_times_height_ab);
  tmp9 = mmc_unbox_real(_crossArea);
  tmp10 = mmc_unbox_real(_roughness);
  tmp11 = mmc_unbox_real(_dp_small);
  tmp12 = mmc_unbox_real(_Re_turbulent);
  _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  out_m_flow = mmc_mk_rcon(_m_flow);
  return out_m_flow;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent)
{
  modelica_real _dp;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re2;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _Re;
  modelica_real _lambda2;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "roughness / diameter");}
  _Delta = (_roughness) / tmp1;
  _Re2 = _Re_turbulent;
  // _mu has no default value.
  // _rho has no default value.
  // _Re has no default value.
  // _lambda2 has no default value.
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.0065 / Delta");}
    tmp4 = (0.0065) / tmp2;
  }
  _Re1 = fmin((745.0) * (exp(tmp4)),_Re_turbulent);
  _rho = ((_m_flow >= 0.0)?_rho_a:_rho_b);

  _mu = ((_m_flow >= 0.0)?_mu_a:_mu_b);

  tmp5 = (_crossArea) * (_mu);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "diameter * abs(m_flow) / (crossArea * mu)");}
  _Re = ((_diameter) * (fabs(_m_flow))) / tmp5;

  tmp20 = (modelica_boolean)(_Re <= _Re1);
  if(tmp20)
  {
    tmp21 = (64.0) * (_Re);
  }
  else
  {
    tmp18 = (modelica_boolean)(_Re >= _Re2);
    if(tmp18)
    {
      tmp6 = 3.7;
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
      tmp7 = _Re;
      tmp8 = 0.9;
      if(tmp7 < 0.0 && tmp8 != 0.0)
      {
        tmp10 = modf(tmp8, &tmp11);
        
        if(tmp10 > 0.5)
        {
          tmp10 -= 1.0;
          tmp11 += 1.0;
        }
        else if(tmp10 < -0.5)
        {
          tmp10 += 1.0;
          tmp11 -= 1.0;
        }
        
        if(fabs(tmp10) < 1e-10)
          tmp9 = pow(tmp7, tmp11);
        else
        {
          tmp13 = modf(1.0/tmp8, &tmp12);
          if(tmp13 > 0.5)
          {
            tmp13 -= 1.0;
            tmp12 += 1.0;
          }
          else if(tmp13 < -0.5)
          {
            tmp13 += 1.0;
            tmp12 -= 1.0;
          }
          if(fabs(tmp13) < 1e-10 && ((unsigned long)tmp12 & 1))
          {
            tmp9 = -pow(-tmp7, tmp10)*pow(tmp7, tmp11);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
          }
        }
      }
      else
      {
        tmp9 = pow(tmp7, tmp8);
      }
      if(isnan(tmp9) || isinf(tmp9))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
      }tmp14 = tmp9;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re ^ 0.9");}
      tmp15 = (_Delta) / tmp6 + (5.74) / tmp14;
      if(!(tmp15 > 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of log10(Delta / 3.7 + 5.74 / Re ^ 0.9) was %g should be > 0", tmp15);
      }tmp16 = log10(tmp15);
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / log10(Delta / 3.7 + 5.74 / Re ^ 0.9)");}
      tmp17 = (_Re) / tmp16;
      tmp19 = (0.25) * ((tmp17 * tmp17));
    }
    else
    {
      tmp19 = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, _Re, _Re1, _Re2, _Delta);
    }
    tmp21 = tmp19;
  }
  _lambda2 = tmp21;

  tmp22 = ((((2.0) * (_rho)) * (_diameter)) * (_diameter)) * (_diameter);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "length * mu * mu / (2.0 * rho * diameter * diameter * diameter)");}
  _dp = ((((_length) * (_mu)) * (_mu)) / tmp22) * (((_m_flow >= 0.0)?_lambda2:(-_lambda2)));
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_roughness);
  tmp10 = mmc_unbox_real(_m_flow_small);
  tmp11 = mmc_unbox_real(_Re_turbulent);
  _dp = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric)
{
  modelica_real _m_flow;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _lambda2;
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  // _dm_flow_ddp_fric has no default value.
  // _mu has no default value.
  // _rho has no default value.
  // _lambda2 has no default value.
  // _Re has no default value.
  // _dRe_ddp has no default value.
  // _aux1 has no default value.
  // _aux2 has no default value.
  if((_dp_fric >= 0.0))
  {
    _rho = _rho_a;

    _mu = _mu_a;
  }
  else
  {
    _rho = _rho_b;

    _mu = _mu_b;
  }

  tmp1 = _diameter;
  tmp2 = ((_length) * (_mu)) * (_mu);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "abs(dp_fric) * 2.0 * diameter ^ 3.0 * rho / (length * mu * mu)");}
  _lambda2 = ((((fabs(_dp_fric)) * (2.0)) * ((tmp1 * tmp1 * tmp1))) * (_rho)) / tmp2;

  tmp3 = _diameter;
  tmp4 = _mu;
  tmp5 = (_length) * ((tmp4 * tmp4));
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * diameter ^ 3.0 * rho / (length * mu ^ 2.0)");}
  _aux1 = (((2.0) * ((tmp3 * tmp3 * tmp3))) * (_rho)) / tmp5;

  tmp6 = 64.0;
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lambda2 / 64.0");}
  _Re = (_lambda2) / tmp6;

  tmp7 = 64.0;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux1 / 64.0");}
  _dRe_ddp = (_aux1) / tmp7;

  if((_Re > _Re1))
  {
    tmp8 = _lambda2;
    if(!(tmp8 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp8);
    }tmp9 = _lambda2;
    if(!(tmp9 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp9);
    }tmp10 = sqrt(tmp9);
    if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(lambda2)");}
    tmp11 = (2.51) / tmp10 + (0.27) * (_Delta);
    if(!(tmp11 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(2.51 / sqrt(lambda2) + 0.27 * Delta) was %g should be > 0", tmp11);
    }
    _Re = (-(((2.0) * (sqrt(tmp8))) * (log10(tmp11))));

    tmp12 = (_aux1) * (fabs(_dp_fric));
    if(!(tmp12 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(aux1 * abs(dp_fric)) was %g should be >= 0", tmp12);
    }
    _aux2 = sqrt(tmp12);

    tmp13 = _aux2;
    if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / aux2");}
    tmp14 = (2.51) / tmp13 + (0.27) * (_Delta);
    if(!(tmp14 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(2.51 / aux2 + 0.27 * Delta) was %g should be > 0", tmp14);
    }tmp15 = (2.0) * (_aux2);
    if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * log(2.51 / aux2 + 0.27 * Delta) * aux1 / (2.0 * aux2)");}
    tmp16 = _aux2;
    if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / aux2");}
    tmp17 = ((2.0) * (fabs(_dp_fric))) * ((2.51) / tmp16 + (0.27) * (_Delta));
    if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.02 / (2.0 * abs(dp_fric) * (2.51 / aux2 + 0.27 * Delta))");}
    _dRe_ddp = (0.4342944819032518) * ((-((((2.0) * (log(tmp14))) * (_aux1)) / tmp15)) + (5.02) / tmp17);

    if((_Re < _Re2))
    {
      _Re = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, _lambda2, _Re1, _Re2, _Delta, _dp_fric ,&_dRe_ddp);
    }
  }

  tmp18 = _diameter;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "crossArea / diameter");}
  _m_flow = (((_crossArea) / tmp18) * (_mu)) * (((_dp_fric >= 0.0)?_Re:(-_Re)));

  tmp19 = _diameter;
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "crossArea / diameter");}
  _dm_flow_ddp_fric = (((_crossArea) / tmp19) * (_mu)) * (_dRe_ddp);
  _return: OMC_LABEL_UNUSED
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = _dm_flow_ddp_fric; }
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp_fric);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_Re1);
  tmp10 = mmc_unbox_real(_Re2);
  tmp11 = mmc_unbox_real(_Delta);
  _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, &_dm_flow_ddp_fric);
  out_m_flow = mmc_mk_rcon(_m_flow);
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = mmc_mk_rcon(_dm_flow_ddp_fric); }
  return out_m_flow;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp)
{
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _y1d;
  modelica_real _aux2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _x;
  modelica_real tmp12;
  modelica_real _y;
  modelica_real _dy_dx;
  modelica_real _aux3;
  modelica_real tmp13;
  modelica_real _L2;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real _aux4;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real _x2;
  modelica_real tmp18;
  modelica_real _aux5;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real _y2;
  modelica_real tmp21;
  modelica_real _y2d;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Re has no default value.
  // _dRe_ddp has no default value.
  tmp1 = (64.0) * (_Re1);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = _Re1;
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  _y1d = 1.0;
  tmp3 = 3.7;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
  tmp4 = _Re2;
  tmp5 = 0.9;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }tmp11 = tmp6;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re2 ^ 0.9");}
  _aux2 = (_Delta) / tmp3 + (5.74) / tmp11;
  tmp12 = _lambda2;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(lambda2) was %g should be > 0", tmp12);
  }
  _x = log10(tmp12);
  // _y has no default value.
  // _dy_dx has no default value.
  tmp13 = _aux2;
  if(!(tmp13 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp13);
  }
  _aux3 = log10(tmp13);
  tmp14 = _aux3;
  if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re2 / aux3");}
  tmp15 = (_Re2) / tmp14;
  _L2 = (0.25) * ((tmp15 * tmp15));
  tmp16 = _L2;
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp16);
  }tmp17 = sqrt(tmp16);
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(L2)");}
  _aux4 = (2.51) / tmp17 + (0.27) * (_Delta);
  tmp18 = _L2;
  if(!(tmp18 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp18);
  }
  _x2 = log10(tmp18);
  tmp19 = _L2;
  if(!(tmp19 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp19);
  }tmp20 = _aux4;
  if(!(tmp20 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp20);
  }
  _aux5 = (-(((2.0) * (sqrt(tmp19))) * (log10(tmp20))));
  tmp21 = _aux5;
  if(!(tmp21 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux5) was %g should be > 0", tmp21);
  }
  _y2 = log10(tmp21);
  tmp22 = (_aux5) * (_aux4);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.090079149577162 / (aux5 * aux4)");}
  _y2d = 0.5 + (1.090079149577162) / tmp22;
  _y = omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d ,&_dy_dx);

  tmp23 = 10.0;
  tmp24 = _y;
  if(tmp23 < 0.0 && tmp24 != 0.0)
  {
    tmp26 = modf(tmp24, &tmp27);
    
    if(tmp26 > 0.5)
    {
      tmp26 -= 1.0;
      tmp27 += 1.0;
    }
    else if(tmp26 < -0.5)
    {
      tmp26 += 1.0;
      tmp27 -= 1.0;
    }
    
    if(fabs(tmp26) < 1e-10)
      tmp25 = pow(tmp23, tmp27);
    else
    {
      tmp29 = modf(1.0/tmp24, &tmp28);
      if(tmp29 > 0.5)
      {
        tmp29 -= 1.0;
        tmp28 += 1.0;
      }
      else if(tmp29 < -0.5)
      {
        tmp29 += 1.0;
        tmp28 -= 1.0;
      }
      if(fabs(tmp29) < 1e-10 && ((unsigned long)tmp28 & 1))
      {
        tmp25 = -pow(-tmp23, tmp26)*pow(tmp23, tmp27);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
      }
    }
  }
  else
  {
    tmp25 = pow(tmp23, tmp24);
  }
  if(isnan(tmp25) || isinf(tmp25))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
  }
  _Re = tmp25;

  tmp30 = fabs(_dp_fric);
  if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / abs(dp_fric)");}
  _dRe_ddp = ((_Re) / tmp30) * (_dy_dx);
  _return: OMC_LABEL_UNUSED
  if (out_dRe_ddp) { *out_dRe_ddp = _dRe_ddp; }
  return _Re;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _dRe_ddp;
  modelica_real _Re;
  modelica_metatype out_Re;
  tmp1 = mmc_unbox_real(_lambda2);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  tmp5 = mmc_unbox_real(_dp_fric);
  _Re = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, &_dRe_ddp);
  out_Re = mmc_mk_rcon(_Re);
  if (out_dRe_ddp) { *out_dRe_ddp = mmc_mk_rcon(_dRe_ddp); }
  return out_Re;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta)
{
  modelica_real _lambda2;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _yd1;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _x2;
  modelica_real tmp12;
  modelica_real _dx;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real _aux3;
  modelica_real tmp15;
  modelica_real _diff_x;
  modelica_real _L2;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real _yd2;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real _aux4;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real _y2;
  modelica_real tmp28;
  modelica_real _aux5;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real _m;
  modelica_real tmp31;
  modelica_real _c2;
  modelica_real tmp32;
  modelica_real _c3;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lambda2 has no default value.
  tmp1 = _Re1;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = (64.0) * (_Re1);
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  _yd1 = 1.0;
  _aux1 = 1.121782646756099;
  tmp3 = 3.7;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
  tmp4 = _Re2;
  tmp5 = 0.9;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }tmp11 = tmp6;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re2 ^ 0.9");}
  _aux2 = (_Delta) / tmp3 + (5.74) / tmp11;
  tmp12 = _Re2;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re2) was %g should be > 0", tmp12);
  }
  _x2 = log10(tmp12);
  tmp13 = _Re1;
  if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / Re1");}
  tmp14 = (_Re) / tmp13;
  if(!(tmp14 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re / Re1) was %g should be > 0", tmp14);
  }
  _dx = log10(tmp14);
  tmp15 = _aux2;
  if(!(tmp15 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp15);
  }
  _aux3 = log10(tmp15);
  _diff_x = _x2 - _x1;
  tmp16 = _aux3;
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re2 / aux3");}
  tmp17 = (_Re2) / tmp16;
  _L2 = (0.25) * ((tmp17 * tmp17));
  tmp18 = _Re2;
  tmp19 = 0.9;
  if(tmp18 < 0.0 && tmp19 != 0.0)
  {
    tmp21 = modf(tmp19, &tmp22);
    
    if(tmp21 > 0.5)
    {
      tmp21 -= 1.0;
      tmp22 += 1.0;
    }
    else if(tmp21 < -0.5)
    {
      tmp21 += 1.0;
      tmp22 -= 1.0;
    }
    
    if(fabs(tmp21) < 1e-10)
      tmp20 = pow(tmp18, tmp22);
    else
    {
      tmp24 = modf(1.0/tmp19, &tmp23);
      if(tmp24 > 0.5)
      {
        tmp24 -= 1.0;
        tmp23 += 1.0;
      }
      else if(tmp24 < -0.5)
      {
        tmp24 += 1.0;
        tmp23 -= 1.0;
      }
      if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
      {
        tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
      }
    }
  }
  else
  {
    tmp20 = pow(tmp18, tmp19);
  }
  if(isnan(tmp20) || isinf(tmp20))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
  }tmp25 = ((_aux2) * (_aux3)) * (tmp20);
  if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "4.0 * aux1 / (aux2 * aux3 * Re2 ^ 0.9)");}
  _yd2 = 2.0 + ((4.0) * (_aux1)) / tmp25;
  tmp26 = _L2;
  if(!(tmp26 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp26);
  }tmp27 = sqrt(tmp26);
  if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(L2)");}
  _aux4 = (2.51) / tmp27 + (0.27) * (_Delta);
  tmp28 = _L2;
  if(!(tmp28 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp28);
  }
  _y2 = log10(tmp28);
  tmp29 = _L2;
  if(!(tmp29 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp29);
  }tmp30 = _aux4;
  if(!(tmp30 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp30);
  }
  _aux5 = (-(((2.0) * (sqrt(tmp29))) * (log10(tmp30))));
  tmp31 = _diff_x;
  if (tmp31 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y2 - y1) / diff_x");}
  _m = (_y2 - _y1) / tmp31;
  tmp32 = _diff_x;
  if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(3.0 * m - 2.0 * yd1 - yd2) / diff_x");}
  _c2 = ((3.0) * (_m) - ((2.0) * (_yd1)) - _yd2) / tmp32;
  tmp33 = (_diff_x) * (_diff_x);
  if (tmp33 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(yd1 + yd2 - 2.0 * m) / (diff_x * diff_x)");}
  _c3 = (_yd1 + _yd2 - ((2.0) * (_m))) / tmp33;
  tmp34 = _Re1;
  if (tmp34 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / Re1");}
  tmp35 = (_Re) / tmp34;
  tmp36 = _yd1 + (_dx) * (_c2 + (_dx) * (_c3));
  if(tmp35 < 0.0 && tmp36 != 0.0)
  {
    tmp38 = modf(tmp36, &tmp39);
    
    if(tmp38 > 0.5)
    {
      tmp38 -= 1.0;
      tmp39 += 1.0;
    }
    else if(tmp38 < -0.5)
    {
      tmp38 += 1.0;
      tmp39 -= 1.0;
    }
    
    if(fabs(tmp38) < 1e-10)
      tmp37 = pow(tmp35, tmp39);
    else
    {
      tmp41 = modf(1.0/tmp36, &tmp40);
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp40 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp40 -= 1.0;
      }
      if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
      {
        tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
      }
    }
  }
  else
  {
    tmp37 = pow(tmp35, tmp36);
  }
  if(isnan(tmp37) || isinf(tmp37))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
  }
  _lambda2 = ((64.0) * (_Re1)) * (tmp37);
  _return: OMC_LABEL_UNUSED
  return _lambda2;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _lambda2;
  modelica_metatype out_lambda2;
  tmp1 = mmc_unbox_real(_Re);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  _lambda2 = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, tmp1, tmp2, tmp3, tmp4);
  out_lambda2 = mmc_mk_rcon(_lambda2);
  return out_lambda2;
}

Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_pipe_heatTransfer_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData_t *threadData, modelica_real _V_flow, modelica_real _eta_nominal)
{
  modelica_real _eta;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  _eta = _eta_nominal;
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _eta_nominal)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmp1 = mmc_unbox_real(_V_flow);
  tmp2 = mmc_unbox_real(_eta_nominal);
  _eta = omc_Modelica_Fluid_Examples_HeatingSystem_pump_efficiencyCharacteristic(threadData, tmp1, tmp2);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData_t *threadData, modelica_real _V_flow, real_array _V_flow_nominal, real_array _head_nominal)
{
  modelica_real _head;
  real_array _V_flow_nominal2;
  real_array tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _V_flow_min;
  modelica_real tmp5;
  modelica_real _V_flow_max;
  modelica_real tmp6;
  real_array _c;
  real_array tmp7;
  real_array tmp8;
  real_array tmp9;
  real_array tmp10;
  modelica_real tmp11;
  static int tmp12 = 0;
  modelica_real tmp13;
  modelica_real tmp14;
  _tailrecursive: OMC_LABEL_UNUSED
  // _head has no default value.
  alloc_real_array(&(_V_flow_nominal2), 1, (_index_t)3);
  tmp2 = real_array_get(_V_flow_nominal, 1, ((modelica_integer) 1));
  tmp3 = real_array_get(_V_flow_nominal, 1, ((modelica_integer) 2));
  tmp4 = real_array_get(_V_flow_nominal, 1, ((modelica_integer) 3));
  array_alloc_scalar_real_array(&tmp1, 3, (modelica_real)(tmp2 * tmp2), (modelica_real)(tmp3 * tmp3), (modelica_real)(tmp4 * tmp4));
  real_array_copy_data(tmp1, _V_flow_nominal2);
  
  tmp5 = min_real_array(_V_flow_nominal);
  _V_flow_min = tmp5;
  tmp6 = max_real_array(_V_flow_nominal);
  _V_flow_max = tmp6;
  alloc_real_array(&(_c), 1, (_index_t)3);
  array_alloc_scalar_real_array(&tmp8, 3, (modelica_real)1.0, (modelica_real)real_array_get(_V_flow_nominal, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(_V_flow_nominal2, 1, ((modelica_integer) 1)));
  array_alloc_scalar_real_array(&tmp9, 3, (modelica_real)1.0, (modelica_real)real_array_get(_V_flow_nominal, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(_V_flow_nominal2, 1, ((modelica_integer) 2)));
  array_alloc_scalar_real_array(&tmp10, 3, (modelica_real)1.0, (modelica_real)real_array_get(_V_flow_nominal, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(_V_flow_nominal2, 1, ((modelica_integer) 3)));
  array_alloc_real_array(&tmp7, 3, tmp8, tmp9, tmp10);
  real_array_copy_data(omc_Modelica_Math_Matrices_solve(threadData, tmp7, _head_nominal), _c);
  
  if(!tmp12)
  {
    tmp11 = max_real_array(add_alloc_real_array_scalar(mul_alloc_real_array_scalar(_V_flow_nominal, (2.0) * (real_array_get(_c, 1, ((modelica_integer) 3)))), real_array_get(_c, 1, ((modelica_integer) 2))));
    if(!(tmp11 <= (-1e-60)))
    {
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Machines.mo",645,7,647,43,0};
        omc_assert_warning(info, MMC_STRINGDATA(_OMC_LIT29));
      }
      tmp12 = 1;
    }
  }

  if((_V_flow < _V_flow_min))
  {
    tmp13 = max_real_array(_head_nominal);
    _head = tmp13 + (_V_flow - _V_flow_min) * (real_array_get(_c, 1, ((modelica_integer) 2)) + ((2.0) * (real_array_get(_c, 1, ((modelica_integer) 3)))) * (_V_flow_min));
  }
  else
  {
    if((_V_flow > _V_flow_max))
    {
      tmp14 = min_real_array(_head_nominal);
      _head = tmp14 + (_V_flow - _V_flow_max) * (real_array_get(_c, 1, ((modelica_integer) 2)) + ((2.0) * (real_array_get(_c, 1, ((modelica_integer) 3)))) * (_V_flow_max));
    }
    else
    {
      _head = real_array_get(_c, 1, ((modelica_integer) 1)) + (_V_flow) * (real_array_get(_c, 1, ((modelica_integer) 2)) + (_V_flow) * (real_array_get(_c, 1, ((modelica_integer) 3))));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _head;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _V_flow_nominal, modelica_metatype _head_nominal)
{
  modelica_real tmp1;
  modelica_real _head;
  modelica_metatype out_head;
  tmp1 = mmc_unbox_real(_V_flow);
  _head = omc_Modelica_Fluid_Examples_HeatingSystem_pump_flowCharacteristic(threadData, tmp1, *((base_array_t*)_V_flow_nominal), *((base_array_t*)_head_nominal));
  out_head = mmc_mk_rcon(_head);
  return out_head;
}

Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState _state;
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState tmp1;
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  tmp1 = 997.0480319717385;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(state.p - 101325.0) * 0.9233362725638155 / 997.0480319717385");}
  _h = 104929.294642565 + (_state._T - 298.15) * (4181.885502948851) + ((_state._p - 101325.0) * (0.9233362725638155)) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_pump_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy(threadData, omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_setState__pTX(threadData, _p, _T, _X));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_pump_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_pump_heatTransfer_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_pump_monitoring_Medium_ThermodynamicState__desc, _p, _T);
}

Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = (1.0 + (_state._p - 101325.0) * (4.515426036491987e-10) - ((_state._T - 298.15) * (0.0002571314017648316))) * (997.0480319717385);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = (1.0 + (_state._p - 101325.0) * (4.515426036491987e-10) - ((_state._T - 298.15) * (0.0002571314017648316))) * (997.0480319717385);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState _state)
{
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  _p = _state._p;
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _p;
  modelica_metatype out_p;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _p = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_Medium_pressure(threadData, tmp1);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_real _dp, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _g_times_height_ab, modelica_real _crossArea, modelica_real _roughness, modelica_real _dp_small, modelica_real _Re_turbulent)
{
  modelica_real _m_flow;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re;
  modelica_real _Re2;
  modelica_real _dp_a;
  modelica_real _dp_b;
  modelica_real _m_flow_a;
  modelica_real _m_flow_b;
  modelica_real _dm_flow_ddp_fric_a;
  modelica_real _dm_flow_ddp_fric_b;
  modelica_real _dp_grav_a;
  modelica_real _dp_grav_b;
  modelica_real _m_flow_zero;
  modelica_real _dm_flow_ddp_fric_zero;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp_zero;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "roughness / diameter");}
  _Delta = (_roughness) / tmp1;
  // _Re has no default value.
  _Re2 = _Re_turbulent;
  // _dp_a has no default value.
  // _dp_b has no default value.
  // _m_flow_a has no default value.
  // _m_flow_b has no default value.
  // _dm_flow_ddp_fric_a has no default value.
  // _dm_flow_ddp_fric_b has no default value.
  _dp_grav_a = (_g_times_height_ab) * (_rho_a);
  _dp_grav_b = (_g_times_height_ab) * (_rho_b);
  _m_flow_zero = 0.0;
  // _dm_flow_ddp_fric_zero has no default value.
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.0065 / Delta");}
    tmp4 = (0.0065) / tmp2;
  }
  tmp5 = (745.0) * (exp(tmp4));
  tmp6 = 0.97;
  if(tmp5 < 0.0 && tmp6 != 0.0)
  {
    tmp8 = modf(tmp6, &tmp9);
    
    if(tmp8 > 0.5)
    {
      tmp8 -= 1.0;
      tmp9 += 1.0;
    }
    else if(tmp8 < -0.5)
    {
      tmp8 += 1.0;
      tmp9 -= 1.0;
    }
    
    if(fabs(tmp8) < 1e-10)
      tmp7 = pow(tmp5, tmp9);
    else
    {
      tmp11 = modf(1.0/tmp6, &tmp10);
      if(tmp11 > 0.5)
      {
        tmp11 -= 1.0;
        tmp10 += 1.0;
      }
      else if(tmp11 < -0.5)
      {
        tmp11 += 1.0;
        tmp10 -= 1.0;
      }
      if(fabs(tmp11) < 1e-10 && ((unsigned long)tmp10 & 1))
      {
        tmp7 = -pow(-tmp5, tmp8)*pow(tmp5, tmp9);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
      }
    }
  }
  else
  {
    tmp7 = pow(tmp5, tmp6);
  }
  if(isnan(tmp7) || isinf(tmp7))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
  }
  _Re1 = fmin(tmp7,_Re_turbulent);
  tmp12 = 2.0;
  if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(dp_grav_a + dp_grav_b) / 2.0");}
  _dp_zero = (_dp_grav_a + _dp_grav_b) / tmp12;
  _dp_a = fmax(_dp_grav_a,_dp_grav_b) + _dp_small;

  _dp_b = fmin(_dp_grav_a,_dp_grav_b) - _dp_small;

  if((_dp >= _dp_a))
  {
    _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp - _dp_grav_a, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
  }
  else
  {
    if((_dp <= _dp_b))
    {
      _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp - _dp_grav_b, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta, NULL);
    }
    else
    {
      _m_flow_a = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp_a - _dp_grav_a, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_a);

      _m_flow_b = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, _dp_b - _dp_grav_b, _rho_a, _rho_b, _mu_a, _mu_b, _length, _diameter, _crossArea, _Re1, _Re2, _Delta ,&_dm_flow_ddp_fric_b);

      _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp_zero, _dp_b, _dp_a, _m_flow_b, _m_flow_a, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_a ,&_dm_flow_ddp_fric_zero);

      if((_dp > _dp_zero))
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_zero, _dp_a, _m_flow_zero, _m_flow_a, _dm_flow_ddp_fric_zero, _dm_flow_ddp_fric_a, NULL);
      }
      else
      {
        _m_flow = omc_Modelica_Fluid_Utilities_regFun3(threadData, _dp, _dp_b, _dp_zero, _m_flow_b, _m_flow_zero, _dm_flow_ddp_fric_b, _dm_flow_ddp_fric_zero, NULL);
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData_t *threadData, modelica_metatype _dp, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _g_times_height_ab, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _dp_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_g_times_height_ab);
  tmp9 = mmc_unbox_real(_crossArea);
  tmp10 = mmc_unbox_real(_roughness);
  tmp11 = mmc_unbox_real(_dp_small);
  tmp12 = mmc_unbox_real(_Re_turbulent);
  _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  out_m_flow = mmc_mk_rcon(_m_flow);
  return out_m_flow;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _roughness, modelica_real _m_flow_small, modelica_real _Re_turbulent)
{
  modelica_real _dp;
  modelica_real _Delta;
  modelica_real tmp1;
  modelica_real _Re2;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _Re;
  modelica_real _lambda2;
  modelica_real _Re1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  tmp1 = _diameter;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "roughness / diameter");}
  _Delta = (_roughness) / tmp1;
  _Re2 = _Re_turbulent;
  // _mu has no default value.
  // _rho has no default value.
  // _Re has no default value.
  // _lambda2 has no default value.
  tmp3 = (modelica_boolean)(_Delta <= 0.0065);
  if(tmp3)
  {
    tmp4 = 1.0;
  }
  else
  {
    tmp2 = _Delta;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.0065 / Delta");}
    tmp4 = (0.0065) / tmp2;
  }
  _Re1 = fmin((745.0) * (exp(tmp4)),_Re_turbulent);
  _rho = ((_m_flow >= 0.0)?_rho_a:_rho_b);

  _mu = ((_m_flow >= 0.0)?_mu_a:_mu_b);

  tmp5 = (_crossArea) * (_mu);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "diameter * abs(m_flow) / (crossArea * mu)");}
  _Re = ((_diameter) * (fabs(_m_flow))) / tmp5;

  tmp20 = (modelica_boolean)(_Re <= _Re1);
  if(tmp20)
  {
    tmp21 = (64.0) * (_Re);
  }
  else
  {
    tmp18 = (modelica_boolean)(_Re >= _Re2);
    if(tmp18)
    {
      tmp6 = 3.7;
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
      tmp7 = _Re;
      tmp8 = 0.9;
      if(tmp7 < 0.0 && tmp8 != 0.0)
      {
        tmp10 = modf(tmp8, &tmp11);
        
        if(tmp10 > 0.5)
        {
          tmp10 -= 1.0;
          tmp11 += 1.0;
        }
        else if(tmp10 < -0.5)
        {
          tmp10 += 1.0;
          tmp11 -= 1.0;
        }
        
        if(fabs(tmp10) < 1e-10)
          tmp9 = pow(tmp7, tmp11);
        else
        {
          tmp13 = modf(1.0/tmp8, &tmp12);
          if(tmp13 > 0.5)
          {
            tmp13 -= 1.0;
            tmp12 += 1.0;
          }
          else if(tmp13 < -0.5)
          {
            tmp13 += 1.0;
            tmp12 -= 1.0;
          }
          if(fabs(tmp13) < 1e-10 && ((unsigned long)tmp12 & 1))
          {
            tmp9 = -pow(-tmp7, tmp10)*pow(tmp7, tmp11);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
          }
        }
      }
      else
      {
        tmp9 = pow(tmp7, tmp8);
      }
      if(isnan(tmp9) || isinf(tmp9))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp7, tmp8);
      }tmp14 = tmp9;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re ^ 0.9");}
      tmp15 = (_Delta) / tmp6 + (5.74) / tmp14;
      if(!(tmp15 > 0.0))
      {
        FILE_INFO info = {"",0,0,0,0,0};
        omc_assert(threadData, info, "Model error: Argument of log10(Delta / 3.7 + 5.74 / Re ^ 0.9) was %g should be > 0", tmp15);
      }tmp16 = log10(tmp15);
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / log10(Delta / 3.7 + 5.74 / Re ^ 0.9)");}
      tmp17 = (_Re) / tmp16;
      tmp19 = (0.25) * ((tmp17 * tmp17));
    }
    else
    {
      tmp19 = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, _Re, _Re1, _Re2, _Delta);
    }
    tmp21 = tmp19;
  }
  _lambda2 = tmp21;

  tmp22 = ((((2.0) * (_rho)) * (_diameter)) * (_diameter)) * (_diameter);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "length * mu * mu / (2.0 * rho * diameter * diameter * diameter)");}
  _dp = ((((_length) * (_mu)) * (_mu)) / tmp22) * (((_m_flow >= 0.0)?_lambda2:(-_lambda2)));
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _roughness, modelica_metatype _m_flow_small, modelica_metatype _Re_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_roughness);
  tmp10 = mmc_unbox_real(_m_flow_small);
  tmp11 = mmc_unbox_real(_Re_turbulent);
  _dp = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_real _dp_fric, modelica_real _rho_a, modelica_real _rho_b, modelica_real _mu_a, modelica_real _mu_b, modelica_real _length, modelica_real _diameter, modelica_real _crossArea, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real *out_dm_flow_ddp_fric)
{
  modelica_real _m_flow;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _mu;
  modelica_real _rho;
  modelica_real _lambda2;
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  _tailrecursive: OMC_LABEL_UNUSED
  // _m_flow has no default value.
  // _dm_flow_ddp_fric has no default value.
  // _mu has no default value.
  // _rho has no default value.
  // _lambda2 has no default value.
  // _Re has no default value.
  // _dRe_ddp has no default value.
  // _aux1 has no default value.
  // _aux2 has no default value.
  if((_dp_fric >= 0.0))
  {
    _rho = _rho_a;

    _mu = _mu_a;
  }
  else
  {
    _rho = _rho_b;

    _mu = _mu_b;
  }

  tmp1 = _diameter;
  tmp2 = ((_length) * (_mu)) * (_mu);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "abs(dp_fric) * 2.0 * diameter ^ 3.0 * rho / (length * mu * mu)");}
  _lambda2 = ((((fabs(_dp_fric)) * (2.0)) * ((tmp1 * tmp1 * tmp1))) * (_rho)) / tmp2;

  tmp3 = _diameter;
  tmp4 = _mu;
  tmp5 = (_length) * ((tmp4 * tmp4));
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * diameter ^ 3.0 * rho / (length * mu ^ 2.0)");}
  _aux1 = (((2.0) * ((tmp3 * tmp3 * tmp3))) * (_rho)) / tmp5;

  tmp6 = 64.0;
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "lambda2 / 64.0");}
  _Re = (_lambda2) / tmp6;

  tmp7 = 64.0;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux1 / 64.0");}
  _dRe_ddp = (_aux1) / tmp7;

  if((_Re > _Re1))
  {
    tmp8 = _lambda2;
    if(!(tmp8 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp8);
    }tmp9 = _lambda2;
    if(!(tmp9 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(lambda2) was %g should be >= 0", tmp9);
    }tmp10 = sqrt(tmp9);
    if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(lambda2)");}
    tmp11 = (2.51) / tmp10 + (0.27) * (_Delta);
    if(!(tmp11 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log10(2.51 / sqrt(lambda2) + 0.27 * Delta) was %g should be > 0", tmp11);
    }
    _Re = (-(((2.0) * (sqrt(tmp8))) * (log10(tmp11))));

    tmp12 = (_aux1) * (fabs(_dp_fric));
    if(!(tmp12 >= 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of sqrt(aux1 * abs(dp_fric)) was %g should be >= 0", tmp12);
    }
    _aux2 = sqrt(tmp12);

    tmp13 = _aux2;
    if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / aux2");}
    tmp14 = (2.51) / tmp13 + (0.27) * (_Delta);
    if(!(tmp14 > 0.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of log(2.51 / aux2 + 0.27 * Delta) was %g should be > 0", tmp14);
    }tmp15 = (2.0) * (_aux2);
    if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * log(2.51 / aux2 + 0.27 * Delta) * aux1 / (2.0 * aux2)");}
    tmp16 = _aux2;
    if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / aux2");}
    tmp17 = ((2.0) * (fabs(_dp_fric))) * ((2.51) / tmp16 + (0.27) * (_Delta));
    if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.02 / (2.0 * abs(dp_fric) * (2.51 / aux2 + 0.27 * Delta))");}
    _dRe_ddp = (0.4342944819032518) * ((-((((2.0) * (log(tmp14))) * (_aux1)) / tmp15)) + (5.02) / tmp17);

    if((_Re < _Re2))
    {
      _Re = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, _lambda2, _Re1, _Re2, _Delta, _dp_fric ,&_dRe_ddp);
    }
  }

  tmp18 = _diameter;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "crossArea / diameter");}
  _m_flow = (((_crossArea) / tmp18) * (_mu)) * (((_dp_fric >= 0.0)?_Re:(-_Re)));

  tmp19 = _diameter;
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "crossArea / diameter");}
  _dm_flow_ddp_fric = (((_crossArea) / tmp19) * (_mu)) * (_dRe_ddp);
  _return: OMC_LABEL_UNUSED
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = _dm_flow_ddp_fric; }
  return _m_flow;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData_t *threadData, modelica_metatype _dp_fric, modelica_metatype _rho_a, modelica_metatype _rho_b, modelica_metatype _mu_a, modelica_metatype _mu_b, modelica_metatype _length, modelica_metatype _diameter, modelica_metatype _crossArea, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype *out_dm_flow_ddp_fric)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _dm_flow_ddp_fric;
  modelica_real _m_flow;
  modelica_metatype out_m_flow;
  tmp1 = mmc_unbox_real(_dp_fric);
  tmp2 = mmc_unbox_real(_rho_a);
  tmp3 = mmc_unbox_real(_rho_b);
  tmp4 = mmc_unbox_real(_mu_a);
  tmp5 = mmc_unbox_real(_mu_b);
  tmp6 = mmc_unbox_real(_length);
  tmp7 = mmc_unbox_real(_diameter);
  tmp8 = mmc_unbox_real(_crossArea);
  tmp9 = mmc_unbox_real(_Re1);
  tmp10 = mmc_unbox_real(_Re2);
  tmp11 = mmc_unbox_real(_Delta);
  _m_flow = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, &_dm_flow_ddp_fric);
  out_m_flow = mmc_mk_rcon(_m_flow);
  if (out_dm_flow_ddp_fric) { *out_dm_flow_ddp_fric = mmc_mk_rcon(_dm_flow_ddp_fric); }
  return out_m_flow;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_real _lambda2, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta, modelica_real _dp_fric, modelica_real *out_dRe_ddp)
{
  modelica_real _Re;
  modelica_real _dRe_ddp;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _y1d;
  modelica_real _aux2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _x;
  modelica_real tmp12;
  modelica_real _y;
  modelica_real _dy_dx;
  modelica_real _aux3;
  modelica_real tmp13;
  modelica_real _L2;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real _aux4;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real _x2;
  modelica_real tmp18;
  modelica_real _aux5;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real _y2;
  modelica_real tmp21;
  modelica_real _y2d;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  _tailrecursive: OMC_LABEL_UNUSED
  // _Re has no default value.
  // _dRe_ddp has no default value.
  tmp1 = (64.0) * (_Re1);
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = _Re1;
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  _y1d = 1.0;
  tmp3 = 3.7;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
  tmp4 = _Re2;
  tmp5 = 0.9;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }tmp11 = tmp6;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re2 ^ 0.9");}
  _aux2 = (_Delta) / tmp3 + (5.74) / tmp11;
  tmp12 = _lambda2;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(lambda2) was %g should be > 0", tmp12);
  }
  _x = log10(tmp12);
  // _y has no default value.
  // _dy_dx has no default value.
  tmp13 = _aux2;
  if(!(tmp13 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp13);
  }
  _aux3 = log10(tmp13);
  tmp14 = _aux3;
  if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re2 / aux3");}
  tmp15 = (_Re2) / tmp14;
  _L2 = (0.25) * ((tmp15 * tmp15));
  tmp16 = _L2;
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp16);
  }tmp17 = sqrt(tmp16);
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(L2)");}
  _aux4 = (2.51) / tmp17 + (0.27) * (_Delta);
  tmp18 = _L2;
  if(!(tmp18 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp18);
  }
  _x2 = log10(tmp18);
  tmp19 = _L2;
  if(!(tmp19 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp19);
  }tmp20 = _aux4;
  if(!(tmp20 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp20);
  }
  _aux5 = (-(((2.0) * (sqrt(tmp19))) * (log10(tmp20))));
  tmp21 = _aux5;
  if(!(tmp21 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux5) was %g should be > 0", tmp21);
  }
  _y2 = log10(tmp21);
  tmp22 = (_aux5) * (_aux4);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.090079149577162 / (aux5 * aux4)");}
  _y2d = 0.5 + (1.090079149577162) / tmp22;
  _y = omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d ,&_dy_dx);

  tmp23 = 10.0;
  tmp24 = _y;
  if(tmp23 < 0.0 && tmp24 != 0.0)
  {
    tmp26 = modf(tmp24, &tmp27);
    
    if(tmp26 > 0.5)
    {
      tmp26 -= 1.0;
      tmp27 += 1.0;
    }
    else if(tmp26 < -0.5)
    {
      tmp26 += 1.0;
      tmp27 -= 1.0;
    }
    
    if(fabs(tmp26) < 1e-10)
      tmp25 = pow(tmp23, tmp27);
    else
    {
      tmp29 = modf(1.0/tmp24, &tmp28);
      if(tmp29 > 0.5)
      {
        tmp29 -= 1.0;
        tmp28 += 1.0;
      }
      else if(tmp29 < -0.5)
      {
        tmp29 += 1.0;
        tmp28 -= 1.0;
      }
      if(fabs(tmp29) < 1e-10 && ((unsigned long)tmp28 & 1))
      {
        tmp25 = -pow(-tmp23, tmp26)*pow(tmp23, tmp27);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
      }
    }
  }
  else
  {
    tmp25 = pow(tmp23, tmp24);
  }
  if(isnan(tmp25) || isinf(tmp25))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
  }
  _Re = tmp25;

  tmp30 = fabs(_dp_fric);
  if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / abs(dp_fric)");}
  _dRe_ddp = ((_Re) / tmp30) * (_dy_dx);
  _return: OMC_LABEL_UNUSED
  if (out_dRe_ddp) { *out_dRe_ddp = _dRe_ddp; }
  return _Re;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData_t *threadData, modelica_metatype _lambda2, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta, modelica_metatype _dp_fric, modelica_metatype *out_dRe_ddp)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _dRe_ddp;
  modelica_real _Re;
  modelica_metatype out_Re;
  tmp1 = mmc_unbox_real(_lambda2);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  tmp5 = mmc_unbox_real(_dp_fric);
  _Re = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, &_dRe_ddp);
  out_Re = mmc_mk_rcon(_Re);
  if (out_dRe_ddp) { *out_dRe_ddp = mmc_mk_rcon(_dRe_ddp); }
  return out_Re;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_real _Re, modelica_real _Re1, modelica_real _Re2, modelica_real _Delta)
{
  modelica_real _lambda2;
  modelica_real _x1;
  modelica_real tmp1;
  modelica_real _y1;
  modelica_real tmp2;
  modelica_real _yd1;
  modelica_real _aux1;
  modelica_real _aux2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real _x2;
  modelica_real tmp12;
  modelica_real _dx;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real _aux3;
  modelica_real tmp15;
  modelica_real _diff_x;
  modelica_real _L2;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real _yd2;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real _aux4;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real _y2;
  modelica_real tmp28;
  modelica_real _aux5;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real _m;
  modelica_real tmp31;
  modelica_real _c2;
  modelica_real tmp32;
  modelica_real _c3;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  _tailrecursive: OMC_LABEL_UNUSED
  // _lambda2 has no default value.
  tmp1 = _Re1;
  if(!(tmp1 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re1) was %g should be > 0", tmp1);
  }
  _x1 = log10(tmp1);
  tmp2 = (64.0) * (_Re1);
  if(!(tmp2 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(64.0 * Re1) was %g should be > 0", tmp2);
  }
  _y1 = log10(tmp2);
  _yd1 = 1.0;
  _aux1 = 1.121782646756099;
  tmp3 = 3.7;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Delta / 3.7");}
  tmp4 = _Re2;
  tmp5 = 0.9;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }tmp11 = tmp6;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.74 / Re2 ^ 0.9");}
  _aux2 = (_Delta) / tmp3 + (5.74) / tmp11;
  tmp12 = _Re2;
  if(!(tmp12 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re2) was %g should be > 0", tmp12);
  }
  _x2 = log10(tmp12);
  tmp13 = _Re1;
  if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / Re1");}
  tmp14 = (_Re) / tmp13;
  if(!(tmp14 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(Re / Re1) was %g should be > 0", tmp14);
  }
  _dx = log10(tmp14);
  tmp15 = _aux2;
  if(!(tmp15 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux2) was %g should be > 0", tmp15);
  }
  _aux3 = log10(tmp15);
  _diff_x = _x2 - _x1;
  tmp16 = _aux3;
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re2 / aux3");}
  tmp17 = (_Re2) / tmp16;
  _L2 = (0.25) * ((tmp17 * tmp17));
  tmp18 = _Re2;
  tmp19 = 0.9;
  if(tmp18 < 0.0 && tmp19 != 0.0)
  {
    tmp21 = modf(tmp19, &tmp22);
    
    if(tmp21 > 0.5)
    {
      tmp21 -= 1.0;
      tmp22 += 1.0;
    }
    else if(tmp21 < -0.5)
    {
      tmp21 += 1.0;
      tmp22 -= 1.0;
    }
    
    if(fabs(tmp21) < 1e-10)
      tmp20 = pow(tmp18, tmp22);
    else
    {
      tmp24 = modf(1.0/tmp19, &tmp23);
      if(tmp24 > 0.5)
      {
        tmp24 -= 1.0;
        tmp23 += 1.0;
      }
      else if(tmp24 < -0.5)
      {
        tmp24 += 1.0;
        tmp23 -= 1.0;
      }
      if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
      {
        tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
      }
    }
  }
  else
  {
    tmp20 = pow(tmp18, tmp19);
  }
  if(isnan(tmp20) || isinf(tmp20))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
  }tmp25 = ((_aux2) * (_aux3)) * (tmp20);
  if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "4.0 * aux1 / (aux2 * aux3 * Re2 ^ 0.9)");}
  _yd2 = 2.0 + ((4.0) * (_aux1)) / tmp25;
  tmp26 = _L2;
  if(!(tmp26 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp26);
  }tmp27 = sqrt(tmp26);
  if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.51 / sqrt(L2)");}
  _aux4 = (2.51) / tmp27 + (0.27) * (_Delta);
  tmp28 = _L2;
  if(!(tmp28 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(L2) was %g should be > 0", tmp28);
  }
  _y2 = log10(tmp28);
  tmp29 = _L2;
  if(!(tmp29 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(L2) was %g should be >= 0", tmp29);
  }tmp30 = _aux4;
  if(!(tmp30 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(aux4) was %g should be > 0", tmp30);
  }
  _aux5 = (-(((2.0) * (sqrt(tmp29))) * (log10(tmp30))));
  tmp31 = _diff_x;
  if (tmp31 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y2 - y1) / diff_x");}
  _m = (_y2 - _y1) / tmp31;
  tmp32 = _diff_x;
  if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(3.0 * m - 2.0 * yd1 - yd2) / diff_x");}
  _c2 = ((3.0) * (_m) - ((2.0) * (_yd1)) - _yd2) / tmp32;
  tmp33 = (_diff_x) * (_diff_x);
  if (tmp33 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(yd1 + yd2 - 2.0 * m) / (diff_x * diff_x)");}
  _c3 = (_yd1 + _yd2 - ((2.0) * (_m))) / tmp33;
  tmp34 = _Re1;
  if (tmp34 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "Re / Re1");}
  tmp35 = (_Re) / tmp34;
  tmp36 = _yd1 + (_dx) * (_c2 + (_dx) * (_c3));
  if(tmp35 < 0.0 && tmp36 != 0.0)
  {
    tmp38 = modf(tmp36, &tmp39);
    
    if(tmp38 > 0.5)
    {
      tmp38 -= 1.0;
      tmp39 += 1.0;
    }
    else if(tmp38 < -0.5)
    {
      tmp38 += 1.0;
      tmp39 -= 1.0;
    }
    
    if(fabs(tmp38) < 1e-10)
      tmp37 = pow(tmp35, tmp39);
    else
    {
      tmp41 = modf(1.0/tmp36, &tmp40);
      if(tmp41 > 0.5)
      {
        tmp41 -= 1.0;
        tmp40 += 1.0;
      }
      else if(tmp41 < -0.5)
      {
        tmp41 += 1.0;
        tmp40 -= 1.0;
      }
      if(fabs(tmp41) < 1e-10 && ((unsigned long)tmp40 & 1))
      {
        tmp37 = -pow(-tmp35, tmp38)*pow(tmp35, tmp39);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
      }
    }
  }
  else
  {
    tmp37 = pow(tmp35, tmp36);
  }
  if(isnan(tmp37) || isinf(tmp37))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp35, tmp36);
  }
  _lambda2 = ((64.0) * (_Re1)) * (tmp37);
  _return: OMC_LABEL_UNUSED
  return _lambda2;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData_t *threadData, modelica_metatype _Re, modelica_metatype _Re1, modelica_metatype _Re2, modelica_metatype _Delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _lambda2;
  modelica_metatype out_lambda2;
  tmp1 = mmc_unbox_real(_Re);
  tmp2 = mmc_unbox_real(_Re1);
  tmp3 = mmc_unbox_real(_Re2);
  tmp4 = mmc_unbox_real(_Delta);
  _lambda2 = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2(threadData, tmp1, tmp2, tmp3, tmp4);
  out_lambda2 = mmc_mk_rcon(_lambda2);
  return out_lambda2;
}

Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_radiator_heatTransfer_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState _state;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState tmp1;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4181.885502948851;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(h - 104929.294642565 - (p - 101325.0) * 0.0009260700016004721) / 4181.885502948851");}
  tmp2._p = _p;
  tmp2._T = (_h - 104929.294642565 - ((_p - 101325.0) * (0.0009260700016004721))) / tmp3 + 298.15;
  tmp1 = tmp2;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__forward_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState _state;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState tmp1;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4181.885502948851;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(h - 104929.294642565 - (p - 101325.0) * 0.0009260700016004721) / 4181.885502948851");}
  tmp2._p = _p;
  tmp2._T = (_h - 104929.294642565 - ((_p - 101325.0) * (0.0009260700016004721))) / tmp3 + 298.15;
  tmp1 = tmp2;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_sensor__T__return_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties(threadData_t *threadData, modelica_real omc_psat, modelica_real omc_Tsat)
{
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties tmp1;
  tmp1._psat = omc_psat;
  tmp1._Tsat = omc_Tsat;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties(threadData_t *threadData, modelica_metatype _psat, modelica_metatype _Tsat)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_tank_Medium_SaturationProperties__desc, _psat, _Tsat);
}

Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState(threadData_t *threadData, modelica_integer omc_phase, modelica_real omc_h, modelica_real omc_d, modelica_real omc_T, modelica_real omc_p)
{
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState tmp1;
  tmp1._phase = omc_phase;
  tmp1._h = omc_h;
  tmp1._d = omc_d;
  tmp1._T = omc_T;
  tmp1._p = omc_p;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _h, modelica_metatype _d, modelica_metatype _T, modelica_metatype _p)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState__desc, _phase, _h, _d, _T, _p);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase, modelica_integer _region)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = omc_Modelica_Media_Water_IF97__Utilities_rho__pT(threadData, _p, _T, _region);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_region);
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT(threadData, tmp1, tmp2, tmp3, tmp4);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X, modelica_integer _phase, modelica_integer _region)
{
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState _state;
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState tmp1;
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._phase = ((modelica_integer) 1);
  tmp2._h = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT(threadData, _p, _T, ((modelica_integer) 0), _region);
  tmp2._d = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_density__pT(threadData, _p, _T, ((modelica_integer) 0), _region);
  tmp2._T = _T;
  tmp2._p = _p;
  tmp1 = tmp2;
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X, modelica_metatype _phase, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_region);
  _state = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X), tmp3, tmp4);
  tmpMeta5 = mmc_mk_icon(_state._phase);
  tmpMeta6 = mmc_mk_rcon(_state._h);
  tmpMeta7 = mmc_mk_rcon(_state._d);
  tmpMeta8 = mmc_mk_rcon(_state._T);
  tmpMeta9 = mmc_mk_rcon(_state._p);
  out_state = mmc_mk_box6(3, &Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState__desc, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9);
  return out_state;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = _state._h;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_tank_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmp1._phase = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._h = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._d = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._T = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._p = tmp11;
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _phase, modelica_integer _region)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_h__pT(threadData, _p, _T, _region);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _phase, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_region);
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pT(threadData, tmp1, tmp2, tmp3, tmp4);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X, modelica_integer _phase)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy(threadData, omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_setState__pTX(threadData, _p, _T, _X, _phase, ((modelica_integer) 0)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X, modelica_metatype _phase)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_phase);
  _h = omc_Modelica_Fluid_Examples_HeatingSystem_tank_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X), tmp3);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_integer omc_phase, modelica_real omc_h, modelica_real omc_d, modelica_real omc_T, modelica_real omc_p)
{
  Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState tmp1;
  tmp1._phase = omc_phase;
  tmp1._h = omc_h;
  tmp1._d = omc_d;
  tmp1._T = omc_T;
  tmp1._p = omc_p;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _h, modelica_metatype _d, modelica_metatype _T, modelica_metatype _p)
{
  return mmc_mk_box6(3, &Modelica_Fluid_Examples_HeatingSystem_tank_heatTransfer_Medium_ThermodynamicState__desc, _phase, _h, _d, _T, _p);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData_t *threadData, modelica_real _pos)
{
  modelica_real _rc;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rc has no default value.
  _rc = _pos;
  _return: OMC_LABEL_UNUSED
  return _rc;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData_t *threadData, modelica_metatype _pos)
{
  modelica_real tmp1;
  modelica_real _rc;
  modelica_metatype out_rc;
  tmp1 = mmc_unbox_real(_pos);
  _rc = omc_Modelica_Fluid_Examples_HeatingSystem_valve_valveCharacteristic(threadData, tmp1);
  out_rc = mmc_mk_rcon(_rc);
  return out_rc;
}

Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState__desc, _p, _T);
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = (1.0 + (_state._p - 101325.0) * (4.515426036491987e-10) - ((_state._T - 298.15) * (0.0002571314017648316))) * (997.0480319717385);
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState _state;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp1;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4181.885502948851;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(h - 104929.294642565 - (p - 101325.0) * 0.0009260700016004721) / 4181.885502948851");}
  tmp2._p = _p;
  tmp2._T = (_h - 104929.294642565 - ((_p - 101325.0) * (0.0009260700016004721))) / tmp3 + 298.15;
  tmp1 = tmp2;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLExport
modelica_real omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData_t *threadData, Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  Modelica_Fluid_Examples_HeatingSystem_valve_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_Modelica_Fluid_Examples_HeatingSystem_valve_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d, modelica_real *out_dy_dx)
{
  modelica_real _y;
  modelica_real _dy_dx;
  modelica_real _h;
  modelica_real _t;
  modelica_real _h00;
  modelica_real _h10;
  modelica_real _h01;
  modelica_real _h11;
  modelica_real _h00d;
  modelica_real _h10d;
  modelica_real _h01d;
  modelica_real _h11d;
  modelica_real _aux3;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _dy_dx has no default value.
  // _h has no default value.
  // _t has no default value.
  // _h00 has no default value.
  // _h10 has no default value.
  // _h01 has no default value.
  // _h11 has no default value.
  // _h00d has no default value.
  // _h10d has no default value.
  // _h01d has no default value.
  // _h11d has no default value.
  // _aux3 has no default value.
  // _aux2 has no default value.
  _h = _x2 - _x1;

  if((fabs(_h) > 0.0))
  {
    tmp1 = _h;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x1) / h");}
    _t = (_x - _x1) / tmp1;

    tmp2 = _t;
    _aux3 = (tmp2 * tmp2 * tmp2);

    tmp3 = _t;
    _aux2 = (tmp3 * tmp3);

    _h00 = (2.0) * (_aux3) - ((3.0) * (_aux2)) + 1.0;

    _h10 = _aux3 - ((2.0) * (_aux2)) + _t;

    _h01 = (-((2.0) * (_aux3))) + (3.0) * (_aux2);

    _h11 = _aux3 - _aux2;

    _h00d = (6.0) * (_aux2 - _t);

    _h10d = (3.0) * (_aux2) - ((4.0) * (_t)) + 1.0;

    _h01d = (6.0) * (_t - _aux2);

    _h11d = (3.0) * (_aux2) - ((2.0) * (_t));

    _y = (_y1) * (_h00) + ((_h) * (_y1d)) * (_h10) + (_y2) * (_h01) + ((_h) * (_y2d)) * (_h11);

    tmp4 = _h;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y1 * h00d / h");}
    tmp5 = _h;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "y2 * h01d / h");}
    _dy_dx = ((_y1) * (_h00d)) / tmp4 + (_y1d) * (_h10d) + ((_y2) * (_h01d)) / tmp5 + (_y2d) * (_h11d);
  }
  else
  {
    tmp6 = 2.0;
    if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
    _y = (_y1 + _y2) / tmp6;

    _dy_dx = (((modelica_real)sign(_y2 - _y1))) * (9.999999999999999e+59);
  }
  _return: OMC_LABEL_UNUSED
  if (out_dy_dx) { *out_dy_dx = _dy_dx; }
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d, modelica_metatype *out_dy_dx)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _dy_dx;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Modelica_Fluid_Utilities_cubicHermite__withDerivative(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, &_dy_dx);
  out_y = mmc_mk_rcon(_y);
  if (out_dy_dx) { *out_dy_dx = mmc_mk_rcon(_dy_dx); }
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _y1, modelica_real _y1d, modelica_real _y0d)
{
  modelica_real _y;
  modelica_real _a1;
  modelica_real _a2;
  modelica_real _a3;
  modelica_real _xx;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _a1 has no default value.
  // _a2 has no default value.
  // _a3 has no default value.
  // _xx has no default value.
  _a1 = (_x1) * (_y0d);

  _a2 = (3.0) * (_y1) - ((_x1) * (_y1d)) - ((2.0) * (_a1));

  _a3 = _y1 - _a2 - _a1;

  tmp1 = _x1;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x1");}
  _xx = (_x) / tmp1;

  _y = (_xx) * (_a1 + (_xx) * (_a2 + (_xx) * (_a3)));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _y1, modelica_metatype _y1d, modelica_metatype _y0d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_y1);
  tmp4 = mmc_unbox_real(_y1d);
  tmp5 = mmc_unbox_real(_y0d);
  _y = omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, tmp1, tmp2, tmp3, tmp4, tmp5);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regFun3(threadData_t *threadData, modelica_real _x, modelica_real _x0, modelica_real _x1, modelica_real _y0, modelica_real _y1, modelica_real _y0d, modelica_real _y1d, modelica_real *out_c)
{
  modelica_real _y;
  modelica_real _c;
  modelica_real _h0;
  modelica_real _Delta0;
  modelica_real _xstar;
  modelica_real _mu;
  modelica_real _eta;
  modelica_real _omega;
  modelica_real _rho;
  modelica_real _theta0;
  modelica_real _mu_tilde;
  modelica_real _eta_tilde;
  modelica_real _xi1;
  modelica_real _xi2;
  modelica_real _a1;
  modelica_real _a2;
  modelica_real _const12;
  modelica_real _const3;
  modelica_real _aux01;
  modelica_real _aux02;
  modelica_boolean _useSingleCubicPolynomial;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  static int tmp7 = 0;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  static int tmp14 = 0;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _c has no default value.
  // _h0 has no default value.
  // _Delta0 has no default value.
  // _xstar has no default value.
  // _mu has no default value.
  // _eta has no default value.
  // _omega has no default value.
  // _rho has no default value.
  // _theta0 has no default value.
  // _mu_tilde has no default value.
  // _eta_tilde has no default value.
  // _xi1 has no default value.
  // _xi2 has no default value.
  // _a1 has no default value.
  // _a2 has no default value.
  // _const12 has no default value.
  // _const3 has no default value.
  // _aux01 has no default value.
  // _aux02 has no default value.
  _useSingleCubicPolynomial = 0;
  {
    if(!(_x0 < _x1))
    {
      tmp1 = modelica_real_to_modelica_string(_x0, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta2 = stringAppend(_OMC_LIT35,tmp1);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT36);
      tmp4 = modelica_real_to_modelica_string(_x1, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT37);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Utilities.mo",607,5,608,74,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta6));
      }
    }
  }

  if(((_y0d) * (_y1d) >= 0.0))
  {
  }
  else
  {
    {
      if(!((fabs(_y0d) < 1e-15) || (fabs(_y1d) < 1e-15)))
      {
        tmp8 = modelica_real_to_modelica_string(_y0d, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta9 = stringAppend(_OMC_LIT38,tmp8);
        tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT39);
        tmp11 = modelica_real_to_modelica_string(_y1d, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta12 = stringAppend(tmpMeta10,tmp11);
        tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT40);
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Utilities.mo",614,7,615,79,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta13));
        }
      }
    }
  }

  _h0 = _x1 - _x0;

  tmp15 = _h0;
  if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 - y0) / h0");}
  _Delta0 = (_y1 - _y0) / tmp15;

  if((fabs(_Delta0) <= 0.0))
  {
    _y = _y0 + (_Delta0) * (_x - _x0);

    _c = 0.0;
  }
  else
  {
    if((fabs(_y1d + _y0d - ((2.0) * (_Delta0))) < 1e-13))
    {
      tmp16 = _h0;
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x0) / h0");}
      tmp17 = _h0;
      if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x0) * (y0d + y1d - 2.0 * Delta0) / h0");}
      _y = _y0 + (_x - _x0) * (_y0d + ((_x - _x0) / tmp16) * ((-((2.0) * (_y0d))) - _y1d + (3.0) * (_Delta0) + ((_x - _x0) * (_y0d + _y1d - ((2.0) * (_Delta0)))) / tmp17));

      tmp18 = 2.0;
      if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x0 + x1) / 2.0");}
      _aux01 = (_x0 + _x1) / tmp18;

      tmp19 = _aux01 - _x0;
      tmp20 = _h0;
      tmp21 = (tmp20 * tmp20);
      if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 * (y0d + y1d - 2.0 * Delta0) * (aux01 - x0) ^ 2.0 / h0 ^ 2.0");}
      tmp22 = _h0;
      if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * ((-2.0 * y0d) - y1d + 3.0 * Delta0) * (aux01 - x0) / h0");}
      _c = (((3.0) * (_y0d + _y1d - ((2.0) * (_Delta0)))) * ((tmp19 * tmp19))) / tmp21 + (((2.0) * ((-((2.0) * (_y0d))) - _y1d + (3.0) * (_Delta0))) * (_aux01 - _x0)) / tmp22 + _y0d;
    }
    else
    {
      tmp23 = (-_y0d) - _y1d + (2.0) * (_Delta0);
      if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.3333333333333333 * ((-3.0 * x0 * y0d) - 3.0 * x0 * y1d + 6.0 * x0 * Delta0 - 2.0 * h0 * y0d - h0 * y1d + 3.0 * h0 * Delta0) / ((-y0d) - y1d + 2.0 * Delta0)");}
      _xstar = ((0.3333333333333333) * ((-(((3.0) * (_x0)) * (_y0d))) - (((3.0) * (_x0)) * (_y1d)) + ((6.0) * (_x0)) * (_Delta0) - (((2.0) * (_h0)) * (_y0d)) - ((_h0) * (_y1d)) + ((3.0) * (_h0)) * (_Delta0))) / tmp23;

      _mu = _xstar - _x0;

      _eta = _x1 - _xstar;

      tmp24 = _xstar - _x0;
      tmp25 = _h0;
      tmp26 = (tmp25 * tmp25);
      if (tmp26 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 * (y0d + y1d - 2.0 * Delta0) * (xstar - x0) ^ 2.0 / h0 ^ 2.0");}
      tmp27 = _h0;
      if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * ((-2.0 * y0d) - y1d + 3.0 * Delta0) * (xstar - x0) / h0");}
      _omega = (((3.0) * (_y0d + _y1d - ((2.0) * (_Delta0)))) * ((tmp24 * tmp24))) / tmp26 + (((2.0) * ((-((2.0) * (_y0d))) - _y1d + (3.0) * (_Delta0))) * (_xstar - _x0)) / tmp27 + _y0d;

      _aux01 = ((0.25) * (((modelica_real)sign(_Delta0)))) * (fmin(fabs(_omega),fabs(_Delta0)));

      if((fabs(_y0d - _y1d) <= 1e-13))
      {
        _aux02 = _y0d;

        if((_y1 > _y0 + (_y0d) * (_x1 - _x0)))
        {
          _useSingleCubicPolynomial = 1;
        }
      }
      else
      {
        if((fabs(_y1d + _y0d - ((2.0) * (_Delta0))) < 1e-13))
        {
          tmp28 = _y1d;
          tmp29 = _y0d;
          _aux02 = ((((6.0) * (_Delta0)) * (_y1d + _y0d - ((1.5) * (_Delta0))) - ((_y1d) * (_y0d)) - ((tmp28 * tmp28)) - ((tmp29 * tmp29))) * (((_y1d + _y0d - ((2.0) * (_Delta0)) >= 0.0)?1.0:-1.0))) * (9.999999999999999e+59);
        }
        else
        {
          tmp30 = _y1d;
          tmp31 = _y0d;
          tmp32 = (3.0) * (_y1d + _y0d - ((2.0) * (_Delta0)));
          if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(6.0 * Delta0 * (y1d + y0d - 1.5 * Delta0) - y1d * y0d - y1d ^ 2.0 - y0d ^ 2.0) / (3.0 * (y1d + y0d - 2.0 * Delta0))");}
          _aux02 = (((6.0) * (_Delta0)) * (_y1d + _y0d - ((1.5) * (_Delta0))) - ((_y1d) * (_y0d)) - ((tmp30 * tmp30)) - ((tmp31 * tmp31))) / tmp32;
        }
      }

      if(((((((_mu > 0.0) && (_eta < _h0)) && ((_Delta0) * (_omega) <= 0.0)) || ((fabs(_aux01) < fabs(_aux02)) && ((_aux02) * (_Delta0) >= 0.0))) || (fabs(_aux01) < fabs((0.1) * (_Delta0)))) && (!_useSingleCubicPolynomial)))
      {
        _c = _aux01;

        if(((fabs(_c) < fabs(_aux02)) && ((_aux02) * (_Delta0) >= 0.0)))
        {
          _c = _aux02;
        }

        if((fabs(_c) < fabs((0.1) * (_Delta0))))
        {
          _c = (0.1) * (_Delta0);
        }

        tmp33 = _h0;
        if (tmp33 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y0d * mu + y1d * eta) / h0");}
        _theta0 = ((_y0d) * (_mu) + (_y1d) * (_eta)) / tmp33;

        if((fabs(_theta0 - _c) < 1e-06))
        {
          _c = (0.999999) * (_theta0);
        }

        tmp34 = _theta0 - _c;
        if (tmp34 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 * (Delta0 - c) / (theta0 - c)");}
        _rho = ((3.0) * (_Delta0 - _c)) / tmp34;

        _mu_tilde = (_rho) * (_mu);

        _eta_tilde = (_rho) * (_eta);

        _xi1 = _x0 + _mu_tilde;

        _xi2 = _x1 - _eta_tilde;

        tmp35 = _mu_tilde;
        tmp36 = fmax((tmp35 * tmp35),1e-13);
        if (tmp36 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y0d - c) / max(mu_tilde ^ 2.0, 1e-13)");}
        _a1 = (_y0d - _c) / tmp36;

        tmp37 = _eta_tilde;
        tmp38 = fmax((tmp37 * tmp37),1e-13);
        if (tmp38 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1d - c) / max(eta_tilde ^ 2.0, 1e-13)");}
        _a2 = (_y1d - _c) / tmp38;

        tmp39 = 3.0;
        if (tmp39 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "a1 / 3.0");}
        tmp40 = _x0 - _xi1;
        _const12 = _y0 - (((_a1) / tmp39) * ((tmp40 * tmp40 * tmp40))) - ((_c) * (_x0));

        tmp41 = 3.0;
        if (tmp41 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "a2 / 3.0");}
        tmp42 = _x1 - _xi2;
        _const3 = _y1 - (((_a2) / tmp41) * ((tmp42 * tmp42 * tmp42))) - ((_c) * (_x1));

        if((_x < _xi1))
        {
          tmp43 = 3.0;
          if (tmp43 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "a1 / 3.0");}
          tmp44 = _x - _xi1;
          _y = ((_a1) / tmp43) * ((tmp44 * tmp44 * tmp44)) + (_c) * (_x) + _const12;
        }
        else
        {
          if((_x < _xi2))
          {
            _y = (_c) * (_x) + _const12;
          }
          else
          {
            tmp45 = 3.0;
            if (tmp45 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "a2 / 3.0");}
            tmp46 = _x - _xi2;
            _y = ((_a2) / tmp45) * ((tmp46 * tmp46 * tmp46)) + (_c) * (_x) + _const3;
          }
        }
      }
      else
      {
        tmp47 = _h0;
        if (tmp47 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x0) / h0");}
        tmp48 = _h0;
        if (tmp48 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x0) * (y0d + y1d - 2.0 * Delta0) / h0");}
        _y = _y0 + (_x - _x0) * (_y0d + ((_x - _x0) / tmp47) * ((-((2.0) * (_y0d))) - _y1d + (3.0) * (_Delta0) + ((_x - _x0) * (_y0d + _y1d - ((2.0) * (_Delta0)))) / tmp48));

        tmp49 = 2.0;
        if (tmp49 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x0 + x1) / 2.0");}
        _aux01 = (_x0 + _x1) / tmp49;

        tmp50 = _aux01 - _x0;
        tmp51 = _h0;
        tmp52 = (tmp51 * tmp51);
        if (tmp52 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 * (y0d + y1d - 2.0 * Delta0) * (aux01 - x0) ^ 2.0 / h0 ^ 2.0");}
        tmp53 = _h0;
        if (tmp53 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.0 * ((-2.0 * y0d) - y1d + 3.0 * Delta0) * (aux01 - x0) / h0");}
        _c = (((3.0) * (_y0d + _y1d - ((2.0) * (_Delta0)))) * ((tmp50 * tmp50))) / tmp52 + (((2.0) * ((-((2.0) * (_y0d))) - _y1d + (3.0) * (_Delta0))) * (_aux01 - _x0)) / tmp53 + _y0d;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_c) { *out_c = _c; }
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regFun3(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x0, modelica_metatype _x1, modelica_metatype _y0, modelica_metatype _y1, modelica_metatype _y0d, modelica_metatype _y1d, modelica_metatype *out_c)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _c;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x0);
  tmp3 = mmc_unbox_real(_x1);
  tmp4 = mmc_unbox_real(_y0);
  tmp5 = mmc_unbox_real(_y1);
  tmp6 = mmc_unbox_real(_y0d);
  tmp7 = mmc_unbox_real(_y1d);
  _y = omc_Modelica_Fluid_Utilities_regFun3(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, &_c);
  out_y = mmc_mk_rcon(_y);
  if (out_c) { *out_c = mmc_mk_rcon(_c); }
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_real _x, modelica_real _delta)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp1 = (_x) * (_x) + (_delta) * (_delta);
  tmp2 = 0.25;
  if(tmp1 < 0.0 && tmp2 != 0.0)
  {
    tmp4 = modf(tmp2, &tmp5);
    
    if(tmp4 > 0.5)
    {
      tmp4 -= 1.0;
      tmp5 += 1.0;
    }
    else if(tmp4 < -0.5)
    {
      tmp4 += 1.0;
      tmp5 -= 1.0;
    }
    
    if(fabs(tmp4) < 1e-10)
      tmp3 = pow(tmp1, tmp5);
    else
    {
      tmp7 = modf(1.0/tmp2, &tmp6);
      if(tmp7 > 0.5)
      {
        tmp7 -= 1.0;
        tmp6 += 1.0;
      }
      else if(tmp7 < -0.5)
      {
        tmp7 += 1.0;
        tmp6 -= 1.0;
      }
      if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
      {
        tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
      }
    }
  }
  else
  {
    tmp3 = pow(tmp1, tmp2);
  }
  if(isnan(tmp3) || isinf(tmp3))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
  }tmp8 = tmp3;
  if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / (x * x + delta * delta) ^ 0.25");}
  _y = (_x) / tmp8;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regRoot(threadData_t *threadData, modelica_metatype _x, modelica_metatype _delta)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_delta);
  _y = omc_Modelica_Fluid_Utilities_regRoot(threadData, tmp1, tmp2);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare2(threadData_t *threadData, modelica_real _x, modelica_real _x_small, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp5 = (modelica_boolean)(_x >= _x_small);
  if(tmp5)
  {
    tmp1 = _x;
    tmp6 = (_k1) * ((tmp1 * tmp1));
  }
  else
  {
    tmp3 = (modelica_boolean)(_x <= (-_x_small));
    if(tmp3)
    {
      tmp2 = _x;
      tmp4 = (-((_k2) * ((tmp2 * tmp2))));
    }
    else
    {
      tmp4 = ((_k1 >= _k2)?omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData, _x, _x_small, _k1, _k2, _use_yd0, _yd0):(-omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData, (-_x), _x_small, _k2, _k1, _use_yd0, _yd0)));
    }
    tmp6 = tmp4;
  }
  _y = tmp6;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare2(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x_small, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x_small);
  tmp3 = mmc_unbox_real(_k1);
  tmp4 = mmc_unbox_real(_k2);
  tmp5 = mmc_unbox_integer(_use_yd0);
  tmp6 = mmc_unbox_real(_yd0);
  _y = omc_Modelica_Fluid_Utilities_regSquare2(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Modelica_Fluid_Utilities_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
modelica_real omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _k1, modelica_real _k2, modelica_boolean _use_yd0, modelica_real _yd0)
{
  modelica_real _y;
  modelica_real _x2;
  modelica_real _y1;
  modelica_real _y2;
  modelica_real _y1d;
  modelica_real _y2d;
  modelica_real _w;
  modelica_real _w1;
  modelica_real _w2;
  modelica_real _y0d;
  modelica_real _ww;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _x2 has no default value.
  // _y1 has no default value.
  // _y2 has no default value.
  // _y1d has no default value.
  // _y2d has no default value.
  // _w has no default value.
  // _w1 has no default value.
  // _w2 has no default value.
  // _y0d has no default value.
  // _ww has no default value.
  _x2 = (-_x1);

  if((_x <= _x2))
  {
    tmp1 = _x;
    _y = (-((_k2) * ((tmp1 * tmp1))));
  }
  else
  {
    tmp2 = _x1;
    _y1 = (_k1) * ((tmp2 * tmp2));

    tmp3 = _x2;
    _y2 = (-((_k2) * ((tmp3 * tmp3))));

    _y1d = ((_k1) * (2.0)) * (_x1);

    _y2d = (-(((_k2) * (2.0)) * (_x2)));

    if(_use_yd0)
    {
      _y0d = _yd0;
    }
    else
    {
      tmp4 = _x1;
      if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x2 / x1");}
      _w = (_x2) / tmp4;

      tmp5 = _w;
      if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(3.0 * y2 - x2 * y2d) / w");}
      tmp6 = ((2.0) * (_x1)) * (1.0 - _w);
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "((3.0 * y2 - x2 * y2d) / w - (3.0 * y1 - x1 * y1d) * w) / (2.0 * x1 * (1.0 - w))");}
      _y0d = (((3.0) * (_y2) - ((_x2) * (_y2d))) / tmp5 - (((3.0) * (_y1) - ((_x1) * (_y1d))) * (_w))) / tmp6;
    }

    _w1 = ((2.23606797749979) * (_k1)) * (_x1);

    _w2 = ((2.23606797749979) * (_k2)) * (fabs(_x2));

    _ww = (0.9) * (((_w1 < _w2)?_w1:_w2));

    if((_ww < _y0d))
    {
      _y0d = _ww;
    }

    _y = ((_x >= 0.0)?omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, _x, _x1, _y1, _y1d, _y0d):omc_Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero(threadData, _x, _x2, _y2, _y2d, _y0d));
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _k1, modelica_metatype _k2, modelica_metatype _use_yd0, modelica_metatype _yd0)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_integer tmp5;
  modelica_real tmp6;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_k1);
  tmp4 = mmc_unbox_real(_k2);
  tmp5 = mmc_unbox_integer(_use_yd0);
  tmp6 = mmc_unbox_real(_yd0);
  _y = omc_Modelica_Fluid_Utilities_regSquare2_regSquare2__utility(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLExport
real_array omc_Modelica_Math_Matrices_solve(threadData_t *threadData, real_array _A, real_array _b)
{
  real_array _x;
  modelica_integer tmp1;
  modelica_integer _info;
  static int tmp2 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_b, ((modelica_integer) 1));
  alloc_real_array(&(_x), 1, (_index_t)tmp1); // _x has no default value.
  // _info has no default value.
  real_array_copy_data(omc_Modelica_Math_Matrices_LAPACK_dgesv__vec(threadData, _A, _b ,&_info), _x);

  {
    if(!(_info == ((modelica_integer) 0)))
    {
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Math/package.mo",906,5,908,51,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT41));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _x;
}
modelica_metatype boxptr_Modelica_Math_Matrices_solve(threadData_t *threadData, modelica_metatype _A, modelica_metatype _b)
{
  real_array _x;
  modelica_integer tmp1;
  modelica_metatype out_x;
  _x = omc_Modelica_Math_Matrices_solve(threadData, *((base_array_t*)_A), *((base_array_t*)_b));
  out_x = mmc_mk_modelica_array(_x);
  return out_x;
}

real_array omc_Modelica_Math_Matrices_LAPACK_dgesv__vec(threadData_t *threadData, real_array _A, real_array _b, modelica_integer *out_info)
{
  /* extFunCallF77: varDecs */
  real_array _x_ext;
  int _info_ext = 0;
  /* extFunCallF77: biVarDecs */
  modelica_integer _n;
  modelica_integer _n_ext;
  modelica_integer tmp1;
  modelica_integer _nrhs;
  modelica_integer _nrhs_ext;
  real_array _Awork;
  real_array _Awork_ext;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer _lda;
  modelica_integer _lda_ext;
  modelica_integer tmp4;
  modelica_integer _ldb;
  modelica_integer _ldb_ext;
  modelica_integer tmp5;
  integer_array _ipiv;
  integer_array _ipiv_ext;
  modelica_integer tmp6;
  /* extFunCallF77: args */
  real_array _x;
  modelica_integer tmp7;
  modelica_integer _info;
  tmp1 = size_of_dimension_base_array(_A, ((modelica_integer) 1));
  _n = tmp1;
  _nrhs = ((modelica_integer) 1);
  tmp2 = size_of_dimension_base_array(_A, ((modelica_integer) 1));
  tmp3 = size_of_dimension_base_array(_A, ((modelica_integer) 1));
  alloc_real_array(&_Awork, 2, (_index_t)tmp2, (_index_t)tmp3);
  copy_real_array(_A, &_Awork);
  convert_alloc_real_array_to_f77(&_Awork, &_Awork_ext);
  tmp4 = size_of_dimension_base_array(_A, ((modelica_integer) 1));
  _lda = modelica_integer_max((modelica_integer)(((modelica_integer) 1)),(modelica_integer)(tmp4));
  tmp5 = size_of_dimension_base_array(_b, ((modelica_integer) 1));
  _ldb = modelica_integer_max((modelica_integer)(((modelica_integer) 1)),(modelica_integer)(tmp5));
  tmp6 = size_of_dimension_base_array(_A, ((modelica_integer) 1));
  alloc_integer_array(&_ipiv, 1, (_index_t)tmp6);
  convert_alloc_integer_array_to_f77(&_ipiv, &_ipiv_ext);
  tmp7 = size_of_dimension_base_array(_A, ((modelica_integer) 1));
  alloc_real_array(&(_x), 1, (_index_t)tmp7);
  real_array_copy_data(_b, _x);
  
  // _info has no default value.
  /* extFunCallF77: biVarDecs */
  /* extFunCallF77: args */
  /* extFunCallF77: end args */
  convert_alloc_real_array_to_f77(&_x, &_x_ext);
  /* extFunCallF77: extReturn */
  /* extFunCallF77: CALL */
  dgesv_((int*) &_n, (int*) &_nrhs, data_of_real_f77_array(_Awork_ext), (int*) &_lda, data_of_integer_f77_array(_ipiv_ext), data_of_real_f77_array(_x_ext), (int*) &_ldb, (int*) &_info_ext);
  /* extFunCallF77: copy args */
  convert_alloc_real_array_from_f77(&_x_ext, &_x);
  _info = (modelica_integer)_info_ext;
  /* extFunCallF77: copy return */
  if (out_info) { *out_info = _info; }
  return _x;
}
modelica_metatype boxptr_Modelica_Math_Matrices_LAPACK_dgesv__vec(threadData_t *threadData, modelica_metatype _A, modelica_metatype _b, modelica_metatype *out_info)
{
  modelica_integer _info;
  real_array _x;
  modelica_integer tmp1;
  modelica_metatype out_x;
  _x = omc_Modelica_Math_Matrices_LAPACK_dgesv__vec(threadData, *((base_array_t*)_A), *((base_array_t*)_b), &_info);
  out_x = mmc_mk_modelica_array(_x);
  if (out_info) { *out_info = mmc_mk_icon(_info); }
  return out_x;
}

Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_pi, modelica_real omc_tau, modelica_real omc_g, modelica_real omc_gpi, modelica_real omc_gpipi, modelica_real omc_gtau, modelica_real omc_gtautau, modelica_real omc_gtaupi)
{
  Modelica_Media_Common_GibbsDerivs tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._R_s = omc_R_s;
  tmp1._pi = omc_pi;
  tmp1._tau = omc_tau;
  tmp1._g = omc_g;
  tmp1._gpi = omc_gpi;
  tmp1._gpipi = omc_gpipi;
  tmp1._gtau = omc_gtau;
  tmp1._gtautau = omc_gtautau;
  tmp1._gtaupi = omc_gtaupi;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_GibbsDerivs(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _pi, modelica_metatype _tau, modelica_metatype _g, modelica_metatype _gpi, modelica_metatype _gpipi, modelica_metatype _gtau, modelica_metatype _gtautau, modelica_metatype _gtaupi)
{
  return mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, _p, _T, _R_s, _pi, _tau, _g, _gpi, _gpipi, _gtau, _gtautau, _gtaupi);
}

Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData, modelica_real omc_d, modelica_real omc_T, modelica_real omc_R_s, modelica_real omc_delta, modelica_real omc_tau, modelica_real omc_f, modelica_real omc_fdelta, modelica_real omc_fdeltadelta, modelica_real omc_ftau, modelica_real omc_ftautau, modelica_real omc_fdeltatau)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  tmp1._d = omc_d;
  tmp1._T = omc_T;
  tmp1._R_s = omc_R_s;
  tmp1._delta = omc_delta;
  tmp1._tau = omc_tau;
  tmp1._f = omc_f;
  tmp1._fdelta = omc_fdelta;
  tmp1._fdeltadelta = omc_fdeltadelta;
  tmp1._ftau = omc_ftau;
  tmp1._ftautau = omc_ftautau;
  tmp1._fdeltatau = omc_fdeltatau;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_HelmholtzDerivs(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T, modelica_metatype _R_s, modelica_metatype _delta, modelica_metatype _tau, modelica_metatype _f, modelica_metatype _fdelta, modelica_metatype _fdeltadelta, modelica_metatype _ftau, modelica_metatype _ftautau, modelica_metatype _fdeltatau)
{
  return mmc_mk_box12(3, &Modelica_Media_Common_HelmholtzDerivs__desc, _d, _T, _R_s, _delta, _tau, _f, _fdelta, _fdeltadelta, _ftau, _ftautau, _fdeltatau);
}

DLLExport
Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f)
{
  Modelica_Media_Common_NewtonDerivatives__pT _nderivs;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_NewtonDerivatives__pT_construct(threadData, _nderivs); // _nderivs has no default value.
  _nderivs._p = ((((_f._d) * (_f._R_s)) * (_f._T)) * (_f._delta)) * (_f._fdelta);

  _nderivs._pd = (((_f._R_s) * (_f._T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));
  _return: OMC_LABEL_UNUSED
  return _nderivs;
}
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__pT(threadData_t *threadData, modelica_metatype _f)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  Modelica_Media_Common_NewtonDerivatives__pT _nderivs;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype out_nderivs;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._d = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._R_s = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._delta = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._tau = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._f = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._fdelta = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 9)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp1._fdeltadelta = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._ftau = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._ftautau = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._fdeltatau = tmp23;
  _nderivs = omc_Modelica_Media_Common_Helmholtz__pT(threadData, tmp1);
  tmpMeta24 = mmc_mk_rcon(_nderivs._p);
  tmpMeta25 = mmc_mk_rcon(_nderivs._pd);
  out_nderivs = mmc_mk_box3(3, &Modelica_Media_Common_NewtonDerivatives__pT__desc, tmpMeta24, tmpMeta25);
  return out_nderivs;
}

DLLExport
Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f)
{
  Modelica_Media_Common_NewtonDerivatives__ph _nderivs;
  modelica_real _cv;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_NewtonDerivatives__ph_construct(threadData, _nderivs); // _nderivs has no default value.
  // _cv has no default value.
  _cv = (-((_f._R_s) * (((_f._tau) * (_f._tau)) * (_f._ftautau))));

  _nderivs._p = ((((_f._d) * (_f._R_s)) * (_f._T)) * (_f._delta)) * (_f._fdelta);

  _nderivs._h = ((_f._R_s) * (_f._T)) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta));

  _nderivs._pd = (((_f._R_s) * (_f._T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));

  _nderivs._pt = (((_f._R_s) * (_f._d)) * (_f._delta)) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));

  tmp1 = _f._d;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "nderivs.pt / f.d");}
  _nderivs._ht = _cv + (_nderivs._pt) / tmp1;

  tmp2 = _f._d;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "f.T * nderivs.pt / f.d");}
  tmp3 = _f._d;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(nderivs.pd - f.T * nderivs.pt / f.d) / f.d");}
  _nderivs._hd = (_nderivs._pd - (((_f._T) * (_nderivs._pt)) / tmp2)) / tmp3;
  _return: OMC_LABEL_UNUSED
  return _nderivs;
}
modelica_metatype boxptr_Modelica_Media_Common_Helmholtz__ph(threadData_t *threadData, modelica_metatype _f)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  Modelica_Media_Common_NewtonDerivatives__ph _nderivs;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype out_nderivs;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._d = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._R_s = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._delta = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._tau = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._f = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._fdelta = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 9)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp1._fdeltadelta = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._ftau = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._ftautau = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._fdeltatau = tmp23;
  _nderivs = omc_Modelica_Media_Common_Helmholtz__ph(threadData, tmp1);
  tmpMeta24 = mmc_mk_rcon(_nderivs._p);
  tmpMeta25 = mmc_mk_rcon(_nderivs._h);
  tmpMeta26 = mmc_mk_rcon(_nderivs._pd);
  tmpMeta27 = mmc_mk_rcon(_nderivs._pt);
  tmpMeta28 = mmc_mk_rcon(_nderivs._hd);
  tmpMeta29 = mmc_mk_rcon(_nderivs._ht);
  out_nderivs = mmc_mk_box7(3, &Modelica_Media_Common_NewtonDerivatives__ph__desc, tmpMeta24, tmpMeta25, tmpMeta26, tmpMeta27, tmpMeta28, tmpMeta29);
  return out_nderivs;
}

Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData, modelica_integer omc_phase, modelica_integer omc_region, modelica_real omc_p, modelica_real omc_T, modelica_real omc_h, modelica_real omc_R_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_rho, modelica_real omc_s, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp, modelica_real omc_x, modelica_real omc_dpT)
{
  Modelica_Media_Common_IF97BaseTwoPhase tmp1;
  tmp1._phase = omc_phase;
  tmp1._region = omc_region;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  tmp1._h = omc_h;
  tmp1._R_s = omc_R_s;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._rho = omc_rho;
  tmp1._s = omc_s;
  tmp1._pt = omc_pt;
  tmp1._pd = omc_pd;
  tmp1._vt = omc_vt;
  tmp1._vp = omc_vp;
  tmp1._x = omc_x;
  tmp1._dpT = omc_dpT;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_IF97BaseTwoPhase(threadData_t *threadData, modelica_metatype _phase, modelica_metatype _region, modelica_metatype _p, modelica_metatype _T, modelica_metatype _h, modelica_metatype _R_s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _rho, modelica_metatype _s, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp, modelica_metatype _x, modelica_metatype _dpT)
{
  return mmc_mk_box17(3, &Modelica_Media_Common_IF97BaseTwoPhase__desc, _phase, _region, _p, _T, _h, _R_s, _cp, _cv, _rho, _s, _pt, _pd, _vt, _vp, _x, _dpT);
}

Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData, modelica_boolean omc_region3boundary, modelica_real omc_R_s, modelica_real omc_T, modelica_real omc_d, modelica_real omc_h, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_dpT, modelica_real omc_pt, modelica_real omc_pd, modelica_real omc_vt, modelica_real omc_vp)
{
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp1;
  tmp1._region3boundary = omc_region3boundary;
  tmp1._R_s = omc_R_s;
  tmp1._T = omc_T;
  tmp1._d = omc_d;
  tmp1._h = omc_h;
  tmp1._s = omc_s;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._dpT = omc_dpT;
  tmp1._pt = omc_pt;
  tmp1._pd = omc_pd;
  tmp1._vt = omc_vt;
  tmp1._vp = omc_vp;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_IF97PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _region3boundary, modelica_metatype _R_s, modelica_metatype _T, modelica_metatype _d, modelica_metatype _h, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _dpT, modelica_metatype _pt, modelica_metatype _pd, modelica_metatype _vt, modelica_metatype _vp)
{
  return mmc_mk_box14(3, &Modelica_Media_Common_IF97PhaseBoundaryProperties__desc, _region3boundary, _R_s, _T, _d, _h, _s, _cp, _cv, _dpT, _pt, _pd, _vt, _vp);
}

Modelica_Media_Common_NewtonDerivatives__pT omc_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData, modelica_real omc_p, modelica_real omc_pd)
{
  Modelica_Media_Common_NewtonDerivatives__pT tmp1;
  tmp1._p = omc_p;
  tmp1._pd = omc_pd;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _pd)
{
  return mmc_mk_box3(3, &Modelica_Media_Common_NewtonDerivatives__pT__desc, _p, _pd);
}

Modelica_Media_Common_NewtonDerivatives__ph omc_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData, modelica_real omc_p, modelica_real omc_h, modelica_real omc_pd, modelica_real omc_pt, modelica_real omc_hd, modelica_real omc_ht)
{
  Modelica_Media_Common_NewtonDerivatives__ph tmp1;
  tmp1._p = omc_p;
  tmp1._h = omc_h;
  tmp1._pd = omc_pd;
  tmp1._pt = omc_pt;
  tmp1._hd = omc_hd;
  tmp1._ht = omc_ht;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_NewtonDerivatives__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _pd, modelica_metatype _pt, modelica_metatype _hd, modelica_metatype _ht)
{
  return mmc_mk_box7(3, &Modelica_Media_Common_NewtonDerivatives__ph__desc, _p, _h, _pd, _pt, _hd, _ht);
}

Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData, modelica_real omc_d, modelica_real omc_h, modelica_real omc_u, modelica_real omc_s, modelica_real omc_cp, modelica_real omc_cv, modelica_real omc_pt, modelica_real omc_pd)
{
  Modelica_Media_Common_PhaseBoundaryProperties tmp1;
  tmp1._d = omc_d;
  tmp1._h = omc_h;
  tmp1._u = omc_u;
  tmp1._s = omc_s;
  tmp1._cp = omc_cp;
  tmp1._cv = omc_cv;
  tmp1._pt = omc_pt;
  tmp1._pd = omc_pd;
  return tmp1;
}

modelica_metatype boxptr_Modelica_Media_Common_PhaseBoundaryProperties(threadData_t *threadData, modelica_metatype _d, modelica_metatype _h, modelica_metatype _u, modelica_metatype _s, modelica_metatype _cp, modelica_metatype _cv, modelica_metatype _pt, modelica_metatype _pd)
{
  return mmc_mk_box9(3, &Modelica_Media_Common_PhaseBoundaryProperties__desc, _d, _h, _u, _s, _cp, _cv, _pt, _pd);
}

DLLExport
modelica_real omc_Modelica_Media_Common_cv2Phase(threadData_t *threadData, Modelica_Media_Common_PhaseBoundaryProperties _liq, Modelica_Media_Common_PhaseBoundaryProperties _vap, modelica_real _x, modelica_real _T, modelica_real _p)
{
  modelica_real _cv;
  modelica_real _dpT;
  modelica_real _dxv;
  modelica_real _dvTl;
  modelica_real _dvTv;
  modelica_real _duTl;
  modelica_real _duTv;
  modelica_real _dxt;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cv has no default value.
  // _dpT has no default value.
  // _dxv has no default value.
  // _dvTl has no default value.
  // _dvTv has no default value.
  // _duTl has no default value.
  // _duTv has no default value.
  // _dxt has no default value.
  tmp2 = (modelica_boolean)(_liq._d != _vap._d);
  if(tmp2)
  {
    tmp1 = _liq._d - _vap._d;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "liq.d * vap.d / (liq.d - vap.d)");}
    tmp3 = ((_liq._d) * (_vap._d)) / tmp1;
  }
  else
  {
    tmp3 = 0.0;
  }
  _dxv = tmp3;

  _dpT = (_vap._s - _liq._s) * (_dxv);

  tmp4 = _liq._pd;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(liq.pt - dpT) / liq.pd");}
  tmp5 = _liq._d;
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(liq.pt - dpT) / liq.pd / liq.d");}
  tmp6 = _liq._d;
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(liq.pt - dpT) / liq.pd / liq.d / liq.d");}
  _dvTl = (((_liq._pt - _dpT) / tmp4) / tmp5) / tmp6;

  tmp7 = _vap._pd;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(vap.pt - dpT) / vap.pd");}
  tmp8 = _vap._d;
  if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(vap.pt - dpT) / vap.pd / vap.d");}
  tmp9 = _vap._d;
  if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(vap.pt - dpT) / vap.pd / vap.d / vap.d");}
  _dvTv = (((_vap._pt - _dpT) / tmp7) / tmp8) / tmp9;

  _dxt = (-((_dxv) * (_dvTl + (_x) * (_dvTv - _dvTl))));

  _duTl = _liq._cv + ((_T) * (_liq._pt) - _p) * (_dvTl);

  _duTv = _vap._cv + ((_T) * (_vap._pt) - _p) * (_dvTv);

  _cv = _duTl + (_x) * (_duTv - _duTl) + (_dxt) * (_vap._u - _liq._u);
  _return: OMC_LABEL_UNUSED
  return _cv;
}
modelica_metatype boxptr_Modelica_Media_Common_cv2Phase(threadData_t *threadData, modelica_metatype _liq, modelica_metatype _vap, modelica_metatype _x, modelica_metatype _T, modelica_metatype _p)
{
  Modelica_Media_Common_PhaseBoundaryProperties tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  Modelica_Media_Common_PhaseBoundaryProperties tmp18;
  modelica_metatype tmpMeta19;
  modelica_real tmp20;
  modelica_metatype tmpMeta21;
  modelica_real tmp22;
  modelica_metatype tmpMeta23;
  modelica_real tmp24;
  modelica_metatype tmpMeta25;
  modelica_real tmp26;
  modelica_metatype tmpMeta27;
  modelica_real tmp28;
  modelica_metatype tmpMeta29;
  modelica_real tmp30;
  modelica_metatype tmpMeta31;
  modelica_real tmp32;
  modelica_metatype tmpMeta33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real _cv;
  modelica_metatype out_cv;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._d = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._h = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._u = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._s = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._cp = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._cv = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._pt = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_liq), 9)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp1._pd = tmp17;tmpMeta19 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 2)));
  tmp20 = mmc_unbox_real(tmpMeta19);
  tmp18._d = tmp20;
  tmpMeta21 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 3)));
  tmp22 = mmc_unbox_real(tmpMeta21);
  tmp18._h = tmp22;
  tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 4)));
  tmp24 = mmc_unbox_real(tmpMeta23);
  tmp18._u = tmp24;
  tmpMeta25 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 5)));
  tmp26 = mmc_unbox_real(tmpMeta25);
  tmp18._s = tmp26;
  tmpMeta27 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 6)));
  tmp28 = mmc_unbox_real(tmpMeta27);
  tmp18._cp = tmp28;
  tmpMeta29 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 7)));
  tmp30 = mmc_unbox_real(tmpMeta29);
  tmp18._cv = tmp30;
  tmpMeta31 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 8)));
  tmp32 = mmc_unbox_real(tmpMeta31);
  tmp18._pt = tmp32;
  tmpMeta33 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_vap), 9)));
  tmp34 = mmc_unbox_real(tmpMeta33);
  tmp18._pd = tmp34;tmp35 = mmc_unbox_real(_x);
  tmp36 = mmc_unbox_real(_T);
  tmp37 = mmc_unbox_real(_p);
  _cv = omc_Modelica_Media_Common_cv2Phase(threadData, tmp1, tmp18, tmp35, tmp36, tmp37);
  out_cv = mmc_mk_rcon(_cv);
  return out_cv;
}

DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_GibbsDerivs _g)
{
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_real _vt;
  modelica_real _vp;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _sat); // _sat has no default value.
  // _vt has no default value.
  // _vp has no default value.
  tmp1 = (((_g._R_s) * (_g._T)) * (_g._pi)) * (_g._gpi);
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / (g.R_s * g.T * g.pi * g.gpi)");}
  _sat._d = (_g._p) / tmp1;

  _sat._h = (((_g._R_s) * (_g._T)) * (_g._tau)) * (_g._gtau);

  _sat._u = ((_g._T) * (_g._R_s)) * ((_g._tau) * (_g._gtau) - ((_g._pi) * (_g._gpi)));

  _sat._s = (_g._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

  _sat._cp = (-((((_g._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

  tmp2 = _g._gpipi;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
  _sat._cv = (_g._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp2);

  tmp3 = _g._p;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s / g.p");}
  _vt = ((_g._R_s) / tmp3) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

  tmp4 = (_g._p) * (_g._p);
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T / (g.p * g.p)");}
  _vp = (((((_g._R_s) * (_g._T)) / tmp4) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

  tmp5 = _g._T;
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
  tmp6 = (_g._gpipi) * (_g._pi);
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
  _sat._pt = (-((((_g._p) / tmp5) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp6));

  tmp7 = _g._gpipi;
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
  _sat._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp7));
  _return: OMC_LABEL_UNUSED
  return _sat;
}
modelica_metatype boxptr_Modelica_Media_Common_gibbsToBoundaryProps(threadData_t *threadData, modelica_metatype _g)
{
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype out_sat;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._R_s = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._pi = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._tau = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._g = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._gpi = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 9)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp1._gpipi = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._gtau = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._gtautau = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_g), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._gtaupi = tmp23;
  _sat = omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData, tmp1);
  tmpMeta24 = mmc_mk_rcon(_sat._d);
  tmpMeta25 = mmc_mk_rcon(_sat._h);
  tmpMeta26 = mmc_mk_rcon(_sat._u);
  tmpMeta27 = mmc_mk_rcon(_sat._s);
  tmpMeta28 = mmc_mk_rcon(_sat._cp);
  tmpMeta29 = mmc_mk_rcon(_sat._cv);
  tmpMeta30 = mmc_mk_rcon(_sat._pt);
  tmpMeta31 = mmc_mk_rcon(_sat._pd);
  out_sat = mmc_mk_box9(3, &Modelica_Media_Common_PhaseBoundaryProperties__desc, tmpMeta24, tmpMeta25, tmpMeta26, tmpMeta27, tmpMeta28, tmpMeta29, tmpMeta30, tmpMeta31);
  return out_sat;
}

DLLExport
Modelica_Media_Common_PhaseBoundaryProperties omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, Modelica_Media_Common_HelmholtzDerivs _f)
{
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_real _p;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _sat); // _sat has no default value.
  // _p has no default value.
  _p = ((((_f._R_s) * (_f._d)) * (_f._T)) * (_f._delta)) * (_f._fdelta);

  _sat._d = _f._d;

  _sat._h = ((_f._R_s) * (_f._T)) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta));

  _sat._s = (_f._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

  _sat._u = (((_f._R_s) * (_f._T)) * (_f._tau)) * (_f._ftau);

  tmp1 = (_f._delta) * (_f._fdelta) - (((_f._delta) * (_f._tau)) * (_f._fdeltatau));
  tmp2 = ((2.0) * (_f._delta)) * (_f._fdelta) + ((_f._delta) * (_f._delta)) * (_f._fdeltadelta);
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(f.delta * f.fdelta - f.delta * f.tau * f.fdeltatau) ^ 2.0 / (2.0 * f.delta * f.fdelta + f.delta * f.delta * f.fdeltadelta)");}
  _sat._cp = (_f._R_s) * ((-(((_f._tau) * (_f._tau)) * (_f._ftautau))) + ((tmp1 * tmp1)) / tmp2);

  _sat._cv = (_f._R_s) * ((-(((_f._tau) * (_f._tau)) * (_f._ftautau))));

  _sat._pt = (((_f._R_s) * (_f._d)) * (_f._delta)) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));

  _sat._pd = (((_f._R_s) * (_f._T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));
  _return: OMC_LABEL_UNUSED
  return _sat;
}
modelica_metatype boxptr_Modelica_Media_Common_helmholtzToBoundaryProps(threadData_t *threadData, modelica_metatype _f)
{
  Modelica_Media_Common_HelmholtzDerivs tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  Modelica_Media_Common_PhaseBoundaryProperties _sat;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype out_sat;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._d = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._R_s = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 5)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp1._delta = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 6)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp1._tau = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 7)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp1._f = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 8)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp1._fdelta = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 9)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp1._fdeltadelta = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 10)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp1._ftau = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 11)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp1._ftautau = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_f), 12)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp1._fdeltatau = tmp23;
  _sat = omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData, tmp1);
  tmpMeta24 = mmc_mk_rcon(_sat._d);
  tmpMeta25 = mmc_mk_rcon(_sat._h);
  tmpMeta26 = mmc_mk_rcon(_sat._u);
  tmpMeta27 = mmc_mk_rcon(_sat._s);
  tmpMeta28 = mmc_mk_rcon(_sat._cp);
  tmpMeta29 = mmc_mk_rcon(_sat._cv);
  tmpMeta30 = mmc_mk_rcon(_sat._pt);
  tmpMeta31 = mmc_mk_rcon(_sat._pd);
  out_sat = mmc_mk_box9(3, &Modelica_Media_Common_PhaseBoundaryProperties__desc, tmpMeta24, tmpMeta25, tmpMeta26, tmpMeta27, tmpMeta28, tmpMeta29, tmpMeta30, tmpMeta31);
  return out_sat;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_h__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_h__props__pT(threadData, _p, _T, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, _p, _T, _region));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_h__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_region);
  _h = omc_Modelica_Media_Water_IF97__Utilities_h__pT(threadData, tmp1, tmp2, tmp3);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_h__props__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, Modelica_Media_Common_IF97BaseTwoPhase _aux)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = _aux._h;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_h__props__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _aux)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_real tmp35;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 2)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp3._phase = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 3)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp3._region = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 4)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp3._p = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 5)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp3._T = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 6)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp3._h = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 7)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp3._R_s = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 8)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp3._cp = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 9)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp3._cv = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 10)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp3._rho = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 11)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp3._s = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 12)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp3._pt = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 13)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp3._pd = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 14)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp3._vt = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 15)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp3._vp = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 16)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp3._x = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 17)));
  tmp35 = mmc_unbox_real(tmpMeta34);
  tmp3._dpT = tmp35;
  _h = omc_Modelica_Media_Water_IF97__Utilities_h__props__pT(threadData, tmp1, tmp2, tmp3);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hl__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_hv__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rho__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region)
{
  modelica_real _rho;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rho has no default value.
  _rho = omc_Modelica_Media_Water_IF97__Utilities_rho__props__pT(threadData, _p, _T, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, _p, _T, _region));
  _return: OMC_LABEL_UNUSED
  return _rho;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rho__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_real _rho;
  modelica_metatype out_rho;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_region);
  _rho = omc_Modelica_Media_Water_IF97__Utilities_rho__pT(threadData, tmp1, tmp2, tmp3);
  out_rho = mmc_mk_rcon(_rho);
  return out_rho;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData_t *threadData, modelica_real _p, modelica_real _h, Modelica_Media_Common_IF97BaseTwoPhase _properties, modelica_real _p_der, modelica_real _h_der)
{
  modelica_real _rho_der;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rho_der has no default value.
  if((_properties._region == ((modelica_integer) 4)))
  {
    tmp1 = _properties._dpT;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * properties.cv / properties.dpT");}
    tmp2 = (_properties._dpT) * (_properties._T);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * (properties.rho * properties.cv / properties.dpT + 1.0) / (properties.dpT * properties.T)");}
    tmp3 = (_properties._dpT) * (_properties._T);
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * properties.rho / (properties.dpT * properties.T)");}
    _rho_der = (((_properties._rho) * (((_properties._rho) * (_properties._cv)) / tmp1 + 1.0)) / tmp2) * (_p_der) + ((-(((_properties._rho) * (_properties._rho)) / tmp3))) * (_h_der);
  }
  else
  {
    if((_properties._region == ((modelica_integer) 3)))
    {
      tmp4 = (((_properties._rho) * (_properties._rho)) * (_properties._pd)) * (_properties._cv) + ((_properties._T) * (_properties._pt)) * (_properties._pt);
      if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * (properties.cv * properties.rho + properties.pt) / (properties.rho * properties.rho * properties.pd * properties.cv + properties.T * properties.pt * properties.pt)");}
      tmp5 = (((_properties._rho) * (_properties._rho)) * (_properties._pd)) * (_properties._cv) + ((_properties._T) * (_properties._pt)) * (_properties._pt);
      if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * properties.rho * properties.pt / (properties.rho * properties.rho * properties.pd * properties.cv + properties.T * properties.pt * properties.pt)");}
      _rho_der = (((_properties._rho) * ((_properties._cv) * (_properties._rho) + _properties._pt)) / tmp4) * (_p_der) + ((-((((_properties._rho) * (_properties._rho)) * (_properties._pt)) / tmp5))) * (_h_der);
    }
    else
    {
      tmp6 = _properties._rho;
      if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.vt / properties.rho");}
      tmp7 = _properties._cp;
      if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * properties.rho * (properties.vp * properties.cp - properties.vt / properties.rho + properties.T * properties.vt * properties.vt) / properties.cp");}
      tmp8 = _properties._cp;
      if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "properties.rho * properties.rho * properties.vt / properties.cp");}
      _rho_der = ((-((((_properties._rho) * (_properties._rho)) * ((_properties._vp) * (_properties._cp) - ((_properties._vt) / tmp6) + ((_properties._T) * (_properties._vt)) * (_properties._vt))) / tmp7))) * (_p_der) + ((-((((_properties._rho) * (_properties._rho)) * (_properties._vt)) / tmp8))) * (_h_der);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _rho_der;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _properties, modelica_metatype _p_der, modelica_metatype _h_der)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real _rho_der;
  modelica_metatype out_rho_der;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 2)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp3._phase = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 3)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp3._region = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 4)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp3._p = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 5)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp3._T = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 6)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp3._h = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 7)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp3._R_s = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 8)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp3._cp = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 9)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp3._cv = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 10)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp3._rho = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 11)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp3._s = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 12)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp3._pt = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 13)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp3._pd = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 14)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp3._vt = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 15)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp3._vp = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 16)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp3._x = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_properties), 17)));
  tmp35 = mmc_unbox_real(tmpMeta34);
  tmp3._dpT = tmp35;tmp36 = mmc_unbox_real(_p_der);
  tmp37 = mmc_unbox_real(_h_der);
  _rho_der = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, tmp1, tmp2, tmp3, tmp36, tmp37);
  out_rho_der = mmc_mk_rcon(_rho_der);
  return out_rho_der;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rho__props__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, Modelica_Media_Common_IF97BaseTwoPhase _aux)
{
  modelica_real _rho;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rho has no default value.
  _rho = _aux._rho;
  _return: OMC_LABEL_UNUSED
  return _rho;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rho__props__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _aux)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_real tmp9;
  modelica_metatype tmpMeta10;
  modelica_real tmp11;
  modelica_metatype tmpMeta12;
  modelica_real tmp13;
  modelica_metatype tmpMeta14;
  modelica_real tmp15;
  modelica_metatype tmpMeta16;
  modelica_real tmp17;
  modelica_metatype tmpMeta18;
  modelica_real tmp19;
  modelica_metatype tmpMeta20;
  modelica_real tmp21;
  modelica_metatype tmpMeta22;
  modelica_real tmp23;
  modelica_metatype tmpMeta24;
  modelica_real tmp25;
  modelica_metatype tmpMeta26;
  modelica_real tmp27;
  modelica_metatype tmpMeta28;
  modelica_real tmp29;
  modelica_metatype tmpMeta30;
  modelica_real tmp31;
  modelica_metatype tmpMeta32;
  modelica_real tmp33;
  modelica_metatype tmpMeta34;
  modelica_real tmp35;
  modelica_real _rho;
  modelica_metatype out_rho;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 2)));
  tmp5 = mmc_unbox_integer(tmpMeta4);
  tmp3._phase = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 3)));
  tmp7 = mmc_unbox_integer(tmpMeta6);
  tmp3._region = tmp7;
  tmpMeta8 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 4)));
  tmp9 = mmc_unbox_real(tmpMeta8);
  tmp3._p = tmp9;
  tmpMeta10 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 5)));
  tmp11 = mmc_unbox_real(tmpMeta10);
  tmp3._T = tmp11;
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 6)));
  tmp13 = mmc_unbox_real(tmpMeta12);
  tmp3._h = tmp13;
  tmpMeta14 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 7)));
  tmp15 = mmc_unbox_real(tmpMeta14);
  tmp3._R_s = tmp15;
  tmpMeta16 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 8)));
  tmp17 = mmc_unbox_real(tmpMeta16);
  tmp3._cp = tmp17;
  tmpMeta18 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 9)));
  tmp19 = mmc_unbox_real(tmpMeta18);
  tmp3._cv = tmp19;
  tmpMeta20 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 10)));
  tmp21 = mmc_unbox_real(tmpMeta20);
  tmp3._rho = tmp21;
  tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 11)));
  tmp23 = mmc_unbox_real(tmpMeta22);
  tmp3._s = tmp23;
  tmpMeta24 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 12)));
  tmp25 = mmc_unbox_real(tmpMeta24);
  tmp3._pt = tmp25;
  tmpMeta26 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 13)));
  tmp27 = mmc_unbox_real(tmpMeta26);
  tmp3._pd = tmp27;
  tmpMeta28 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 14)));
  tmp29 = mmc_unbox_real(tmpMeta28);
  tmp3._vt = tmp29;
  tmpMeta30 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 15)));
  tmp31 = mmc_unbox_real(tmpMeta30);
  tmp3._vp = tmp31;
  tmpMeta32 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 16)));
  tmp33 = mmc_unbox_real(tmpMeta32);
  tmp3._x = tmp33;
  tmpMeta34 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_aux), 17)));
  tmp35 = mmc_unbox_real(tmpMeta34);
  tmp3._dpT = tmp35;
  _rho = omc_Modelica_Media_Water_IF97__Utilities_rho__props__pT(threadData, tmp1, tmp2, tmp3);
  out_rho = mmc_mk_rcon(_rho);
  return out_rho;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _region)
{
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_integer _error;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  Modelica_Media_Common_GibbsDerivs tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  Modelica_Media_Common_HelmholtzDerivs tmp19;
  Modelica_Media_Common_GibbsDerivs tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_metatype tmpMeta29;
  modelica_string tmp30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_string tmp33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  static int tmp36 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97BaseTwoPhase_construct(threadData, _aux); // _aux has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  // _error has no default value.
  _aux._phase = ((modelica_integer) 1);

  _aux._region = ((_region == ((modelica_integer) 0))?omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData, _p, _T, ((modelica_integer) 0)):_region);

  _aux._R_s = 461.526;

  _aux._p = _p;

  _aux._T = _T;

  _aux._vt = 0.0;

  _aux._vp = 0.0;

  if((_aux._region == ((modelica_integer) 1)))
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _p, _T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    _aux._h = (((_aux._R_s) * (_aux._T)) * (_g._tau)) * (_g._gtau);

    _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    tmp2 = (((_aux._R_s) * (_T)) * (_g._pi)) * (_g._gpi);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (aux.R_s * T * g.pi * g.gpi)");}
    _aux._rho = (_p) / tmp2;

    tmp3 = _p;
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s / p");}
    _aux._vt = ((_aux._R_s) / tmp3) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

    tmp4 = (_p) * (_p);
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s * T / (p * p)");}
    _aux._vp = (((((_aux._R_s) * (_T)) / tmp4) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

    _aux._cp = (-((((_aux._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

    tmp5 = _g._gpipi;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
    _aux._cv = (_aux._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp5);

    _aux._x = 0.0;

    tmp6 = _aux._vp;
    if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.vt / aux.vp");}
    _aux._dpT = (-((_aux._vt) / tmp6));

    tmp7 = _g._T;
    if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
    tmp8 = (_g._gpipi) * (_g._pi);
    if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
    _aux._pt = (-((((_g._p) / tmp7) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp8));

    tmp9 = _g._gpipi;
    if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
    _aux._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp9));
  }
  else
  {
    if((_aux._region == ((modelica_integer) 2)))
    {
      tmp10 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _p, _T, 1);
      Modelica_Media_Common_GibbsDerivs_copy(tmp10, _g);;

      _aux._h = (((_aux._R_s) * (_aux._T)) * (_g._tau)) * (_g._gtau);

      _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

      tmp11 = (((_aux._R_s) * (_T)) * (_g._pi)) * (_g._gpi);
      if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (aux.R_s * T * g.pi * g.gpi)");}
      _aux._rho = (_p) / tmp11;

      tmp12 = _p;
      if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s / p");}
      _aux._vt = ((_aux._R_s) / tmp12) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

      tmp13 = (_p) * (_p);
      if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s * T / (p * p)");}
      _aux._vp = (((((_aux._R_s) * (_T)) / tmp13) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

      tmp14 = _g._T;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
      tmp15 = (_g._gpipi) * (_g._pi);
      if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
      _aux._pt = (-((((_g._p) / tmp14) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp15));

      tmp16 = _g._gpipi;
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
      _aux._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp16));

      _aux._cp = (-((((_aux._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

      tmp17 = _g._gpipi;
      if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
      _aux._cv = (_aux._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp17);

      _aux._x = 1.0;

      tmp18 = _aux._vp;
      if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.vt / aux.vp");}
      _aux._dpT = (-((_aux._vt) / tmp18));
    }
    else
    {
      if((_aux._region == ((modelica_integer) 3)))
      {
        _aux._rho = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData, _p, _T, 1e-07 ,&_error);

        tmp19 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _aux._rho, _T);
        Modelica_Media_Common_HelmholtzDerivs_copy(tmp19, _f);;

        _aux._h = ((_aux._R_s) * (_T)) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta));

        _aux._s = (_aux._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

        _aux._pd = (((_aux._R_s) * (_T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));

        _aux._pt = (((_aux._R_s) * (_aux._rho)) * (_f._delta)) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));

        _aux._cv = (_aux._R_s) * ((-(((_f._tau) * (_f._tau)) * (_f._ftautau))));

        _aux._x = 0.0;

        _aux._dpT = _aux._pt;
      }
      else
      {
        if((_aux._region == ((modelica_integer) 5)))
        {
          tmp20 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, _p, _T);
          Modelica_Media_Common_GibbsDerivs_copy(tmp20, _g);;

          _aux._h = (((_aux._R_s) * (_aux._T)) * (_g._tau)) * (_g._gtau);

          _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

          tmp21 = (((_aux._R_s) * (_T)) * (_g._pi)) * (_g._gpi);
          if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (aux.R_s * T * g.pi * g.gpi)");}
          _aux._rho = (_p) / tmp21;

          tmp22 = _p;
          if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s / p");}
          _aux._vt = ((_aux._R_s) / tmp22) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

          tmp23 = (_p) * (_p);
          if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s * T / (p * p)");}
          _aux._vp = (((((_aux._R_s) * (_T)) / tmp23) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

          tmp24 = _g._T;
          if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
          tmp25 = (_g._gpipi) * (_g._pi);
          if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
          _aux._pt = (-((((_g._p) / tmp24) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp25));

          tmp26 = _g._gpipi;
          if (tmp26 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
          _aux._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp26));

          _aux._cp = (-((((_aux._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

          tmp27 = _g._gpipi;
          if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
          _aux._cv = (_aux._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp27);

          _aux._x = 1.0;

          tmp28 = _aux._vp;
          if (tmp28 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.vt / aux.vp");}
          _aux._dpT = (-((_aux._vt) / tmp28));
        }
        else
        {
          {
            if(!0)
            {
              tmpMeta29 = stringAppend(_OMC_LIT44,_OMC_LIT45);
              tmp30 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
              tmpMeta31 = stringAppend(tmpMeta29,tmp30);
              tmpMeta32 = stringAppend(tmpMeta31,_OMC_LIT46);
              tmp33 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
              tmpMeta34 = stringAppend(tmpMeta32,tmp33);
              tmpMeta35 = stringAppend(tmpMeta34,_OMC_LIT47);
              {
                FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",7246,7,7247,58,0};
                omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta35));
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _aux;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype out_aux;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_region);
  _aux = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_icon(_aux._phase);
  tmpMeta5 = mmc_mk_icon(_aux._region);
  tmpMeta6 = mmc_mk_rcon(_aux._p);
  tmpMeta7 = mmc_mk_rcon(_aux._T);
  tmpMeta8 = mmc_mk_rcon(_aux._h);
  tmpMeta9 = mmc_mk_rcon(_aux._R_s);
  tmpMeta10 = mmc_mk_rcon(_aux._cp);
  tmpMeta11 = mmc_mk_rcon(_aux._cv);
  tmpMeta12 = mmc_mk_rcon(_aux._rho);
  tmpMeta13 = mmc_mk_rcon(_aux._s);
  tmpMeta14 = mmc_mk_rcon(_aux._pt);
  tmpMeta15 = mmc_mk_rcon(_aux._pd);
  tmpMeta16 = mmc_mk_rcon(_aux._vt);
  tmpMeta17 = mmc_mk_rcon(_aux._vp);
  tmpMeta18 = mmc_mk_rcon(_aux._x);
  tmpMeta19 = mmc_mk_rcon(_aux._dpT);
  out_aux = mmc_mk_box17(3, &Modelica_Media_Common_IF97BaseTwoPhase__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18, tmpMeta19);
  return out_aux;
}

DLLExport
Modelica_Media_Common_IF97BaseTwoPhase omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _region)
{
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_integer _error;
  modelica_real _h_liq;
  modelica_real _d_liq;
  modelica_real _h_vap;
  modelica_real _d_vap;
  Modelica_Media_Common_PhaseBoundaryProperties _liq;
  Modelica_Media_Common_PhaseBoundaryProperties _vap;
  Modelica_Media_Common_GibbsDerivs _gl;
  Modelica_Media_Common_GibbsDerivs _gv;
  Modelica_Media_Common_HelmholtzDerivs _fl;
  Modelica_Media_Common_HelmholtzDerivs _fv;
  modelica_real _t1;
  modelica_real _t2;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  Modelica_Media_Common_GibbsDerivs tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  Modelica_Media_Common_HelmholtzDerivs tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_boolean tmp22;
  modelica_real tmp23;
  Modelica_Media_Common_GibbsDerivs tmp24;
  Modelica_Media_Common_GibbsDerivs tmp25;
  Modelica_Media_Common_PhaseBoundaryProperties tmp26;
  Modelica_Media_Common_PhaseBoundaryProperties tmp27;
  Modelica_Media_Common_HelmholtzDerivs tmp28;
  Modelica_Media_Common_HelmholtzDerivs tmp29;
  Modelica_Media_Common_PhaseBoundaryProperties tmp30;
  Modelica_Media_Common_PhaseBoundaryProperties tmp31;
  modelica_real tmp32;
  modelica_boolean tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  static int tmp36 = 0;
  Modelica_Media_Common_GibbsDerivs tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_metatype tmpMeta46;
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  modelica_metatype tmpMeta49;
  modelica_string tmp50;
  modelica_metatype tmpMeta51;
  modelica_metatype tmpMeta52;
  static int tmp53 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97BaseTwoPhase_construct(threadData, _aux); // _aux has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  // _error has no default value.
  // _h_liq has no default value.
  // _d_liq has no default value.
  // _h_vap has no default value.
  // _d_vap has no default value.
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _liq); // _liq has no default value.
  Modelica_Media_Common_PhaseBoundaryProperties_construct(threadData, _vap); // _vap has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _gl); // _gl has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _gv); // _gv has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _fl); // _fl has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _fv); // _fv has no default value.
  // _t1 has no default value.
  // _t2 has no default value.
  _aux._region = ((_region == ((modelica_integer) 0))?((_phase == ((modelica_integer) 2))?((modelica_integer) 4):omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData, _p, _h, _phase, ((modelica_integer) 0))):_region);

  _aux._phase = ((_phase != ((modelica_integer) 0))?_phase:((_aux._region == ((modelica_integer) 4))?((modelica_integer) 2):((modelica_integer) 1)));

  _aux._p = fmax(_p,611.657);

  _aux._h = fmax(_h,1000.0);

  _aux._R_s = 461.526;

  _aux._vt = 0.0;

  _aux._vp = 0.0;

  if((_aux._region == ((modelica_integer) 1)))
  {
    _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData, _aux._p, _aux._h);

    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _p, _aux._T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    tmp2 = (((_aux._R_s) * (_aux._T)) * (_g._pi)) * (_g._gpi);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (aux.R_s * aux.T * g.pi * g.gpi)");}
    _aux._rho = (_p) / tmp2;

    tmp3 = _p;
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s / p");}
    _aux._vt = ((_aux._R_s) / tmp3) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

    tmp4 = _g._T;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
    tmp5 = (_g._gpipi) * (_g._pi);
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
    _aux._pt = (-((((_g._p) / tmp4) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp5));

    tmp6 = _g._gpipi;
    if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
    _aux._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp6));

    tmp7 = (_p) * (_p);
    if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s * aux.T / (p * p)");}
    _aux._vp = (((((_aux._R_s) * (_aux._T)) / tmp7) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

    _aux._cp = (-((((_aux._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

    tmp8 = _g._gpipi;
    if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
    _aux._cv = (_aux._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp8);

    _aux._x = 0.0;

    tmp9 = _aux._vp;
    if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.vt / aux.vp");}
    _aux._dpT = (-((_aux._vt) / tmp9));
  }
  else
  {
    if((_aux._region == ((modelica_integer) 2)))
    {
      _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData, _aux._p, _aux._h);

      tmp10 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _p, _aux._T, 1);
      Modelica_Media_Common_GibbsDerivs_copy(tmp10, _g);;

      _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

      tmp11 = (((_aux._R_s) * (_aux._T)) * (_g._pi)) * (_g._gpi);
      if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (aux.R_s * aux.T * g.pi * g.gpi)");}
      _aux._rho = (_p) / tmp11;

      tmp12 = _p;
      if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s / p");}
      _aux._vt = ((_aux._R_s) / tmp12) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

      tmp13 = (_p) * (_p);
      if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s * aux.T / (p * p)");}
      _aux._vp = (((((_aux._R_s) * (_aux._T)) / tmp13) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

      tmp14 = _g._T;
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
      tmp15 = (_g._gpipi) * (_g._pi);
      if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
      _aux._pt = (-((((_g._p) / tmp14) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp15));

      tmp16 = _g._gpipi;
      if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
      _aux._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp16));

      _aux._cp = (-((((_aux._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

      tmp17 = _g._gpipi;
      if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
      _aux._cv = (_aux._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp17);

      _aux._x = 1.0;

      tmp18 = _aux._vp;
      if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.vt / aux.vp");}
      _aux._dpT = (-((_aux._vt) / tmp18));
    }
    else
    {
      if((_aux._region == ((modelica_integer) 3)))
      {
        _aux._rho = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData, _aux._p, _aux._h, 1e-07, 1e-06 ,&_aux._T ,&_error);

        tmp19 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _aux._rho, _aux._T);
        Modelica_Media_Common_HelmholtzDerivs_copy(tmp19, _f);;

        _aux._h = ((_aux._R_s) * (_aux._T)) * ((_f._tau) * (_f._ftau) + (_f._delta) * (_f._fdelta));

        _aux._s = (_aux._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

        _aux._pd = (((_aux._R_s) * (_aux._T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));

        _aux._pt = (((_aux._R_s) * (_aux._rho)) * (_f._delta)) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));

        _aux._cv = fabs((_aux._R_s) * ((-(((_f._tau) * (_f._tau)) * (_f._ftautau)))));

        tmp20 = ((_aux._rho) * (_aux._rho)) * (_aux._pd);
        if (tmp20 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(aux.rho * aux.rho * aux.pd * aux.cv + aux.T * aux.pt * aux.pt) / (aux.rho * aux.rho * aux.pd)");}
        _aux._cp = ((((_aux._rho) * (_aux._rho)) * (_aux._pd)) * (_aux._cv) + ((_aux._T) * (_aux._pt)) * (_aux._pt)) / tmp20;

        _aux._x = 0.0;

        _aux._dpT = _aux._pt;
      }
      else
      {
        if((_aux._region == ((modelica_integer) 4)))
        {
          _h_liq = omc_Modelica_Media_Water_IF97__Utilities_hl__p(threadData, _p);

          _h_vap = omc_Modelica_Media_Water_IF97__Utilities_hv__p(threadData, _p);

          tmp22 = (modelica_boolean)(_h_vap != _h_liq);
          if(tmp22)
          {
            tmp21 = _h_vap - _h_liq;
            if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(h - h_liq) / (h_vap - h_liq)");}
            tmp23 = (_h - _h_liq) / tmp21;
          }
          else
          {
            tmp23 = 1.0;
          }
          _aux._x = tmp23;

          if((_p < 16529200.0))
          {
            _t1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData, _aux._p, _h_liq);

            _t2 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData, _aux._p, _h_vap);

            tmp24 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _aux._p, _t1);
            Modelica_Media_Common_GibbsDerivs_copy(tmp24, _gl);;

            tmp25 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _aux._p, _t2, 1);
            Modelica_Media_Common_GibbsDerivs_copy(tmp25, _gv);;

            tmp26 = omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData, _gl);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp26, _liq);;

            tmp27 = omc_Modelica_Media_Common_gibbsToBoundaryProps(threadData, _gv);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp27, _vap);;

            _aux._T = _t1 + (_aux._x) * (_t2 - _t1);
          }
          else
          {
            _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _aux._p);

            _d_liq = omc_Modelica_Media_Water_IF97__Utilities_rhol__T(threadData, _aux._T);

            _d_vap = omc_Modelica_Media_Water_IF97__Utilities_rhov__T(threadData, _aux._T);

            tmp28 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d_liq, _aux._T);
            Modelica_Media_Common_HelmholtzDerivs_copy(tmp28, _fl);;

            tmp29 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d_vap, _aux._T);
            Modelica_Media_Common_HelmholtzDerivs_copy(tmp29, _fv);;

            tmp30 = omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData, _fl);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp30, _liq);;

            tmp31 = omc_Modelica_Media_Common_helmholtzToBoundaryProps(threadData, _fv);
            Modelica_Media_Common_PhaseBoundaryProperties_copy(tmp31, _vap);;
          }

          tmp33 = (modelica_boolean)(_liq._d != _vap._d);
          if(tmp33)
          {
            tmp32 = _liq._d - _vap._d;
            if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(vap.s - liq.s) * liq.d * vap.d / (liq.d - vap.d)");}
            tmp34 = (((_vap._s - _liq._s) * (_liq._d)) * (_vap._d)) / tmp32;
          }
          else
          {
            tmp34 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, _aux._T);
          }
          _aux._dpT = tmp34;

          _aux._s = _liq._s + (_aux._x) * (_vap._s - _liq._s);

          tmp35 = _vap._d + (_aux._x) * (_liq._d - _vap._d);
          if (tmp35 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "liq.d * vap.d / (vap.d + aux.x * (liq.d - vap.d))");}
          _aux._rho = ((_liq._d) * (_vap._d)) / tmp35;

          _aux._cv = omc_Modelica_Media_Common_cv2Phase(threadData, _liq, _vap, _aux._x, _aux._T, _p);

          _aux._cp = _liq._cp + (_aux._x) * (_vap._cp - _liq._cp);

          _aux._pt = _liq._pt + (_aux._x) * (_vap._pt - _liq._pt);

          _aux._pd = _liq._pd + (_aux._x) * (_vap._pd - _liq._pd);
        }
        else
        {
          if((_aux._region == ((modelica_integer) 5)))
          {
            _aux._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData, _aux._p, _aux._h, 1e-07 ,&_error);

            {
              if(!(_error == ((modelica_integer) 0)))
              {
                {
                  FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",6423,7,6423,71,0};
                  omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT49));
                }
              }
            }

            tmp37 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, _aux._p, _aux._T);
            Modelica_Media_Common_GibbsDerivs_copy(tmp37, _g);;

            _aux._s = (_aux._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

            tmp38 = (((_aux._R_s) * (_aux._T)) * (_g._pi)) * (_g._gpi);
            if (tmp38 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (aux.R_s * aux.T * g.pi * g.gpi)");}
            _aux._rho = (_p) / tmp38;

            tmp39 = _p;
            if (tmp39 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s / p");}
            _aux._vt = ((_aux._R_s) / tmp39) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

            tmp40 = (_p) * (_p);
            if (tmp40 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.R_s * aux.T / (p * p)");}
            _aux._vp = (((((_aux._R_s) * (_aux._T)) / tmp40) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

            tmp41 = _g._T;
            if (tmp41 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T");}
            tmp42 = (_g._gpipi) * (_g._pi);
            if (tmp42 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.p / g.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
            _aux._pt = (-((((_g._p) / tmp41) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp42));

            tmp43 = _g._gpipi;
            if (tmp43 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "g.R_s * g.T * g.gpi * g.gpi / g.gpipi");}
            _aux._pd = (-(((((_g._R_s) * (_g._T)) * (_g._gpi)) * (_g._gpi)) / tmp43));

            _aux._cp = (-((((_aux._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

            tmp44 = _g._gpipi;
            if (tmp44 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(g.gpi - g.tau * g.gtaupi) * (g.gpi - g.tau * g.gtaupi) / g.gpipi");}
            _aux._cv = (_aux._R_s) * ((-(((_g._tau) * (_g._tau)) * (_g._gtautau))) + ((_g._gpi - ((_g._tau) * (_g._gtaupi))) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp44);

            tmp45 = _aux._vp;
            if (tmp45 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "aux.vt / aux.vp");}
            _aux._dpT = (-((_aux._vt) / tmp45));
          }
          else
          {
            {
              if(!0)
              {
                tmpMeta46 = stringAppend(_OMC_LIT44,_OMC_LIT45);
                tmp47 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
                tmpMeta48 = stringAppend(tmpMeta46,tmp47);
                tmpMeta49 = stringAppend(tmpMeta48,_OMC_LIT48);
                tmp50 = modelica_real_to_modelica_string(_h, ((modelica_integer) 6), ((modelica_integer) 0), 1);
                tmpMeta51 = stringAppend(tmpMeta49,tmp50);
                tmpMeta52 = stringAppend(tmpMeta51,_OMC_LIT47);
                {
                  FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",6436,7,6437,58,0};
                  omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta52));
                }
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _aux;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _region)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  Modelica_Media_Common_IF97BaseTwoPhase _aux;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype out_aux;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_region);
  _aux = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, tmp1, tmp2, tmp3, tmp4);
  tmpMeta5 = mmc_mk_icon(_aux._phase);
  tmpMeta6 = mmc_mk_icon(_aux._region);
  tmpMeta7 = mmc_mk_rcon(_aux._p);
  tmpMeta8 = mmc_mk_rcon(_aux._T);
  tmpMeta9 = mmc_mk_rcon(_aux._h);
  tmpMeta10 = mmc_mk_rcon(_aux._R_s);
  tmpMeta11 = mmc_mk_rcon(_aux._cp);
  tmpMeta12 = mmc_mk_rcon(_aux._cv);
  tmpMeta13 = mmc_mk_rcon(_aux._rho);
  tmpMeta14 = mmc_mk_rcon(_aux._s);
  tmpMeta15 = mmc_mk_rcon(_aux._pt);
  tmpMeta16 = mmc_mk_rcon(_aux._pd);
  tmpMeta17 = mmc_mk_rcon(_aux._vt);
  tmpMeta18 = mmc_mk_rcon(_aux._vp);
  tmpMeta19 = mmc_mk_rcon(_aux._x);
  tmpMeta20 = mmc_mk_rcon(_aux._dpT);
  out_aux = mmc_mk_box17(3, &Modelica_Media_Common_IF97BaseTwoPhase__desc, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14, tmpMeta15, tmpMeta16, tmpMeta17, tmpMeta18, tmpMeta19, tmpMeta20);
  return out_aux;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _hstar;
  modelica_real _pstar;
  modelica_real _Tstar;
  modelica_real _eta;
  modelica_real tmp1;
  modelica_real _pi;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_real tmp300;
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_real tmp309;
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_real tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_real tmp321;
  modelica_real tmp322;
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_real tmp333;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_real tmp342;
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_real tmp345;
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_real tmp352;
  modelica_real tmp353;
  modelica_real tmp354;
  modelica_real tmp355;
  modelica_real tmp356;
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_real tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_real tmp365;
  modelica_real tmp366;
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  modelica_real tmp375;
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_real tmp378;
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  modelica_real tmp387;
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_real tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_real tmp399;
  modelica_real tmp400;
  modelica_real tmp401;
  modelica_real tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  modelica_real tmp405;
  modelica_real tmp406;
  modelica_real tmp407;
  modelica_real tmp408;
  modelica_real tmp409;
  modelica_real tmp410;
  modelica_real tmp411;
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_real tmp414;
  modelica_real tmp415;
  modelica_real tmp416;
  modelica_real tmp417;
  modelica_real tmp418;
  modelica_real tmp419;
  modelica_real tmp420;
  modelica_real tmp421;
  modelica_real tmp422;
  modelica_real tmp423;
  modelica_real tmp424;
  modelica_real tmp425;
  modelica_real tmp426;
  modelica_real tmp427;
  modelica_real tmp428;
  modelica_real tmp429;
  modelica_real tmp430;
  modelica_real tmp431;
  modelica_real tmp432;
  modelica_real tmp433;
  modelica_real tmp434;
  modelica_real tmp435;
  modelica_real tmp436;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  real_array_alloc_copy(_OMC_LIT50, _n);
  
  real_array_alloc_copy(_OMC_LIT51, _I);
  
  real_array_alloc_copy(_OMC_LIT52, _J);
  
  _hstar = 2300000.0;
  _pstar = 100000000.0;
  _Tstar = 760.0;
  tmp1 = _hstar;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / hstar");}
  _eta = (_h) / tmp1;
  tmp2 = _pstar;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / pstar");}
  _pi = (_p) / tmp2;
  tmp3 = _pi + 0.24;
  tmp4 = real_array_get(_I, 1, ((modelica_integer) 1));
  if(tmp3 < 0.0 && tmp4 != 0.0)
  {
    tmp6 = modf(tmp4, &tmp7);
    
    if(tmp6 > 0.5)
    {
      tmp6 -= 1.0;
      tmp7 += 1.0;
    }
    else if(tmp6 < -0.5)
    {
      tmp6 += 1.0;
      tmp7 -= 1.0;
    }
    
    if(fabs(tmp6) < 1e-10)
      tmp5 = pow(tmp3, tmp7);
    else
    {
      tmp9 = modf(1.0/tmp4, &tmp8);
      if(tmp9 > 0.5)
      {
        tmp9 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp9 < -0.5)
      {
        tmp9 += 1.0;
        tmp8 -= 1.0;
      }
      if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
      {
        tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
      }
    }
  }
  else
  {
    tmp5 = pow(tmp3, tmp4);
  }
  if(isnan(tmp5) || isinf(tmp5))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
  }tmp10 = _eta - 0.615;
  tmp11 = real_array_get(_J, 1, ((modelica_integer) 1));
  if(tmp10 < 0.0 && tmp11 != 0.0)
  {
    tmp13 = modf(tmp11, &tmp14);
    
    if(tmp13 > 0.5)
    {
      tmp13 -= 1.0;
      tmp14 += 1.0;
    }
    else if(tmp13 < -0.5)
    {
      tmp13 += 1.0;
      tmp14 -= 1.0;
    }
    
    if(fabs(tmp13) < 1e-10)
      tmp12 = pow(tmp10, tmp14);
    else
    {
      tmp16 = modf(1.0/tmp11, &tmp15);
      if(tmp16 > 0.5)
      {
        tmp16 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp16 < -0.5)
      {
        tmp16 += 1.0;
        tmp15 -= 1.0;
      }
      if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
      {
        tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
    }
  }
  else
  {
    tmp12 = pow(tmp10, tmp11);
  }
  if(isnan(tmp12) || isinf(tmp12))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
  }tmp17 = _pi + 0.24;
  tmp18 = real_array_get(_I, 1, ((modelica_integer) 2));
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }tmp24 = _eta - 0.615;
  tmp25 = real_array_get(_J, 1, ((modelica_integer) 2));
  if(tmp24 < 0.0 && tmp25 != 0.0)
  {
    tmp27 = modf(tmp25, &tmp28);
    
    if(tmp27 > 0.5)
    {
      tmp27 -= 1.0;
      tmp28 += 1.0;
    }
    else if(tmp27 < -0.5)
    {
      tmp27 += 1.0;
      tmp28 -= 1.0;
    }
    
    if(fabs(tmp27) < 1e-10)
      tmp26 = pow(tmp24, tmp28);
    else
    {
      tmp30 = modf(1.0/tmp25, &tmp29);
      if(tmp30 > 0.5)
      {
        tmp30 -= 1.0;
        tmp29 += 1.0;
      }
      else if(tmp30 < -0.5)
      {
        tmp30 += 1.0;
        tmp29 -= 1.0;
      }
      if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
      {
        tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
    }
  }
  else
  {
    tmp26 = pow(tmp24, tmp25);
  }
  if(isnan(tmp26) || isinf(tmp26))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
  }tmp31 = _pi + 0.24;
  tmp32 = real_array_get(_I, 1, ((modelica_integer) 3));
  if(tmp31 < 0.0 && tmp32 != 0.0)
  {
    tmp34 = modf(tmp32, &tmp35);
    
    if(tmp34 > 0.5)
    {
      tmp34 -= 1.0;
      tmp35 += 1.0;
    }
    else if(tmp34 < -0.5)
    {
      tmp34 += 1.0;
      tmp35 -= 1.0;
    }
    
    if(fabs(tmp34) < 1e-10)
      tmp33 = pow(tmp31, tmp35);
    else
    {
      tmp37 = modf(1.0/tmp32, &tmp36);
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp36 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp36 -= 1.0;
      }
      if(fabs(tmp37) < 1e-10 && ((unsigned long)tmp36 & 1))
      {
        tmp33 = -pow(-tmp31, tmp34)*pow(tmp31, tmp35);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
      }
    }
  }
  else
  {
    tmp33 = pow(tmp31, tmp32);
  }
  if(isnan(tmp33) || isinf(tmp33))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
  }tmp38 = _eta - 0.615;
  tmp39 = real_array_get(_J, 1, ((modelica_integer) 3));
  if(tmp38 < 0.0 && tmp39 != 0.0)
  {
    tmp41 = modf(tmp39, &tmp42);
    
    if(tmp41 > 0.5)
    {
      tmp41 -= 1.0;
      tmp42 += 1.0;
    }
    else if(tmp41 < -0.5)
    {
      tmp41 += 1.0;
      tmp42 -= 1.0;
    }
    
    if(fabs(tmp41) < 1e-10)
      tmp40 = pow(tmp38, tmp42);
    else
    {
      tmp44 = modf(1.0/tmp39, &tmp43);
      if(tmp44 > 0.5)
      {
        tmp44 -= 1.0;
        tmp43 += 1.0;
      }
      else if(tmp44 < -0.5)
      {
        tmp44 += 1.0;
        tmp43 -= 1.0;
      }
      if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
      {
        tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
      }
    }
  }
  else
  {
    tmp40 = pow(tmp38, tmp39);
  }
  if(isnan(tmp40) || isinf(tmp40))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
  }tmp45 = _pi + 0.24;
  tmp46 = real_array_get(_I, 1, ((modelica_integer) 4));
  if(tmp45 < 0.0 && tmp46 != 0.0)
  {
    tmp48 = modf(tmp46, &tmp49);
    
    if(tmp48 > 0.5)
    {
      tmp48 -= 1.0;
      tmp49 += 1.0;
    }
    else if(tmp48 < -0.5)
    {
      tmp48 += 1.0;
      tmp49 -= 1.0;
    }
    
    if(fabs(tmp48) < 1e-10)
      tmp47 = pow(tmp45, tmp49);
    else
    {
      tmp51 = modf(1.0/tmp46, &tmp50);
      if(tmp51 > 0.5)
      {
        tmp51 -= 1.0;
        tmp50 += 1.0;
      }
      else if(tmp51 < -0.5)
      {
        tmp51 += 1.0;
        tmp50 -= 1.0;
      }
      if(fabs(tmp51) < 1e-10 && ((unsigned long)tmp50 & 1))
      {
        tmp47 = -pow(-tmp45, tmp48)*pow(tmp45, tmp49);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
      }
    }
  }
  else
  {
    tmp47 = pow(tmp45, tmp46);
  }
  if(isnan(tmp47) || isinf(tmp47))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
  }tmp52 = _eta - 0.615;
  tmp53 = real_array_get(_J, 1, ((modelica_integer) 4));
  if(tmp52 < 0.0 && tmp53 != 0.0)
  {
    tmp55 = modf(tmp53, &tmp56);
    
    if(tmp55 > 0.5)
    {
      tmp55 -= 1.0;
      tmp56 += 1.0;
    }
    else if(tmp55 < -0.5)
    {
      tmp55 += 1.0;
      tmp56 -= 1.0;
    }
    
    if(fabs(tmp55) < 1e-10)
      tmp54 = pow(tmp52, tmp56);
    else
    {
      tmp58 = modf(1.0/tmp53, &tmp57);
      if(tmp58 > 0.5)
      {
        tmp58 -= 1.0;
        tmp57 += 1.0;
      }
      else if(tmp58 < -0.5)
      {
        tmp58 += 1.0;
        tmp57 -= 1.0;
      }
      if(fabs(tmp58) < 1e-10 && ((unsigned long)tmp57 & 1))
      {
        tmp54 = -pow(-tmp52, tmp55)*pow(tmp52, tmp56);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
      }
    }
  }
  else
  {
    tmp54 = pow(tmp52, tmp53);
  }
  if(isnan(tmp54) || isinf(tmp54))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
  }tmp59 = _pi + 0.24;
  tmp60 = real_array_get(_I, 1, ((modelica_integer) 5));
  if(tmp59 < 0.0 && tmp60 != 0.0)
  {
    tmp62 = modf(tmp60, &tmp63);
    
    if(tmp62 > 0.5)
    {
      tmp62 -= 1.0;
      tmp63 += 1.0;
    }
    else if(tmp62 < -0.5)
    {
      tmp62 += 1.0;
      tmp63 -= 1.0;
    }
    
    if(fabs(tmp62) < 1e-10)
      tmp61 = pow(tmp59, tmp63);
    else
    {
      tmp65 = modf(1.0/tmp60, &tmp64);
      if(tmp65 > 0.5)
      {
        tmp65 -= 1.0;
        tmp64 += 1.0;
      }
      else if(tmp65 < -0.5)
      {
        tmp65 += 1.0;
        tmp64 -= 1.0;
      }
      if(fabs(tmp65) < 1e-10 && ((unsigned long)tmp64 & 1))
      {
        tmp61 = -pow(-tmp59, tmp62)*pow(tmp59, tmp63);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
      }
    }
  }
  else
  {
    tmp61 = pow(tmp59, tmp60);
  }
  if(isnan(tmp61) || isinf(tmp61))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
  }tmp66 = _eta - 0.615;
  tmp67 = real_array_get(_J, 1, ((modelica_integer) 5));
  if(tmp66 < 0.0 && tmp67 != 0.0)
  {
    tmp69 = modf(tmp67, &tmp70);
    
    if(tmp69 > 0.5)
    {
      tmp69 -= 1.0;
      tmp70 += 1.0;
    }
    else if(tmp69 < -0.5)
    {
      tmp69 += 1.0;
      tmp70 -= 1.0;
    }
    
    if(fabs(tmp69) < 1e-10)
      tmp68 = pow(tmp66, tmp70);
    else
    {
      tmp72 = modf(1.0/tmp67, &tmp71);
      if(tmp72 > 0.5)
      {
        tmp72 -= 1.0;
        tmp71 += 1.0;
      }
      else if(tmp72 < -0.5)
      {
        tmp72 += 1.0;
        tmp71 -= 1.0;
      }
      if(fabs(tmp72) < 1e-10 && ((unsigned long)tmp71 & 1))
      {
        tmp68 = -pow(-tmp66, tmp69)*pow(tmp66, tmp70);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
      }
    }
  }
  else
  {
    tmp68 = pow(tmp66, tmp67);
  }
  if(isnan(tmp68) || isinf(tmp68))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
  }tmp73 = _pi + 0.24;
  tmp74 = real_array_get(_I, 1, ((modelica_integer) 6));
  if(tmp73 < 0.0 && tmp74 != 0.0)
  {
    tmp76 = modf(tmp74, &tmp77);
    
    if(tmp76 > 0.5)
    {
      tmp76 -= 1.0;
      tmp77 += 1.0;
    }
    else if(tmp76 < -0.5)
    {
      tmp76 += 1.0;
      tmp77 -= 1.0;
    }
    
    if(fabs(tmp76) < 1e-10)
      tmp75 = pow(tmp73, tmp77);
    else
    {
      tmp79 = modf(1.0/tmp74, &tmp78);
      if(tmp79 > 0.5)
      {
        tmp79 -= 1.0;
        tmp78 += 1.0;
      }
      else if(tmp79 < -0.5)
      {
        tmp79 += 1.0;
        tmp78 -= 1.0;
      }
      if(fabs(tmp79) < 1e-10 && ((unsigned long)tmp78 & 1))
      {
        tmp75 = -pow(-tmp73, tmp76)*pow(tmp73, tmp77);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
      }
    }
  }
  else
  {
    tmp75 = pow(tmp73, tmp74);
  }
  if(isnan(tmp75) || isinf(tmp75))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
  }tmp80 = _eta - 0.615;
  tmp81 = real_array_get(_J, 1, ((modelica_integer) 6));
  if(tmp80 < 0.0 && tmp81 != 0.0)
  {
    tmp83 = modf(tmp81, &tmp84);
    
    if(tmp83 > 0.5)
    {
      tmp83 -= 1.0;
      tmp84 += 1.0;
    }
    else if(tmp83 < -0.5)
    {
      tmp83 += 1.0;
      tmp84 -= 1.0;
    }
    
    if(fabs(tmp83) < 1e-10)
      tmp82 = pow(tmp80, tmp84);
    else
    {
      tmp86 = modf(1.0/tmp81, &tmp85);
      if(tmp86 > 0.5)
      {
        tmp86 -= 1.0;
        tmp85 += 1.0;
      }
      else if(tmp86 < -0.5)
      {
        tmp86 += 1.0;
        tmp85 -= 1.0;
      }
      if(fabs(tmp86) < 1e-10 && ((unsigned long)tmp85 & 1))
      {
        tmp82 = -pow(-tmp80, tmp83)*pow(tmp80, tmp84);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
      }
    }
  }
  else
  {
    tmp82 = pow(tmp80, tmp81);
  }
  if(isnan(tmp82) || isinf(tmp82))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
  }tmp87 = _pi + 0.24;
  tmp88 = real_array_get(_I, 1, ((modelica_integer) 7));
  if(tmp87 < 0.0 && tmp88 != 0.0)
  {
    tmp90 = modf(tmp88, &tmp91);
    
    if(tmp90 > 0.5)
    {
      tmp90 -= 1.0;
      tmp91 += 1.0;
    }
    else if(tmp90 < -0.5)
    {
      tmp90 += 1.0;
      tmp91 -= 1.0;
    }
    
    if(fabs(tmp90) < 1e-10)
      tmp89 = pow(tmp87, tmp91);
    else
    {
      tmp93 = modf(1.0/tmp88, &tmp92);
      if(tmp93 > 0.5)
      {
        tmp93 -= 1.0;
        tmp92 += 1.0;
      }
      else if(tmp93 < -0.5)
      {
        tmp93 += 1.0;
        tmp92 -= 1.0;
      }
      if(fabs(tmp93) < 1e-10 && ((unsigned long)tmp92 & 1))
      {
        tmp89 = -pow(-tmp87, tmp90)*pow(tmp87, tmp91);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
      }
    }
  }
  else
  {
    tmp89 = pow(tmp87, tmp88);
  }
  if(isnan(tmp89) || isinf(tmp89))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
  }tmp94 = _eta - 0.615;
  tmp95 = real_array_get(_J, 1, ((modelica_integer) 7));
  if(tmp94 < 0.0 && tmp95 != 0.0)
  {
    tmp97 = modf(tmp95, &tmp98);
    
    if(tmp97 > 0.5)
    {
      tmp97 -= 1.0;
      tmp98 += 1.0;
    }
    else if(tmp97 < -0.5)
    {
      tmp97 += 1.0;
      tmp98 -= 1.0;
    }
    
    if(fabs(tmp97) < 1e-10)
      tmp96 = pow(tmp94, tmp98);
    else
    {
      tmp100 = modf(1.0/tmp95, &tmp99);
      if(tmp100 > 0.5)
      {
        tmp100 -= 1.0;
        tmp99 += 1.0;
      }
      else if(tmp100 < -0.5)
      {
        tmp100 += 1.0;
        tmp99 -= 1.0;
      }
      if(fabs(tmp100) < 1e-10 && ((unsigned long)tmp99 & 1))
      {
        tmp96 = -pow(-tmp94, tmp97)*pow(tmp94, tmp98);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
      }
    }
  }
  else
  {
    tmp96 = pow(tmp94, tmp95);
  }
  if(isnan(tmp96) || isinf(tmp96))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
  }tmp101 = _pi + 0.24;
  tmp102 = real_array_get(_I, 1, ((modelica_integer) 8));
  if(tmp101 < 0.0 && tmp102 != 0.0)
  {
    tmp104 = modf(tmp102, &tmp105);
    
    if(tmp104 > 0.5)
    {
      tmp104 -= 1.0;
      tmp105 += 1.0;
    }
    else if(tmp104 < -0.5)
    {
      tmp104 += 1.0;
      tmp105 -= 1.0;
    }
    
    if(fabs(tmp104) < 1e-10)
      tmp103 = pow(tmp101, tmp105);
    else
    {
      tmp107 = modf(1.0/tmp102, &tmp106);
      if(tmp107 > 0.5)
      {
        tmp107 -= 1.0;
        tmp106 += 1.0;
      }
      else if(tmp107 < -0.5)
      {
        tmp107 += 1.0;
        tmp106 -= 1.0;
      }
      if(fabs(tmp107) < 1e-10 && ((unsigned long)tmp106 & 1))
      {
        tmp103 = -pow(-tmp101, tmp104)*pow(tmp101, tmp105);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
      }
    }
  }
  else
  {
    tmp103 = pow(tmp101, tmp102);
  }
  if(isnan(tmp103) || isinf(tmp103))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
  }tmp108 = _eta - 0.615;
  tmp109 = real_array_get(_J, 1, ((modelica_integer) 8));
  if(tmp108 < 0.0 && tmp109 != 0.0)
  {
    tmp111 = modf(tmp109, &tmp112);
    
    if(tmp111 > 0.5)
    {
      tmp111 -= 1.0;
      tmp112 += 1.0;
    }
    else if(tmp111 < -0.5)
    {
      tmp111 += 1.0;
      tmp112 -= 1.0;
    }
    
    if(fabs(tmp111) < 1e-10)
      tmp110 = pow(tmp108, tmp112);
    else
    {
      tmp114 = modf(1.0/tmp109, &tmp113);
      if(tmp114 > 0.5)
      {
        tmp114 -= 1.0;
        tmp113 += 1.0;
      }
      else if(tmp114 < -0.5)
      {
        tmp114 += 1.0;
        tmp113 -= 1.0;
      }
      if(fabs(tmp114) < 1e-10 && ((unsigned long)tmp113 & 1))
      {
        tmp110 = -pow(-tmp108, tmp111)*pow(tmp108, tmp112);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
      }
    }
  }
  else
  {
    tmp110 = pow(tmp108, tmp109);
  }
  if(isnan(tmp110) || isinf(tmp110))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
  }tmp115 = _pi + 0.24;
  tmp116 = real_array_get(_I, 1, ((modelica_integer) 9));
  if(tmp115 < 0.0 && tmp116 != 0.0)
  {
    tmp118 = modf(tmp116, &tmp119);
    
    if(tmp118 > 0.5)
    {
      tmp118 -= 1.0;
      tmp119 += 1.0;
    }
    else if(tmp118 < -0.5)
    {
      tmp118 += 1.0;
      tmp119 -= 1.0;
    }
    
    if(fabs(tmp118) < 1e-10)
      tmp117 = pow(tmp115, tmp119);
    else
    {
      tmp121 = modf(1.0/tmp116, &tmp120);
      if(tmp121 > 0.5)
      {
        tmp121 -= 1.0;
        tmp120 += 1.0;
      }
      else if(tmp121 < -0.5)
      {
        tmp121 += 1.0;
        tmp120 -= 1.0;
      }
      if(fabs(tmp121) < 1e-10 && ((unsigned long)tmp120 & 1))
      {
        tmp117 = -pow(-tmp115, tmp118)*pow(tmp115, tmp119);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
      }
    }
  }
  else
  {
    tmp117 = pow(tmp115, tmp116);
  }
  if(isnan(tmp117) || isinf(tmp117))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
  }tmp122 = _eta - 0.615;
  tmp123 = real_array_get(_J, 1, ((modelica_integer) 9));
  if(tmp122 < 0.0 && tmp123 != 0.0)
  {
    tmp125 = modf(tmp123, &tmp126);
    
    if(tmp125 > 0.5)
    {
      tmp125 -= 1.0;
      tmp126 += 1.0;
    }
    else if(tmp125 < -0.5)
    {
      tmp125 += 1.0;
      tmp126 -= 1.0;
    }
    
    if(fabs(tmp125) < 1e-10)
      tmp124 = pow(tmp122, tmp126);
    else
    {
      tmp128 = modf(1.0/tmp123, &tmp127);
      if(tmp128 > 0.5)
      {
        tmp128 -= 1.0;
        tmp127 += 1.0;
      }
      else if(tmp128 < -0.5)
      {
        tmp128 += 1.0;
        tmp127 -= 1.0;
      }
      if(fabs(tmp128) < 1e-10 && ((unsigned long)tmp127 & 1))
      {
        tmp124 = -pow(-tmp122, tmp125)*pow(tmp122, tmp126);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
      }
    }
  }
  else
  {
    tmp124 = pow(tmp122, tmp123);
  }
  if(isnan(tmp124) || isinf(tmp124))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
  }tmp129 = _pi + 0.24;
  tmp130 = real_array_get(_I, 1, ((modelica_integer) 10));
  if(tmp129 < 0.0 && tmp130 != 0.0)
  {
    tmp132 = modf(tmp130, &tmp133);
    
    if(tmp132 > 0.5)
    {
      tmp132 -= 1.0;
      tmp133 += 1.0;
    }
    else if(tmp132 < -0.5)
    {
      tmp132 += 1.0;
      tmp133 -= 1.0;
    }
    
    if(fabs(tmp132) < 1e-10)
      tmp131 = pow(tmp129, tmp133);
    else
    {
      tmp135 = modf(1.0/tmp130, &tmp134);
      if(tmp135 > 0.5)
      {
        tmp135 -= 1.0;
        tmp134 += 1.0;
      }
      else if(tmp135 < -0.5)
      {
        tmp135 += 1.0;
        tmp134 -= 1.0;
      }
      if(fabs(tmp135) < 1e-10 && ((unsigned long)tmp134 & 1))
      {
        tmp131 = -pow(-tmp129, tmp132)*pow(tmp129, tmp133);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
      }
    }
  }
  else
  {
    tmp131 = pow(tmp129, tmp130);
  }
  if(isnan(tmp131) || isinf(tmp131))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
  }tmp136 = _eta - 0.615;
  tmp137 = real_array_get(_J, 1, ((modelica_integer) 10));
  if(tmp136 < 0.0 && tmp137 != 0.0)
  {
    tmp139 = modf(tmp137, &tmp140);
    
    if(tmp139 > 0.5)
    {
      tmp139 -= 1.0;
      tmp140 += 1.0;
    }
    else if(tmp139 < -0.5)
    {
      tmp139 += 1.0;
      tmp140 -= 1.0;
    }
    
    if(fabs(tmp139) < 1e-10)
      tmp138 = pow(tmp136, tmp140);
    else
    {
      tmp142 = modf(1.0/tmp137, &tmp141);
      if(tmp142 > 0.5)
      {
        tmp142 -= 1.0;
        tmp141 += 1.0;
      }
      else if(tmp142 < -0.5)
      {
        tmp142 += 1.0;
        tmp141 -= 1.0;
      }
      if(fabs(tmp142) < 1e-10 && ((unsigned long)tmp141 & 1))
      {
        tmp138 = -pow(-tmp136, tmp139)*pow(tmp136, tmp140);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
      }
    }
  }
  else
  {
    tmp138 = pow(tmp136, tmp137);
  }
  if(isnan(tmp138) || isinf(tmp138))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
  }tmp143 = _pi + 0.24;
  tmp144 = real_array_get(_I, 1, ((modelica_integer) 11));
  if(tmp143 < 0.0 && tmp144 != 0.0)
  {
    tmp146 = modf(tmp144, &tmp147);
    
    if(tmp146 > 0.5)
    {
      tmp146 -= 1.0;
      tmp147 += 1.0;
    }
    else if(tmp146 < -0.5)
    {
      tmp146 += 1.0;
      tmp147 -= 1.0;
    }
    
    if(fabs(tmp146) < 1e-10)
      tmp145 = pow(tmp143, tmp147);
    else
    {
      tmp149 = modf(1.0/tmp144, &tmp148);
      if(tmp149 > 0.5)
      {
        tmp149 -= 1.0;
        tmp148 += 1.0;
      }
      else if(tmp149 < -0.5)
      {
        tmp149 += 1.0;
        tmp148 -= 1.0;
      }
      if(fabs(tmp149) < 1e-10 && ((unsigned long)tmp148 & 1))
      {
        tmp145 = -pow(-tmp143, tmp146)*pow(tmp143, tmp147);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
      }
    }
  }
  else
  {
    tmp145 = pow(tmp143, tmp144);
  }
  if(isnan(tmp145) || isinf(tmp145))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
  }tmp150 = _eta - 0.615;
  tmp151 = real_array_get(_J, 1, ((modelica_integer) 11));
  if(tmp150 < 0.0 && tmp151 != 0.0)
  {
    tmp153 = modf(tmp151, &tmp154);
    
    if(tmp153 > 0.5)
    {
      tmp153 -= 1.0;
      tmp154 += 1.0;
    }
    else if(tmp153 < -0.5)
    {
      tmp153 += 1.0;
      tmp154 -= 1.0;
    }
    
    if(fabs(tmp153) < 1e-10)
      tmp152 = pow(tmp150, tmp154);
    else
    {
      tmp156 = modf(1.0/tmp151, &tmp155);
      if(tmp156 > 0.5)
      {
        tmp156 -= 1.0;
        tmp155 += 1.0;
      }
      else if(tmp156 < -0.5)
      {
        tmp156 += 1.0;
        tmp155 -= 1.0;
      }
      if(fabs(tmp156) < 1e-10 && ((unsigned long)tmp155 & 1))
      {
        tmp152 = -pow(-tmp150, tmp153)*pow(tmp150, tmp154);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
      }
    }
  }
  else
  {
    tmp152 = pow(tmp150, tmp151);
  }
  if(isnan(tmp152) || isinf(tmp152))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
  }tmp157 = _pi + 0.24;
  tmp158 = real_array_get(_I, 1, ((modelica_integer) 12));
  if(tmp157 < 0.0 && tmp158 != 0.0)
  {
    tmp160 = modf(tmp158, &tmp161);
    
    if(tmp160 > 0.5)
    {
      tmp160 -= 1.0;
      tmp161 += 1.0;
    }
    else if(tmp160 < -0.5)
    {
      tmp160 += 1.0;
      tmp161 -= 1.0;
    }
    
    if(fabs(tmp160) < 1e-10)
      tmp159 = pow(tmp157, tmp161);
    else
    {
      tmp163 = modf(1.0/tmp158, &tmp162);
      if(tmp163 > 0.5)
      {
        tmp163 -= 1.0;
        tmp162 += 1.0;
      }
      else if(tmp163 < -0.5)
      {
        tmp163 += 1.0;
        tmp162 -= 1.0;
      }
      if(fabs(tmp163) < 1e-10 && ((unsigned long)tmp162 & 1))
      {
        tmp159 = -pow(-tmp157, tmp160)*pow(tmp157, tmp161);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
      }
    }
  }
  else
  {
    tmp159 = pow(tmp157, tmp158);
  }
  if(isnan(tmp159) || isinf(tmp159))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
  }tmp164 = _eta - 0.615;
  tmp165 = real_array_get(_J, 1, ((modelica_integer) 12));
  if(tmp164 < 0.0 && tmp165 != 0.0)
  {
    tmp167 = modf(tmp165, &tmp168);
    
    if(tmp167 > 0.5)
    {
      tmp167 -= 1.0;
      tmp168 += 1.0;
    }
    else if(tmp167 < -0.5)
    {
      tmp167 += 1.0;
      tmp168 -= 1.0;
    }
    
    if(fabs(tmp167) < 1e-10)
      tmp166 = pow(tmp164, tmp168);
    else
    {
      tmp170 = modf(1.0/tmp165, &tmp169);
      if(tmp170 > 0.5)
      {
        tmp170 -= 1.0;
        tmp169 += 1.0;
      }
      else if(tmp170 < -0.5)
      {
        tmp170 += 1.0;
        tmp169 -= 1.0;
      }
      if(fabs(tmp170) < 1e-10 && ((unsigned long)tmp169 & 1))
      {
        tmp166 = -pow(-tmp164, tmp167)*pow(tmp164, tmp168);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
      }
    }
  }
  else
  {
    tmp166 = pow(tmp164, tmp165);
  }
  if(isnan(tmp166) || isinf(tmp166))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
  }tmp171 = _pi + 0.24;
  tmp172 = real_array_get(_I, 1, ((modelica_integer) 13));
  if(tmp171 < 0.0 && tmp172 != 0.0)
  {
    tmp174 = modf(tmp172, &tmp175);
    
    if(tmp174 > 0.5)
    {
      tmp174 -= 1.0;
      tmp175 += 1.0;
    }
    else if(tmp174 < -0.5)
    {
      tmp174 += 1.0;
      tmp175 -= 1.0;
    }
    
    if(fabs(tmp174) < 1e-10)
      tmp173 = pow(tmp171, tmp175);
    else
    {
      tmp177 = modf(1.0/tmp172, &tmp176);
      if(tmp177 > 0.5)
      {
        tmp177 -= 1.0;
        tmp176 += 1.0;
      }
      else if(tmp177 < -0.5)
      {
        tmp177 += 1.0;
        tmp176 -= 1.0;
      }
      if(fabs(tmp177) < 1e-10 && ((unsigned long)tmp176 & 1))
      {
        tmp173 = -pow(-tmp171, tmp174)*pow(tmp171, tmp175);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
      }
    }
  }
  else
  {
    tmp173 = pow(tmp171, tmp172);
  }
  if(isnan(tmp173) || isinf(tmp173))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
  }tmp178 = _eta - 0.615;
  tmp179 = real_array_get(_J, 1, ((modelica_integer) 13));
  if(tmp178 < 0.0 && tmp179 != 0.0)
  {
    tmp181 = modf(tmp179, &tmp182);
    
    if(tmp181 > 0.5)
    {
      tmp181 -= 1.0;
      tmp182 += 1.0;
    }
    else if(tmp181 < -0.5)
    {
      tmp181 += 1.0;
      tmp182 -= 1.0;
    }
    
    if(fabs(tmp181) < 1e-10)
      tmp180 = pow(tmp178, tmp182);
    else
    {
      tmp184 = modf(1.0/tmp179, &tmp183);
      if(tmp184 > 0.5)
      {
        tmp184 -= 1.0;
        tmp183 += 1.0;
      }
      else if(tmp184 < -0.5)
      {
        tmp184 += 1.0;
        tmp183 -= 1.0;
      }
      if(fabs(tmp184) < 1e-10 && ((unsigned long)tmp183 & 1))
      {
        tmp180 = -pow(-tmp178, tmp181)*pow(tmp178, tmp182);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
      }
    }
  }
  else
  {
    tmp180 = pow(tmp178, tmp179);
  }
  if(isnan(tmp180) || isinf(tmp180))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
  }tmp185 = _pi + 0.24;
  tmp186 = real_array_get(_I, 1, ((modelica_integer) 14));
  if(tmp185 < 0.0 && tmp186 != 0.0)
  {
    tmp188 = modf(tmp186, &tmp189);
    
    if(tmp188 > 0.5)
    {
      tmp188 -= 1.0;
      tmp189 += 1.0;
    }
    else if(tmp188 < -0.5)
    {
      tmp188 += 1.0;
      tmp189 -= 1.0;
    }
    
    if(fabs(tmp188) < 1e-10)
      tmp187 = pow(tmp185, tmp189);
    else
    {
      tmp191 = modf(1.0/tmp186, &tmp190);
      if(tmp191 > 0.5)
      {
        tmp191 -= 1.0;
        tmp190 += 1.0;
      }
      else if(tmp191 < -0.5)
      {
        tmp191 += 1.0;
        tmp190 -= 1.0;
      }
      if(fabs(tmp191) < 1e-10 && ((unsigned long)tmp190 & 1))
      {
        tmp187 = -pow(-tmp185, tmp188)*pow(tmp185, tmp189);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
      }
    }
  }
  else
  {
    tmp187 = pow(tmp185, tmp186);
  }
  if(isnan(tmp187) || isinf(tmp187))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
  }tmp192 = _eta - 0.615;
  tmp193 = real_array_get(_J, 1, ((modelica_integer) 14));
  if(tmp192 < 0.0 && tmp193 != 0.0)
  {
    tmp195 = modf(tmp193, &tmp196);
    
    if(tmp195 > 0.5)
    {
      tmp195 -= 1.0;
      tmp196 += 1.0;
    }
    else if(tmp195 < -0.5)
    {
      tmp195 += 1.0;
      tmp196 -= 1.0;
    }
    
    if(fabs(tmp195) < 1e-10)
      tmp194 = pow(tmp192, tmp196);
    else
    {
      tmp198 = modf(1.0/tmp193, &tmp197);
      if(tmp198 > 0.5)
      {
        tmp198 -= 1.0;
        tmp197 += 1.0;
      }
      else if(tmp198 < -0.5)
      {
        tmp198 += 1.0;
        tmp197 -= 1.0;
      }
      if(fabs(tmp198) < 1e-10 && ((unsigned long)tmp197 & 1))
      {
        tmp194 = -pow(-tmp192, tmp195)*pow(tmp192, tmp196);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
      }
    }
  }
  else
  {
    tmp194 = pow(tmp192, tmp193);
  }
  if(isnan(tmp194) || isinf(tmp194))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
  }tmp199 = _pi + 0.24;
  tmp200 = real_array_get(_I, 1, ((modelica_integer) 15));
  if(tmp199 < 0.0 && tmp200 != 0.0)
  {
    tmp202 = modf(tmp200, &tmp203);
    
    if(tmp202 > 0.5)
    {
      tmp202 -= 1.0;
      tmp203 += 1.0;
    }
    else if(tmp202 < -0.5)
    {
      tmp202 += 1.0;
      tmp203 -= 1.0;
    }
    
    if(fabs(tmp202) < 1e-10)
      tmp201 = pow(tmp199, tmp203);
    else
    {
      tmp205 = modf(1.0/tmp200, &tmp204);
      if(tmp205 > 0.5)
      {
        tmp205 -= 1.0;
        tmp204 += 1.0;
      }
      else if(tmp205 < -0.5)
      {
        tmp205 += 1.0;
        tmp204 -= 1.0;
      }
      if(fabs(tmp205) < 1e-10 && ((unsigned long)tmp204 & 1))
      {
        tmp201 = -pow(-tmp199, tmp202)*pow(tmp199, tmp203);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
      }
    }
  }
  else
  {
    tmp201 = pow(tmp199, tmp200);
  }
  if(isnan(tmp201) || isinf(tmp201))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
  }tmp206 = _eta - 0.615;
  tmp207 = real_array_get(_J, 1, ((modelica_integer) 15));
  if(tmp206 < 0.0 && tmp207 != 0.0)
  {
    tmp209 = modf(tmp207, &tmp210);
    
    if(tmp209 > 0.5)
    {
      tmp209 -= 1.0;
      tmp210 += 1.0;
    }
    else if(tmp209 < -0.5)
    {
      tmp209 += 1.0;
      tmp210 -= 1.0;
    }
    
    if(fabs(tmp209) < 1e-10)
      tmp208 = pow(tmp206, tmp210);
    else
    {
      tmp212 = modf(1.0/tmp207, &tmp211);
      if(tmp212 > 0.5)
      {
        tmp212 -= 1.0;
        tmp211 += 1.0;
      }
      else if(tmp212 < -0.5)
      {
        tmp212 += 1.0;
        tmp211 -= 1.0;
      }
      if(fabs(tmp212) < 1e-10 && ((unsigned long)tmp211 & 1))
      {
        tmp208 = -pow(-tmp206, tmp209)*pow(tmp206, tmp210);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
      }
    }
  }
  else
  {
    tmp208 = pow(tmp206, tmp207);
  }
  if(isnan(tmp208) || isinf(tmp208))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
  }tmp213 = _pi + 0.24;
  tmp214 = real_array_get(_I, 1, ((modelica_integer) 16));
  if(tmp213 < 0.0 && tmp214 != 0.0)
  {
    tmp216 = modf(tmp214, &tmp217);
    
    if(tmp216 > 0.5)
    {
      tmp216 -= 1.0;
      tmp217 += 1.0;
    }
    else if(tmp216 < -0.5)
    {
      tmp216 += 1.0;
      tmp217 -= 1.0;
    }
    
    if(fabs(tmp216) < 1e-10)
      tmp215 = pow(tmp213, tmp217);
    else
    {
      tmp219 = modf(1.0/tmp214, &tmp218);
      if(tmp219 > 0.5)
      {
        tmp219 -= 1.0;
        tmp218 += 1.0;
      }
      else if(tmp219 < -0.5)
      {
        tmp219 += 1.0;
        tmp218 -= 1.0;
      }
      if(fabs(tmp219) < 1e-10 && ((unsigned long)tmp218 & 1))
      {
        tmp215 = -pow(-tmp213, tmp216)*pow(tmp213, tmp217);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
      }
    }
  }
  else
  {
    tmp215 = pow(tmp213, tmp214);
  }
  if(isnan(tmp215) || isinf(tmp215))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
  }tmp220 = _eta - 0.615;
  tmp221 = real_array_get(_J, 1, ((modelica_integer) 16));
  if(tmp220 < 0.0 && tmp221 != 0.0)
  {
    tmp223 = modf(tmp221, &tmp224);
    
    if(tmp223 > 0.5)
    {
      tmp223 -= 1.0;
      tmp224 += 1.0;
    }
    else if(tmp223 < -0.5)
    {
      tmp223 += 1.0;
      tmp224 -= 1.0;
    }
    
    if(fabs(tmp223) < 1e-10)
      tmp222 = pow(tmp220, tmp224);
    else
    {
      tmp226 = modf(1.0/tmp221, &tmp225);
      if(tmp226 > 0.5)
      {
        tmp226 -= 1.0;
        tmp225 += 1.0;
      }
      else if(tmp226 < -0.5)
      {
        tmp226 += 1.0;
        tmp225 -= 1.0;
      }
      if(fabs(tmp226) < 1e-10 && ((unsigned long)tmp225 & 1))
      {
        tmp222 = -pow(-tmp220, tmp223)*pow(tmp220, tmp224);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
      }
    }
  }
  else
  {
    tmp222 = pow(tmp220, tmp221);
  }
  if(isnan(tmp222) || isinf(tmp222))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
  }tmp227 = _pi + 0.24;
  tmp228 = real_array_get(_I, 1, ((modelica_integer) 17));
  if(tmp227 < 0.0 && tmp228 != 0.0)
  {
    tmp230 = modf(tmp228, &tmp231);
    
    if(tmp230 > 0.5)
    {
      tmp230 -= 1.0;
      tmp231 += 1.0;
    }
    else if(tmp230 < -0.5)
    {
      tmp230 += 1.0;
      tmp231 -= 1.0;
    }
    
    if(fabs(tmp230) < 1e-10)
      tmp229 = pow(tmp227, tmp231);
    else
    {
      tmp233 = modf(1.0/tmp228, &tmp232);
      if(tmp233 > 0.5)
      {
        tmp233 -= 1.0;
        tmp232 += 1.0;
      }
      else if(tmp233 < -0.5)
      {
        tmp233 += 1.0;
        tmp232 -= 1.0;
      }
      if(fabs(tmp233) < 1e-10 && ((unsigned long)tmp232 & 1))
      {
        tmp229 = -pow(-tmp227, tmp230)*pow(tmp227, tmp231);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
      }
    }
  }
  else
  {
    tmp229 = pow(tmp227, tmp228);
  }
  if(isnan(tmp229) || isinf(tmp229))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
  }tmp234 = _eta - 0.615;
  tmp235 = real_array_get(_J, 1, ((modelica_integer) 17));
  if(tmp234 < 0.0 && tmp235 != 0.0)
  {
    tmp237 = modf(tmp235, &tmp238);
    
    if(tmp237 > 0.5)
    {
      tmp237 -= 1.0;
      tmp238 += 1.0;
    }
    else if(tmp237 < -0.5)
    {
      tmp237 += 1.0;
      tmp238 -= 1.0;
    }
    
    if(fabs(tmp237) < 1e-10)
      tmp236 = pow(tmp234, tmp238);
    else
    {
      tmp240 = modf(1.0/tmp235, &tmp239);
      if(tmp240 > 0.5)
      {
        tmp240 -= 1.0;
        tmp239 += 1.0;
      }
      else if(tmp240 < -0.5)
      {
        tmp240 += 1.0;
        tmp239 -= 1.0;
      }
      if(fabs(tmp240) < 1e-10 && ((unsigned long)tmp239 & 1))
      {
        tmp236 = -pow(-tmp234, tmp237)*pow(tmp234, tmp238);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
      }
    }
  }
  else
  {
    tmp236 = pow(tmp234, tmp235);
  }
  if(isnan(tmp236) || isinf(tmp236))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
  }tmp241 = _pi + 0.24;
  tmp242 = real_array_get(_I, 1, ((modelica_integer) 18));
  if(tmp241 < 0.0 && tmp242 != 0.0)
  {
    tmp244 = modf(tmp242, &tmp245);
    
    if(tmp244 > 0.5)
    {
      tmp244 -= 1.0;
      tmp245 += 1.0;
    }
    else if(tmp244 < -0.5)
    {
      tmp244 += 1.0;
      tmp245 -= 1.0;
    }
    
    if(fabs(tmp244) < 1e-10)
      tmp243 = pow(tmp241, tmp245);
    else
    {
      tmp247 = modf(1.0/tmp242, &tmp246);
      if(tmp247 > 0.5)
      {
        tmp247 -= 1.0;
        tmp246 += 1.0;
      }
      else if(tmp247 < -0.5)
      {
        tmp247 += 1.0;
        tmp246 -= 1.0;
      }
      if(fabs(tmp247) < 1e-10 && ((unsigned long)tmp246 & 1))
      {
        tmp243 = -pow(-tmp241, tmp244)*pow(tmp241, tmp245);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
      }
    }
  }
  else
  {
    tmp243 = pow(tmp241, tmp242);
  }
  if(isnan(tmp243) || isinf(tmp243))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
  }tmp248 = _eta - 0.615;
  tmp249 = real_array_get(_J, 1, ((modelica_integer) 18));
  if(tmp248 < 0.0 && tmp249 != 0.0)
  {
    tmp251 = modf(tmp249, &tmp252);
    
    if(tmp251 > 0.5)
    {
      tmp251 -= 1.0;
      tmp252 += 1.0;
    }
    else if(tmp251 < -0.5)
    {
      tmp251 += 1.0;
      tmp252 -= 1.0;
    }
    
    if(fabs(tmp251) < 1e-10)
      tmp250 = pow(tmp248, tmp252);
    else
    {
      tmp254 = modf(1.0/tmp249, &tmp253);
      if(tmp254 > 0.5)
      {
        tmp254 -= 1.0;
        tmp253 += 1.0;
      }
      else if(tmp254 < -0.5)
      {
        tmp254 += 1.0;
        tmp253 -= 1.0;
      }
      if(fabs(tmp254) < 1e-10 && ((unsigned long)tmp253 & 1))
      {
        tmp250 = -pow(-tmp248, tmp251)*pow(tmp248, tmp252);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
      }
    }
  }
  else
  {
    tmp250 = pow(tmp248, tmp249);
  }
  if(isnan(tmp250) || isinf(tmp250))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
  }tmp255 = _pi + 0.24;
  tmp256 = real_array_get(_I, 1, ((modelica_integer) 19));
  if(tmp255 < 0.0 && tmp256 != 0.0)
  {
    tmp258 = modf(tmp256, &tmp259);
    
    if(tmp258 > 0.5)
    {
      tmp258 -= 1.0;
      tmp259 += 1.0;
    }
    else if(tmp258 < -0.5)
    {
      tmp258 += 1.0;
      tmp259 -= 1.0;
    }
    
    if(fabs(tmp258) < 1e-10)
      tmp257 = pow(tmp255, tmp259);
    else
    {
      tmp261 = modf(1.0/tmp256, &tmp260);
      if(tmp261 > 0.5)
      {
        tmp261 -= 1.0;
        tmp260 += 1.0;
      }
      else if(tmp261 < -0.5)
      {
        tmp261 += 1.0;
        tmp260 -= 1.0;
      }
      if(fabs(tmp261) < 1e-10 && ((unsigned long)tmp260 & 1))
      {
        tmp257 = -pow(-tmp255, tmp258)*pow(tmp255, tmp259);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
      }
    }
  }
  else
  {
    tmp257 = pow(tmp255, tmp256);
  }
  if(isnan(tmp257) || isinf(tmp257))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
  }tmp262 = _eta - 0.615;
  tmp263 = real_array_get(_J, 1, ((modelica_integer) 19));
  if(tmp262 < 0.0 && tmp263 != 0.0)
  {
    tmp265 = modf(tmp263, &tmp266);
    
    if(tmp265 > 0.5)
    {
      tmp265 -= 1.0;
      tmp266 += 1.0;
    }
    else if(tmp265 < -0.5)
    {
      tmp265 += 1.0;
      tmp266 -= 1.0;
    }
    
    if(fabs(tmp265) < 1e-10)
      tmp264 = pow(tmp262, tmp266);
    else
    {
      tmp268 = modf(1.0/tmp263, &tmp267);
      if(tmp268 > 0.5)
      {
        tmp268 -= 1.0;
        tmp267 += 1.0;
      }
      else if(tmp268 < -0.5)
      {
        tmp268 += 1.0;
        tmp267 -= 1.0;
      }
      if(fabs(tmp268) < 1e-10 && ((unsigned long)tmp267 & 1))
      {
        tmp264 = -pow(-tmp262, tmp265)*pow(tmp262, tmp266);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
      }
    }
  }
  else
  {
    tmp264 = pow(tmp262, tmp263);
  }
  if(isnan(tmp264) || isinf(tmp264))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
  }tmp269 = _pi + 0.24;
  tmp270 = real_array_get(_I, 1, ((modelica_integer) 20));
  if(tmp269 < 0.0 && tmp270 != 0.0)
  {
    tmp272 = modf(tmp270, &tmp273);
    
    if(tmp272 > 0.5)
    {
      tmp272 -= 1.0;
      tmp273 += 1.0;
    }
    else if(tmp272 < -0.5)
    {
      tmp272 += 1.0;
      tmp273 -= 1.0;
    }
    
    if(fabs(tmp272) < 1e-10)
      tmp271 = pow(tmp269, tmp273);
    else
    {
      tmp275 = modf(1.0/tmp270, &tmp274);
      if(tmp275 > 0.5)
      {
        tmp275 -= 1.0;
        tmp274 += 1.0;
      }
      else if(tmp275 < -0.5)
      {
        tmp275 += 1.0;
        tmp274 -= 1.0;
      }
      if(fabs(tmp275) < 1e-10 && ((unsigned long)tmp274 & 1))
      {
        tmp271 = -pow(-tmp269, tmp272)*pow(tmp269, tmp273);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
      }
    }
  }
  else
  {
    tmp271 = pow(tmp269, tmp270);
  }
  if(isnan(tmp271) || isinf(tmp271))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
  }tmp276 = _eta - 0.615;
  tmp277 = real_array_get(_J, 1, ((modelica_integer) 20));
  if(tmp276 < 0.0 && tmp277 != 0.0)
  {
    tmp279 = modf(tmp277, &tmp280);
    
    if(tmp279 > 0.5)
    {
      tmp279 -= 1.0;
      tmp280 += 1.0;
    }
    else if(tmp279 < -0.5)
    {
      tmp279 += 1.0;
      tmp280 -= 1.0;
    }
    
    if(fabs(tmp279) < 1e-10)
      tmp278 = pow(tmp276, tmp280);
    else
    {
      tmp282 = modf(1.0/tmp277, &tmp281);
      if(tmp282 > 0.5)
      {
        tmp282 -= 1.0;
        tmp281 += 1.0;
      }
      else if(tmp282 < -0.5)
      {
        tmp282 += 1.0;
        tmp281 -= 1.0;
      }
      if(fabs(tmp282) < 1e-10 && ((unsigned long)tmp281 & 1))
      {
        tmp278 = -pow(-tmp276, tmp279)*pow(tmp276, tmp280);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
      }
    }
  }
  else
  {
    tmp278 = pow(tmp276, tmp277);
  }
  if(isnan(tmp278) || isinf(tmp278))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
  }tmp283 = _pi + 0.24;
  tmp284 = real_array_get(_I, 1, ((modelica_integer) 21));
  if(tmp283 < 0.0 && tmp284 != 0.0)
  {
    tmp286 = modf(tmp284, &tmp287);
    
    if(tmp286 > 0.5)
    {
      tmp286 -= 1.0;
      tmp287 += 1.0;
    }
    else if(tmp286 < -0.5)
    {
      tmp286 += 1.0;
      tmp287 -= 1.0;
    }
    
    if(fabs(tmp286) < 1e-10)
      tmp285 = pow(tmp283, tmp287);
    else
    {
      tmp289 = modf(1.0/tmp284, &tmp288);
      if(tmp289 > 0.5)
      {
        tmp289 -= 1.0;
        tmp288 += 1.0;
      }
      else if(tmp289 < -0.5)
      {
        tmp289 += 1.0;
        tmp288 -= 1.0;
      }
      if(fabs(tmp289) < 1e-10 && ((unsigned long)tmp288 & 1))
      {
        tmp285 = -pow(-tmp283, tmp286)*pow(tmp283, tmp287);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
      }
    }
  }
  else
  {
    tmp285 = pow(tmp283, tmp284);
  }
  if(isnan(tmp285) || isinf(tmp285))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
  }tmp290 = _eta - 0.615;
  tmp291 = real_array_get(_J, 1, ((modelica_integer) 21));
  if(tmp290 < 0.0 && tmp291 != 0.0)
  {
    tmp293 = modf(tmp291, &tmp294);
    
    if(tmp293 > 0.5)
    {
      tmp293 -= 1.0;
      tmp294 += 1.0;
    }
    else if(tmp293 < -0.5)
    {
      tmp293 += 1.0;
      tmp294 -= 1.0;
    }
    
    if(fabs(tmp293) < 1e-10)
      tmp292 = pow(tmp290, tmp294);
    else
    {
      tmp296 = modf(1.0/tmp291, &tmp295);
      if(tmp296 > 0.5)
      {
        tmp296 -= 1.0;
        tmp295 += 1.0;
      }
      else if(tmp296 < -0.5)
      {
        tmp296 += 1.0;
        tmp295 -= 1.0;
      }
      if(fabs(tmp296) < 1e-10 && ((unsigned long)tmp295 & 1))
      {
        tmp292 = -pow(-tmp290, tmp293)*pow(tmp290, tmp294);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
      }
    }
  }
  else
  {
    tmp292 = pow(tmp290, tmp291);
  }
  if(isnan(tmp292) || isinf(tmp292))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
  }tmp297 = _pi + 0.24;
  tmp298 = real_array_get(_I, 1, ((modelica_integer) 22));
  if(tmp297 < 0.0 && tmp298 != 0.0)
  {
    tmp300 = modf(tmp298, &tmp301);
    
    if(tmp300 > 0.5)
    {
      tmp300 -= 1.0;
      tmp301 += 1.0;
    }
    else if(tmp300 < -0.5)
    {
      tmp300 += 1.0;
      tmp301 -= 1.0;
    }
    
    if(fabs(tmp300) < 1e-10)
      tmp299 = pow(tmp297, tmp301);
    else
    {
      tmp303 = modf(1.0/tmp298, &tmp302);
      if(tmp303 > 0.5)
      {
        tmp303 -= 1.0;
        tmp302 += 1.0;
      }
      else if(tmp303 < -0.5)
      {
        tmp303 += 1.0;
        tmp302 -= 1.0;
      }
      if(fabs(tmp303) < 1e-10 && ((unsigned long)tmp302 & 1))
      {
        tmp299 = -pow(-tmp297, tmp300)*pow(tmp297, tmp301);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
      }
    }
  }
  else
  {
    tmp299 = pow(tmp297, tmp298);
  }
  if(isnan(tmp299) || isinf(tmp299))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
  }tmp304 = _eta - 0.615;
  tmp305 = real_array_get(_J, 1, ((modelica_integer) 22));
  if(tmp304 < 0.0 && tmp305 != 0.0)
  {
    tmp307 = modf(tmp305, &tmp308);
    
    if(tmp307 > 0.5)
    {
      tmp307 -= 1.0;
      tmp308 += 1.0;
    }
    else if(tmp307 < -0.5)
    {
      tmp307 += 1.0;
      tmp308 -= 1.0;
    }
    
    if(fabs(tmp307) < 1e-10)
      tmp306 = pow(tmp304, tmp308);
    else
    {
      tmp310 = modf(1.0/tmp305, &tmp309);
      if(tmp310 > 0.5)
      {
        tmp310 -= 1.0;
        tmp309 += 1.0;
      }
      else if(tmp310 < -0.5)
      {
        tmp310 += 1.0;
        tmp309 -= 1.0;
      }
      if(fabs(tmp310) < 1e-10 && ((unsigned long)tmp309 & 1))
      {
        tmp306 = -pow(-tmp304, tmp307)*pow(tmp304, tmp308);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
      }
    }
  }
  else
  {
    tmp306 = pow(tmp304, tmp305);
  }
  if(isnan(tmp306) || isinf(tmp306))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
  }tmp311 = _pi + 0.24;
  tmp312 = real_array_get(_I, 1, ((modelica_integer) 23));
  if(tmp311 < 0.0 && tmp312 != 0.0)
  {
    tmp314 = modf(tmp312, &tmp315);
    
    if(tmp314 > 0.5)
    {
      tmp314 -= 1.0;
      tmp315 += 1.0;
    }
    else if(tmp314 < -0.5)
    {
      tmp314 += 1.0;
      tmp315 -= 1.0;
    }
    
    if(fabs(tmp314) < 1e-10)
      tmp313 = pow(tmp311, tmp315);
    else
    {
      tmp317 = modf(1.0/tmp312, &tmp316);
      if(tmp317 > 0.5)
      {
        tmp317 -= 1.0;
        tmp316 += 1.0;
      }
      else if(tmp317 < -0.5)
      {
        tmp317 += 1.0;
        tmp316 -= 1.0;
      }
      if(fabs(tmp317) < 1e-10 && ((unsigned long)tmp316 & 1))
      {
        tmp313 = -pow(-tmp311, tmp314)*pow(tmp311, tmp315);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
      }
    }
  }
  else
  {
    tmp313 = pow(tmp311, tmp312);
  }
  if(isnan(tmp313) || isinf(tmp313))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
  }tmp318 = _eta - 0.615;
  tmp319 = real_array_get(_J, 1, ((modelica_integer) 23));
  if(tmp318 < 0.0 && tmp319 != 0.0)
  {
    tmp321 = modf(tmp319, &tmp322);
    
    if(tmp321 > 0.5)
    {
      tmp321 -= 1.0;
      tmp322 += 1.0;
    }
    else if(tmp321 < -0.5)
    {
      tmp321 += 1.0;
      tmp322 -= 1.0;
    }
    
    if(fabs(tmp321) < 1e-10)
      tmp320 = pow(tmp318, tmp322);
    else
    {
      tmp324 = modf(1.0/tmp319, &tmp323);
      if(tmp324 > 0.5)
      {
        tmp324 -= 1.0;
        tmp323 += 1.0;
      }
      else if(tmp324 < -0.5)
      {
        tmp324 += 1.0;
        tmp323 -= 1.0;
      }
      if(fabs(tmp324) < 1e-10 && ((unsigned long)tmp323 & 1))
      {
        tmp320 = -pow(-tmp318, tmp321)*pow(tmp318, tmp322);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
      }
    }
  }
  else
  {
    tmp320 = pow(tmp318, tmp319);
  }
  if(isnan(tmp320) || isinf(tmp320))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
  }tmp325 = _pi + 0.24;
  tmp326 = real_array_get(_I, 1, ((modelica_integer) 24));
  if(tmp325 < 0.0 && tmp326 != 0.0)
  {
    tmp328 = modf(tmp326, &tmp329);
    
    if(tmp328 > 0.5)
    {
      tmp328 -= 1.0;
      tmp329 += 1.0;
    }
    else if(tmp328 < -0.5)
    {
      tmp328 += 1.0;
      tmp329 -= 1.0;
    }
    
    if(fabs(tmp328) < 1e-10)
      tmp327 = pow(tmp325, tmp329);
    else
    {
      tmp331 = modf(1.0/tmp326, &tmp330);
      if(tmp331 > 0.5)
      {
        tmp331 -= 1.0;
        tmp330 += 1.0;
      }
      else if(tmp331 < -0.5)
      {
        tmp331 += 1.0;
        tmp330 -= 1.0;
      }
      if(fabs(tmp331) < 1e-10 && ((unsigned long)tmp330 & 1))
      {
        tmp327 = -pow(-tmp325, tmp328)*pow(tmp325, tmp329);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
      }
    }
  }
  else
  {
    tmp327 = pow(tmp325, tmp326);
  }
  if(isnan(tmp327) || isinf(tmp327))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
  }tmp332 = _eta - 0.615;
  tmp333 = real_array_get(_J, 1, ((modelica_integer) 24));
  if(tmp332 < 0.0 && tmp333 != 0.0)
  {
    tmp335 = modf(tmp333, &tmp336);
    
    if(tmp335 > 0.5)
    {
      tmp335 -= 1.0;
      tmp336 += 1.0;
    }
    else if(tmp335 < -0.5)
    {
      tmp335 += 1.0;
      tmp336 -= 1.0;
    }
    
    if(fabs(tmp335) < 1e-10)
      tmp334 = pow(tmp332, tmp336);
    else
    {
      tmp338 = modf(1.0/tmp333, &tmp337);
      if(tmp338 > 0.5)
      {
        tmp338 -= 1.0;
        tmp337 += 1.0;
      }
      else if(tmp338 < -0.5)
      {
        tmp338 += 1.0;
        tmp337 -= 1.0;
      }
      if(fabs(tmp338) < 1e-10 && ((unsigned long)tmp337 & 1))
      {
        tmp334 = -pow(-tmp332, tmp335)*pow(tmp332, tmp336);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
      }
    }
  }
  else
  {
    tmp334 = pow(tmp332, tmp333);
  }
  if(isnan(tmp334) || isinf(tmp334))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
  }tmp339 = _pi + 0.24;
  tmp340 = real_array_get(_I, 1, ((modelica_integer) 25));
  if(tmp339 < 0.0 && tmp340 != 0.0)
  {
    tmp342 = modf(tmp340, &tmp343);
    
    if(tmp342 > 0.5)
    {
      tmp342 -= 1.0;
      tmp343 += 1.0;
    }
    else if(tmp342 < -0.5)
    {
      tmp342 += 1.0;
      tmp343 -= 1.0;
    }
    
    if(fabs(tmp342) < 1e-10)
      tmp341 = pow(tmp339, tmp343);
    else
    {
      tmp345 = modf(1.0/tmp340, &tmp344);
      if(tmp345 > 0.5)
      {
        tmp345 -= 1.0;
        tmp344 += 1.0;
      }
      else if(tmp345 < -0.5)
      {
        tmp345 += 1.0;
        tmp344 -= 1.0;
      }
      if(fabs(tmp345) < 1e-10 && ((unsigned long)tmp344 & 1))
      {
        tmp341 = -pow(-tmp339, tmp342)*pow(tmp339, tmp343);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
      }
    }
  }
  else
  {
    tmp341 = pow(tmp339, tmp340);
  }
  if(isnan(tmp341) || isinf(tmp341))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
  }tmp346 = _eta - 0.615;
  tmp347 = real_array_get(_J, 1, ((modelica_integer) 25));
  if(tmp346 < 0.0 && tmp347 != 0.0)
  {
    tmp349 = modf(tmp347, &tmp350);
    
    if(tmp349 > 0.5)
    {
      tmp349 -= 1.0;
      tmp350 += 1.0;
    }
    else if(tmp349 < -0.5)
    {
      tmp349 += 1.0;
      tmp350 -= 1.0;
    }
    
    if(fabs(tmp349) < 1e-10)
      tmp348 = pow(tmp346, tmp350);
    else
    {
      tmp352 = modf(1.0/tmp347, &tmp351);
      if(tmp352 > 0.5)
      {
        tmp352 -= 1.0;
        tmp351 += 1.0;
      }
      else if(tmp352 < -0.5)
      {
        tmp352 += 1.0;
        tmp351 -= 1.0;
      }
      if(fabs(tmp352) < 1e-10 && ((unsigned long)tmp351 & 1))
      {
        tmp348 = -pow(-tmp346, tmp349)*pow(tmp346, tmp350);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
      }
    }
  }
  else
  {
    tmp348 = pow(tmp346, tmp347);
  }
  if(isnan(tmp348) || isinf(tmp348))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
  }tmp353 = _pi + 0.24;
  tmp354 = real_array_get(_I, 1, ((modelica_integer) 26));
  if(tmp353 < 0.0 && tmp354 != 0.0)
  {
    tmp356 = modf(tmp354, &tmp357);
    
    if(tmp356 > 0.5)
    {
      tmp356 -= 1.0;
      tmp357 += 1.0;
    }
    else if(tmp356 < -0.5)
    {
      tmp356 += 1.0;
      tmp357 -= 1.0;
    }
    
    if(fabs(tmp356) < 1e-10)
      tmp355 = pow(tmp353, tmp357);
    else
    {
      tmp359 = modf(1.0/tmp354, &tmp358);
      if(tmp359 > 0.5)
      {
        tmp359 -= 1.0;
        tmp358 += 1.0;
      }
      else if(tmp359 < -0.5)
      {
        tmp359 += 1.0;
        tmp358 -= 1.0;
      }
      if(fabs(tmp359) < 1e-10 && ((unsigned long)tmp358 & 1))
      {
        tmp355 = -pow(-tmp353, tmp356)*pow(tmp353, tmp357);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
      }
    }
  }
  else
  {
    tmp355 = pow(tmp353, tmp354);
  }
  if(isnan(tmp355) || isinf(tmp355))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
  }tmp360 = _eta - 0.615;
  tmp361 = real_array_get(_J, 1, ((modelica_integer) 26));
  if(tmp360 < 0.0 && tmp361 != 0.0)
  {
    tmp363 = modf(tmp361, &tmp364);
    
    if(tmp363 > 0.5)
    {
      tmp363 -= 1.0;
      tmp364 += 1.0;
    }
    else if(tmp363 < -0.5)
    {
      tmp363 += 1.0;
      tmp364 -= 1.0;
    }
    
    if(fabs(tmp363) < 1e-10)
      tmp362 = pow(tmp360, tmp364);
    else
    {
      tmp366 = modf(1.0/tmp361, &tmp365);
      if(tmp366 > 0.5)
      {
        tmp366 -= 1.0;
        tmp365 += 1.0;
      }
      else if(tmp366 < -0.5)
      {
        tmp366 += 1.0;
        tmp365 -= 1.0;
      }
      if(fabs(tmp366) < 1e-10 && ((unsigned long)tmp365 & 1))
      {
        tmp362 = -pow(-tmp360, tmp363)*pow(tmp360, tmp364);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
      }
    }
  }
  else
  {
    tmp362 = pow(tmp360, tmp361);
  }
  if(isnan(tmp362) || isinf(tmp362))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
  }tmp367 = _pi + 0.24;
  tmp368 = real_array_get(_I, 1, ((modelica_integer) 27));
  if(tmp367 < 0.0 && tmp368 != 0.0)
  {
    tmp370 = modf(tmp368, &tmp371);
    
    if(tmp370 > 0.5)
    {
      tmp370 -= 1.0;
      tmp371 += 1.0;
    }
    else if(tmp370 < -0.5)
    {
      tmp370 += 1.0;
      tmp371 -= 1.0;
    }
    
    if(fabs(tmp370) < 1e-10)
      tmp369 = pow(tmp367, tmp371);
    else
    {
      tmp373 = modf(1.0/tmp368, &tmp372);
      if(tmp373 > 0.5)
      {
        tmp373 -= 1.0;
        tmp372 += 1.0;
      }
      else if(tmp373 < -0.5)
      {
        tmp373 += 1.0;
        tmp372 -= 1.0;
      }
      if(fabs(tmp373) < 1e-10 && ((unsigned long)tmp372 & 1))
      {
        tmp369 = -pow(-tmp367, tmp370)*pow(tmp367, tmp371);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
      }
    }
  }
  else
  {
    tmp369 = pow(tmp367, tmp368);
  }
  if(isnan(tmp369) || isinf(tmp369))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
  }tmp374 = _eta - 0.615;
  tmp375 = real_array_get(_J, 1, ((modelica_integer) 27));
  if(tmp374 < 0.0 && tmp375 != 0.0)
  {
    tmp377 = modf(tmp375, &tmp378);
    
    if(tmp377 > 0.5)
    {
      tmp377 -= 1.0;
      tmp378 += 1.0;
    }
    else if(tmp377 < -0.5)
    {
      tmp377 += 1.0;
      tmp378 -= 1.0;
    }
    
    if(fabs(tmp377) < 1e-10)
      tmp376 = pow(tmp374, tmp378);
    else
    {
      tmp380 = modf(1.0/tmp375, &tmp379);
      if(tmp380 > 0.5)
      {
        tmp380 -= 1.0;
        tmp379 += 1.0;
      }
      else if(tmp380 < -0.5)
      {
        tmp380 += 1.0;
        tmp379 -= 1.0;
      }
      if(fabs(tmp380) < 1e-10 && ((unsigned long)tmp379 & 1))
      {
        tmp376 = -pow(-tmp374, tmp377)*pow(tmp374, tmp378);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
      }
    }
  }
  else
  {
    tmp376 = pow(tmp374, tmp375);
  }
  if(isnan(tmp376) || isinf(tmp376))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
  }tmp381 = _pi + 0.24;
  tmp382 = real_array_get(_I, 1, ((modelica_integer) 28));
  if(tmp381 < 0.0 && tmp382 != 0.0)
  {
    tmp384 = modf(tmp382, &tmp385);
    
    if(tmp384 > 0.5)
    {
      tmp384 -= 1.0;
      tmp385 += 1.0;
    }
    else if(tmp384 < -0.5)
    {
      tmp384 += 1.0;
      tmp385 -= 1.0;
    }
    
    if(fabs(tmp384) < 1e-10)
      tmp383 = pow(tmp381, tmp385);
    else
    {
      tmp387 = modf(1.0/tmp382, &tmp386);
      if(tmp387 > 0.5)
      {
        tmp387 -= 1.0;
        tmp386 += 1.0;
      }
      else if(tmp387 < -0.5)
      {
        tmp387 += 1.0;
        tmp386 -= 1.0;
      }
      if(fabs(tmp387) < 1e-10 && ((unsigned long)tmp386 & 1))
      {
        tmp383 = -pow(-tmp381, tmp384)*pow(tmp381, tmp385);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
      }
    }
  }
  else
  {
    tmp383 = pow(tmp381, tmp382);
  }
  if(isnan(tmp383) || isinf(tmp383))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
  }tmp388 = _eta - 0.615;
  tmp389 = real_array_get(_J, 1, ((modelica_integer) 28));
  if(tmp388 < 0.0 && tmp389 != 0.0)
  {
    tmp391 = modf(tmp389, &tmp392);
    
    if(tmp391 > 0.5)
    {
      tmp391 -= 1.0;
      tmp392 += 1.0;
    }
    else if(tmp391 < -0.5)
    {
      tmp391 += 1.0;
      tmp392 -= 1.0;
    }
    
    if(fabs(tmp391) < 1e-10)
      tmp390 = pow(tmp388, tmp392);
    else
    {
      tmp394 = modf(1.0/tmp389, &tmp393);
      if(tmp394 > 0.5)
      {
        tmp394 -= 1.0;
        tmp393 += 1.0;
      }
      else if(tmp394 < -0.5)
      {
        tmp394 += 1.0;
        tmp393 -= 1.0;
      }
      if(fabs(tmp394) < 1e-10 && ((unsigned long)tmp393 & 1))
      {
        tmp390 = -pow(-tmp388, tmp391)*pow(tmp388, tmp392);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
      }
    }
  }
  else
  {
    tmp390 = pow(tmp388, tmp389);
  }
  if(isnan(tmp390) || isinf(tmp390))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
  }tmp395 = _pi + 0.24;
  tmp396 = real_array_get(_I, 1, ((modelica_integer) 29));
  if(tmp395 < 0.0 && tmp396 != 0.0)
  {
    tmp398 = modf(tmp396, &tmp399);
    
    if(tmp398 > 0.5)
    {
      tmp398 -= 1.0;
      tmp399 += 1.0;
    }
    else if(tmp398 < -0.5)
    {
      tmp398 += 1.0;
      tmp399 -= 1.0;
    }
    
    if(fabs(tmp398) < 1e-10)
      tmp397 = pow(tmp395, tmp399);
    else
    {
      tmp401 = modf(1.0/tmp396, &tmp400);
      if(tmp401 > 0.5)
      {
        tmp401 -= 1.0;
        tmp400 += 1.0;
      }
      else if(tmp401 < -0.5)
      {
        tmp401 += 1.0;
        tmp400 -= 1.0;
      }
      if(fabs(tmp401) < 1e-10 && ((unsigned long)tmp400 & 1))
      {
        tmp397 = -pow(-tmp395, tmp398)*pow(tmp395, tmp399);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
      }
    }
  }
  else
  {
    tmp397 = pow(tmp395, tmp396);
  }
  if(isnan(tmp397) || isinf(tmp397))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
  }tmp402 = _eta - 0.615;
  tmp403 = real_array_get(_J, 1, ((modelica_integer) 29));
  if(tmp402 < 0.0 && tmp403 != 0.0)
  {
    tmp405 = modf(tmp403, &tmp406);
    
    if(tmp405 > 0.5)
    {
      tmp405 -= 1.0;
      tmp406 += 1.0;
    }
    else if(tmp405 < -0.5)
    {
      tmp405 += 1.0;
      tmp406 -= 1.0;
    }
    
    if(fabs(tmp405) < 1e-10)
      tmp404 = pow(tmp402, tmp406);
    else
    {
      tmp408 = modf(1.0/tmp403, &tmp407);
      if(tmp408 > 0.5)
      {
        tmp408 -= 1.0;
        tmp407 += 1.0;
      }
      else if(tmp408 < -0.5)
      {
        tmp408 += 1.0;
        tmp407 -= 1.0;
      }
      if(fabs(tmp408) < 1e-10 && ((unsigned long)tmp407 & 1))
      {
        tmp404 = -pow(-tmp402, tmp405)*pow(tmp402, tmp406);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
      }
    }
  }
  else
  {
    tmp404 = pow(tmp402, tmp403);
  }
  if(isnan(tmp404) || isinf(tmp404))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
  }tmp409 = _pi + 0.24;
  tmp410 = real_array_get(_I, 1, ((modelica_integer) 30));
  if(tmp409 < 0.0 && tmp410 != 0.0)
  {
    tmp412 = modf(tmp410, &tmp413);
    
    if(tmp412 > 0.5)
    {
      tmp412 -= 1.0;
      tmp413 += 1.0;
    }
    else if(tmp412 < -0.5)
    {
      tmp412 += 1.0;
      tmp413 -= 1.0;
    }
    
    if(fabs(tmp412) < 1e-10)
      tmp411 = pow(tmp409, tmp413);
    else
    {
      tmp415 = modf(1.0/tmp410, &tmp414);
      if(tmp415 > 0.5)
      {
        tmp415 -= 1.0;
        tmp414 += 1.0;
      }
      else if(tmp415 < -0.5)
      {
        tmp415 += 1.0;
        tmp414 -= 1.0;
      }
      if(fabs(tmp415) < 1e-10 && ((unsigned long)tmp414 & 1))
      {
        tmp411 = -pow(-tmp409, tmp412)*pow(tmp409, tmp413);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
      }
    }
  }
  else
  {
    tmp411 = pow(tmp409, tmp410);
  }
  if(isnan(tmp411) || isinf(tmp411))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
  }tmp416 = _eta - 0.615;
  tmp417 = real_array_get(_J, 1, ((modelica_integer) 30));
  if(tmp416 < 0.0 && tmp417 != 0.0)
  {
    tmp419 = modf(tmp417, &tmp420);
    
    if(tmp419 > 0.5)
    {
      tmp419 -= 1.0;
      tmp420 += 1.0;
    }
    else if(tmp419 < -0.5)
    {
      tmp419 += 1.0;
      tmp420 -= 1.0;
    }
    
    if(fabs(tmp419) < 1e-10)
      tmp418 = pow(tmp416, tmp420);
    else
    {
      tmp422 = modf(1.0/tmp417, &tmp421);
      if(tmp422 > 0.5)
      {
        tmp422 -= 1.0;
        tmp421 += 1.0;
      }
      else if(tmp422 < -0.5)
      {
        tmp422 += 1.0;
        tmp421 -= 1.0;
      }
      if(fabs(tmp422) < 1e-10 && ((unsigned long)tmp421 & 1))
      {
        tmp418 = -pow(-tmp416, tmp419)*pow(tmp416, tmp420);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
      }
    }
  }
  else
  {
    tmp418 = pow(tmp416, tmp417);
  }
  if(isnan(tmp418) || isinf(tmp418))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
  }tmp423 = _pi + 0.24;
  tmp424 = real_array_get(_I, 1, ((modelica_integer) 31));
  if(tmp423 < 0.0 && tmp424 != 0.0)
  {
    tmp426 = modf(tmp424, &tmp427);
    
    if(tmp426 > 0.5)
    {
      tmp426 -= 1.0;
      tmp427 += 1.0;
    }
    else if(tmp426 < -0.5)
    {
      tmp426 += 1.0;
      tmp427 -= 1.0;
    }
    
    if(fabs(tmp426) < 1e-10)
      tmp425 = pow(tmp423, tmp427);
    else
    {
      tmp429 = modf(1.0/tmp424, &tmp428);
      if(tmp429 > 0.5)
      {
        tmp429 -= 1.0;
        tmp428 += 1.0;
      }
      else if(tmp429 < -0.5)
      {
        tmp429 += 1.0;
        tmp428 -= 1.0;
      }
      if(fabs(tmp429) < 1e-10 && ((unsigned long)tmp428 & 1))
      {
        tmp425 = -pow(-tmp423, tmp426)*pow(tmp423, tmp427);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp423, tmp424);
      }
    }
  }
  else
  {
    tmp425 = pow(tmp423, tmp424);
  }
  if(isnan(tmp425) || isinf(tmp425))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp423, tmp424);
  }tmp430 = _eta - 0.615;
  tmp431 = real_array_get(_J, 1, ((modelica_integer) 31));
  if(tmp430 < 0.0 && tmp431 != 0.0)
  {
    tmp433 = modf(tmp431, &tmp434);
    
    if(tmp433 > 0.5)
    {
      tmp433 -= 1.0;
      tmp434 += 1.0;
    }
    else if(tmp433 < -0.5)
    {
      tmp433 += 1.0;
      tmp434 -= 1.0;
    }
    
    if(fabs(tmp433) < 1e-10)
      tmp432 = pow(tmp430, tmp434);
    else
    {
      tmp436 = modf(1.0/tmp431, &tmp435);
      if(tmp436 > 0.5)
      {
        tmp436 -= 1.0;
        tmp435 += 1.0;
      }
      else if(tmp436 < -0.5)
      {
        tmp436 += 1.0;
        tmp435 -= 1.0;
      }
      if(fabs(tmp436) < 1e-10 && ((unsigned long)tmp435 & 1))
      {
        tmp432 = -pow(-tmp430, tmp433)*pow(tmp430, tmp434);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp430, tmp431);
      }
    }
  }
  else
  {
    tmp432 = pow(tmp430, tmp431);
  }
  if(isnan(tmp432) || isinf(tmp432))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp430, tmp431);
  }
  _T = (((real_array_get(_n, 1, ((modelica_integer) 1))) * (tmp5)) * (tmp12) + ((real_array_get(_n, 1, ((modelica_integer) 2))) * (tmp19)) * (tmp26) + ((real_array_get(_n, 1, ((modelica_integer) 3))) * (tmp33)) * (tmp40) + ((real_array_get(_n, 1, ((modelica_integer) 4))) * (tmp47)) * (tmp54) + ((real_array_get(_n, 1, ((modelica_integer) 5))) * (tmp61)) * (tmp68) + ((real_array_get(_n, 1, ((modelica_integer) 6))) * (tmp75)) * (tmp82) + ((real_array_get(_n, 1, ((modelica_integer) 7))) * (tmp89)) * (tmp96) + ((real_array_get(_n, 1, ((modelica_integer) 8))) * (tmp103)) * (tmp110) + ((real_array_get(_n, 1, ((modelica_integer) 9))) * (tmp117)) * (tmp124) + ((real_array_get(_n, 1, ((modelica_integer) 10))) * (tmp131)) * (tmp138) + ((real_array_get(_n, 1, ((modelica_integer) 11))) * (tmp145)) * (tmp152) + ((real_array_get(_n, 1, ((modelica_integer) 12))) * (tmp159)) * (tmp166) + ((real_array_get(_n, 1, ((modelica_integer) 13))) * (tmp173)) * (tmp180) + ((real_array_get(_n, 1, ((modelica_integer) 14))) * (tmp187)) * (tmp194) + ((real_array_get(_n, 1, ((modelica_integer) 15))) * (tmp201)) * (tmp208) + ((real_array_get(_n, 1, ((modelica_integer) 16))) * (tmp215)) * (tmp222) + ((real_array_get(_n, 1, ((modelica_integer) 17))) * (tmp229)) * (tmp236) + ((real_array_get(_n, 1, ((modelica_integer) 18))) * (tmp243)) * (tmp250) + ((real_array_get(_n, 1, ((modelica_integer) 19))) * (tmp257)) * (tmp264) + ((real_array_get(_n, 1, ((modelica_integer) 20))) * (tmp271)) * (tmp278) + ((real_array_get(_n, 1, ((modelica_integer) 21))) * (tmp285)) * (tmp292) + ((real_array_get(_n, 1, ((modelica_integer) 22))) * (tmp299)) * (tmp306) + ((real_array_get(_n, 1, ((modelica_integer) 23))) * (tmp313)) * (tmp320) + ((real_array_get(_n, 1, ((modelica_integer) 24))) * (tmp327)) * (tmp334) + ((real_array_get(_n, 1, ((modelica_integer) 25))) * (tmp341)) * (tmp348) + ((real_array_get(_n, 1, ((modelica_integer) 26))) * (tmp355)) * (tmp362) + ((real_array_get(_n, 1, ((modelica_integer) 27))) * (tmp369)) * (tmp376) + ((real_array_get(_n, 1, ((modelica_integer) 28))) * (tmp383)) * (tmp390) + ((real_array_get(_n, 1, ((modelica_integer) 29))) * (tmp397)) * (tmp404) + ((real_array_get(_n, 1, ((modelica_integer) 30))) * (tmp411)) * (tmp418) + ((real_array_get(_n, 1, ((modelica_integer) 31))) * (tmp425)) * (tmp432)) * (_Tstar);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _Tstar;
  modelica_real _pstar;
  modelica_real _hstar;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_real _eta;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_real tmp300;
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_real tmp309;
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_real tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_real tmp321;
  modelica_real tmp322;
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_real tmp333;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_real tmp342;
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_real tmp345;
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_real tmp352;
  modelica_real tmp353;
  modelica_real tmp354;
  modelica_real tmp355;
  modelica_real tmp356;
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_real tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_real tmp365;
  modelica_real tmp366;
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  modelica_real tmp375;
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_real tmp378;
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  modelica_real tmp387;
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_real tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_real tmp399;
  modelica_real tmp400;
  modelica_real tmp401;
  modelica_real tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  modelica_real tmp405;
  modelica_real tmp406;
  modelica_real tmp407;
  modelica_real tmp408;
  modelica_real tmp409;
  modelica_real tmp410;
  modelica_real tmp411;
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_real tmp414;
  modelica_real tmp415;
  modelica_real tmp416;
  modelica_real tmp417;
  modelica_real tmp418;
  modelica_real tmp419;
  modelica_real tmp420;
  modelica_real tmp421;
  modelica_real tmp422;
  modelica_real tmp423;
  modelica_real tmp424;
  modelica_real tmp425;
  modelica_real tmp426;
  modelica_real tmp427;
  modelica_real tmp428;
  modelica_real tmp429;
  modelica_real tmp430;
  modelica_real tmp431;
  modelica_real tmp432;
  modelica_real tmp433;
  modelica_real tmp434;
  modelica_real tmp435;
  modelica_real tmp436;
  modelica_real tmp437;
  modelica_real tmp438;
  modelica_real tmp439;
  modelica_real tmp440;
  modelica_real tmp441;
  modelica_real tmp442;
  modelica_real tmp443;
  modelica_real tmp444;
  modelica_real tmp445;
  modelica_real tmp446;
  modelica_real tmp447;
  modelica_real tmp448;
  modelica_real tmp449;
  modelica_real tmp450;
  modelica_real tmp451;
  modelica_real tmp452;
  modelica_real tmp453;
  modelica_real tmp454;
  modelica_real tmp455;
  modelica_real tmp456;
  modelica_real tmp457;
  modelica_real tmp458;
  modelica_real tmp459;
  modelica_real tmp460;
  modelica_real tmp461;
  modelica_real tmp462;
  modelica_real tmp463;
  modelica_real tmp464;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  real_array_alloc_copy(_OMC_LIT53, _n);
  
  real_array_alloc_copy(_OMC_LIT54, _I);
  
  real_array_alloc_copy(_OMC_LIT55, _J);
  
  _Tstar = 860.0;
  _pstar = 100000000.0;
  _hstar = 2800000.0;
  tmp1 = _pstar;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / pstar");}
  _pi = (_p) / tmp1;
  tmp2 = _hstar;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / hstar");}
  _eta = (_h) / tmp2;
  tmp3 = _pi + 0.298;
  tmp4 = real_array_get(_I, 1, ((modelica_integer) 1));
  if(tmp3 < 0.0 && tmp4 != 0.0)
  {
    tmp6 = modf(tmp4, &tmp7);
    
    if(tmp6 > 0.5)
    {
      tmp6 -= 1.0;
      tmp7 += 1.0;
    }
    else if(tmp6 < -0.5)
    {
      tmp6 += 1.0;
      tmp7 -= 1.0;
    }
    
    if(fabs(tmp6) < 1e-10)
      tmp5 = pow(tmp3, tmp7);
    else
    {
      tmp9 = modf(1.0/tmp4, &tmp8);
      if(tmp9 > 0.5)
      {
        tmp9 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp9 < -0.5)
      {
        tmp9 += 1.0;
        tmp8 -= 1.0;
      }
      if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
      {
        tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
      }
    }
  }
  else
  {
    tmp5 = pow(tmp3, tmp4);
  }
  if(isnan(tmp5) || isinf(tmp5))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
  }tmp10 = _eta - 0.72;
  tmp11 = real_array_get(_J, 1, ((modelica_integer) 1));
  if(tmp10 < 0.0 && tmp11 != 0.0)
  {
    tmp13 = modf(tmp11, &tmp14);
    
    if(tmp13 > 0.5)
    {
      tmp13 -= 1.0;
      tmp14 += 1.0;
    }
    else if(tmp13 < -0.5)
    {
      tmp13 += 1.0;
      tmp14 -= 1.0;
    }
    
    if(fabs(tmp13) < 1e-10)
      tmp12 = pow(tmp10, tmp14);
    else
    {
      tmp16 = modf(1.0/tmp11, &tmp15);
      if(tmp16 > 0.5)
      {
        tmp16 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp16 < -0.5)
      {
        tmp16 += 1.0;
        tmp15 -= 1.0;
      }
      if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
      {
        tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
    }
  }
  else
  {
    tmp12 = pow(tmp10, tmp11);
  }
  if(isnan(tmp12) || isinf(tmp12))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
  }tmp17 = _pi + 0.298;
  tmp18 = real_array_get(_I, 1, ((modelica_integer) 2));
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }tmp24 = _eta - 0.72;
  tmp25 = real_array_get(_J, 1, ((modelica_integer) 2));
  if(tmp24 < 0.0 && tmp25 != 0.0)
  {
    tmp27 = modf(tmp25, &tmp28);
    
    if(tmp27 > 0.5)
    {
      tmp27 -= 1.0;
      tmp28 += 1.0;
    }
    else if(tmp27 < -0.5)
    {
      tmp27 += 1.0;
      tmp28 -= 1.0;
    }
    
    if(fabs(tmp27) < 1e-10)
      tmp26 = pow(tmp24, tmp28);
    else
    {
      tmp30 = modf(1.0/tmp25, &tmp29);
      if(tmp30 > 0.5)
      {
        tmp30 -= 1.0;
        tmp29 += 1.0;
      }
      else if(tmp30 < -0.5)
      {
        tmp30 += 1.0;
        tmp29 -= 1.0;
      }
      if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
      {
        tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
    }
  }
  else
  {
    tmp26 = pow(tmp24, tmp25);
  }
  if(isnan(tmp26) || isinf(tmp26))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
  }tmp31 = _pi + 0.298;
  tmp32 = real_array_get(_I, 1, ((modelica_integer) 3));
  if(tmp31 < 0.0 && tmp32 != 0.0)
  {
    tmp34 = modf(tmp32, &tmp35);
    
    if(tmp34 > 0.5)
    {
      tmp34 -= 1.0;
      tmp35 += 1.0;
    }
    else if(tmp34 < -0.5)
    {
      tmp34 += 1.0;
      tmp35 -= 1.0;
    }
    
    if(fabs(tmp34) < 1e-10)
      tmp33 = pow(tmp31, tmp35);
    else
    {
      tmp37 = modf(1.0/tmp32, &tmp36);
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp36 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp36 -= 1.0;
      }
      if(fabs(tmp37) < 1e-10 && ((unsigned long)tmp36 & 1))
      {
        tmp33 = -pow(-tmp31, tmp34)*pow(tmp31, tmp35);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
      }
    }
  }
  else
  {
    tmp33 = pow(tmp31, tmp32);
  }
  if(isnan(tmp33) || isinf(tmp33))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
  }tmp38 = _eta - 0.72;
  tmp39 = real_array_get(_J, 1, ((modelica_integer) 3));
  if(tmp38 < 0.0 && tmp39 != 0.0)
  {
    tmp41 = modf(tmp39, &tmp42);
    
    if(tmp41 > 0.5)
    {
      tmp41 -= 1.0;
      tmp42 += 1.0;
    }
    else if(tmp41 < -0.5)
    {
      tmp41 += 1.0;
      tmp42 -= 1.0;
    }
    
    if(fabs(tmp41) < 1e-10)
      tmp40 = pow(tmp38, tmp42);
    else
    {
      tmp44 = modf(1.0/tmp39, &tmp43);
      if(tmp44 > 0.5)
      {
        tmp44 -= 1.0;
        tmp43 += 1.0;
      }
      else if(tmp44 < -0.5)
      {
        tmp44 += 1.0;
        tmp43 -= 1.0;
      }
      if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
      {
        tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
      }
    }
  }
  else
  {
    tmp40 = pow(tmp38, tmp39);
  }
  if(isnan(tmp40) || isinf(tmp40))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
  }tmp45 = _pi + 0.298;
  tmp46 = real_array_get(_I, 1, ((modelica_integer) 4));
  if(tmp45 < 0.0 && tmp46 != 0.0)
  {
    tmp48 = modf(tmp46, &tmp49);
    
    if(tmp48 > 0.5)
    {
      tmp48 -= 1.0;
      tmp49 += 1.0;
    }
    else if(tmp48 < -0.5)
    {
      tmp48 += 1.0;
      tmp49 -= 1.0;
    }
    
    if(fabs(tmp48) < 1e-10)
      tmp47 = pow(tmp45, tmp49);
    else
    {
      tmp51 = modf(1.0/tmp46, &tmp50);
      if(tmp51 > 0.5)
      {
        tmp51 -= 1.0;
        tmp50 += 1.0;
      }
      else if(tmp51 < -0.5)
      {
        tmp51 += 1.0;
        tmp50 -= 1.0;
      }
      if(fabs(tmp51) < 1e-10 && ((unsigned long)tmp50 & 1))
      {
        tmp47 = -pow(-tmp45, tmp48)*pow(tmp45, tmp49);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
      }
    }
  }
  else
  {
    tmp47 = pow(tmp45, tmp46);
  }
  if(isnan(tmp47) || isinf(tmp47))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
  }tmp52 = _eta - 0.72;
  tmp53 = real_array_get(_J, 1, ((modelica_integer) 4));
  if(tmp52 < 0.0 && tmp53 != 0.0)
  {
    tmp55 = modf(tmp53, &tmp56);
    
    if(tmp55 > 0.5)
    {
      tmp55 -= 1.0;
      tmp56 += 1.0;
    }
    else if(tmp55 < -0.5)
    {
      tmp55 += 1.0;
      tmp56 -= 1.0;
    }
    
    if(fabs(tmp55) < 1e-10)
      tmp54 = pow(tmp52, tmp56);
    else
    {
      tmp58 = modf(1.0/tmp53, &tmp57);
      if(tmp58 > 0.5)
      {
        tmp58 -= 1.0;
        tmp57 += 1.0;
      }
      else if(tmp58 < -0.5)
      {
        tmp58 += 1.0;
        tmp57 -= 1.0;
      }
      if(fabs(tmp58) < 1e-10 && ((unsigned long)tmp57 & 1))
      {
        tmp54 = -pow(-tmp52, tmp55)*pow(tmp52, tmp56);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
      }
    }
  }
  else
  {
    tmp54 = pow(tmp52, tmp53);
  }
  if(isnan(tmp54) || isinf(tmp54))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
  }tmp59 = _pi + 0.298;
  tmp60 = real_array_get(_I, 1, ((modelica_integer) 5));
  if(tmp59 < 0.0 && tmp60 != 0.0)
  {
    tmp62 = modf(tmp60, &tmp63);
    
    if(tmp62 > 0.5)
    {
      tmp62 -= 1.0;
      tmp63 += 1.0;
    }
    else if(tmp62 < -0.5)
    {
      tmp62 += 1.0;
      tmp63 -= 1.0;
    }
    
    if(fabs(tmp62) < 1e-10)
      tmp61 = pow(tmp59, tmp63);
    else
    {
      tmp65 = modf(1.0/tmp60, &tmp64);
      if(tmp65 > 0.5)
      {
        tmp65 -= 1.0;
        tmp64 += 1.0;
      }
      else if(tmp65 < -0.5)
      {
        tmp65 += 1.0;
        tmp64 -= 1.0;
      }
      if(fabs(tmp65) < 1e-10 && ((unsigned long)tmp64 & 1))
      {
        tmp61 = -pow(-tmp59, tmp62)*pow(tmp59, tmp63);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
      }
    }
  }
  else
  {
    tmp61 = pow(tmp59, tmp60);
  }
  if(isnan(tmp61) || isinf(tmp61))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
  }tmp66 = _eta - 0.72;
  tmp67 = real_array_get(_J, 1, ((modelica_integer) 5));
  if(tmp66 < 0.0 && tmp67 != 0.0)
  {
    tmp69 = modf(tmp67, &tmp70);
    
    if(tmp69 > 0.5)
    {
      tmp69 -= 1.0;
      tmp70 += 1.0;
    }
    else if(tmp69 < -0.5)
    {
      tmp69 += 1.0;
      tmp70 -= 1.0;
    }
    
    if(fabs(tmp69) < 1e-10)
      tmp68 = pow(tmp66, tmp70);
    else
    {
      tmp72 = modf(1.0/tmp67, &tmp71);
      if(tmp72 > 0.5)
      {
        tmp72 -= 1.0;
        tmp71 += 1.0;
      }
      else if(tmp72 < -0.5)
      {
        tmp72 += 1.0;
        tmp71 -= 1.0;
      }
      if(fabs(tmp72) < 1e-10 && ((unsigned long)tmp71 & 1))
      {
        tmp68 = -pow(-tmp66, tmp69)*pow(tmp66, tmp70);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
      }
    }
  }
  else
  {
    tmp68 = pow(tmp66, tmp67);
  }
  if(isnan(tmp68) || isinf(tmp68))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
  }tmp73 = _pi + 0.298;
  tmp74 = real_array_get(_I, 1, ((modelica_integer) 6));
  if(tmp73 < 0.0 && tmp74 != 0.0)
  {
    tmp76 = modf(tmp74, &tmp77);
    
    if(tmp76 > 0.5)
    {
      tmp76 -= 1.0;
      tmp77 += 1.0;
    }
    else if(tmp76 < -0.5)
    {
      tmp76 += 1.0;
      tmp77 -= 1.0;
    }
    
    if(fabs(tmp76) < 1e-10)
      tmp75 = pow(tmp73, tmp77);
    else
    {
      tmp79 = modf(1.0/tmp74, &tmp78);
      if(tmp79 > 0.5)
      {
        tmp79 -= 1.0;
        tmp78 += 1.0;
      }
      else if(tmp79 < -0.5)
      {
        tmp79 += 1.0;
        tmp78 -= 1.0;
      }
      if(fabs(tmp79) < 1e-10 && ((unsigned long)tmp78 & 1))
      {
        tmp75 = -pow(-tmp73, tmp76)*pow(tmp73, tmp77);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
      }
    }
  }
  else
  {
    tmp75 = pow(tmp73, tmp74);
  }
  if(isnan(tmp75) || isinf(tmp75))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
  }tmp80 = _eta - 0.72;
  tmp81 = real_array_get(_J, 1, ((modelica_integer) 6));
  if(tmp80 < 0.0 && tmp81 != 0.0)
  {
    tmp83 = modf(tmp81, &tmp84);
    
    if(tmp83 > 0.5)
    {
      tmp83 -= 1.0;
      tmp84 += 1.0;
    }
    else if(tmp83 < -0.5)
    {
      tmp83 += 1.0;
      tmp84 -= 1.0;
    }
    
    if(fabs(tmp83) < 1e-10)
      tmp82 = pow(tmp80, tmp84);
    else
    {
      tmp86 = modf(1.0/tmp81, &tmp85);
      if(tmp86 > 0.5)
      {
        tmp86 -= 1.0;
        tmp85 += 1.0;
      }
      else if(tmp86 < -0.5)
      {
        tmp86 += 1.0;
        tmp85 -= 1.0;
      }
      if(fabs(tmp86) < 1e-10 && ((unsigned long)tmp85 & 1))
      {
        tmp82 = -pow(-tmp80, tmp83)*pow(tmp80, tmp84);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
      }
    }
  }
  else
  {
    tmp82 = pow(tmp80, tmp81);
  }
  if(isnan(tmp82) || isinf(tmp82))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
  }tmp87 = _pi + 0.298;
  tmp88 = real_array_get(_I, 1, ((modelica_integer) 7));
  if(tmp87 < 0.0 && tmp88 != 0.0)
  {
    tmp90 = modf(tmp88, &tmp91);
    
    if(tmp90 > 0.5)
    {
      tmp90 -= 1.0;
      tmp91 += 1.0;
    }
    else if(tmp90 < -0.5)
    {
      tmp90 += 1.0;
      tmp91 -= 1.0;
    }
    
    if(fabs(tmp90) < 1e-10)
      tmp89 = pow(tmp87, tmp91);
    else
    {
      tmp93 = modf(1.0/tmp88, &tmp92);
      if(tmp93 > 0.5)
      {
        tmp93 -= 1.0;
        tmp92 += 1.0;
      }
      else if(tmp93 < -0.5)
      {
        tmp93 += 1.0;
        tmp92 -= 1.0;
      }
      if(fabs(tmp93) < 1e-10 && ((unsigned long)tmp92 & 1))
      {
        tmp89 = -pow(-tmp87, tmp90)*pow(tmp87, tmp91);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
      }
    }
  }
  else
  {
    tmp89 = pow(tmp87, tmp88);
  }
  if(isnan(tmp89) || isinf(tmp89))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
  }tmp94 = _eta - 0.72;
  tmp95 = real_array_get(_J, 1, ((modelica_integer) 7));
  if(tmp94 < 0.0 && tmp95 != 0.0)
  {
    tmp97 = modf(tmp95, &tmp98);
    
    if(tmp97 > 0.5)
    {
      tmp97 -= 1.0;
      tmp98 += 1.0;
    }
    else if(tmp97 < -0.5)
    {
      tmp97 += 1.0;
      tmp98 -= 1.0;
    }
    
    if(fabs(tmp97) < 1e-10)
      tmp96 = pow(tmp94, tmp98);
    else
    {
      tmp100 = modf(1.0/tmp95, &tmp99);
      if(tmp100 > 0.5)
      {
        tmp100 -= 1.0;
        tmp99 += 1.0;
      }
      else if(tmp100 < -0.5)
      {
        tmp100 += 1.0;
        tmp99 -= 1.0;
      }
      if(fabs(tmp100) < 1e-10 && ((unsigned long)tmp99 & 1))
      {
        tmp96 = -pow(-tmp94, tmp97)*pow(tmp94, tmp98);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
      }
    }
  }
  else
  {
    tmp96 = pow(tmp94, tmp95);
  }
  if(isnan(tmp96) || isinf(tmp96))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
  }tmp101 = _pi + 0.298;
  tmp102 = real_array_get(_I, 1, ((modelica_integer) 8));
  if(tmp101 < 0.0 && tmp102 != 0.0)
  {
    tmp104 = modf(tmp102, &tmp105);
    
    if(tmp104 > 0.5)
    {
      tmp104 -= 1.0;
      tmp105 += 1.0;
    }
    else if(tmp104 < -0.5)
    {
      tmp104 += 1.0;
      tmp105 -= 1.0;
    }
    
    if(fabs(tmp104) < 1e-10)
      tmp103 = pow(tmp101, tmp105);
    else
    {
      tmp107 = modf(1.0/tmp102, &tmp106);
      if(tmp107 > 0.5)
      {
        tmp107 -= 1.0;
        tmp106 += 1.0;
      }
      else if(tmp107 < -0.5)
      {
        tmp107 += 1.0;
        tmp106 -= 1.0;
      }
      if(fabs(tmp107) < 1e-10 && ((unsigned long)tmp106 & 1))
      {
        tmp103 = -pow(-tmp101, tmp104)*pow(tmp101, tmp105);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
      }
    }
  }
  else
  {
    tmp103 = pow(tmp101, tmp102);
  }
  if(isnan(tmp103) || isinf(tmp103))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
  }tmp108 = _eta - 0.72;
  tmp109 = real_array_get(_J, 1, ((modelica_integer) 8));
  if(tmp108 < 0.0 && tmp109 != 0.0)
  {
    tmp111 = modf(tmp109, &tmp112);
    
    if(tmp111 > 0.5)
    {
      tmp111 -= 1.0;
      tmp112 += 1.0;
    }
    else if(tmp111 < -0.5)
    {
      tmp111 += 1.0;
      tmp112 -= 1.0;
    }
    
    if(fabs(tmp111) < 1e-10)
      tmp110 = pow(tmp108, tmp112);
    else
    {
      tmp114 = modf(1.0/tmp109, &tmp113);
      if(tmp114 > 0.5)
      {
        tmp114 -= 1.0;
        tmp113 += 1.0;
      }
      else if(tmp114 < -0.5)
      {
        tmp114 += 1.0;
        tmp113 -= 1.0;
      }
      if(fabs(tmp114) < 1e-10 && ((unsigned long)tmp113 & 1))
      {
        tmp110 = -pow(-tmp108, tmp111)*pow(tmp108, tmp112);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
      }
    }
  }
  else
  {
    tmp110 = pow(tmp108, tmp109);
  }
  if(isnan(tmp110) || isinf(tmp110))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
  }tmp115 = _pi + 0.298;
  tmp116 = real_array_get(_I, 1, ((modelica_integer) 9));
  if(tmp115 < 0.0 && tmp116 != 0.0)
  {
    tmp118 = modf(tmp116, &tmp119);
    
    if(tmp118 > 0.5)
    {
      tmp118 -= 1.0;
      tmp119 += 1.0;
    }
    else if(tmp118 < -0.5)
    {
      tmp118 += 1.0;
      tmp119 -= 1.0;
    }
    
    if(fabs(tmp118) < 1e-10)
      tmp117 = pow(tmp115, tmp119);
    else
    {
      tmp121 = modf(1.0/tmp116, &tmp120);
      if(tmp121 > 0.5)
      {
        tmp121 -= 1.0;
        tmp120 += 1.0;
      }
      else if(tmp121 < -0.5)
      {
        tmp121 += 1.0;
        tmp120 -= 1.0;
      }
      if(fabs(tmp121) < 1e-10 && ((unsigned long)tmp120 & 1))
      {
        tmp117 = -pow(-tmp115, tmp118)*pow(tmp115, tmp119);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
      }
    }
  }
  else
  {
    tmp117 = pow(tmp115, tmp116);
  }
  if(isnan(tmp117) || isinf(tmp117))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
  }tmp122 = _eta - 0.72;
  tmp123 = real_array_get(_J, 1, ((modelica_integer) 9));
  if(tmp122 < 0.0 && tmp123 != 0.0)
  {
    tmp125 = modf(tmp123, &tmp126);
    
    if(tmp125 > 0.5)
    {
      tmp125 -= 1.0;
      tmp126 += 1.0;
    }
    else if(tmp125 < -0.5)
    {
      tmp125 += 1.0;
      tmp126 -= 1.0;
    }
    
    if(fabs(tmp125) < 1e-10)
      tmp124 = pow(tmp122, tmp126);
    else
    {
      tmp128 = modf(1.0/tmp123, &tmp127);
      if(tmp128 > 0.5)
      {
        tmp128 -= 1.0;
        tmp127 += 1.0;
      }
      else if(tmp128 < -0.5)
      {
        tmp128 += 1.0;
        tmp127 -= 1.0;
      }
      if(fabs(tmp128) < 1e-10 && ((unsigned long)tmp127 & 1))
      {
        tmp124 = -pow(-tmp122, tmp125)*pow(tmp122, tmp126);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
      }
    }
  }
  else
  {
    tmp124 = pow(tmp122, tmp123);
  }
  if(isnan(tmp124) || isinf(tmp124))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
  }tmp129 = _pi + 0.298;
  tmp130 = real_array_get(_I, 1, ((modelica_integer) 10));
  if(tmp129 < 0.0 && tmp130 != 0.0)
  {
    tmp132 = modf(tmp130, &tmp133);
    
    if(tmp132 > 0.5)
    {
      tmp132 -= 1.0;
      tmp133 += 1.0;
    }
    else if(tmp132 < -0.5)
    {
      tmp132 += 1.0;
      tmp133 -= 1.0;
    }
    
    if(fabs(tmp132) < 1e-10)
      tmp131 = pow(tmp129, tmp133);
    else
    {
      tmp135 = modf(1.0/tmp130, &tmp134);
      if(tmp135 > 0.5)
      {
        tmp135 -= 1.0;
        tmp134 += 1.0;
      }
      else if(tmp135 < -0.5)
      {
        tmp135 += 1.0;
        tmp134 -= 1.0;
      }
      if(fabs(tmp135) < 1e-10 && ((unsigned long)tmp134 & 1))
      {
        tmp131 = -pow(-tmp129, tmp132)*pow(tmp129, tmp133);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
      }
    }
  }
  else
  {
    tmp131 = pow(tmp129, tmp130);
  }
  if(isnan(tmp131) || isinf(tmp131))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
  }tmp136 = _eta - 0.72;
  tmp137 = real_array_get(_J, 1, ((modelica_integer) 10));
  if(tmp136 < 0.0 && tmp137 != 0.0)
  {
    tmp139 = modf(tmp137, &tmp140);
    
    if(tmp139 > 0.5)
    {
      tmp139 -= 1.0;
      tmp140 += 1.0;
    }
    else if(tmp139 < -0.5)
    {
      tmp139 += 1.0;
      tmp140 -= 1.0;
    }
    
    if(fabs(tmp139) < 1e-10)
      tmp138 = pow(tmp136, tmp140);
    else
    {
      tmp142 = modf(1.0/tmp137, &tmp141);
      if(tmp142 > 0.5)
      {
        tmp142 -= 1.0;
        tmp141 += 1.0;
      }
      else if(tmp142 < -0.5)
      {
        tmp142 += 1.0;
        tmp141 -= 1.0;
      }
      if(fabs(tmp142) < 1e-10 && ((unsigned long)tmp141 & 1))
      {
        tmp138 = -pow(-tmp136, tmp139)*pow(tmp136, tmp140);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
      }
    }
  }
  else
  {
    tmp138 = pow(tmp136, tmp137);
  }
  if(isnan(tmp138) || isinf(tmp138))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
  }tmp143 = _pi + 0.298;
  tmp144 = real_array_get(_I, 1, ((modelica_integer) 11));
  if(tmp143 < 0.0 && tmp144 != 0.0)
  {
    tmp146 = modf(tmp144, &tmp147);
    
    if(tmp146 > 0.5)
    {
      tmp146 -= 1.0;
      tmp147 += 1.0;
    }
    else if(tmp146 < -0.5)
    {
      tmp146 += 1.0;
      tmp147 -= 1.0;
    }
    
    if(fabs(tmp146) < 1e-10)
      tmp145 = pow(tmp143, tmp147);
    else
    {
      tmp149 = modf(1.0/tmp144, &tmp148);
      if(tmp149 > 0.5)
      {
        tmp149 -= 1.0;
        tmp148 += 1.0;
      }
      else if(tmp149 < -0.5)
      {
        tmp149 += 1.0;
        tmp148 -= 1.0;
      }
      if(fabs(tmp149) < 1e-10 && ((unsigned long)tmp148 & 1))
      {
        tmp145 = -pow(-tmp143, tmp146)*pow(tmp143, tmp147);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
      }
    }
  }
  else
  {
    tmp145 = pow(tmp143, tmp144);
  }
  if(isnan(tmp145) || isinf(tmp145))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
  }tmp150 = _eta - 0.72;
  tmp151 = real_array_get(_J, 1, ((modelica_integer) 11));
  if(tmp150 < 0.0 && tmp151 != 0.0)
  {
    tmp153 = modf(tmp151, &tmp154);
    
    if(tmp153 > 0.5)
    {
      tmp153 -= 1.0;
      tmp154 += 1.0;
    }
    else if(tmp153 < -0.5)
    {
      tmp153 += 1.0;
      tmp154 -= 1.0;
    }
    
    if(fabs(tmp153) < 1e-10)
      tmp152 = pow(tmp150, tmp154);
    else
    {
      tmp156 = modf(1.0/tmp151, &tmp155);
      if(tmp156 > 0.5)
      {
        tmp156 -= 1.0;
        tmp155 += 1.0;
      }
      else if(tmp156 < -0.5)
      {
        tmp156 += 1.0;
        tmp155 -= 1.0;
      }
      if(fabs(tmp156) < 1e-10 && ((unsigned long)tmp155 & 1))
      {
        tmp152 = -pow(-tmp150, tmp153)*pow(tmp150, tmp154);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
      }
    }
  }
  else
  {
    tmp152 = pow(tmp150, tmp151);
  }
  if(isnan(tmp152) || isinf(tmp152))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
  }tmp157 = _pi + 0.298;
  tmp158 = real_array_get(_I, 1, ((modelica_integer) 12));
  if(tmp157 < 0.0 && tmp158 != 0.0)
  {
    tmp160 = modf(tmp158, &tmp161);
    
    if(tmp160 > 0.5)
    {
      tmp160 -= 1.0;
      tmp161 += 1.0;
    }
    else if(tmp160 < -0.5)
    {
      tmp160 += 1.0;
      tmp161 -= 1.0;
    }
    
    if(fabs(tmp160) < 1e-10)
      tmp159 = pow(tmp157, tmp161);
    else
    {
      tmp163 = modf(1.0/tmp158, &tmp162);
      if(tmp163 > 0.5)
      {
        tmp163 -= 1.0;
        tmp162 += 1.0;
      }
      else if(tmp163 < -0.5)
      {
        tmp163 += 1.0;
        tmp162 -= 1.0;
      }
      if(fabs(tmp163) < 1e-10 && ((unsigned long)tmp162 & 1))
      {
        tmp159 = -pow(-tmp157, tmp160)*pow(tmp157, tmp161);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
      }
    }
  }
  else
  {
    tmp159 = pow(tmp157, tmp158);
  }
  if(isnan(tmp159) || isinf(tmp159))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
  }tmp164 = _eta - 0.72;
  tmp165 = real_array_get(_J, 1, ((modelica_integer) 12));
  if(tmp164 < 0.0 && tmp165 != 0.0)
  {
    tmp167 = modf(tmp165, &tmp168);
    
    if(tmp167 > 0.5)
    {
      tmp167 -= 1.0;
      tmp168 += 1.0;
    }
    else if(tmp167 < -0.5)
    {
      tmp167 += 1.0;
      tmp168 -= 1.0;
    }
    
    if(fabs(tmp167) < 1e-10)
      tmp166 = pow(tmp164, tmp168);
    else
    {
      tmp170 = modf(1.0/tmp165, &tmp169);
      if(tmp170 > 0.5)
      {
        tmp170 -= 1.0;
        tmp169 += 1.0;
      }
      else if(tmp170 < -0.5)
      {
        tmp170 += 1.0;
        tmp169 -= 1.0;
      }
      if(fabs(tmp170) < 1e-10 && ((unsigned long)tmp169 & 1))
      {
        tmp166 = -pow(-tmp164, tmp167)*pow(tmp164, tmp168);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
      }
    }
  }
  else
  {
    tmp166 = pow(tmp164, tmp165);
  }
  if(isnan(tmp166) || isinf(tmp166))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
  }tmp171 = _pi + 0.298;
  tmp172 = real_array_get(_I, 1, ((modelica_integer) 13));
  if(tmp171 < 0.0 && tmp172 != 0.0)
  {
    tmp174 = modf(tmp172, &tmp175);
    
    if(tmp174 > 0.5)
    {
      tmp174 -= 1.0;
      tmp175 += 1.0;
    }
    else if(tmp174 < -0.5)
    {
      tmp174 += 1.0;
      tmp175 -= 1.0;
    }
    
    if(fabs(tmp174) < 1e-10)
      tmp173 = pow(tmp171, tmp175);
    else
    {
      tmp177 = modf(1.0/tmp172, &tmp176);
      if(tmp177 > 0.5)
      {
        tmp177 -= 1.0;
        tmp176 += 1.0;
      }
      else if(tmp177 < -0.5)
      {
        tmp177 += 1.0;
        tmp176 -= 1.0;
      }
      if(fabs(tmp177) < 1e-10 && ((unsigned long)tmp176 & 1))
      {
        tmp173 = -pow(-tmp171, tmp174)*pow(tmp171, tmp175);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
      }
    }
  }
  else
  {
    tmp173 = pow(tmp171, tmp172);
  }
  if(isnan(tmp173) || isinf(tmp173))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
  }tmp178 = _eta - 0.72;
  tmp179 = real_array_get(_J, 1, ((modelica_integer) 13));
  if(tmp178 < 0.0 && tmp179 != 0.0)
  {
    tmp181 = modf(tmp179, &tmp182);
    
    if(tmp181 > 0.5)
    {
      tmp181 -= 1.0;
      tmp182 += 1.0;
    }
    else if(tmp181 < -0.5)
    {
      tmp181 += 1.0;
      tmp182 -= 1.0;
    }
    
    if(fabs(tmp181) < 1e-10)
      tmp180 = pow(tmp178, tmp182);
    else
    {
      tmp184 = modf(1.0/tmp179, &tmp183);
      if(tmp184 > 0.5)
      {
        tmp184 -= 1.0;
        tmp183 += 1.0;
      }
      else if(tmp184 < -0.5)
      {
        tmp184 += 1.0;
        tmp183 -= 1.0;
      }
      if(fabs(tmp184) < 1e-10 && ((unsigned long)tmp183 & 1))
      {
        tmp180 = -pow(-tmp178, tmp181)*pow(tmp178, tmp182);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
      }
    }
  }
  else
  {
    tmp180 = pow(tmp178, tmp179);
  }
  if(isnan(tmp180) || isinf(tmp180))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
  }tmp185 = _pi + 0.298;
  tmp186 = real_array_get(_I, 1, ((modelica_integer) 14));
  if(tmp185 < 0.0 && tmp186 != 0.0)
  {
    tmp188 = modf(tmp186, &tmp189);
    
    if(tmp188 > 0.5)
    {
      tmp188 -= 1.0;
      tmp189 += 1.0;
    }
    else if(tmp188 < -0.5)
    {
      tmp188 += 1.0;
      tmp189 -= 1.0;
    }
    
    if(fabs(tmp188) < 1e-10)
      tmp187 = pow(tmp185, tmp189);
    else
    {
      tmp191 = modf(1.0/tmp186, &tmp190);
      if(tmp191 > 0.5)
      {
        tmp191 -= 1.0;
        tmp190 += 1.0;
      }
      else if(tmp191 < -0.5)
      {
        tmp191 += 1.0;
        tmp190 -= 1.0;
      }
      if(fabs(tmp191) < 1e-10 && ((unsigned long)tmp190 & 1))
      {
        tmp187 = -pow(-tmp185, tmp188)*pow(tmp185, tmp189);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
      }
    }
  }
  else
  {
    tmp187 = pow(tmp185, tmp186);
  }
  if(isnan(tmp187) || isinf(tmp187))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
  }tmp192 = _eta - 0.72;
  tmp193 = real_array_get(_J, 1, ((modelica_integer) 14));
  if(tmp192 < 0.0 && tmp193 != 0.0)
  {
    tmp195 = modf(tmp193, &tmp196);
    
    if(tmp195 > 0.5)
    {
      tmp195 -= 1.0;
      tmp196 += 1.0;
    }
    else if(tmp195 < -0.5)
    {
      tmp195 += 1.0;
      tmp196 -= 1.0;
    }
    
    if(fabs(tmp195) < 1e-10)
      tmp194 = pow(tmp192, tmp196);
    else
    {
      tmp198 = modf(1.0/tmp193, &tmp197);
      if(tmp198 > 0.5)
      {
        tmp198 -= 1.0;
        tmp197 += 1.0;
      }
      else if(tmp198 < -0.5)
      {
        tmp198 += 1.0;
        tmp197 -= 1.0;
      }
      if(fabs(tmp198) < 1e-10 && ((unsigned long)tmp197 & 1))
      {
        tmp194 = -pow(-tmp192, tmp195)*pow(tmp192, tmp196);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
      }
    }
  }
  else
  {
    tmp194 = pow(tmp192, tmp193);
  }
  if(isnan(tmp194) || isinf(tmp194))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
  }tmp199 = _pi + 0.298;
  tmp200 = real_array_get(_I, 1, ((modelica_integer) 15));
  if(tmp199 < 0.0 && tmp200 != 0.0)
  {
    tmp202 = modf(tmp200, &tmp203);
    
    if(tmp202 > 0.5)
    {
      tmp202 -= 1.0;
      tmp203 += 1.0;
    }
    else if(tmp202 < -0.5)
    {
      tmp202 += 1.0;
      tmp203 -= 1.0;
    }
    
    if(fabs(tmp202) < 1e-10)
      tmp201 = pow(tmp199, tmp203);
    else
    {
      tmp205 = modf(1.0/tmp200, &tmp204);
      if(tmp205 > 0.5)
      {
        tmp205 -= 1.0;
        tmp204 += 1.0;
      }
      else if(tmp205 < -0.5)
      {
        tmp205 += 1.0;
        tmp204 -= 1.0;
      }
      if(fabs(tmp205) < 1e-10 && ((unsigned long)tmp204 & 1))
      {
        tmp201 = -pow(-tmp199, tmp202)*pow(tmp199, tmp203);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
      }
    }
  }
  else
  {
    tmp201 = pow(tmp199, tmp200);
  }
  if(isnan(tmp201) || isinf(tmp201))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
  }tmp206 = _eta - 0.72;
  tmp207 = real_array_get(_J, 1, ((modelica_integer) 15));
  if(tmp206 < 0.0 && tmp207 != 0.0)
  {
    tmp209 = modf(tmp207, &tmp210);
    
    if(tmp209 > 0.5)
    {
      tmp209 -= 1.0;
      tmp210 += 1.0;
    }
    else if(tmp209 < -0.5)
    {
      tmp209 += 1.0;
      tmp210 -= 1.0;
    }
    
    if(fabs(tmp209) < 1e-10)
      tmp208 = pow(tmp206, tmp210);
    else
    {
      tmp212 = modf(1.0/tmp207, &tmp211);
      if(tmp212 > 0.5)
      {
        tmp212 -= 1.0;
        tmp211 += 1.0;
      }
      else if(tmp212 < -0.5)
      {
        tmp212 += 1.0;
        tmp211 -= 1.0;
      }
      if(fabs(tmp212) < 1e-10 && ((unsigned long)tmp211 & 1))
      {
        tmp208 = -pow(-tmp206, tmp209)*pow(tmp206, tmp210);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
      }
    }
  }
  else
  {
    tmp208 = pow(tmp206, tmp207);
  }
  if(isnan(tmp208) || isinf(tmp208))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
  }tmp213 = _pi + 0.298;
  tmp214 = real_array_get(_I, 1, ((modelica_integer) 16));
  if(tmp213 < 0.0 && tmp214 != 0.0)
  {
    tmp216 = modf(tmp214, &tmp217);
    
    if(tmp216 > 0.5)
    {
      tmp216 -= 1.0;
      tmp217 += 1.0;
    }
    else if(tmp216 < -0.5)
    {
      tmp216 += 1.0;
      tmp217 -= 1.0;
    }
    
    if(fabs(tmp216) < 1e-10)
      tmp215 = pow(tmp213, tmp217);
    else
    {
      tmp219 = modf(1.0/tmp214, &tmp218);
      if(tmp219 > 0.5)
      {
        tmp219 -= 1.0;
        tmp218 += 1.0;
      }
      else if(tmp219 < -0.5)
      {
        tmp219 += 1.0;
        tmp218 -= 1.0;
      }
      if(fabs(tmp219) < 1e-10 && ((unsigned long)tmp218 & 1))
      {
        tmp215 = -pow(-tmp213, tmp216)*pow(tmp213, tmp217);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
      }
    }
  }
  else
  {
    tmp215 = pow(tmp213, tmp214);
  }
  if(isnan(tmp215) || isinf(tmp215))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
  }tmp220 = _eta - 0.72;
  tmp221 = real_array_get(_J, 1, ((modelica_integer) 16));
  if(tmp220 < 0.0 && tmp221 != 0.0)
  {
    tmp223 = modf(tmp221, &tmp224);
    
    if(tmp223 > 0.5)
    {
      tmp223 -= 1.0;
      tmp224 += 1.0;
    }
    else if(tmp223 < -0.5)
    {
      tmp223 += 1.0;
      tmp224 -= 1.0;
    }
    
    if(fabs(tmp223) < 1e-10)
      tmp222 = pow(tmp220, tmp224);
    else
    {
      tmp226 = modf(1.0/tmp221, &tmp225);
      if(tmp226 > 0.5)
      {
        tmp226 -= 1.0;
        tmp225 += 1.0;
      }
      else if(tmp226 < -0.5)
      {
        tmp226 += 1.0;
        tmp225 -= 1.0;
      }
      if(fabs(tmp226) < 1e-10 && ((unsigned long)tmp225 & 1))
      {
        tmp222 = -pow(-tmp220, tmp223)*pow(tmp220, tmp224);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
      }
    }
  }
  else
  {
    tmp222 = pow(tmp220, tmp221);
  }
  if(isnan(tmp222) || isinf(tmp222))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
  }tmp227 = _pi + 0.298;
  tmp228 = real_array_get(_I, 1, ((modelica_integer) 17));
  if(tmp227 < 0.0 && tmp228 != 0.0)
  {
    tmp230 = modf(tmp228, &tmp231);
    
    if(tmp230 > 0.5)
    {
      tmp230 -= 1.0;
      tmp231 += 1.0;
    }
    else if(tmp230 < -0.5)
    {
      tmp230 += 1.0;
      tmp231 -= 1.0;
    }
    
    if(fabs(tmp230) < 1e-10)
      tmp229 = pow(tmp227, tmp231);
    else
    {
      tmp233 = modf(1.0/tmp228, &tmp232);
      if(tmp233 > 0.5)
      {
        tmp233 -= 1.0;
        tmp232 += 1.0;
      }
      else if(tmp233 < -0.5)
      {
        tmp233 += 1.0;
        tmp232 -= 1.0;
      }
      if(fabs(tmp233) < 1e-10 && ((unsigned long)tmp232 & 1))
      {
        tmp229 = -pow(-tmp227, tmp230)*pow(tmp227, tmp231);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
      }
    }
  }
  else
  {
    tmp229 = pow(tmp227, tmp228);
  }
  if(isnan(tmp229) || isinf(tmp229))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
  }tmp234 = _eta - 0.72;
  tmp235 = real_array_get(_J, 1, ((modelica_integer) 17));
  if(tmp234 < 0.0 && tmp235 != 0.0)
  {
    tmp237 = modf(tmp235, &tmp238);
    
    if(tmp237 > 0.5)
    {
      tmp237 -= 1.0;
      tmp238 += 1.0;
    }
    else if(tmp237 < -0.5)
    {
      tmp237 += 1.0;
      tmp238 -= 1.0;
    }
    
    if(fabs(tmp237) < 1e-10)
      tmp236 = pow(tmp234, tmp238);
    else
    {
      tmp240 = modf(1.0/tmp235, &tmp239);
      if(tmp240 > 0.5)
      {
        tmp240 -= 1.0;
        tmp239 += 1.0;
      }
      else if(tmp240 < -0.5)
      {
        tmp240 += 1.0;
        tmp239 -= 1.0;
      }
      if(fabs(tmp240) < 1e-10 && ((unsigned long)tmp239 & 1))
      {
        tmp236 = -pow(-tmp234, tmp237)*pow(tmp234, tmp238);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
      }
    }
  }
  else
  {
    tmp236 = pow(tmp234, tmp235);
  }
  if(isnan(tmp236) || isinf(tmp236))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
  }tmp241 = _pi + 0.298;
  tmp242 = real_array_get(_I, 1, ((modelica_integer) 18));
  if(tmp241 < 0.0 && tmp242 != 0.0)
  {
    tmp244 = modf(tmp242, &tmp245);
    
    if(tmp244 > 0.5)
    {
      tmp244 -= 1.0;
      tmp245 += 1.0;
    }
    else if(tmp244 < -0.5)
    {
      tmp244 += 1.0;
      tmp245 -= 1.0;
    }
    
    if(fabs(tmp244) < 1e-10)
      tmp243 = pow(tmp241, tmp245);
    else
    {
      tmp247 = modf(1.0/tmp242, &tmp246);
      if(tmp247 > 0.5)
      {
        tmp247 -= 1.0;
        tmp246 += 1.0;
      }
      else if(tmp247 < -0.5)
      {
        tmp247 += 1.0;
        tmp246 -= 1.0;
      }
      if(fabs(tmp247) < 1e-10 && ((unsigned long)tmp246 & 1))
      {
        tmp243 = -pow(-tmp241, tmp244)*pow(tmp241, tmp245);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
      }
    }
  }
  else
  {
    tmp243 = pow(tmp241, tmp242);
  }
  if(isnan(tmp243) || isinf(tmp243))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
  }tmp248 = _eta - 0.72;
  tmp249 = real_array_get(_J, 1, ((modelica_integer) 18));
  if(tmp248 < 0.0 && tmp249 != 0.0)
  {
    tmp251 = modf(tmp249, &tmp252);
    
    if(tmp251 > 0.5)
    {
      tmp251 -= 1.0;
      tmp252 += 1.0;
    }
    else if(tmp251 < -0.5)
    {
      tmp251 += 1.0;
      tmp252 -= 1.0;
    }
    
    if(fabs(tmp251) < 1e-10)
      tmp250 = pow(tmp248, tmp252);
    else
    {
      tmp254 = modf(1.0/tmp249, &tmp253);
      if(tmp254 > 0.5)
      {
        tmp254 -= 1.0;
        tmp253 += 1.0;
      }
      else if(tmp254 < -0.5)
      {
        tmp254 += 1.0;
        tmp253 -= 1.0;
      }
      if(fabs(tmp254) < 1e-10 && ((unsigned long)tmp253 & 1))
      {
        tmp250 = -pow(-tmp248, tmp251)*pow(tmp248, tmp252);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
      }
    }
  }
  else
  {
    tmp250 = pow(tmp248, tmp249);
  }
  if(isnan(tmp250) || isinf(tmp250))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
  }tmp255 = _pi + 0.298;
  tmp256 = real_array_get(_I, 1, ((modelica_integer) 19));
  if(tmp255 < 0.0 && tmp256 != 0.0)
  {
    tmp258 = modf(tmp256, &tmp259);
    
    if(tmp258 > 0.5)
    {
      tmp258 -= 1.0;
      tmp259 += 1.0;
    }
    else if(tmp258 < -0.5)
    {
      tmp258 += 1.0;
      tmp259 -= 1.0;
    }
    
    if(fabs(tmp258) < 1e-10)
      tmp257 = pow(tmp255, tmp259);
    else
    {
      tmp261 = modf(1.0/tmp256, &tmp260);
      if(tmp261 > 0.5)
      {
        tmp261 -= 1.0;
        tmp260 += 1.0;
      }
      else if(tmp261 < -0.5)
      {
        tmp261 += 1.0;
        tmp260 -= 1.0;
      }
      if(fabs(tmp261) < 1e-10 && ((unsigned long)tmp260 & 1))
      {
        tmp257 = -pow(-tmp255, tmp258)*pow(tmp255, tmp259);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
      }
    }
  }
  else
  {
    tmp257 = pow(tmp255, tmp256);
  }
  if(isnan(tmp257) || isinf(tmp257))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
  }tmp262 = _eta - 0.72;
  tmp263 = real_array_get(_J, 1, ((modelica_integer) 19));
  if(tmp262 < 0.0 && tmp263 != 0.0)
  {
    tmp265 = modf(tmp263, &tmp266);
    
    if(tmp265 > 0.5)
    {
      tmp265 -= 1.0;
      tmp266 += 1.0;
    }
    else if(tmp265 < -0.5)
    {
      tmp265 += 1.0;
      tmp266 -= 1.0;
    }
    
    if(fabs(tmp265) < 1e-10)
      tmp264 = pow(tmp262, tmp266);
    else
    {
      tmp268 = modf(1.0/tmp263, &tmp267);
      if(tmp268 > 0.5)
      {
        tmp268 -= 1.0;
        tmp267 += 1.0;
      }
      else if(tmp268 < -0.5)
      {
        tmp268 += 1.0;
        tmp267 -= 1.0;
      }
      if(fabs(tmp268) < 1e-10 && ((unsigned long)tmp267 & 1))
      {
        tmp264 = -pow(-tmp262, tmp265)*pow(tmp262, tmp266);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
      }
    }
  }
  else
  {
    tmp264 = pow(tmp262, tmp263);
  }
  if(isnan(tmp264) || isinf(tmp264))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
  }tmp269 = _pi + 0.298;
  tmp270 = real_array_get(_I, 1, ((modelica_integer) 20));
  if(tmp269 < 0.0 && tmp270 != 0.0)
  {
    tmp272 = modf(tmp270, &tmp273);
    
    if(tmp272 > 0.5)
    {
      tmp272 -= 1.0;
      tmp273 += 1.0;
    }
    else if(tmp272 < -0.5)
    {
      tmp272 += 1.0;
      tmp273 -= 1.0;
    }
    
    if(fabs(tmp272) < 1e-10)
      tmp271 = pow(tmp269, tmp273);
    else
    {
      tmp275 = modf(1.0/tmp270, &tmp274);
      if(tmp275 > 0.5)
      {
        tmp275 -= 1.0;
        tmp274 += 1.0;
      }
      else if(tmp275 < -0.5)
      {
        tmp275 += 1.0;
        tmp274 -= 1.0;
      }
      if(fabs(tmp275) < 1e-10 && ((unsigned long)tmp274 & 1))
      {
        tmp271 = -pow(-tmp269, tmp272)*pow(tmp269, tmp273);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
      }
    }
  }
  else
  {
    tmp271 = pow(tmp269, tmp270);
  }
  if(isnan(tmp271) || isinf(tmp271))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
  }tmp276 = _eta - 0.72;
  tmp277 = real_array_get(_J, 1, ((modelica_integer) 20));
  if(tmp276 < 0.0 && tmp277 != 0.0)
  {
    tmp279 = modf(tmp277, &tmp280);
    
    if(tmp279 > 0.5)
    {
      tmp279 -= 1.0;
      tmp280 += 1.0;
    }
    else if(tmp279 < -0.5)
    {
      tmp279 += 1.0;
      tmp280 -= 1.0;
    }
    
    if(fabs(tmp279) < 1e-10)
      tmp278 = pow(tmp276, tmp280);
    else
    {
      tmp282 = modf(1.0/tmp277, &tmp281);
      if(tmp282 > 0.5)
      {
        tmp282 -= 1.0;
        tmp281 += 1.0;
      }
      else if(tmp282 < -0.5)
      {
        tmp282 += 1.0;
        tmp281 -= 1.0;
      }
      if(fabs(tmp282) < 1e-10 && ((unsigned long)tmp281 & 1))
      {
        tmp278 = -pow(-tmp276, tmp279)*pow(tmp276, tmp280);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
      }
    }
  }
  else
  {
    tmp278 = pow(tmp276, tmp277);
  }
  if(isnan(tmp278) || isinf(tmp278))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
  }tmp283 = _pi + 0.298;
  tmp284 = real_array_get(_I, 1, ((modelica_integer) 21));
  if(tmp283 < 0.0 && tmp284 != 0.0)
  {
    tmp286 = modf(tmp284, &tmp287);
    
    if(tmp286 > 0.5)
    {
      tmp286 -= 1.0;
      tmp287 += 1.0;
    }
    else if(tmp286 < -0.5)
    {
      tmp286 += 1.0;
      tmp287 -= 1.0;
    }
    
    if(fabs(tmp286) < 1e-10)
      tmp285 = pow(tmp283, tmp287);
    else
    {
      tmp289 = modf(1.0/tmp284, &tmp288);
      if(tmp289 > 0.5)
      {
        tmp289 -= 1.0;
        tmp288 += 1.0;
      }
      else if(tmp289 < -0.5)
      {
        tmp289 += 1.0;
        tmp288 -= 1.0;
      }
      if(fabs(tmp289) < 1e-10 && ((unsigned long)tmp288 & 1))
      {
        tmp285 = -pow(-tmp283, tmp286)*pow(tmp283, tmp287);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
      }
    }
  }
  else
  {
    tmp285 = pow(tmp283, tmp284);
  }
  if(isnan(tmp285) || isinf(tmp285))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
  }tmp290 = _eta - 0.72;
  tmp291 = real_array_get(_J, 1, ((modelica_integer) 21));
  if(tmp290 < 0.0 && tmp291 != 0.0)
  {
    tmp293 = modf(tmp291, &tmp294);
    
    if(tmp293 > 0.5)
    {
      tmp293 -= 1.0;
      tmp294 += 1.0;
    }
    else if(tmp293 < -0.5)
    {
      tmp293 += 1.0;
      tmp294 -= 1.0;
    }
    
    if(fabs(tmp293) < 1e-10)
      tmp292 = pow(tmp290, tmp294);
    else
    {
      tmp296 = modf(1.0/tmp291, &tmp295);
      if(tmp296 > 0.5)
      {
        tmp296 -= 1.0;
        tmp295 += 1.0;
      }
      else if(tmp296 < -0.5)
      {
        tmp296 += 1.0;
        tmp295 -= 1.0;
      }
      if(fabs(tmp296) < 1e-10 && ((unsigned long)tmp295 & 1))
      {
        tmp292 = -pow(-tmp290, tmp293)*pow(tmp290, tmp294);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
      }
    }
  }
  else
  {
    tmp292 = pow(tmp290, tmp291);
  }
  if(isnan(tmp292) || isinf(tmp292))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
  }tmp297 = _pi + 0.298;
  tmp298 = real_array_get(_I, 1, ((modelica_integer) 22));
  if(tmp297 < 0.0 && tmp298 != 0.0)
  {
    tmp300 = modf(tmp298, &tmp301);
    
    if(tmp300 > 0.5)
    {
      tmp300 -= 1.0;
      tmp301 += 1.0;
    }
    else if(tmp300 < -0.5)
    {
      tmp300 += 1.0;
      tmp301 -= 1.0;
    }
    
    if(fabs(tmp300) < 1e-10)
      tmp299 = pow(tmp297, tmp301);
    else
    {
      tmp303 = modf(1.0/tmp298, &tmp302);
      if(tmp303 > 0.5)
      {
        tmp303 -= 1.0;
        tmp302 += 1.0;
      }
      else if(tmp303 < -0.5)
      {
        tmp303 += 1.0;
        tmp302 -= 1.0;
      }
      if(fabs(tmp303) < 1e-10 && ((unsigned long)tmp302 & 1))
      {
        tmp299 = -pow(-tmp297, tmp300)*pow(tmp297, tmp301);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
      }
    }
  }
  else
  {
    tmp299 = pow(tmp297, tmp298);
  }
  if(isnan(tmp299) || isinf(tmp299))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
  }tmp304 = _eta - 0.72;
  tmp305 = real_array_get(_J, 1, ((modelica_integer) 22));
  if(tmp304 < 0.0 && tmp305 != 0.0)
  {
    tmp307 = modf(tmp305, &tmp308);
    
    if(tmp307 > 0.5)
    {
      tmp307 -= 1.0;
      tmp308 += 1.0;
    }
    else if(tmp307 < -0.5)
    {
      tmp307 += 1.0;
      tmp308 -= 1.0;
    }
    
    if(fabs(tmp307) < 1e-10)
      tmp306 = pow(tmp304, tmp308);
    else
    {
      tmp310 = modf(1.0/tmp305, &tmp309);
      if(tmp310 > 0.5)
      {
        tmp310 -= 1.0;
        tmp309 += 1.0;
      }
      else if(tmp310 < -0.5)
      {
        tmp310 += 1.0;
        tmp309 -= 1.0;
      }
      if(fabs(tmp310) < 1e-10 && ((unsigned long)tmp309 & 1))
      {
        tmp306 = -pow(-tmp304, tmp307)*pow(tmp304, tmp308);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
      }
    }
  }
  else
  {
    tmp306 = pow(tmp304, tmp305);
  }
  if(isnan(tmp306) || isinf(tmp306))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
  }tmp311 = _pi + 0.298;
  tmp312 = real_array_get(_I, 1, ((modelica_integer) 23));
  if(tmp311 < 0.0 && tmp312 != 0.0)
  {
    tmp314 = modf(tmp312, &tmp315);
    
    if(tmp314 > 0.5)
    {
      tmp314 -= 1.0;
      tmp315 += 1.0;
    }
    else if(tmp314 < -0.5)
    {
      tmp314 += 1.0;
      tmp315 -= 1.0;
    }
    
    if(fabs(tmp314) < 1e-10)
      tmp313 = pow(tmp311, tmp315);
    else
    {
      tmp317 = modf(1.0/tmp312, &tmp316);
      if(tmp317 > 0.5)
      {
        tmp317 -= 1.0;
        tmp316 += 1.0;
      }
      else if(tmp317 < -0.5)
      {
        tmp317 += 1.0;
        tmp316 -= 1.0;
      }
      if(fabs(tmp317) < 1e-10 && ((unsigned long)tmp316 & 1))
      {
        tmp313 = -pow(-tmp311, tmp314)*pow(tmp311, tmp315);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
      }
    }
  }
  else
  {
    tmp313 = pow(tmp311, tmp312);
  }
  if(isnan(tmp313) || isinf(tmp313))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
  }tmp318 = _eta - 0.72;
  tmp319 = real_array_get(_J, 1, ((modelica_integer) 23));
  if(tmp318 < 0.0 && tmp319 != 0.0)
  {
    tmp321 = modf(tmp319, &tmp322);
    
    if(tmp321 > 0.5)
    {
      tmp321 -= 1.0;
      tmp322 += 1.0;
    }
    else if(tmp321 < -0.5)
    {
      tmp321 += 1.0;
      tmp322 -= 1.0;
    }
    
    if(fabs(tmp321) < 1e-10)
      tmp320 = pow(tmp318, tmp322);
    else
    {
      tmp324 = modf(1.0/tmp319, &tmp323);
      if(tmp324 > 0.5)
      {
        tmp324 -= 1.0;
        tmp323 += 1.0;
      }
      else if(tmp324 < -0.5)
      {
        tmp324 += 1.0;
        tmp323 -= 1.0;
      }
      if(fabs(tmp324) < 1e-10 && ((unsigned long)tmp323 & 1))
      {
        tmp320 = -pow(-tmp318, tmp321)*pow(tmp318, tmp322);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
      }
    }
  }
  else
  {
    tmp320 = pow(tmp318, tmp319);
  }
  if(isnan(tmp320) || isinf(tmp320))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
  }tmp325 = _pi + 0.298;
  tmp326 = real_array_get(_I, 1, ((modelica_integer) 24));
  if(tmp325 < 0.0 && tmp326 != 0.0)
  {
    tmp328 = modf(tmp326, &tmp329);
    
    if(tmp328 > 0.5)
    {
      tmp328 -= 1.0;
      tmp329 += 1.0;
    }
    else if(tmp328 < -0.5)
    {
      tmp328 += 1.0;
      tmp329 -= 1.0;
    }
    
    if(fabs(tmp328) < 1e-10)
      tmp327 = pow(tmp325, tmp329);
    else
    {
      tmp331 = modf(1.0/tmp326, &tmp330);
      if(tmp331 > 0.5)
      {
        tmp331 -= 1.0;
        tmp330 += 1.0;
      }
      else if(tmp331 < -0.5)
      {
        tmp331 += 1.0;
        tmp330 -= 1.0;
      }
      if(fabs(tmp331) < 1e-10 && ((unsigned long)tmp330 & 1))
      {
        tmp327 = -pow(-tmp325, tmp328)*pow(tmp325, tmp329);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
      }
    }
  }
  else
  {
    tmp327 = pow(tmp325, tmp326);
  }
  if(isnan(tmp327) || isinf(tmp327))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
  }tmp332 = _eta - 0.72;
  tmp333 = real_array_get(_J, 1, ((modelica_integer) 24));
  if(tmp332 < 0.0 && tmp333 != 0.0)
  {
    tmp335 = modf(tmp333, &tmp336);
    
    if(tmp335 > 0.5)
    {
      tmp335 -= 1.0;
      tmp336 += 1.0;
    }
    else if(tmp335 < -0.5)
    {
      tmp335 += 1.0;
      tmp336 -= 1.0;
    }
    
    if(fabs(tmp335) < 1e-10)
      tmp334 = pow(tmp332, tmp336);
    else
    {
      tmp338 = modf(1.0/tmp333, &tmp337);
      if(tmp338 > 0.5)
      {
        tmp338 -= 1.0;
        tmp337 += 1.0;
      }
      else if(tmp338 < -0.5)
      {
        tmp338 += 1.0;
        tmp337 -= 1.0;
      }
      if(fabs(tmp338) < 1e-10 && ((unsigned long)tmp337 & 1))
      {
        tmp334 = -pow(-tmp332, tmp335)*pow(tmp332, tmp336);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
      }
    }
  }
  else
  {
    tmp334 = pow(tmp332, tmp333);
  }
  if(isnan(tmp334) || isinf(tmp334))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
  }tmp339 = _pi + 0.298;
  tmp340 = real_array_get(_I, 1, ((modelica_integer) 25));
  if(tmp339 < 0.0 && tmp340 != 0.0)
  {
    tmp342 = modf(tmp340, &tmp343);
    
    if(tmp342 > 0.5)
    {
      tmp342 -= 1.0;
      tmp343 += 1.0;
    }
    else if(tmp342 < -0.5)
    {
      tmp342 += 1.0;
      tmp343 -= 1.0;
    }
    
    if(fabs(tmp342) < 1e-10)
      tmp341 = pow(tmp339, tmp343);
    else
    {
      tmp345 = modf(1.0/tmp340, &tmp344);
      if(tmp345 > 0.5)
      {
        tmp345 -= 1.0;
        tmp344 += 1.0;
      }
      else if(tmp345 < -0.5)
      {
        tmp345 += 1.0;
        tmp344 -= 1.0;
      }
      if(fabs(tmp345) < 1e-10 && ((unsigned long)tmp344 & 1))
      {
        tmp341 = -pow(-tmp339, tmp342)*pow(tmp339, tmp343);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
      }
    }
  }
  else
  {
    tmp341 = pow(tmp339, tmp340);
  }
  if(isnan(tmp341) || isinf(tmp341))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
  }tmp346 = _eta - 0.72;
  tmp347 = real_array_get(_J, 1, ((modelica_integer) 25));
  if(tmp346 < 0.0 && tmp347 != 0.0)
  {
    tmp349 = modf(tmp347, &tmp350);
    
    if(tmp349 > 0.5)
    {
      tmp349 -= 1.0;
      tmp350 += 1.0;
    }
    else if(tmp349 < -0.5)
    {
      tmp349 += 1.0;
      tmp350 -= 1.0;
    }
    
    if(fabs(tmp349) < 1e-10)
      tmp348 = pow(tmp346, tmp350);
    else
    {
      tmp352 = modf(1.0/tmp347, &tmp351);
      if(tmp352 > 0.5)
      {
        tmp352 -= 1.0;
        tmp351 += 1.0;
      }
      else if(tmp352 < -0.5)
      {
        tmp352 += 1.0;
        tmp351 -= 1.0;
      }
      if(fabs(tmp352) < 1e-10 && ((unsigned long)tmp351 & 1))
      {
        tmp348 = -pow(-tmp346, tmp349)*pow(tmp346, tmp350);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
      }
    }
  }
  else
  {
    tmp348 = pow(tmp346, tmp347);
  }
  if(isnan(tmp348) || isinf(tmp348))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
  }tmp353 = _pi + 0.298;
  tmp354 = real_array_get(_I, 1, ((modelica_integer) 26));
  if(tmp353 < 0.0 && tmp354 != 0.0)
  {
    tmp356 = modf(tmp354, &tmp357);
    
    if(tmp356 > 0.5)
    {
      tmp356 -= 1.0;
      tmp357 += 1.0;
    }
    else if(tmp356 < -0.5)
    {
      tmp356 += 1.0;
      tmp357 -= 1.0;
    }
    
    if(fabs(tmp356) < 1e-10)
      tmp355 = pow(tmp353, tmp357);
    else
    {
      tmp359 = modf(1.0/tmp354, &tmp358);
      if(tmp359 > 0.5)
      {
        tmp359 -= 1.0;
        tmp358 += 1.0;
      }
      else if(tmp359 < -0.5)
      {
        tmp359 += 1.0;
        tmp358 -= 1.0;
      }
      if(fabs(tmp359) < 1e-10 && ((unsigned long)tmp358 & 1))
      {
        tmp355 = -pow(-tmp353, tmp356)*pow(tmp353, tmp357);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
      }
    }
  }
  else
  {
    tmp355 = pow(tmp353, tmp354);
  }
  if(isnan(tmp355) || isinf(tmp355))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
  }tmp360 = _eta - 0.72;
  tmp361 = real_array_get(_J, 1, ((modelica_integer) 26));
  if(tmp360 < 0.0 && tmp361 != 0.0)
  {
    tmp363 = modf(tmp361, &tmp364);
    
    if(tmp363 > 0.5)
    {
      tmp363 -= 1.0;
      tmp364 += 1.0;
    }
    else if(tmp363 < -0.5)
    {
      tmp363 += 1.0;
      tmp364 -= 1.0;
    }
    
    if(fabs(tmp363) < 1e-10)
      tmp362 = pow(tmp360, tmp364);
    else
    {
      tmp366 = modf(1.0/tmp361, &tmp365);
      if(tmp366 > 0.5)
      {
        tmp366 -= 1.0;
        tmp365 += 1.0;
      }
      else if(tmp366 < -0.5)
      {
        tmp366 += 1.0;
        tmp365 -= 1.0;
      }
      if(fabs(tmp366) < 1e-10 && ((unsigned long)tmp365 & 1))
      {
        tmp362 = -pow(-tmp360, tmp363)*pow(tmp360, tmp364);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
      }
    }
  }
  else
  {
    tmp362 = pow(tmp360, tmp361);
  }
  if(isnan(tmp362) || isinf(tmp362))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
  }tmp367 = _pi + 0.298;
  tmp368 = real_array_get(_I, 1, ((modelica_integer) 27));
  if(tmp367 < 0.0 && tmp368 != 0.0)
  {
    tmp370 = modf(tmp368, &tmp371);
    
    if(tmp370 > 0.5)
    {
      tmp370 -= 1.0;
      tmp371 += 1.0;
    }
    else if(tmp370 < -0.5)
    {
      tmp370 += 1.0;
      tmp371 -= 1.0;
    }
    
    if(fabs(tmp370) < 1e-10)
      tmp369 = pow(tmp367, tmp371);
    else
    {
      tmp373 = modf(1.0/tmp368, &tmp372);
      if(tmp373 > 0.5)
      {
        tmp373 -= 1.0;
        tmp372 += 1.0;
      }
      else if(tmp373 < -0.5)
      {
        tmp373 += 1.0;
        tmp372 -= 1.0;
      }
      if(fabs(tmp373) < 1e-10 && ((unsigned long)tmp372 & 1))
      {
        tmp369 = -pow(-tmp367, tmp370)*pow(tmp367, tmp371);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
      }
    }
  }
  else
  {
    tmp369 = pow(tmp367, tmp368);
  }
  if(isnan(tmp369) || isinf(tmp369))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
  }tmp374 = _eta - 0.72;
  tmp375 = real_array_get(_J, 1, ((modelica_integer) 27));
  if(tmp374 < 0.0 && tmp375 != 0.0)
  {
    tmp377 = modf(tmp375, &tmp378);
    
    if(tmp377 > 0.5)
    {
      tmp377 -= 1.0;
      tmp378 += 1.0;
    }
    else if(tmp377 < -0.5)
    {
      tmp377 += 1.0;
      tmp378 -= 1.0;
    }
    
    if(fabs(tmp377) < 1e-10)
      tmp376 = pow(tmp374, tmp378);
    else
    {
      tmp380 = modf(1.0/tmp375, &tmp379);
      if(tmp380 > 0.5)
      {
        tmp380 -= 1.0;
        tmp379 += 1.0;
      }
      else if(tmp380 < -0.5)
      {
        tmp380 += 1.0;
        tmp379 -= 1.0;
      }
      if(fabs(tmp380) < 1e-10 && ((unsigned long)tmp379 & 1))
      {
        tmp376 = -pow(-tmp374, tmp377)*pow(tmp374, tmp378);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
      }
    }
  }
  else
  {
    tmp376 = pow(tmp374, tmp375);
  }
  if(isnan(tmp376) || isinf(tmp376))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
  }tmp381 = _pi + 0.298;
  tmp382 = real_array_get(_I, 1, ((modelica_integer) 28));
  if(tmp381 < 0.0 && tmp382 != 0.0)
  {
    tmp384 = modf(tmp382, &tmp385);
    
    if(tmp384 > 0.5)
    {
      tmp384 -= 1.0;
      tmp385 += 1.0;
    }
    else if(tmp384 < -0.5)
    {
      tmp384 += 1.0;
      tmp385 -= 1.0;
    }
    
    if(fabs(tmp384) < 1e-10)
      tmp383 = pow(tmp381, tmp385);
    else
    {
      tmp387 = modf(1.0/tmp382, &tmp386);
      if(tmp387 > 0.5)
      {
        tmp387 -= 1.0;
        tmp386 += 1.0;
      }
      else if(tmp387 < -0.5)
      {
        tmp387 += 1.0;
        tmp386 -= 1.0;
      }
      if(fabs(tmp387) < 1e-10 && ((unsigned long)tmp386 & 1))
      {
        tmp383 = -pow(-tmp381, tmp384)*pow(tmp381, tmp385);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
      }
    }
  }
  else
  {
    tmp383 = pow(tmp381, tmp382);
  }
  if(isnan(tmp383) || isinf(tmp383))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
  }tmp388 = _eta - 0.72;
  tmp389 = real_array_get(_J, 1, ((modelica_integer) 28));
  if(tmp388 < 0.0 && tmp389 != 0.0)
  {
    tmp391 = modf(tmp389, &tmp392);
    
    if(tmp391 > 0.5)
    {
      tmp391 -= 1.0;
      tmp392 += 1.0;
    }
    else if(tmp391 < -0.5)
    {
      tmp391 += 1.0;
      tmp392 -= 1.0;
    }
    
    if(fabs(tmp391) < 1e-10)
      tmp390 = pow(tmp388, tmp392);
    else
    {
      tmp394 = modf(1.0/tmp389, &tmp393);
      if(tmp394 > 0.5)
      {
        tmp394 -= 1.0;
        tmp393 += 1.0;
      }
      else if(tmp394 < -0.5)
      {
        tmp394 += 1.0;
        tmp393 -= 1.0;
      }
      if(fabs(tmp394) < 1e-10 && ((unsigned long)tmp393 & 1))
      {
        tmp390 = -pow(-tmp388, tmp391)*pow(tmp388, tmp392);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
      }
    }
  }
  else
  {
    tmp390 = pow(tmp388, tmp389);
  }
  if(isnan(tmp390) || isinf(tmp390))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
  }tmp395 = _pi + 0.298;
  tmp396 = real_array_get(_I, 1, ((modelica_integer) 29));
  if(tmp395 < 0.0 && tmp396 != 0.0)
  {
    tmp398 = modf(tmp396, &tmp399);
    
    if(tmp398 > 0.5)
    {
      tmp398 -= 1.0;
      tmp399 += 1.0;
    }
    else if(tmp398 < -0.5)
    {
      tmp398 += 1.0;
      tmp399 -= 1.0;
    }
    
    if(fabs(tmp398) < 1e-10)
      tmp397 = pow(tmp395, tmp399);
    else
    {
      tmp401 = modf(1.0/tmp396, &tmp400);
      if(tmp401 > 0.5)
      {
        tmp401 -= 1.0;
        tmp400 += 1.0;
      }
      else if(tmp401 < -0.5)
      {
        tmp401 += 1.0;
        tmp400 -= 1.0;
      }
      if(fabs(tmp401) < 1e-10 && ((unsigned long)tmp400 & 1))
      {
        tmp397 = -pow(-tmp395, tmp398)*pow(tmp395, tmp399);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
      }
    }
  }
  else
  {
    tmp397 = pow(tmp395, tmp396);
  }
  if(isnan(tmp397) || isinf(tmp397))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
  }tmp402 = _eta - 0.72;
  tmp403 = real_array_get(_J, 1, ((modelica_integer) 29));
  if(tmp402 < 0.0 && tmp403 != 0.0)
  {
    tmp405 = modf(tmp403, &tmp406);
    
    if(tmp405 > 0.5)
    {
      tmp405 -= 1.0;
      tmp406 += 1.0;
    }
    else if(tmp405 < -0.5)
    {
      tmp405 += 1.0;
      tmp406 -= 1.0;
    }
    
    if(fabs(tmp405) < 1e-10)
      tmp404 = pow(tmp402, tmp406);
    else
    {
      tmp408 = modf(1.0/tmp403, &tmp407);
      if(tmp408 > 0.5)
      {
        tmp408 -= 1.0;
        tmp407 += 1.0;
      }
      else if(tmp408 < -0.5)
      {
        tmp408 += 1.0;
        tmp407 -= 1.0;
      }
      if(fabs(tmp408) < 1e-10 && ((unsigned long)tmp407 & 1))
      {
        tmp404 = -pow(-tmp402, tmp405)*pow(tmp402, tmp406);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
      }
    }
  }
  else
  {
    tmp404 = pow(tmp402, tmp403);
  }
  if(isnan(tmp404) || isinf(tmp404))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
  }tmp409 = _pi + 0.298;
  tmp410 = real_array_get(_I, 1, ((modelica_integer) 30));
  if(tmp409 < 0.0 && tmp410 != 0.0)
  {
    tmp412 = modf(tmp410, &tmp413);
    
    if(tmp412 > 0.5)
    {
      tmp412 -= 1.0;
      tmp413 += 1.0;
    }
    else if(tmp412 < -0.5)
    {
      tmp412 += 1.0;
      tmp413 -= 1.0;
    }
    
    if(fabs(tmp412) < 1e-10)
      tmp411 = pow(tmp409, tmp413);
    else
    {
      tmp415 = modf(1.0/tmp410, &tmp414);
      if(tmp415 > 0.5)
      {
        tmp415 -= 1.0;
        tmp414 += 1.0;
      }
      else if(tmp415 < -0.5)
      {
        tmp415 += 1.0;
        tmp414 -= 1.0;
      }
      if(fabs(tmp415) < 1e-10 && ((unsigned long)tmp414 & 1))
      {
        tmp411 = -pow(-tmp409, tmp412)*pow(tmp409, tmp413);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
      }
    }
  }
  else
  {
    tmp411 = pow(tmp409, tmp410);
  }
  if(isnan(tmp411) || isinf(tmp411))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
  }tmp416 = _eta - 0.72;
  tmp417 = real_array_get(_J, 1, ((modelica_integer) 30));
  if(tmp416 < 0.0 && tmp417 != 0.0)
  {
    tmp419 = modf(tmp417, &tmp420);
    
    if(tmp419 > 0.5)
    {
      tmp419 -= 1.0;
      tmp420 += 1.0;
    }
    else if(tmp419 < -0.5)
    {
      tmp419 += 1.0;
      tmp420 -= 1.0;
    }
    
    if(fabs(tmp419) < 1e-10)
      tmp418 = pow(tmp416, tmp420);
    else
    {
      tmp422 = modf(1.0/tmp417, &tmp421);
      if(tmp422 > 0.5)
      {
        tmp422 -= 1.0;
        tmp421 += 1.0;
      }
      else if(tmp422 < -0.5)
      {
        tmp422 += 1.0;
        tmp421 -= 1.0;
      }
      if(fabs(tmp422) < 1e-10 && ((unsigned long)tmp421 & 1))
      {
        tmp418 = -pow(-tmp416, tmp419)*pow(tmp416, tmp420);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
      }
    }
  }
  else
  {
    tmp418 = pow(tmp416, tmp417);
  }
  if(isnan(tmp418) || isinf(tmp418))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
  }tmp423 = _pi + 0.298;
  tmp424 = real_array_get(_I, 1, ((modelica_integer) 31));
  if(tmp423 < 0.0 && tmp424 != 0.0)
  {
    tmp426 = modf(tmp424, &tmp427);
    
    if(tmp426 > 0.5)
    {
      tmp426 -= 1.0;
      tmp427 += 1.0;
    }
    else if(tmp426 < -0.5)
    {
      tmp426 += 1.0;
      tmp427 -= 1.0;
    }
    
    if(fabs(tmp426) < 1e-10)
      tmp425 = pow(tmp423, tmp427);
    else
    {
      tmp429 = modf(1.0/tmp424, &tmp428);
      if(tmp429 > 0.5)
      {
        tmp429 -= 1.0;
        tmp428 += 1.0;
      }
      else if(tmp429 < -0.5)
      {
        tmp429 += 1.0;
        tmp428 -= 1.0;
      }
      if(fabs(tmp429) < 1e-10 && ((unsigned long)tmp428 & 1))
      {
        tmp425 = -pow(-tmp423, tmp426)*pow(tmp423, tmp427);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp423, tmp424);
      }
    }
  }
  else
  {
    tmp425 = pow(tmp423, tmp424);
  }
  if(isnan(tmp425) || isinf(tmp425))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp423, tmp424);
  }tmp430 = _eta - 0.72;
  tmp431 = real_array_get(_J, 1, ((modelica_integer) 31));
  if(tmp430 < 0.0 && tmp431 != 0.0)
  {
    tmp433 = modf(tmp431, &tmp434);
    
    if(tmp433 > 0.5)
    {
      tmp433 -= 1.0;
      tmp434 += 1.0;
    }
    else if(tmp433 < -0.5)
    {
      tmp433 += 1.0;
      tmp434 -= 1.0;
    }
    
    if(fabs(tmp433) < 1e-10)
      tmp432 = pow(tmp430, tmp434);
    else
    {
      tmp436 = modf(1.0/tmp431, &tmp435);
      if(tmp436 > 0.5)
      {
        tmp436 -= 1.0;
        tmp435 += 1.0;
      }
      else if(tmp436 < -0.5)
      {
        tmp436 += 1.0;
        tmp435 -= 1.0;
      }
      if(fabs(tmp436) < 1e-10 && ((unsigned long)tmp435 & 1))
      {
        tmp432 = -pow(-tmp430, tmp433)*pow(tmp430, tmp434);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp430, tmp431);
      }
    }
  }
  else
  {
    tmp432 = pow(tmp430, tmp431);
  }
  if(isnan(tmp432) || isinf(tmp432))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp430, tmp431);
  }tmp437 = _pi + 0.298;
  tmp438 = real_array_get(_I, 1, ((modelica_integer) 32));
  if(tmp437 < 0.0 && tmp438 != 0.0)
  {
    tmp440 = modf(tmp438, &tmp441);
    
    if(tmp440 > 0.5)
    {
      tmp440 -= 1.0;
      tmp441 += 1.0;
    }
    else if(tmp440 < -0.5)
    {
      tmp440 += 1.0;
      tmp441 -= 1.0;
    }
    
    if(fabs(tmp440) < 1e-10)
      tmp439 = pow(tmp437, tmp441);
    else
    {
      tmp443 = modf(1.0/tmp438, &tmp442);
      if(tmp443 > 0.5)
      {
        tmp443 -= 1.0;
        tmp442 += 1.0;
      }
      else if(tmp443 < -0.5)
      {
        tmp443 += 1.0;
        tmp442 -= 1.0;
      }
      if(fabs(tmp443) < 1e-10 && ((unsigned long)tmp442 & 1))
      {
        tmp439 = -pow(-tmp437, tmp440)*pow(tmp437, tmp441);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp437, tmp438);
      }
    }
  }
  else
  {
    tmp439 = pow(tmp437, tmp438);
  }
  if(isnan(tmp439) || isinf(tmp439))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp437, tmp438);
  }tmp444 = _eta - 0.72;
  tmp445 = real_array_get(_J, 1, ((modelica_integer) 32));
  if(tmp444 < 0.0 && tmp445 != 0.0)
  {
    tmp447 = modf(tmp445, &tmp448);
    
    if(tmp447 > 0.5)
    {
      tmp447 -= 1.0;
      tmp448 += 1.0;
    }
    else if(tmp447 < -0.5)
    {
      tmp447 += 1.0;
      tmp448 -= 1.0;
    }
    
    if(fabs(tmp447) < 1e-10)
      tmp446 = pow(tmp444, tmp448);
    else
    {
      tmp450 = modf(1.0/tmp445, &tmp449);
      if(tmp450 > 0.5)
      {
        tmp450 -= 1.0;
        tmp449 += 1.0;
      }
      else if(tmp450 < -0.5)
      {
        tmp450 += 1.0;
        tmp449 -= 1.0;
      }
      if(fabs(tmp450) < 1e-10 && ((unsigned long)tmp449 & 1))
      {
        tmp446 = -pow(-tmp444, tmp447)*pow(tmp444, tmp448);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp444, tmp445);
      }
    }
  }
  else
  {
    tmp446 = pow(tmp444, tmp445);
  }
  if(isnan(tmp446) || isinf(tmp446))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp444, tmp445);
  }tmp451 = _pi + 0.298;
  tmp452 = real_array_get(_I, 1, ((modelica_integer) 33));
  if(tmp451 < 0.0 && tmp452 != 0.0)
  {
    tmp454 = modf(tmp452, &tmp455);
    
    if(tmp454 > 0.5)
    {
      tmp454 -= 1.0;
      tmp455 += 1.0;
    }
    else if(tmp454 < -0.5)
    {
      tmp454 += 1.0;
      tmp455 -= 1.0;
    }
    
    if(fabs(tmp454) < 1e-10)
      tmp453 = pow(tmp451, tmp455);
    else
    {
      tmp457 = modf(1.0/tmp452, &tmp456);
      if(tmp457 > 0.5)
      {
        tmp457 -= 1.0;
        tmp456 += 1.0;
      }
      else if(tmp457 < -0.5)
      {
        tmp457 += 1.0;
        tmp456 -= 1.0;
      }
      if(fabs(tmp457) < 1e-10 && ((unsigned long)tmp456 & 1))
      {
        tmp453 = -pow(-tmp451, tmp454)*pow(tmp451, tmp455);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp451, tmp452);
      }
    }
  }
  else
  {
    tmp453 = pow(tmp451, tmp452);
  }
  if(isnan(tmp453) || isinf(tmp453))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp451, tmp452);
  }tmp458 = _eta - 0.72;
  tmp459 = real_array_get(_J, 1, ((modelica_integer) 33));
  if(tmp458 < 0.0 && tmp459 != 0.0)
  {
    tmp461 = modf(tmp459, &tmp462);
    
    if(tmp461 > 0.5)
    {
      tmp461 -= 1.0;
      tmp462 += 1.0;
    }
    else if(tmp461 < -0.5)
    {
      tmp461 += 1.0;
      tmp462 -= 1.0;
    }
    
    if(fabs(tmp461) < 1e-10)
      tmp460 = pow(tmp458, tmp462);
    else
    {
      tmp464 = modf(1.0/tmp459, &tmp463);
      if(tmp464 > 0.5)
      {
        tmp464 -= 1.0;
        tmp463 += 1.0;
      }
      else if(tmp464 < -0.5)
      {
        tmp464 += 1.0;
        tmp463 -= 1.0;
      }
      if(fabs(tmp464) < 1e-10 && ((unsigned long)tmp463 & 1))
      {
        tmp460 = -pow(-tmp458, tmp461)*pow(tmp458, tmp462);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp458, tmp459);
      }
    }
  }
  else
  {
    tmp460 = pow(tmp458, tmp459);
  }
  if(isnan(tmp460) || isinf(tmp460))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp458, tmp459);
  }
  _T = (((real_array_get(_n, 1, ((modelica_integer) 1))) * (tmp5)) * (tmp12) + ((real_array_get(_n, 1, ((modelica_integer) 2))) * (tmp19)) * (tmp26) + ((real_array_get(_n, 1, ((modelica_integer) 3))) * (tmp33)) * (tmp40) + ((real_array_get(_n, 1, ((modelica_integer) 4))) * (tmp47)) * (tmp54) + ((real_array_get(_n, 1, ((modelica_integer) 5))) * (tmp61)) * (tmp68) + ((real_array_get(_n, 1, ((modelica_integer) 6))) * (tmp75)) * (tmp82) + ((real_array_get(_n, 1, ((modelica_integer) 7))) * (tmp89)) * (tmp96) + ((real_array_get(_n, 1, ((modelica_integer) 8))) * (tmp103)) * (tmp110) + ((real_array_get(_n, 1, ((modelica_integer) 9))) * (tmp117)) * (tmp124) + ((real_array_get(_n, 1, ((modelica_integer) 10))) * (tmp131)) * (tmp138) + ((real_array_get(_n, 1, ((modelica_integer) 11))) * (tmp145)) * (tmp152) + ((real_array_get(_n, 1, ((modelica_integer) 12))) * (tmp159)) * (tmp166) + ((real_array_get(_n, 1, ((modelica_integer) 13))) * (tmp173)) * (tmp180) + ((real_array_get(_n, 1, ((modelica_integer) 14))) * (tmp187)) * (tmp194) + ((real_array_get(_n, 1, ((modelica_integer) 15))) * (tmp201)) * (tmp208) + ((real_array_get(_n, 1, ((modelica_integer) 16))) * (tmp215)) * (tmp222) + ((real_array_get(_n, 1, ((modelica_integer) 17))) * (tmp229)) * (tmp236) + ((real_array_get(_n, 1, ((modelica_integer) 18))) * (tmp243)) * (tmp250) + ((real_array_get(_n, 1, ((modelica_integer) 19))) * (tmp257)) * (tmp264) + ((real_array_get(_n, 1, ((modelica_integer) 20))) * (tmp271)) * (tmp278) + ((real_array_get(_n, 1, ((modelica_integer) 21))) * (tmp285)) * (tmp292) + ((real_array_get(_n, 1, ((modelica_integer) 22))) * (tmp299)) * (tmp306) + ((real_array_get(_n, 1, ((modelica_integer) 23))) * (tmp313)) * (tmp320) + ((real_array_get(_n, 1, ((modelica_integer) 24))) * (tmp327)) * (tmp334) + ((real_array_get(_n, 1, ((modelica_integer) 25))) * (tmp341)) * (tmp348) + ((real_array_get(_n, 1, ((modelica_integer) 26))) * (tmp355)) * (tmp362) + ((real_array_get(_n, 1, ((modelica_integer) 27))) * (tmp369)) * (tmp376) + ((real_array_get(_n, 1, ((modelica_integer) 28))) * (tmp383)) * (tmp390) + ((real_array_get(_n, 1, ((modelica_integer) 29))) * (tmp397)) * (tmp404) + ((real_array_get(_n, 1, ((modelica_integer) 30))) * (tmp411)) * (tmp418) + ((real_array_get(_n, 1, ((modelica_integer) 31))) * (tmp425)) * (tmp432) + ((real_array_get(_n, 1, ((modelica_integer) 32))) * (tmp439)) * (tmp446) + ((real_array_get(_n, 1, ((modelica_integer) 33))) * (tmp453)) * (tmp460)) * (_Tstar);
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_real _T)
{
  modelica_real _dpt;
  real_array _o;
  modelica_real _Tlim;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dpt has no default value.
  alloc_real_array(&(_o), 1, (_index_t)31); // _o has no default value.
  // _Tlim has no default value.
  _Tlim = fmin(_T,647.096);

  real_array_get(_o, 1, ((modelica_integer) 1)) = -650.17534844798 + _Tlim;

  tmp1 = real_array_get(_o, 1, ((modelica_integer) 1));
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[1]");}
  real_array_get(_o, 1, ((modelica_integer) 2)) = (1.0) / tmp1;

  real_array_get(_o, 1, ((modelica_integer) 3)) = (-((0.23855557567849) * (real_array_get(_o, 1, ((modelica_integer) 2)))));

  real_array_get(_o, 1, ((modelica_integer) 4)) = real_array_get(_o, 1, ((modelica_integer) 3)) + _Tlim;

  real_array_get(_o, 1, ((modelica_integer) 5)) = (-((4823.2657361591) * (real_array_get(_o, 1, ((modelica_integer) 4)))));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (14.91510861353) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = 405113.40542057 + real_array_get(_o, 1, ((modelica_integer) 5)) + real_array_get(_o, 1, ((modelica_integer) 7));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (real_array_get(_o, 1, ((modelica_integer) 8))) * (real_array_get(_o, 1, ((modelica_integer) 8)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 9))) * (real_array_get(_o, 1, ((modelica_integer) 9)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  tmp2 = real_array_get(_o, 1, ((modelica_integer) 11));
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[11]");}
  real_array_get(_o, 1, ((modelica_integer) 12)) = (1.0) / tmp2;

  real_array_get(_o, 1, ((modelica_integer) 13)) = (0.23855557567849) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 14)) = 1.0 + real_array_get(_o, 1, ((modelica_integer) 13));

  real_array_get(_o, 1, ((modelica_integer) 15)) = (12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 16)) = (-((17.073846940092) * (real_array_get(_o, 1, ((modelica_integer) 6)))));

  real_array_get(_o, 1, ((modelica_integer) 17)) = -3232555.0322333 + real_array_get(_o, 1, ((modelica_integer) 15)) + real_array_get(_o, 1, ((modelica_integer) 16));

  real_array_get(_o, 1, ((modelica_integer) 18)) = (-((4823.2657361591) * (real_array_get(_o, 1, ((modelica_integer) 14)))));

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((29.83021722706) * (real_array_get(_o, 1, ((modelica_integer) 14)))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 20)) = real_array_get(_o, 1, ((modelica_integer) 18)) + real_array_get(_o, 1, ((modelica_integer) 19));

  real_array_get(_o, 1, ((modelica_integer) 21)) = (1167.0521452767) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 22)) = -724213.16703206 + real_array_get(_o, 1, ((modelica_integer) 21)) + real_array_get(_o, 1, ((modelica_integer) 6));

  real_array_get(_o, 1, ((modelica_integer) 23)) = (real_array_get(_o, 1, ((modelica_integer) 17))) * (real_array_get(_o, 1, ((modelica_integer) 17)));

  real_array_get(_o, 1, ((modelica_integer) 24)) = (-(((4.0) * (real_array_get(_o, 1, ((modelica_integer) 22)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))));

  real_array_get(_o, 1, ((modelica_integer) 25)) = real_array_get(_o, 1, ((modelica_integer) 23)) + real_array_get(_o, 1, ((modelica_integer) 24));

  tmp3 = real_array_get(_o, 1, ((modelica_integer) 25));
  if(!(tmp3 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(o[25]) was %g should be >= 0", tmp3);
  }
  real_array_get(_o, 1, ((modelica_integer) 26)) = sqrt(tmp3);

  real_array_get(_o, 1, ((modelica_integer) 27)) = (-((12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 4)))));

  real_array_get(_o, 1, ((modelica_integer) 28)) = (17.073846940092) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 29)) = 3232555.0322333 + real_array_get(_o, 1, ((modelica_integer) 26)) + real_array_get(_o, 1, ((modelica_integer) 27)) + real_array_get(_o, 1, ((modelica_integer) 28));

  real_array_get(_o, 1, ((modelica_integer) 30)) = (real_array_get(_o, 1, ((modelica_integer) 29))) * (real_array_get(_o, 1, ((modelica_integer) 29)));

  real_array_get(_o, 1, ((modelica_integer) 31)) = (real_array_get(_o, 1, ((modelica_integer) 30))) * (real_array_get(_o, 1, ((modelica_integer) 30)));

  tmp4 = real_array_get(_o, 1, ((modelica_integer) 26));
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "0.5 * ((-4.0 * o[20] * o[22]) + 2.0 * o[17] * (12020.82470247 * o[14] - 34.147693880184 * o[14] * o[4]) - 4.0 * (1167.0521452767 * o[14] + 2.0 * o[14] * o[4]) * o[8]) / o[26]");}
  tmp5 = (-((real_array_get(_o, 1, ((modelica_integer) 29))) * (real_array_get(_o, 1, ((modelica_integer) 31)))));
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "64.0 * o[10] * ((-12020.82470247 * o[14]) + 34.147693880184 * o[14] * o[4] + 0.5 * ((-4.0 * o[20] * o[22]) + 2.0 * o[17] * (12020.82470247 * o[14] - 34.147693880184 * o[14] * o[4]) - 4.0 * (1167.0521452767 * o[14] + 2.0 * o[14] * o[4]) * o[8]) / o[26]) / (-o[29] * o[31])");}
  tmp6 = real_array_get(_o, 1, ((modelica_integer) 31));
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "64.0 * o[20] * o[8] * o[9] / o[31]");}
  _dpt = (1000000.0) * ((((64.0) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * ((-((12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 14))))) + ((34.147693880184) * (real_array_get(_o, 1, ((modelica_integer) 14)))) * (real_array_get(_o, 1, ((modelica_integer) 4))) + ((0.5) * ((-(((4.0) * (real_array_get(_o, 1, ((modelica_integer) 20)))) * (real_array_get(_o, 1, ((modelica_integer) 22))))) + ((2.0) * (real_array_get(_o, 1, ((modelica_integer) 17)))) * ((12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 14))) - (((34.147693880184) * (real_array_get(_o, 1, ((modelica_integer) 14)))) * (real_array_get(_o, 1, ((modelica_integer) 4))))) - (((4.0) * ((1167.0521452767) * (real_array_get(_o, 1, ((modelica_integer) 14))) + ((2.0) * (real_array_get(_o, 1, ((modelica_integer) 14)))) * (real_array_get(_o, 1, ((modelica_integer) 4))))) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) / tmp4)) / tmp5 + ((((64.0) * (real_array_get(_o, 1, ((modelica_integer) 20)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) / tmp6);
  _return: OMC_LABEL_UNUSED
  return _dpt;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _dpt;
  modelica_metatype out_dpt;
  tmp1 = mmc_unbox_real(_T);
  _dpt = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, tmp1);
  out_dpt = mmc_mk_rcon(_dpt);
  return out_dpt;
}

DLLExport
Modelica_Media_Common_HelmholtzDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_real _d, modelica_real _T)
{
  Modelica_Media_Common_HelmholtzDerivs _f;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  alloc_real_array(&(_o), 1, (_index_t)40); // _o has no default value.
  _f._T = _T;

  _f._d = _d;

  _f._R_s = 461.526;

  tmp1 = _T;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "647.096 / T");}
  _f._tau = (647.096) / tmp1;

  tmp3 = (modelica_boolean)((_d == 322.0) && (_T == 647.096));
  if(tmp3)
  {
    tmp4 = 0.999999999999999;
  }
  else
  {
    tmp2 = 322.0;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d / 322.0");}
    tmp4 = fabs((_d) / tmp2);
  }
  _f._delta = tmp4;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_f._tau) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 8)) = (-((0.64207765181607) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  real_array_get(_o, 1, ((modelica_integer) 9)) = 0.88521043984318 + real_array_get(_o, 1, ((modelica_integer) 8));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 7))) * (real_array_get(_o, 1, ((modelica_integer) 9)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = -1.1524407806681 + real_array_get(_o, 1, ((modelica_integer) 10));

  real_array_get(_o, 1, ((modelica_integer) 12)) = (real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 13)) = -1.2654315477714 + real_array_get(_o, 1, ((modelica_integer) 12));

  real_array_get(_o, 1, ((modelica_integer) 14)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 13)));

  real_array_get(_o, 1, ((modelica_integer) 15)) = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 16)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 17)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 18)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 18)))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 20)) = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 18)))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 21)) = (real_array_get(_o, 1, ((modelica_integer) 18))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 22)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 18)))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 23)) = (0.25116816848616) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 24)) = 0.078841073758308 + real_array_get(_o, 1, ((modelica_integer) 23));

  real_array_get(_o, 1, ((modelica_integer) 25)) = (real_array_get(_o, 1, ((modelica_integer) 15))) * (real_array_get(_o, 1, ((modelica_integer) 24)));

  real_array_get(_o, 1, ((modelica_integer) 26)) = -6.100523451393 + real_array_get(_o, 1, ((modelica_integer) 25));

  real_array_get(_o, 1, ((modelica_integer) 27)) = (real_array_get(_o, 1, ((modelica_integer) 26))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 28)) = 9.7944563083754 + real_array_get(_o, 1, ((modelica_integer) 27));

  real_array_get(_o, 1, ((modelica_integer) 29)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 28)));

  real_array_get(_o, 1, ((modelica_integer) 30)) = -1.70429417648412 + real_array_get(_o, 1, ((modelica_integer) 29));

  real_array_get(_o, 1, ((modelica_integer) 31)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 30)));

  real_array_get(_o, 1, ((modelica_integer) 32)) = (_f._delta) * (_f._delta);

  real_array_get(_o, 1, ((modelica_integer) 33)) = (-((10.9153200808732) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  real_array_get(_o, 1, ((modelica_integer) 34)) = 13.2781565976477 + real_array_get(_o, 1, ((modelica_integer) 33));

  real_array_get(_o, 1, ((modelica_integer) 35)) = (real_array_get(_o, 1, ((modelica_integer) 34))) * (real_array_get(_o, 1, ((modelica_integer) 7)));

  real_array_get(_o, 1, ((modelica_integer) 36)) = -6.9146446840086 + real_array_get(_o, 1, ((modelica_integer) 35));

  real_array_get(_o, 1, ((modelica_integer) 37)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 36)));

  real_array_get(_o, 1, ((modelica_integer) 38)) = -2.5308630955428 + real_array_get(_o, 1, ((modelica_integer) 37));

  real_array_get(_o, 1, ((modelica_integer) 39)) = (real_array_get(_o, 1, ((modelica_integer) 38))) * (_f._tau);

  real_array_get(_o, 1, ((modelica_integer) 40)) = ((real_array_get(_o, 1, ((modelica_integer) 18))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_f._tau);

  tmp5 = _f._delta;
  if(!(tmp5 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(f.delta) was %g should be > 0", tmp5);
  }
  _f._f = -15.732845290239 + (_f._tau) * (20.944396974307 + (-7.6867707878716 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (2.6185947787954 + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-2.808078114862 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (1.2053369696517 - ((0.008456681281250201) * (real_array_get(_o, 1, ((modelica_integer) 6)))))))) * (_f._tau)) + (_f._delta) * (real_array_get(_o, 1, ((modelica_integer) 14)) + (_f._delta) * (0.38493460186671 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.85214708824206 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (4.8972281541877 + (-3.0502617256965 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (0.039420536879154 + (0.12558408424308) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_f._tau))) + (_f._delta) * (-0.2799932969871 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (1.389979956946 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-2.018991502357 + (real_array_get(_o, 1, ((modelica_integer) 16))) * (-0.0082147637173963 - ((0.47596035734923) * (real_array_get(_o, 1, ((modelica_integer) 17))))))) + (_f._delta) * (0.0439840744735 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.44476435428739 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.90572070719733 + (0.70522450087967) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_f._delta) * ((_f._delta) * (-0.022175400873096 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.094260751665092 + (0.16436278447961) * (real_array_get(_o, 1, ((modelica_integer) 21)))) + (_f._delta) * ((-((0.013503372241348) * (real_array_get(_o, 1, ((modelica_integer) 1))))) + (_f._delta) * ((-((0.014834345352472) * (real_array_get(_o, 1, ((modelica_integer) 22))))) + (_f._delta) * ((real_array_get(_o, 1, ((modelica_integer) 1))) * (0.0005792295362808399 + (0.0032308904703711) * (real_array_get(_o, 1, ((modelica_integer) 21)))) + (_f._delta) * (8.096480299621501e-05 - (((4.4923899061815e-05) * (_f._delta)) * (real_array_get(_o, 1, ((modelica_integer) 22)))) - ((0.00016557679795037) * (_f._tau))))))) + (0.10770512626332 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.32913623258954 - ((0.50871062041158) * (real_array_get(_o, 1, ((modelica_integer) 20)))))) * (_f._tau)))))) + (1.0658070028513) * (log(tmp5));

  tmp6 = _f._delta;
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.0658070028513 + f.delta * (o[14] + f.delta * (0.76986920373342 + o[31] + f.delta * (-0.8399798909613 + o[1] * (4.169939870838 + o[1] * (-6.056974507071 + o[16] * (-0.0246442911521889 - 1.42788107204769 * o[17]))) + f.delta * (0.175936297894 + o[1] * (-1.77905741714956 + o[1] * (3.6228828287893 + 2.82089800351868 * o[19])) + f.delta * (f.delta * (-0.133052405238576 + o[1] * (0.56556450999055 + 0.98617670687766 * o[21]) + f.delta * ((-0.094523605689436 * o[1]) + f.delta * ((-0.118674762819776 * o[22]) + f.delta * (o[1] * (0.0052130658265276 + 0.0290780142333399 * o[21]) + f.delta * (0.00080964802996215 - 0.0004941628896799601 * f.delta * o[22] - 0.0016557679795037 * f.tau))))) + (0.5385256313166 + o[1] * (-1.6456811629477 - 2.5435531020579 * o[20])) * f.tau)))))) / f.delta");}
  _f._fdelta = (1.0658070028513 + (_f._delta) * (real_array_get(_o, 1, ((modelica_integer) 14)) + (_f._delta) * (0.76986920373342 + real_array_get(_o, 1, ((modelica_integer) 31)) + (_f._delta) * (-0.8399798909613 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (4.169939870838 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-6.056974507071 + (real_array_get(_o, 1, ((modelica_integer) 16))) * (-0.0246442911521889 - ((1.42788107204769) * (real_array_get(_o, 1, ((modelica_integer) 17))))))) + (_f._delta) * (0.175936297894 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.77905741714956 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (3.6228828287893 + (2.82089800351868) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_f._delta) * ((_f._delta) * (-0.133052405238576 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.56556450999055 + (0.98617670687766) * (real_array_get(_o, 1, ((modelica_integer) 21)))) + (_f._delta) * ((-((0.094523605689436) * (real_array_get(_o, 1, ((modelica_integer) 1))))) + (_f._delta) * ((-((0.118674762819776) * (real_array_get(_o, 1, ((modelica_integer) 22))))) + (_f._delta) * ((real_array_get(_o, 1, ((modelica_integer) 1))) * (0.0052130658265276 + (0.0290780142333399) * (real_array_get(_o, 1, ((modelica_integer) 21)))) + (_f._delta) * (0.00080964802996215 - (((0.0004941628896799601) * (_f._delta)) * (real_array_get(_o, 1, ((modelica_integer) 22)))) - ((0.0016557679795037) * (_f._tau))))))) + (0.5385256313166 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.6456811629477 - ((2.5435531020579) * (real_array_get(_o, 1, ((modelica_integer) 20)))))) * (_f._tau))))))) / tmp6;

  tmp7 = real_array_get(_o, 1, ((modelica_integer) 32));
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-1.0658070028513 + o[32] * (0.76986920373342 + o[31] + f.delta * (-1.6799597819226 + o[1] * (8.339879741676 + o[1] * (-12.113949014142 + o[16] * (-0.049288582304378 - 2.85576214409538 * o[17]))) + f.delta * (0.527808893682 + o[1] * (-5.3371722514487 + o[1] * (10.868648486368 + 8.462694010556 * o[19])) + f.delta * (f.delta * (-0.66526202619288 + o[1] * (2.82782254995276 + 4.9308835343883 * o[21]) + f.delta * ((-0.56714163413662 * o[1]) + f.delta * ((-0.83072333973843 * o[22]) + f.delta * (o[1] * (0.04170452661222 + 0.232624113866719 * o[21]) + f.delta * (0.0072868322696594 - 0.0049416288967996 * f.delta * o[22] - 0.0149019118155333 * f.tau))))) + (2.1541025252664 + o[1] * (-6.5827246517908 - 10.1742124082316 * o[20])) * f.tau))))) / o[32]");}
  _f._fdeltadelta = (-1.0658070028513 + (real_array_get(_o, 1, ((modelica_integer) 32))) * (0.76986920373342 + real_array_get(_o, 1, ((modelica_integer) 31)) + (_f._delta) * (-1.6799597819226 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (8.339879741676 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-12.113949014142 + (real_array_get(_o, 1, ((modelica_integer) 16))) * (-0.049288582304378 - ((2.85576214409538) * (real_array_get(_o, 1, ((modelica_integer) 17))))))) + (_f._delta) * (0.527808893682 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-5.3371722514487 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (10.868648486368 + (8.462694010556) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_f._delta) * ((_f._delta) * (-0.66526202619288 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (2.82782254995276 + (4.9308835343883) * (real_array_get(_o, 1, ((modelica_integer) 21)))) + (_f._delta) * ((-((0.56714163413662) * (real_array_get(_o, 1, ((modelica_integer) 1))))) + (_f._delta) * ((-((0.83072333973843) * (real_array_get(_o, 1, ((modelica_integer) 22))))) + (_f._delta) * ((real_array_get(_o, 1, ((modelica_integer) 1))) * (0.04170452661222 + (0.232624113866719) * (real_array_get(_o, 1, ((modelica_integer) 21)))) + (_f._delta) * (0.0072868322696594 - (((0.0049416288967996) * (_f._delta)) * (real_array_get(_o, 1, ((modelica_integer) 22)))) - ((0.0149019118155333) * (_f._tau))))))) + (2.1541025252664 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-6.5827246517908 - ((10.1742124082316) * (real_array_get(_o, 1, ((modelica_integer) 20)))))) * (_f._tau)))))) / tmp7;

  _f._ftau = 20.944396974307 + (-15.3735415757432 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (18.3301634515678 + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-28.08078114862 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (14.4640436358204 - ((0.194503669468755) * (real_array_get(_o, 1, ((modelica_integer) 6)))))))) * (_f._tau) + (_f._delta) * (real_array_get(_o, 1, ((modelica_integer) 39)) + (_f._delta) * ((_f._tau) * (-1.70429417648412 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (29.3833689251262 + (-21.3518320798755 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (0.86725181134139 + (3.2651861903201) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_f._tau))) + (_f._delta) * ((2.779959913892 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-8.075966009428001 + (real_array_get(_o, 1, ((modelica_integer) 16))) * (-0.131436219478341 - ((12.37496929108) * (real_array_get(_o, 1, ((modelica_integer) 17))))))) * (_f._tau) + (_f._delta) * ((-0.8895287085747799 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (3.6228828287893 + (18.3358370228714) * (real_array_get(_o, 1, ((modelica_integer) 19))))) * (_f._tau) + (_f._delta) * (0.10770512626332 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.9874086977686199 - ((13.2264761307011) * (real_array_get(_o, 1, ((modelica_integer) 20))))) + (_f._delta) * ((0.188521503330184 + (4.2734323964699) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (_f._tau) + (_f._delta) * ((-((0.027006744482696) * (_f._tau))) + (_f._delta) * ((-((0.38569297916427) * (real_array_get(_o, 1, ((modelica_integer) 40))))) + (_f._delta) * ((_f._delta) * (-0.00016557679795037 - (((0.00116802137560719) * (_f._delta)) * (real_array_get(_o, 1, ((modelica_integer) 40))))) + (0.00115845907256168 + (0.08400315222964901) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (_f._tau))))))))));

  _f._ftautau = -15.3735415757432 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (109.980980709407 + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-252.72703033758 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (159.104479994024 - ((4.2790807283126) * (real_array_get(_o, 1, ((modelica_integer) 6))))))) + (_f._delta) * (-2.5308630955428 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-34.573223420043 + (185.894192367068 - ((174.645121293971) * (real_array_get(_o, 1, ((modelica_integer) 1))))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) + (_f._delta) * (-1.70429417648412 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (146.916844625631 + (-128.110992479253 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (18.2122880381691 + (81.629654758002) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_f._tau)) + (_f._delta) * (2.779959913892 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-24.227898028284 + (real_array_get(_o, 1, ((modelica_integer) 16))) * (-1.97154329217511 - ((309.374232277) * (real_array_get(_o, 1, ((modelica_integer) 17)))))) + (_f._delta) * (-0.8895287085747799 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (10.868648486368 + (458.39592557179) * (real_array_get(_o, 1, ((modelica_integer) 19)))) + (_f._delta) * ((_f._delta) * (0.188521503330184 + (106.835809911747) * (real_array_get(_o, 1, ((modelica_integer) 21))) + (_f._delta) * (-0.027006744482696 + (_f._delta) * ((-((9.642324479106801) * (real_array_get(_o, 1, ((modelica_integer) 21))))) + (_f._delta) * (0.00115845907256168 + (2.10007880574121) * (real_array_get(_o, 1, ((modelica_integer) 21))) - (((0.0292005343901797) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (real_array_get(_o, 1, ((modelica_integer) 32)))))))) + (-1.97481739553724 - ((330.66190326753) * (real_array_get(_o, 1, ((modelica_integer) 20))))) * (_f._tau))))));

  _f._fdeltatau = real_array_get(_o, 1, ((modelica_integer) 39)) + (_f._delta) * ((_f._tau) * (-3.4085883529682 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (58.766737850252 + (-42.703664159751 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (1.73450362268278 + (6.5303723806402) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_f._tau))) + (_f._delta) * ((8.339879741676 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-24.227898028284 + (real_array_get(_o, 1, ((modelica_integer) 16))) * (-0.39430865843502 - ((37.12490787324) * (real_array_get(_o, 1, ((modelica_integer) 17))))))) * (_f._tau) + (_f._delta) * ((-3.5581148342991 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (14.4915313151573 + (73.34334809148601) * (real_array_get(_o, 1, ((modelica_integer) 19))))) * (_f._tau) + (_f._delta) * (0.5385256313166 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-4.9370434888431 - ((66.132380653505) * (real_array_get(_o, 1, ((modelica_integer) 20))))) + (_f._delta) * ((1.1311290199811 + (25.6405943788192) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (_f._tau) + (_f._delta) * ((-((0.189047211378872) * (_f._tau))) + (_f._delta) * ((-((3.08554383331418) * (real_array_get(_o, 1, ((modelica_integer) 40))))) + (_f._delta) * ((_f._delta) * (-0.0016557679795037 - (((0.0128482351316791) * (_f._delta)) * (real_array_get(_o, 1, ((modelica_integer) 40))))) + (0.0104261316530551 + (0.75602837006684) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (_f._tau)))))))));
  _return: OMC_LABEL_UNUSED
  return _f;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData_t *threadData, modelica_metatype _d, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype out_f;
  tmp1 = mmc_unbox_real(_d);
  tmp2 = mmc_unbox_real(_T);
  _f = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, tmp1, tmp2);
  tmpMeta3 = mmc_mk_rcon(_f._d);
  tmpMeta4 = mmc_mk_rcon(_f._T);
  tmpMeta5 = mmc_mk_rcon(_f._R_s);
  tmpMeta6 = mmc_mk_rcon(_f._delta);
  tmpMeta7 = mmc_mk_rcon(_f._tau);
  tmpMeta8 = mmc_mk_rcon(_f._f);
  tmpMeta9 = mmc_mk_rcon(_f._fdelta);
  tmpMeta10 = mmc_mk_rcon(_f._fdeltadelta);
  tmpMeta11 = mmc_mk_rcon(_f._ftau);
  tmpMeta12 = mmc_mk_rcon(_f._ftautau);
  tmpMeta13 = mmc_mk_rcon(_f._fdeltatau);
  out_f = mmc_mk_box12(3, &Modelica_Media_Common_HelmholtzDerivs__desc, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13);
  return out_f;
}

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_real _pi1;
  modelica_real _tau1;
  real_array _o;
  modelica_real _pl;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  static int tmp8 = 0;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  static int tmp12 = 0;
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  static int tmp16 = 0;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  // _pi1 has no default value.
  // _tau1 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)45); // _o has no default value.
  // _pl has no default value.
  _pl = fmin(_p,22063999.0);

  {
    if(!(_p > 611.657))
    {
      tmpMeta1 = stringAppend(_OMC_LIT57,_OMC_LIT58);
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta3 = stringAppend(tmpMeta1,tmp2);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT59);
      tmp5 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta6 = stringAppend(tmpMeta4,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1638,9,1641,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta7));
      }
    }
  }

  {
    if(!(_p <= 100000000.0))
    {
      tmp9 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta10 = stringAppend(_OMC_LIT61,tmp9);
      tmpMeta11 = stringAppend(tmpMeta10,_OMC_LIT62);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1642,9,1643,56,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta11));
      }
    }
  }

  {
    if(!(_T >= 273.15))
    {
      tmp13 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta14 = stringAppend(_OMC_LIT63,tmp13);
      tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT64);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1644,9,1645,53,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta15));
      }
    }
  }

  _g._p = _p;

  _g._T = _T;

  _g._R_s = 461.526;

  tmp17 = 16530000.0;
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 16530000.0");}
  _g._pi = (_p) / tmp17;

  tmp18 = _T;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1386.0 / T");}
  _g._tau = (1386.0) / tmp18;

  _pi1 = 7.1 - _g._pi;

  _tau1 = -1.222 + _g._tau;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_tau1) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (_tau1);

  tmp19 = real_array_get(_o, 1, ((modelica_integer) 4));
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[4]");}
  real_array_get(_o, 1, ((modelica_integer) 5)) = (1.0) / tmp19;

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_tau1);

  tmp20 = real_array_get(_o, 1, ((modelica_integer) 7));
  if (tmp20 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[7]");}
  real_array_get(_o, 1, ((modelica_integer) 8)) = (1.0) / tmp20;

  real_array_get(_o, 1, ((modelica_integer) 9)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  tmp21 = real_array_get(_o, 1, ((modelica_integer) 2));
  if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[2]");}
  real_array_get(_o, 1, ((modelica_integer) 10)) = (1.0) / tmp21;

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (_tau1);

  tmp22 = real_array_get(_o, 1, ((modelica_integer) 11));
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[11]");}
  real_array_get(_o, 1, ((modelica_integer) 12)) = (1.0) / tmp22;

  real_array_get(_o, 1, ((modelica_integer) 13)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  tmp23 = real_array_get(_o, 1, ((modelica_integer) 3));
  if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[3]");}
  real_array_get(_o, 1, ((modelica_integer) 14)) = (1.0) / tmp23;

  real_array_get(_o, 1, ((modelica_integer) 15)) = (_pi1) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 16)) = (real_array_get(_o, 1, ((modelica_integer) 15))) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 17)) = (real_array_get(_o, 1, ((modelica_integer) 15))) * (real_array_get(_o, 1, ((modelica_integer) 15)));

  real_array_get(_o, 1, ((modelica_integer) 18)) = (real_array_get(_o, 1, ((modelica_integer) 17))) * (real_array_get(_o, 1, ((modelica_integer) 17)));

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((real_array_get(_o, 1, ((modelica_integer) 17))) * (real_array_get(_o, 1, ((modelica_integer) 18)))) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 20)) = (real_array_get(_o, 1, ((modelica_integer) 15))) * (real_array_get(_o, 1, ((modelica_integer) 17)));

  real_array_get(_o, 1, ((modelica_integer) 21)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 22)) = (real_array_get(_o, 1, ((modelica_integer) 21))) * (real_array_get(_o, 1, ((modelica_integer) 21)));

  real_array_get(_o, 1, ((modelica_integer) 23)) = ((real_array_get(_o, 1, ((modelica_integer) 22))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);

  tmp24 = real_array_get(_o, 1, ((modelica_integer) 23));
  if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[23]");}
  real_array_get(_o, 1, ((modelica_integer) 24)) = (1.0) / tmp24;

  real_array_get(_o, 1, ((modelica_integer) 25)) = (real_array_get(_o, 1, ((modelica_integer) 22))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  tmp25 = real_array_get(_o, 1, ((modelica_integer) 25));
  if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[25]");}
  real_array_get(_o, 1, ((modelica_integer) 26)) = (1.0) / tmp25;

  real_array_get(_o, 1, ((modelica_integer) 27)) = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 22)))) * (_tau1);

  tmp26 = real_array_get(_o, 1, ((modelica_integer) 27));
  if (tmp26 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[27]");}
  real_array_get(_o, 1, ((modelica_integer) 28)) = (1.0) / tmp26;

  real_array_get(_o, 1, ((modelica_integer) 29)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 22)));

  tmp27 = real_array_get(_o, 1, ((modelica_integer) 29));
  if (tmp27 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[29]");}
  real_array_get(_o, 1, ((modelica_integer) 30)) = (1.0) / tmp27;

  real_array_get(_o, 1, ((modelica_integer) 31)) = ((((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);

  tmp28 = real_array_get(_o, 1, ((modelica_integer) 31));
  if (tmp28 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[31]");}
  real_array_get(_o, 1, ((modelica_integer) 32)) = (1.0) / tmp28;

  real_array_get(_o, 1, ((modelica_integer) 33)) = (((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);

  tmp29 = real_array_get(_o, 1, ((modelica_integer) 33));
  if (tmp29 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[33]");}
  real_array_get(_o, 1, ((modelica_integer) 34)) = (1.0) / tmp29;

  real_array_get(_o, 1, ((modelica_integer) 35)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);

  tmp30 = real_array_get(_o, 1, ((modelica_integer) 35));
  if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[35]");}
  real_array_get(_o, 1, ((modelica_integer) 36)) = (1.0) / tmp30;

  real_array_get(_o, 1, ((modelica_integer) 37)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  tmp31 = real_array_get(_o, 1, ((modelica_integer) 37));
  if (tmp31 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[37]");}
  real_array_get(_o, 1, ((modelica_integer) 38)) = (1.0) / tmp31;

  tmp32 = real_array_get(_o, 1, ((modelica_integer) 6));
  if (tmp32 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[6]");}
  real_array_get(_o, 1, ((modelica_integer) 39)) = (1.0) / tmp32;

  real_array_get(_o, 1, ((modelica_integer) 40)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 22)))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  tmp33 = real_array_get(_o, 1, ((modelica_integer) 40));
  if (tmp33 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[40]");}
  real_array_get(_o, 1, ((modelica_integer) 41)) = (1.0) / tmp33;

  tmp34 = real_array_get(_o, 1, ((modelica_integer) 22));
  if (tmp34 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[22]");}
  real_array_get(_o, 1, ((modelica_integer) 42)) = (1.0) / tmp34;

  real_array_get(_o, 1, ((modelica_integer) 43)) = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 21)))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  tmp35 = real_array_get(_o, 1, ((modelica_integer) 43));
  if (tmp35 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[43]");}
  real_array_get(_o, 1, ((modelica_integer) 44)) = (1.0) / tmp35;

  tmp36 = real_array_get(_o, 1, ((modelica_integer) 13));
  if (tmp36 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[13]");}
  real_array_get(_o, 1, ((modelica_integer) 45)) = (1.0) / tmp36;

  tmp37 = real_array_get(_o, 1, ((modelica_integer) 1));
  if (tmp37 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.14632971213167 + tau1 * (-0.84548187169114 + tau1 * (-3.756360367204 + tau1 * (3.3855169168385 + tau1 * (-0.95791963387872 + tau1 * (0.15772038513228 + (-0.016616417199501 + 0.00081214629983568 * tau1) * tau1)))))) / o[1]");}
  _g._g = (_pi1) * ((_pi1) * ((_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (-3.1679644845054e-05 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-2.8270797985312e-06 - ((8.5205128120103e-10) * (real_array_get(_o, 1, ((modelica_integer) 6)))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 12))) * (-2.2425281908e-06 + (-6.5171222895601e-07 - ((1.4341729937924e-13) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) + (_pi1) * ((-((4.0516996860117e-07) * (real_array_get(_o, 1, ((modelica_integer) 14))))) + (real_array_get(_o, 1, ((modelica_integer) 16))) * ((-1.2734301741641e-09 - ((1.7424871230634e-10) * (real_array_get(_o, 1, ((modelica_integer) 11))))) * (real_array_get(_o, 1, ((modelica_integer) 36))) + (real_array_get(_o, 1, ((modelica_integer) 19))) * ((-((6.8762131295531e-19) * (real_array_get(_o, 1, ((modelica_integer) 34))))) + (real_array_get(_o, 1, ((modelica_integer) 15))) * ((1.4478307828521e-20) * (real_array_get(_o, 1, ((modelica_integer) 32))) + (real_array_get(_o, 1, ((modelica_integer) 20))) * ((2.6335781662795e-23) * (real_array_get(_o, 1, ((modelica_integer) 30))) + (_pi1) * ((-((1.1947622640071e-23) * (real_array_get(_o, 1, ((modelica_integer) 28))))) + (_pi1) * ((1.8228094581404e-24) * (real_array_get(_o, 1, ((modelica_integer) 26))) - (((9.3537087292458e-26) * (real_array_get(_o, 1, ((modelica_integer) 24)))) * (_pi1))))))))))) + (real_array_get(_o, 1, ((modelica_integer) 8))) * (-0.00047184321073267 + (real_array_get(_o, 1, ((modelica_integer) 7))) * (-0.00030001780793026 + (4.7661393906987e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-4.4141845330846e-06 - ((7.2694996297594e-16) * (real_array_get(_o, 1, ((modelica_integer) 9)))))) * (_tau1)))) + (real_array_get(_o, 1, ((modelica_integer) 5))) * (0.00028319080123804 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.00060706301565874 + (real_array_get(_o, 1, ((modelica_integer) 6))) * (-0.018990068218419 + (_tau1) * (-0.032529748770505 + (-0.021841717175414 - ((5.283835796993e-05) * (real_array_get(_o, 1, ((modelica_integer) 1))))) * (_tau1)))))) + (0.14632971213167 + (_tau1) * (-0.84548187169114 + (_tau1) * (-3.756360367204 + (_tau1) * (3.3855169168385 + (_tau1) * (-0.95791963387872 + (_tau1) * (0.15772038513228 + (-0.016616417199501 + (0.00081214629983568) * (_tau1)) * (_tau1))))))) / tmp37;

  _g._gpi = (_pi1) * ((_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (9.5038934535162e-05 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (8.4812393955936e-06 + (2.55615384360309e-09) * (real_array_get(_o, 1, ((modelica_integer) 6))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 12))) * (8.970112763199999e-06 + (2.60684891582404e-06 + (5.7366919751696e-13) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) + (_pi1) * ((2.02584984300585e-06) * (real_array_get(_o, 1, ((modelica_integer) 14))) + (real_array_get(_o, 1, ((modelica_integer) 16))) * ((1.01874413933128e-08 + (1.39398969845072e-09) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 36))) + (real_array_get(_o, 1, ((modelica_integer) 19))) * ((1.44400475720615e-17) * (real_array_get(_o, 1, ((modelica_integer) 34))) + (real_array_get(_o, 1, ((modelica_integer) 15))) * ((-((3.3300108005598e-19) * (real_array_get(_o, 1, ((modelica_integer) 32))))) + (real_array_get(_o, 1, ((modelica_integer) 20))) * ((-((7.6373766822106e-22) * (real_array_get(_o, 1, ((modelica_integer) 30))))) + (_pi1) * ((3.5842867920213e-22) * (real_array_get(_o, 1, ((modelica_integer) 28))) + (_pi1) * ((-((5.6507093202352e-23) * (real_array_get(_o, 1, ((modelica_integer) 26))))) + ((2.99318679335866e-24) * (real_array_get(_o, 1, ((modelica_integer) 24)))) * (_pi1)))))))))) + (real_array_get(_o, 1, ((modelica_integer) 8))) * (0.00094368642146534 + (real_array_get(_o, 1, ((modelica_integer) 7))) * (0.00060003561586052 + (-9.5322787813974e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (8.828369066169199e-06 + (1.45389992595188e-15) * (real_array_get(_o, 1, ((modelica_integer) 9))))) * (_tau1)))) + (real_array_get(_o, 1, ((modelica_integer) 5))) * (-0.00028319080123804 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.00060706301565874 + (real_array_get(_o, 1, ((modelica_integer) 6))) * (0.018990068218419 + (_tau1) * (0.032529748770505 + (0.021841717175414 + (5.283835796993e-05) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (_tau1)))));

  _g._gpipi = (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (-0.000190077869070324 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-1.69624787911872e-05 - ((5.1123076872062e-09) * (real_array_get(_o, 1, ((modelica_integer) 6)))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 12))) * (-2.69103382896e-05 + (-7.8205467474721e-06 - ((1.72100759255088e-12) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) + (_pi1) * ((-((8.103399372023399e-06) * (real_array_get(_o, 1, ((modelica_integer) 14))))) + (real_array_get(_o, 1, ((modelica_integer) 16))) * ((-7.131208975319e-08 - ((9.757927889154999e-09) * (real_array_get(_o, 1, ((modelica_integer) 11))))) * (real_array_get(_o, 1, ((modelica_integer) 36))) + (real_array_get(_o, 1, ((modelica_integer) 19))) * ((-((2.8880095144123e-16) * (real_array_get(_o, 1, ((modelica_integer) 34))))) + (real_array_get(_o, 1, ((modelica_integer) 15))) * ((7.326023761231599e-18) * (real_array_get(_o, 1, ((modelica_integer) 32))) + (real_array_get(_o, 1, ((modelica_integer) 20))) * ((2.13846547101895e-20) * (real_array_get(_o, 1, ((modelica_integer) 30))) + (_pi1) * ((-((1.03944316968618e-20) * (real_array_get(_o, 1, ((modelica_integer) 28))))) + (_pi1) * ((1.69521279607057e-21) * (real_array_get(_o, 1, ((modelica_integer) 26))) - (((9.2788790594118e-23) * (real_array_get(_o, 1, ((modelica_integer) 24)))) * (_pi1))))))))))) + (real_array_get(_o, 1, ((modelica_integer) 8))) * (-0.00094368642146534 + (real_array_get(_o, 1, ((modelica_integer) 7))) * (-0.00060003561586052 + (9.5322787813974e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-8.828369066169199e-06 - ((1.45389992595188e-15) * (real_array_get(_o, 1, ((modelica_integer) 9)))))) * (_tau1)));

  _g._gtau = (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 38))) * (-0.00254871721114236 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.0042494411096112 + (0.018990068218419 + (-0.021841717175414 - ((0.00015851507390979) * (real_array_get(_o, 1, ((modelica_integer) 1))))) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 6))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (0.00141552963219801 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (4.7661393906987e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.32425535992538e-05 - ((1.2358149370591e-14) * (real_array_get(_o, 1, ((modelica_integer) 9))))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 12))) * (0.000126718579380216 - ((5.1123076872062e-09) * (real_array_get(_o, 1, ((modelica_integer) 37))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 39))) * (1.1212640954e-05 + (1.30342445791202e-06 - ((1.4341729937924e-12) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) + (_pi1) * ((3.2413597488094e-06) * (real_array_get(_o, 1, ((modelica_integer) 5))) + (real_array_get(_o, 1, ((modelica_integer) 16))) * ((1.40077319158051e-08 + (1.04549227383804e-09) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 45))) + (real_array_get(_o, 1, ((modelica_integer) 19))) * ((1.9941018075704e-17) * (real_array_get(_o, 1, ((modelica_integer) 44))) + (real_array_get(_o, 1, ((modelica_integer) 15))) * ((-((4.4882754268415e-19) * (real_array_get(_o, 1, ((modelica_integer) 42))))) + (real_array_get(_o, 1, ((modelica_integer) 20))) * ((-((1.00075970318621e-21) * (real_array_get(_o, 1, ((modelica_integer) 28))))) + (_pi1) * ((4.6595728296277e-22) * (real_array_get(_o, 1, ((modelica_integer) 26))) + (_pi1) * ((-((7.2912378325616e-23) * (real_array_get(_o, 1, ((modelica_integer) 24))))) + ((3.8350205789908e-24) * (real_array_get(_o, 1, ((modelica_integer) 41)))) * (_pi1)))))))))))) + (real_array_get(_o, 1, ((modelica_integer) 8))) * (-0.29265942426334 + (_tau1) * (0.84548187169114 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (3.3855169168385 + (_tau1) * (-1.91583926775744 + (_tau1) * (0.47316115539684 + (-0.066465668798004 + (0.0040607314991784) * (_tau1)) * (_tau1))))));

  tmp38 = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 22)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp38 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.61070864317613e-22 * pi1 / (o[1] * o[22] * o[3] * tau1)");}
  tmp39 = (real_array_get(_o, 1, ((modelica_integer) 22))) * (_tau1);
  if (tmp39 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.43624813658928e-17 / (o[22] * tau1)");}
  tmp40 = ((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp40 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-1.68092782989661e-07 - 7.3184459168663e-09 * o[11]) / (o[2] * o[3] * tau1)");}
  tmp41 = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_tau1);
  if (tmp41 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-6.7275845724e-05 + (-3.9102733737361e-06 - 1.29075569441316e-11 * o[13]) * o[7]) / (o[1] * o[2] * tau1)");}
  _g._gtautau = (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 36))) * (0.0254871721114236 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.033995528876889 + (-0.037980136436838 - ((0.00031703014781958) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (real_array_get(_o, 1, ((modelica_integer) 6))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 12))) * (-0.005662118528792 + (real_array_get(_o, 1, ((modelica_integer) 6))) * (-2.64851071985076e-05 - ((1.97730389929456e-13) * (real_array_get(_o, 1, ((modelica_integer) 9)))))) + (_pi1) * ((-0.00063359289690108 - ((2.55615384360309e-08) * (real_array_get(_o, 1, ((modelica_integer) 37))))) * (real_array_get(_o, 1, ((modelica_integer) 39))) + (_pi1) * ((_pi1) * ((-((2.91722377392842e-05) * (real_array_get(_o, 1, ((modelica_integer) 38))))) + (real_array_get(_o, 1, ((modelica_integer) 16))) * ((real_array_get(_o, 1, ((modelica_integer) 19))) * ((-((5.9823054227112e-16) * (real_array_get(_o, 1, ((modelica_integer) 32))))) + (real_array_get(_o, 1, ((modelica_integer) 15))) * ((real_array_get(_o, 1, ((modelica_integer) 20))) * ((3.9029628424262e-20) * (real_array_get(_o, 1, ((modelica_integer) 26))) + (_pi1) * ((-((1.86382913185108e-20) * (real_array_get(_o, 1, ((modelica_integer) 24))))) + (_pi1) * ((2.98940751135026e-21) * (real_array_get(_o, 1, ((modelica_integer) 41))) - (((1.61070864317613e-22) * (_pi1)) / tmp38)))) + (1.43624813658928e-17) / tmp39)) + (-1.68092782989661e-07 - ((7.3184459168663e-09) * (real_array_get(_o, 1, ((modelica_integer) 11))))) / tmp40)) + (-6.7275845724e-05 + (-3.9102733737361e-06 - ((1.29075569441316e-11) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) / tmp41)))) + (real_array_get(_o, 1, ((modelica_integer) 10))) * (0.8779782727900201 + (_tau1) * (-1.69096374338228 + (real_array_get(_o, 1, ((modelica_integer) 7))) * (-1.91583926775744 + (_tau1) * (0.94632231079368 + (-0.199397006394012 + (0.0162429259967136) * (_tau1)) * (_tau1)))));

  _g._gtaupi = (real_array_get(_o, 1, ((modelica_integer) 38))) * (0.00254871721114236 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.0042494411096112 + (-0.018990068218419 + (0.021841717175414 + (0.00015851507390979) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 6))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (-0.00283105926439602 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-9.5322787813974e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (2.64851071985076e-05 + (2.4716298741182e-14) * (real_array_get(_o, 1, ((modelica_integer) 9)))))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 12))) * (-0.00038015573814065 + (1.53369230616185e-08) * (real_array_get(_o, 1, ((modelica_integer) 37)))) + (_pi1) * ((real_array_get(_o, 1, ((modelica_integer) 39))) * (-4.4850563816e-05 + (-5.2136978316481e-06 + (5.7366919751696e-12) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) + (_pi1) * ((-((1.62067987440468e-05) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + (real_array_get(_o, 1, ((modelica_integer) 16))) * ((-1.12061855326441e-07 - ((8.3639381907043e-09) * (real_array_get(_o, 1, ((modelica_integer) 11))))) * (real_array_get(_o, 1, ((modelica_integer) 45))) + (real_array_get(_o, 1, ((modelica_integer) 19))) * ((-((4.1876137958978e-16) * (real_array_get(_o, 1, ((modelica_integer) 44))))) + (real_array_get(_o, 1, ((modelica_integer) 15))) * ((1.03230334817355e-17) * (real_array_get(_o, 1, ((modelica_integer) 42))) + (real_array_get(_o, 1, ((modelica_integer) 20))) * ((2.90220313924001e-20) * (real_array_get(_o, 1, ((modelica_integer) 28))) + (_pi1) * ((-((1.39787184888831e-20) * (real_array_get(_o, 1, ((modelica_integer) 26))))) + (_pi1) * ((2.2602837280941e-21) * (real_array_get(_o, 1, ((modelica_integer) 24))) - (((1.22720658527705e-22) * (real_array_get(_o, 1, ((modelica_integer) 41)))) * (_pi1))))))))))));
  _return: OMC_LABEL_UNUSED
  return _g;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype out_g;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _g = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, tmp1, tmp2);
  tmpMeta3 = mmc_mk_rcon(_g._p);
  tmpMeta4 = mmc_mk_rcon(_g._T);
  tmpMeta5 = mmc_mk_rcon(_g._R_s);
  tmpMeta6 = mmc_mk_rcon(_g._pi);
  tmpMeta7 = mmc_mk_rcon(_g._tau);
  tmpMeta8 = mmc_mk_rcon(_g._g);
  tmpMeta9 = mmc_mk_rcon(_g._gpi);
  tmpMeta10 = mmc_mk_rcon(_g._gpipi);
  tmpMeta11 = mmc_mk_rcon(_g._gtau);
  tmpMeta12 = mmc_mk_rcon(_g._gtautau);
  tmpMeta13 = mmc_mk_rcon(_g._gtaupi);
  out_g = mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13);
  return out_g;
}

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_boolean _checkLimits)
{
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_real _tau2;
  real_array _o;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  // _tau2 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)55); // _o has no default value.
  _g._p = _p;

  _g._T = _T;

  _g._R_s = 461.526;

  if(_checkLimits)
  {
    {
      if(!(_p > 0.0))
      {
        tmpMeta1 = stringAppend(_OMC_LIT65,_OMC_LIT58);
        tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta3 = stringAppend(tmpMeta1,tmp2);
        tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT66);
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1799,11,1801,41,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta4));
        }
      }
    }

    {
      if(!(_p <= 100000000.0))
      {
        tmp6 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta7 = stringAppend(_OMC_LIT67,tmp6);
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT62);
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1802,11,1803,58,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
        }
      }
    }

    {
      if(!(_T >= 273.15))
      {
        tmp10 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta11 = stringAppend(_OMC_LIT68,tmp10);
        tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT64);
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1804,11,1805,55,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta12));
        }
      }
    }

    {
      if(!(_T <= 1073.15))
      {
        tmp14 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
        tmpMeta15 = stringAppend(_OMC_LIT69,tmp14);
        tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT70);
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",1806,11,1808,57,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta16));
        }
      }
    }
  }

  tmp18 = 1000000.0;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _g._pi = (_p) / tmp18;

  tmp19 = _T;
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "540.0 / T");}
  _g._tau = (540.0) / tmp19;

  _tau2 = -0.5 + _g._tau;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_tau2) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 3)) = (-((0.05032527872793) * (real_array_get(_o, 1, ((modelica_integer) 2)))));

  real_array_get(_o, 1, ((modelica_integer) 4)) = -0.057581259083432 + real_array_get(_o, 1, ((modelica_integer) 3));

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 6)) = -0.045996013696365 + real_array_get(_o, 1, ((modelica_integer) 5));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 8)) = -0.017834862292358 + real_array_get(_o, 1, ((modelica_integer) 7));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (real_array_get(_o, 1, ((modelica_integer) 8))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 10)));

  real_array_get(_o, 1, ((modelica_integer) 12)) = (real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 11)));

  real_array_get(_o, 1, ((modelica_integer) 13)) = (((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 14)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 15)) = ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 16)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 17)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 18)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 11)));

  real_array_get(_o, 1, ((modelica_integer) 19)) = ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 20)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)));

  real_array_get(_o, 1, ((modelica_integer) 21)) = (_g._pi) * (_g._pi);

  real_array_get(_o, 1, ((modelica_integer) 22)) = (real_array_get(_o, 1, ((modelica_integer) 21))) * (real_array_get(_o, 1, ((modelica_integer) 21)));

  real_array_get(_o, 1, ((modelica_integer) 23)) = (real_array_get(_o, 1, ((modelica_integer) 21))) * (real_array_get(_o, 1, ((modelica_integer) 22)));

  real_array_get(_o, 1, ((modelica_integer) 24)) = ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 25)) = (real_array_get(_o, 1, ((modelica_integer) 12))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 26)) = (((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 25)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 27)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 28)) = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 29)) = (((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 25)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 30)) = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 25)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 31)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 32)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 33)) = (_g._tau) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 34)) = (real_array_get(_o, 1, ((modelica_integer) 33))) * (real_array_get(_o, 1, ((modelica_integer) 33)));

  real_array_get(_o, 1, ((modelica_integer) 35)) = (-((5.3349095828174e-05) * (real_array_get(_o, 1, ((modelica_integer) 13)))));

  real_array_get(_o, 1, ((modelica_integer) 36)) = -0.087594591301146 + real_array_get(_o, 1, ((modelica_integer) 35));

  real_array_get(_o, 1, ((modelica_integer) 37)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 36)));

  real_array_get(_o, 1, ((modelica_integer) 38)) = -0.007878555448671 + real_array_get(_o, 1, ((modelica_integer) 37));

  real_array_get(_o, 1, ((modelica_integer) 39)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 38)));

  real_array_get(_o, 1, ((modelica_integer) 40)) = -0.0003789797503263 + real_array_get(_o, 1, ((modelica_integer) 39));

  real_array_get(_o, 1, ((modelica_integer) 41)) = (real_array_get(_o, 1, ((modelica_integer) 40))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 42)) = -6.6065283340406e-05 + real_array_get(_o, 1, ((modelica_integer) 41));

  real_array_get(_o, 1, ((modelica_integer) 43)) = (real_array_get(_o, 1, ((modelica_integer) 42))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 44)) = (5.7870447262208e-06) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 45)) = (-((0.30195167236758) * (real_array_get(_o, 1, ((modelica_integer) 2)))));

  real_array_get(_o, 1, ((modelica_integer) 46)) = -0.172743777250296 + real_array_get(_o, 1, ((modelica_integer) 45));

  real_array_get(_o, 1, ((modelica_integer) 47)) = (real_array_get(_o, 1, ((modelica_integer) 46))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 48)) = -0.09199202739273001 + real_array_get(_o, 1, ((modelica_integer) 47));

  real_array_get(_o, 1, ((modelica_integer) 49)) = (real_array_get(_o, 1, ((modelica_integer) 48))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 50)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 11)));

  real_array_get(_o, 1, ((modelica_integer) 51)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 11)));

  real_array_get(_o, 1, ((modelica_integer) 52)) = ((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 25)));

  real_array_get(_o, 1, ((modelica_integer) 53)) = ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 25)));

  real_array_get(_o, 1, ((modelica_integer) 54)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 25)));

  real_array_get(_o, 1, ((modelica_integer) 55)) = ((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (_tau2);

  tmp20 = _g._pi;
  if(!(tmp20 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(g.pi) was %g should be > 0", tmp20);
  }tmp21 = (real_array_get(_o, 1, ((modelica_integer) 34))) * (_g._tau);
  if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.00560879118302 + g.tau * (0.07145273881455 + g.tau * (-0.4071049823928 + g.tau * (1.424081971444 + g.tau * (-4.38395111945 + g.tau * (-9.692768600217001 + g.tau * (10.08665568018 + (-0.2840863260772 + 0.02126846353307 * g.tau) * g.tau) + log(g.pi))))))) / (o[34] * g.tau)");}
  _g._g = (_g._pi) * (-0.0017731742473213 + real_array_get(_o, 1, ((modelica_integer) 9)) + (_g._pi) * ((_tau2) * (-3.3032641670203e-05 + (-0.00018948987516315 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.0039392777243355 + (-0.043797295650573 - ((2.6674547914087e-05) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2)) + (_g._pi) * (2.0481737692309e-08 + (4.3870667284435e-07 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-3.227767723857e-05 + (-0.0015033924542148 - ((0.040668253562649) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * ((_g._pi) * ((2.2922076337661e-06) * (real_array_get(_o, 1, ((modelica_integer) 14))) + (_g._pi) * ((-1.6714766451061e-11 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (-0.0021171472321355 - ((23.895741934104) * (real_array_get(_o, 1, ((modelica_integer) 16)))))) * (real_array_get(_o, 1, ((modelica_integer) 2))) + (_g._pi) * (-5.905956432427e-18 + (real_array_get(_o, 1, ((modelica_integer) 17))) * (-1.2621808899101e-06 - ((0.038946842435739) * (real_array_get(_o, 1, ((modelica_integer) 18))))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 11))) * (1.1256211360459e-11 - ((8.2311340897998) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((1.9809712802088e-08) * (real_array_get(_o, 1, ((modelica_integer) 15))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (1.0406965210174e-19 + (-1.0234747095929e-13 - ((1.0018179379511e-09) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 20)))) + (real_array_get(_o, 1, ((modelica_integer) 23))) * ((real_array_get(_o, 1, ((modelica_integer) 13))) * (-8.0882908646985e-11 + (0.10693031879409) * (real_array_get(_o, 1, ((modelica_integer) 24)))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((-((0.33662250574171) * (real_array_get(_o, 1, ((modelica_integer) 26))))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((real_array_get(_o, 1, ((modelica_integer) 27))) * (8.9185845355421e-25 + (3.0629316876232e-13 - ((4.2002467698208e-06) * (real_array_get(_o, 1, ((modelica_integer) 15))))) * (real_array_get(_o, 1, ((modelica_integer) 28)))) + (_g._pi) * ((-((5.9056029685639e-26) * (real_array_get(_o, 1, ((modelica_integer) 24))))) + (_g._pi) * ((3.7826947613457e-06) * (real_array_get(_o, 1, ((modelica_integer) 29))) + (_g._pi) * ((-((1.2768608934681e-15) * (real_array_get(_o, 1, ((modelica_integer) 30))))) + ((real_array_get(_o, 1, ((modelica_integer) 31))) * (7.3087610595061e-29 + (real_array_get(_o, 1, ((modelica_integer) 18))) * (5.5414715350778e-17 - ((9.436970724121e-07) * (real_array_get(_o, 1, ((modelica_integer) 32))))))) * (_g._pi))))))))))))) + (_tau2) * (-7.8847309559367e-10 + (1.2790717852285e-08 + (4.8225372718507e-07) * (_tau2)) * (_tau2)))))) + (-0.00560879118302 + (_g._tau) * (0.07145273881455 + (_g._tau) * (-0.4071049823928 + (_g._tau) * (1.424081971444 + (_g._tau) * (-4.38395111945 + (_g._tau) * (-9.692768600217001 + (_g._tau) * (10.08665568018 + (-0.2840863260772 + (0.02126846353307) * (_g._tau)) * (_g._tau)) + log(tmp20))))))) / tmp21;

  tmp22 = _g._pi;
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.0 + g.pi * (-0.0017731742473213 + o[9] + g.pi * (o[43] + g.pi * (6.1445213076927e-08 + (1.31612001853305e-06 + o[1] * (-9.683303171571e-05 + (-0.0045101773626444 - 0.122004760687947 * o[13]) * o[2])) * tau2 + g.pi * (g.pi * (1.14610381688305e-05 * o[14] + g.pi * ((-1.00288598706366e-10 + o[15] * (-0.012702883392813 - 143.374451604624 * o[16])) * o[2] + g.pi * (-4.1341695026989e-17 + o[17] * (-8.8352662293707e-06 - 0.272627897050173 * o[18]) + g.pi * (o[11] * (9.0049690883672e-11 - 65.84907271839801 * o[19]) + g.pi * (1.78287415218792e-07 * o[15] + g.pi * (o[10] * (1.0406965210174e-18 + (-1.0234747095929e-12 - 1.0018179379511e-08 * o[10]) * o[20]) + o[23] * (o[13] * (-1.29412653835176e-09 + 1.71088510070544 * o[24]) + o[21] * ((-6.0592051033508 * o[26]) + o[21] * (o[27] * (1.78371690710842e-23 + (6.1258633752464e-12 - 8.4004935396416e-05 * o[15]) * o[28]) + g.pi * ((-1.24017662339842e-24 * o[24]) + g.pi * (8.3219284749605e-05 * o[29] + g.pi * ((-2.93678005497663e-14 * o[30]) + o[31] * (1.75410265428146e-27 + o[18] * (1.32995316841867e-15 - 2.26487297378904e-05 * o[32])) * g.pi)))))))))))) + tau2 * (-3.15389238237468e-09 + (5.116287140914e-08 + 1.92901490874028e-06 * tau2) * tau2)))))) / g.pi");}
  _g._gpi = (1.0 + (_g._pi) * (-0.0017731742473213 + real_array_get(_o, 1, ((modelica_integer) 9)) + (_g._pi) * (real_array_get(_o, 1, ((modelica_integer) 43)) + (_g._pi) * (6.1445213076927e-08 + (1.31612001853305e-06 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-9.683303171571e-05 + (-0.0045101773626444 - ((0.122004760687947) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * ((_g._pi) * ((1.14610381688305e-05) * (real_array_get(_o, 1, ((modelica_integer) 14))) + (_g._pi) * ((-1.00288598706366e-10 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (-0.012702883392813 - ((143.374451604624) * (real_array_get(_o, 1, ((modelica_integer) 16)))))) * (real_array_get(_o, 1, ((modelica_integer) 2))) + (_g._pi) * (-4.1341695026989e-17 + (real_array_get(_o, 1, ((modelica_integer) 17))) * (-8.8352662293707e-06 - ((0.272627897050173) * (real_array_get(_o, 1, ((modelica_integer) 18))))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 11))) * (9.0049690883672e-11 - ((65.84907271839801) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((1.78287415218792e-07) * (real_array_get(_o, 1, ((modelica_integer) 15))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (1.0406965210174e-18 + (-1.0234747095929e-12 - ((1.0018179379511e-08) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 20)))) + (real_array_get(_o, 1, ((modelica_integer) 23))) * ((real_array_get(_o, 1, ((modelica_integer) 13))) * (-1.29412653835176e-09 + (1.71088510070544) * (real_array_get(_o, 1, ((modelica_integer) 24)))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((-((6.0592051033508) * (real_array_get(_o, 1, ((modelica_integer) 26))))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((real_array_get(_o, 1, ((modelica_integer) 27))) * (1.78371690710842e-23 + (6.1258633752464e-12 - ((8.4004935396416e-05) * (real_array_get(_o, 1, ((modelica_integer) 15))))) * (real_array_get(_o, 1, ((modelica_integer) 28)))) + (_g._pi) * ((-((1.24017662339842e-24) * (real_array_get(_o, 1, ((modelica_integer) 24))))) + (_g._pi) * ((8.3219284749605e-05) * (real_array_get(_o, 1, ((modelica_integer) 29))) + (_g._pi) * ((-((2.93678005497663e-14) * (real_array_get(_o, 1, ((modelica_integer) 30))))) + ((real_array_get(_o, 1, ((modelica_integer) 31))) * (1.75410265428146e-27 + (real_array_get(_o, 1, ((modelica_integer) 18))) * (1.32995316841867e-15 - ((2.26487297378904e-05) * (real_array_get(_o, 1, ((modelica_integer) 32))))))) * (_g._pi))))))))))))) + (_tau2) * (-3.15389238237468e-09 + (5.116287140914e-08 + (1.92901490874028e-06) * (_tau2)) * (_tau2))))))) / tmp22;

  tmp23 = real_array_get(_o, 1, ((modelica_integer) 21));
  if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-1.0 + o[21] * (o[43] + g.pi * (1.22890426153854e-07 + (2.6322400370661e-06 + o[1] * (-0.00019366606343142 + (-0.009020354725288801 - 0.244009521375894 * o[13]) * o[2])) * tau2 + g.pi * (g.pi * (4.5844152675322e-05 * o[14] + g.pi * ((-5.0144299353183e-10 + o[15] * (-0.063514416964065 - 716.87225802312 * o[16])) * o[2] + g.pi * (-2.48050170161934e-16 + o[17] * (-5.3011597376224e-05 - 1.63576738230104 * o[18]) + g.pi * (o[11] * (6.303478361857e-10 - 460.94350902879 * o[19]) + g.pi * (1.42629932175034e-06 * o[15] + g.pi * (o[10] * (9.366268689156601e-18 + (-9.2112723863361e-12 - 9.016361441559899e-08 * o[10]) * o[20]) + o[23] * (o[13] * (-1.94118980752764e-08 + 25.6632765105816 * o[24]) + o[21] * ((-103.006486756963 * o[26]) + o[21] * (o[27] * (3.389062123506e-22 + (1.16391404129682e-10 - 0.0015960937725319 * o[15]) * o[28]) + g.pi * ((-2.48035324679684e-23 * o[24]) + g.pi * (0.00174760497974171 * o[29] + g.pi * ((-6.4609161209486e-13 * o[30]) + o[31] * (4.0344361048474e-26 + o[18] * (3.05889228736295e-14 - 0.00052092078397148 * o[32])) * g.pi)))))))))))) + tau2 * (-9.461677147124e-09 + (1.5348861422742e-07 + o[44]) * tau2))))) / o[21]");}
  _g._gpipi = (-1.0 + (real_array_get(_o, 1, ((modelica_integer) 21))) * (real_array_get(_o, 1, ((modelica_integer) 43)) + (_g._pi) * (1.22890426153854e-07 + (2.6322400370661e-06 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.00019366606343142 + (-0.009020354725288801 - ((0.244009521375894) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * ((_g._pi) * ((4.5844152675322e-05) * (real_array_get(_o, 1, ((modelica_integer) 14))) + (_g._pi) * ((-5.0144299353183e-10 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (-0.063514416964065 - ((716.87225802312) * (real_array_get(_o, 1, ((modelica_integer) 16)))))) * (real_array_get(_o, 1, ((modelica_integer) 2))) + (_g._pi) * (-2.48050170161934e-16 + (real_array_get(_o, 1, ((modelica_integer) 17))) * (-5.3011597376224e-05 - ((1.63576738230104) * (real_array_get(_o, 1, ((modelica_integer) 18))))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 11))) * (6.303478361857e-10 - ((460.94350902879) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((1.42629932175034e-06) * (real_array_get(_o, 1, ((modelica_integer) 15))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 10))) * (9.366268689156601e-18 + (-9.2112723863361e-12 - ((9.016361441559899e-08) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 20)))) + (real_array_get(_o, 1, ((modelica_integer) 23))) * ((real_array_get(_o, 1, ((modelica_integer) 13))) * (-1.94118980752764e-08 + (25.6632765105816) * (real_array_get(_o, 1, ((modelica_integer) 24)))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((-((103.006486756963) * (real_array_get(_o, 1, ((modelica_integer) 26))))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((real_array_get(_o, 1, ((modelica_integer) 27))) * (3.389062123506e-22 + (1.16391404129682e-10 - ((0.0015960937725319) * (real_array_get(_o, 1, ((modelica_integer) 15))))) * (real_array_get(_o, 1, ((modelica_integer) 28)))) + (_g._pi) * ((-((2.48035324679684e-23) * (real_array_get(_o, 1, ((modelica_integer) 24))))) + (_g._pi) * ((0.00174760497974171) * (real_array_get(_o, 1, ((modelica_integer) 29))) + (_g._pi) * ((-((6.4609161209486e-13) * (real_array_get(_o, 1, ((modelica_integer) 30))))) + ((real_array_get(_o, 1, ((modelica_integer) 31))) * (4.0344361048474e-26 + (real_array_get(_o, 1, ((modelica_integer) 18))) * (3.05889228736295e-14 - ((0.00052092078397148) * (real_array_get(_o, 1, ((modelica_integer) 32))))))) * (_g._pi))))))))))))) + (_tau2) * (-9.461677147124e-09 + (1.5348861422742e-07 + real_array_get(_o, 1, ((modelica_integer) 44))) * (_tau2)))))) / tmp23;

  tmp24 = (real_array_get(_o, 1, ((modelica_integer) 33))) * (real_array_get(_o, 1, ((modelica_integer) 34)));
  if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.0280439559151 + g.tau * (-0.2858109552582 + g.tau * (1.2213149471784 + g.tau * (-2.848163942888 + g.tau * (4.38395111945 + o[33] * (10.08665568018 + (-0.5681726521544 + 0.06380539059921 * g.tau) * g.tau)))))) / (o[33] * o[34])");}
  _g._gtau = (0.0280439559151 + (_g._tau) * (-0.2858109552582 + (_g._tau) * (1.2213149471784 + (_g._tau) * (-2.848163942888 + (_g._tau) * (4.38395111945 + (real_array_get(_o, 1, ((modelica_integer) 33))) * (10.08665568018 + (-0.5681726521544 + (0.06380539059921) * (_g._tau)) * (_g._tau))))))) / tmp24 + (_g._pi) * (-0.017834862292358 + real_array_get(_o, 1, ((modelica_integer) 49)) + (_g._pi) * (-3.3032641670203e-05 + (-0.0003789797503263 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.015757110897342 + (-0.306581069554011 - ((0.00096028372490713) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * (4.3870667284435e-07 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-9.683303171571e-05 + (-0.009020354725288801 - ((1.42338887469272) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) + (_g._pi) * (-7.8847309559367e-10 + (_g._pi) * ((1.60454534363627e-05) * (real_array_get(_o, 1, ((modelica_integer) 20))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 1))) * (-5.0144299353183e-11 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (-0.033874355714168 - ((836.35096769364) * (real_array_get(_o, 1, ((modelica_integer) 16)))))) + (_g._pi) * ((-1.38839897890111e-05 - ((0.97367106089347) * (real_array_get(_o, 1, ((modelica_integer) 18))))) * (real_array_get(_o, 1, ((modelica_integer) 50))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 14))) * (9.0049690883672e-11 - ((296.320827232793) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((2.57526266427144e-07) * (real_array_get(_o, 1, ((modelica_integer) 51))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 2))) * (4.1627860840696e-19 + (-1.0234747095929e-12 - ((1.40254511313154e-08) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 20)))) + (real_array_get(_o, 1, ((modelica_integer) 23))) * ((real_array_get(_o, 1, ((modelica_integer) 19))) * (-2.34560435076256e-09 + (5.3465159397045) * (real_array_get(_o, 1, ((modelica_integer) 24)))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((-((19.1874828272775) * (real_array_get(_o, 1, ((modelica_integer) 52))))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((real_array_get(_o, 1, ((modelica_integer) 16))) * (1.78371690710842e-23 + (1.07202609066812e-11 - ((0.000201611844951398) * (real_array_get(_o, 1, ((modelica_integer) 15))))) * (real_array_get(_o, 1, ((modelica_integer) 28)))) + (_g._pi) * ((-((1.24017662339842e-24) * (real_array_get(_o, 1, ((modelica_integer) 27))))) + (_g._pi) * ((0.000200482822351322) * (real_array_get(_o, 1, ((modelica_integer) 53))) + (_g._pi) * ((-((4.9797574845256e-14) * (real_array_get(_o, 1, ((modelica_integer) 54))))) + ((1.90027787547159e-27 + (real_array_get(_o, 1, ((modelica_integer) 18))) * (2.21658861403112e-15 - ((5.4734430199902e-05) * (real_array_get(_o, 1, ((modelica_integer) 32)))))) * (real_array_get(_o, 1, ((modelica_integer) 55)))) * (_g._pi))))))))))))) + (2.558143570457e-08 + (1.44676118155521e-06) * (_tau2)) * (_tau2)))));

  tmp25 = ((real_array_get(_o, 1, ((modelica_integer) 33))) * (real_array_get(_o, 1, ((modelica_integer) 34)))) * (_g._tau);
  if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.1682637354906 + g.tau * (1.429054776291 + g.tau * (-4.8852597887136 + g.tau * (8.544491828664 + g.tau * (-8.7679022389 + o[33] * (-0.5681726521544 + 0.12761078119842 * g.tau) * g.tau))))) / (o[33] * o[34] * g.tau)");}
  _g._gtautau = (-0.1682637354906 + (_g._tau) * (1.429054776291 + (_g._tau) * (-4.8852597887136 + (_g._tau) * (8.544491828664 + (_g._tau) * (-8.7679022389 + ((real_array_get(_o, 1, ((modelica_integer) 33))) * (-0.5681726521544 + (0.12761078119842) * (_g._tau))) * (_g._tau)))))) / tmp25 + (_g._pi) * (-0.09199202739273001 + (-0.34548755450059 - ((1.5097583618379) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * (-0.0003789797503263 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.047271332692026 + (-1.83948641732407 - ((0.03360993037175) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) + (_g._pi) * ((-0.00019366606343142 + (-0.045101773626444 - ((48.395221739552) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_tau2) + (_g._pi) * (2.558143570457e-08 + (2.89352236311042e-06) * (_tau2) + (_g._pi) * (((9.6272720618176e-05) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (_tau2) + (_g._pi) * ((-1.00288598706366e-10 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (-0.50811533571252 - ((28435.9329015838) * (real_array_get(_o, 1, ((modelica_integer) 16)))))) * (_tau2) + (_g._pi) * (((real_array_get(_o, 1, ((modelica_integer) 11))) * (-0.000138839897890111 - ((23.3681054614434) * (real_array_get(_o, 1, ((modelica_integer) 18)))))) * (_tau2) + (_g._pi) * ((6.303478361857e-10 - ((10371.2289531477) * (real_array_get(_o, 1, ((modelica_integer) 19))))) * (real_array_get(_o, 1, ((modelica_integer) 20))) + (_g._pi) * ((3.09031519712573e-06) * (real_array_get(_o, 1, ((modelica_integer) 17))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 1))) * (1.24883582522088e-18 + (-9.2112723863361e-12 - ((1.823308647071e-07) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 20)))) + (real_array_get(_o, 1, ((modelica_integer) 23))) * (((((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (-6.5676921821352e-08 + (261.979281045521) * (real_array_get(_o, 1, ((modelica_integer) 24))))) * (_tau2) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((-((((((1074.49903832754) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 25)))) * (_tau2))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((3.389062123506e-22 + (3.6448887082716e-10 - ((0.009475756712715701) * (real_array_get(_o, 1, ((modelica_integer) 15))))) * (real_array_get(_o, 1, ((modelica_integer) 28)))) * (real_array_get(_o, 1, ((modelica_integer) 32))) + (_g._pi) * ((-((2.48035324679684e-23) * (real_array_get(_o, 1, ((modelica_integer) 16))))) + (_g._pi) * (((((0.0104251067622687) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 25)))) * (_tau2) + (_g._pi) * ((((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (4.750694688679e-26 + (real_array_get(_o, 1, ((modelica_integer) 18))) * (8.6446955947214e-14 - ((0.0031198625213944) * (real_array_get(_o, 1, ((modelica_integer) 32))))))) * (_g._pi) - ((((1.89230784411972e-12) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 25)))) * (_tau2))))))))))))))))));

  _g._gtaupi = -0.017834862292358 + real_array_get(_o, 1, ((modelica_integer) 49)) + (_g._pi) * (-6.6065283340406e-05 + (-0.0007579595006526 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.031514221794684 + (-0.61316213910802 - ((0.00192056744981426) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2) + (_g._pi) * (1.31612001853305e-06 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.00029049909514713 + (-0.0270610641758664 - ((4.2701666240781) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) + (_g._pi) * (-3.15389238237468e-09 + (_g._pi) * ((8.0227267181813e-05) * (real_array_get(_o, 1, ((modelica_integer) 20))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 1))) * (-3.00865796119098e-10 + (real_array_get(_o, 1, ((modelica_integer) 15))) * (-0.203246134285008 - ((5018.1058061618) * (real_array_get(_o, 1, ((modelica_integer) 16)))))) + (_g._pi) * ((-9.7187928523078e-05 - ((6.8156974262543) * (real_array_get(_o, 1, ((modelica_integer) 18))))) * (real_array_get(_o, 1, ((modelica_integer) 50))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 14))) * (7.2039752706938e-10 - ((2370.56661786234) * (real_array_get(_o, 1, ((modelica_integer) 19))))) + (_g._pi) * ((2.3177363978443e-06) * (real_array_get(_o, 1, ((modelica_integer) 51))) + (_g._pi) * ((real_array_get(_o, 1, ((modelica_integer) 2))) * (4.1627860840696e-18 + (-1.0234747095929e-11 - ((1.40254511313154e-07) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 20)))) + (real_array_get(_o, 1, ((modelica_integer) 23))) * ((real_array_get(_o, 1, ((modelica_integer) 19))) * (-3.7529669612201e-08 + (85.544255035272) * (real_array_get(_o, 1, ((modelica_integer) 24)))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((-((345.37469089099) * (real_array_get(_o, 1, ((modelica_integer) 52))))) + (real_array_get(_o, 1, ((modelica_integer) 21))) * ((real_array_get(_o, 1, ((modelica_integer) 16))) * (3.5674338142168e-22 + (2.14405218133624e-10 - ((0.004032236899028) * (real_array_get(_o, 1, ((modelica_integer) 15))))) * (real_array_get(_o, 1, ((modelica_integer) 28)))) + (_g._pi) * ((-((2.60437090913668e-23) * (real_array_get(_o, 1, ((modelica_integer) 27))))) + (_g._pi) * ((0.0044106220917291) * (real_array_get(_o, 1, ((modelica_integer) 53))) + (_g._pi) * ((-((1.14534422144089e-12) * (real_array_get(_o, 1, ((modelica_integer) 54))))) + ((4.5606669011318e-26 + (real_array_get(_o, 1, ((modelica_integer) 18))) * (5.3198126736747e-14 - ((0.00131362632479764) * (real_array_get(_o, 1, ((modelica_integer) 32)))))) * (real_array_get(_o, 1, ((modelica_integer) 55)))) * (_g._pi))))))))))))) + (1.0232574281828e-07 + real_array_get(_o, 1, ((modelica_integer) 44))) * (_tau2))));
  _return: OMC_LABEL_UNUSED
  return _g;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _checkLimits)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype out_g;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_checkLimits);
  _g = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, tmp1, tmp2, tmp3);
  tmpMeta4 = mmc_mk_rcon(_g._p);
  tmpMeta5 = mmc_mk_rcon(_g._T);
  tmpMeta6 = mmc_mk_rcon(_g._R_s);
  tmpMeta7 = mmc_mk_rcon(_g._pi);
  tmpMeta8 = mmc_mk_rcon(_g._tau);
  tmpMeta9 = mmc_mk_rcon(_g._g);
  tmpMeta10 = mmc_mk_rcon(_g._gpi);
  tmpMeta11 = mmc_mk_rcon(_g._gpipi);
  tmpMeta12 = mmc_mk_rcon(_g._gtau);
  tmpMeta13 = mmc_mk_rcon(_g._gtautau);
  tmpMeta14 = mmc_mk_rcon(_g._gtaupi);
  out_g = mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14);
  return out_g;
}

DLLExport
Modelica_Media_Common_GibbsDerivs omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  Modelica_Media_Common_GibbsDerivs _g;
  real_array _o;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  static int tmp13 = 0;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  alloc_real_array(&(_o), 1, (_index_t)11); // _o has no default value.
  {
    if(!(_p > 0.0))
    {
      tmpMeta1 = stringAppend(_OMC_LIT71,_OMC_LIT58);
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta3 = stringAppend(tmpMeta1,tmp2);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT72);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",2240,9,2242,40,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta4));
      }
    }
  }

  {
    if(!(_p <= 10000000.0))
    {
      tmp6 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(_OMC_LIT73,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT74);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",2243,9,2244,67,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  {
    if(!(_T <= 2273.15))
    {
      tmp10 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta11 = stringAppend(_OMC_LIT75,tmp10);
      tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT76);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",2245,9,2246,77,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta12));
      }
    }
  }

  _g._p = _p;

  _g._T = _T;

  _g._R_s = 461.526;

  tmp14 = 1000000.0;
  if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _g._pi = (_p) / tmp14;

  tmp15 = _T;
  if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1000.0 / T");}
  _g._tau = (1000.0) / tmp15;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_g._tau) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (-((0.004594282089991) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  real_array_get(_o, 1, ((modelica_integer) 3)) = 0.0021774678714571 + real_array_get(_o, 1, ((modelica_integer) 2));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = (real_array_get(_o, 1, ((modelica_integer) 7))) * (_g._tau);

  real_array_get(_o, 1, ((modelica_integer) 9)) = (-((7.9449656719138e-06) * (real_array_get(_o, 1, ((modelica_integer) 8)))));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (_g._pi) * (_g._pi);

  real_array_get(_o, 1, ((modelica_integer) 11)) = (-((0.013782846269973) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  tmp16 = _g._pi;
  if(!(tmp16 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log(g.pi) was %g should be > 0", tmp16);
  }tmp17 = real_array_get(_o, 1, ((modelica_integer) 5));
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.024805148933466 + g.tau * (0.36901534980333 + g.tau * (-3.1161318213925 + g.tau * (-13.179983674201 + (6.8540841634434 - 0.32961626538917 * g.tau) * g.tau + log(g.pi))))) / o[5]");}
  _g._g = (_g._pi) * (-0.00012563183589592 + real_array_get(_o, 1, ((modelica_integer) 4)) + (_g._pi) * ((-((3.9724828359569e-06) * (real_array_get(_o, 1, ((modelica_integer) 8))))) + ((1.2919228289784e-07) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_g._pi))) + (-0.024805148933466 + (_g._tau) * (0.36901534980333 + (_g._tau) * (-3.1161318213925 + (_g._tau) * (-13.179983674201 + (6.8540841634434 - ((0.32961626538917) * (_g._tau))) * (_g._tau) + log(tmp16))))) / tmp17;

  tmp18 = _g._pi;
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.0 + g.pi * (-0.00012563183589592 + o[4] + g.pi * (o[9] + 3.8757684869352e-07 * o[5] * g.pi))) / g.pi");}
  _g._gpi = (1.0 + (_g._pi) * (-0.00012563183589592 + real_array_get(_o, 1, ((modelica_integer) 4)) + (_g._pi) * (real_array_get(_o, 1, ((modelica_integer) 9)) + ((3.8757684869352e-07) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_g._pi)))) / tmp18;

  tmp19 = real_array_get(_o, 1, ((modelica_integer) 10));
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-1.0 + o[10] * (o[9] + 7.7515369738704e-07 * o[5] * g.pi)) / o[10]");}
  _g._gpipi = (-1.0 + (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 9)) + ((7.7515369738704e-07) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_g._pi))) / tmp19;

  tmp20 = real_array_get(_o, 1, ((modelica_integer) 6));
  if (tmp20 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.07441544680039799 + g.tau * (-0.73803069960666 + (3.1161318213925 + o[1] * (6.8540841634434 - 0.65923253077834 * g.tau)) * g.tau)) / o[6]");}
  _g._gtau = (_g._pi) * (0.0021774678714571 + real_array_get(_o, 1, ((modelica_integer) 11)) + (_g._pi) * ((-((3.5752345523612e-05) * (real_array_get(_o, 1, ((modelica_integer) 7))))) + ((3.8757684869352e-07) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (_g._pi))) + (0.07441544680039799 + (_g._tau) * (-0.73803069960666 + (3.1161318213925 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (6.8540841634434 - ((0.65923253077834) * (_g._tau)))) * (_g._tau))) / tmp20;

  tmp21 = (real_array_get(_o, 1, ((modelica_integer) 6))) * (_g._tau);
  if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.297661787201592 + g.tau * (2.21409209881998 + (-6.232263642785 - 0.65923253077834 * o[5]) * g.tau)) / (o[6] * g.tau)");}
  _g._gtautau = (-0.297661787201592 + (_g._tau) * (2.21409209881998 + (-6.232263642785 - ((0.65923253077834) * (real_array_get(_o, 1, ((modelica_integer) 5))))) * (_g._tau))) / tmp21 + (_g._pi) * ((-((0.027565692539946) * (_g._tau))) + (_g._pi) * ((-((((0.000286018764188897) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_g._tau))) + ((7.7515369738704e-07) * (_g._pi)) * (_g._tau)));

  _g._gtaupi = 0.0021774678714571 + real_array_get(_o, 1, ((modelica_integer) 11)) + (_g._pi) * ((-((7.1504691047224e-05) * (real_array_get(_o, 1, ((modelica_integer) 7))))) + ((1.16273054608056e-06) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (_g._pi));
  _return: OMC_LABEL_UNUSED
  return _g;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype out_g;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _g = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, tmp1, tmp2);
  tmpMeta3 = mmc_mk_rcon(_g._p);
  tmpMeta4 = mmc_mk_rcon(_g._T);
  tmpMeta5 = mmc_mk_rcon(_g._R_s);
  tmpMeta6 = mmc_mk_rcon(_g._pi);
  tmpMeta7 = mmc_mk_rcon(_g._tau);
  tmpMeta8 = mmc_mk_rcon(_g._g);
  tmpMeta9 = mmc_mk_rcon(_g._gpi);
  tmpMeta10 = mmc_mk_rcon(_g._gpipi);
  tmpMeta11 = mmc_mk_rcon(_g._gtau);
  tmpMeta12 = mmc_mk_rcon(_g._gtautau);
  tmpMeta13 = mmc_mk_rcon(_g._gtaupi);
  out_g = mmc_mk_box12(3, &Modelica_Media_Common_GibbsDerivs__desc, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13);
  return out_g;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  real_array _n;
  modelica_real _hstar;
  modelica_real _pstar;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  real_array_alloc_copy(_OMC_LIT77, _n);
  
  _hstar = 1000.0;
  _pstar = 1000000.0;
  tmp1 = _pstar;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / pstar");}
  _pi = (_p) / tmp1;
  tmp2 = _pi;
  tmp3 = _pi;
  _h = (real_array_get(_n, 1, ((modelica_integer) 1)) + (real_array_get(_n, 1, ((modelica_integer) 2))) * (_pi) + (real_array_get(_n, 1, ((modelica_integer) 3))) * ((tmp2 * tmp2)) + (real_array_get(_n, 1, ((modelica_integer) 4))) * ((tmp3 * tmp3 * tmp3))) * (_hstar);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_real _T)
{
  modelica_real _p_sat;
  real_array _o;
  modelica_real _Tlim;
  modelica_string tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p_sat has no default value.
  alloc_real_array(&(_o), 1, (_index_t)8); // _o has no default value.
  _Tlim = fmin(_T,647.096);
  {
    if(!(_T >= 273.16))
    {
      tmp1 = modelica_real_to_modelica_string(273.16, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta2 = stringAppend(_OMC_LIT78,tmp1);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT79);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT80);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",3022,9,3024,62,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta4));
      }
    }
  }

  real_array_get(_o, 1, ((modelica_integer) 1)) = -650.17534844798 + _Tlim;

  tmp6 = real_array_get(_o, 1, ((modelica_integer) 1));
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[1]");}
  real_array_get(_o, 1, ((modelica_integer) 2)) = (1.0) / tmp6;

  real_array_get(_o, 1, ((modelica_integer) 3)) = (-((0.23855557567849) * (real_array_get(_o, 1, ((modelica_integer) 2)))));

  real_array_get(_o, 1, ((modelica_integer) 4)) = real_array_get(_o, 1, ((modelica_integer) 3)) + _Tlim;

  real_array_get(_o, 1, ((modelica_integer) 5)) = (-((4823.2657361591) * (real_array_get(_o, 1, ((modelica_integer) 4)))));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (14.91510861353) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = 405113.40542057 + real_array_get(_o, 1, ((modelica_integer) 5)) + real_array_get(_o, 1, ((modelica_integer) 7));

  tmp7 = -3232555.0322333 + (12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 4))) - ((17.073846940092) * (real_array_get(_o, 1, ((modelica_integer) 6))));
  tmp8 = (-(((4.0) * (-724213.16703206 + (1167.0521452767) * (real_array_get(_o, 1, ((modelica_integer) 4))) + real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 8))))) + (tmp7 * tmp7);
  if(!(tmp8 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt((-4.0 * (-724213.16703206 + 1167.0521452767 * o[4] + o[6]) * o[8]) + (-3232555.0322333 + 12020.82470247 * o[4] - 17.073846940092 * o[6]) ^ 2.0) was %g should be >= 0", tmp8);
  }tmp9 = 3232555.0322333 - ((12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 4)))) + (17.073846940092) * (real_array_get(_o, 1, ((modelica_integer) 6))) + sqrt(tmp8);
  tmp9 *= tmp9;tmp10 = (tmp9 * tmp9);
  if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "16000000.0 * o[8] * o[8] * o[8] * o[8] / (3232555.0322333 - 12020.82470247 * o[4] + 17.073846940092 * o[6] + ((-4.0 * (-724213.16703206 + 1167.0521452767 * o[4] + o[6]) * o[8]) + (-3232555.0322333 + 12020.82470247 * o[4] - 17.073846940092 * o[6]) ^ 2.0) ^ 0.5) ^ 4.0");}
  _p_sat = (((((16000000.0) * (real_array_get(_o, 1, ((modelica_integer) 8)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))) / tmp10;
  _return: OMC_LABEL_UNUSED
  return _p_sat;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _p_sat;
  modelica_metatype out_p_sat;
  tmp1 = mmc_unbox_real(_T);
  _p_sat = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, tmp1);
  out_p_sat = mmc_mk_rcon(_p_sat);
  return out_p_sat;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  modelica_real _pi;
  modelica_real _eta1;
  real_array _o;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  static int tmp8 = 0;
  modelica_real tmp9;
  modelica_real tmp10;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  // _pi has no default value.
  // _eta1 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)3); // _o has no default value.
  {
    if(!(_p > 611.657))
    {
      tmpMeta1 = stringAppend(_OMC_LIT81,_OMC_LIT58);
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta3 = stringAppend(tmpMeta1,tmp2);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT59);
      tmp5 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta6 = stringAppend(tmpMeta4,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",2599,9,2602,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta7));
      }
    }
  }

  tmp9 = 1000000.0;
  if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp9;

  tmp10 = 2500000.0;
  if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 2500000.0");}
  _eta1 = (_h) / tmp10 + 1.0;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_eta1) * (_eta1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  _T = -238.72489924521 - ((13.391744872602) * (_pi)) + (_eta1) * (404.21188637945 + (43.211039183559) * (_pi) + (_eta1) * (113.49746881718 - ((54.010067170506) * (_pi)) + (_eta1) * ((30.535892203916) * (_pi) + (_eta1) * ((-((6.5964749423638) * (_pi))) + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-5.8457616048039 + (real_array_get(_o, 1, ((modelica_integer) 2))) * ((_pi) * (0.009396540087836301 + (-2.5858641282073e-05 + (6.645618619163501e-08) * (_pi)) * (_pi)) + ((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (-0.0001528548241314 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (-1.0866707695377e-06 + (_pi) * (1.157364750534e-07 + (_pi) * (-4.0644363084799e-09 + (_pi) * (8.0670734103027e-11 + (_pi) * (-9.347777121394701e-13 + (5.8265442020601e-15 - ((1.5020185953503e-17) * (_pi))) * (_pi)))))))))))));
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _T;
  modelica_real _pi;
  modelica_real _pi2b;
  modelica_real _pi2c;
  modelica_real _eta;
  modelica_real _etabc;
  modelica_real _eta2a;
  modelica_real _eta2b;
  modelica_real _eta2c;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  // _pi has no default value.
  // _pi2b has no default value.
  // _pi2c has no default value.
  // _eta has no default value.
  // _etabc has no default value.
  // _eta2a has no default value.
  // _eta2b has no default value.
  // _eta2c has no default value.
  alloc_real_array(&(_o), 1, (_index_t)8); // _o has no default value.
  _pi = (_p) * (1e-06);

  _eta = (_h) * (5e-07);

  _etabc = (_h) * (0.001);

  if((_pi < 4.0))
  {
    _eta2a = _eta - 2.1;

    real_array_get(_o, 1, ((modelica_integer) 1)) = (_eta2a) * (_eta2a);

    real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

    real_array_get(_o, 1, ((modelica_integer) 3)) = (_pi) * (_pi);

    real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

    real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (_pi);

    _T = 1089.8952318288 + (1.844574935579 - ((0.0061707422868339) * (_pi))) * (_pi) + (_eta2a) * (849.51654495535 - ((4.1792700549624) * (_pi)) + (_eta2a) * (-107.81748091826 + (6.2478196935812 - ((0.31078046629583) * (_pi))) * (_pi) + (_eta2a) * (33.153654801263 - ((17.344563108114) * (_pi)) + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-7.4232016790248 + (_pi) * (-200.58176862096 + (11.670873077107) * (_pi)) + (real_array_get(_o, 1, ((modelica_integer) 1))) * ((271.96065473796) * (_pi) + (real_array_get(_o, 1, ((modelica_integer) 1))) * ((-((455.11318285818) * (_pi))) + (_eta2a) * ((1.3865724283226) * (real_array_get(_o, 1, ((modelica_integer) 4))) + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * ((3091.9688604755) * (_pi) + (real_array_get(_o, 1, ((modelica_integer) 1))) * (11.765048724356 + (real_array_get(_o, 1, ((modelica_integer) 2))) * ((-((13551.334240775) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + (real_array_get(_o, 1, ((modelica_integer) 2))) * ((-((((62.459855192507) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (_pi))) + (real_array_get(_o, 1, ((modelica_integer) 2))) * ((real_array_get(_o, 1, ((modelica_integer) 4))) * (235988.32556514 + (7399.9835474766) * (_pi)) + (real_array_get(_o, 1, ((modelica_integer) 1))) * (((19127.72923966) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4))) + (real_array_get(_o, 1, ((modelica_integer) 1))) * ((real_array_get(_o, 1, ((modelica_integer) 3))) * (128127984.04046 - ((551966.9703006) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + (real_array_get(_o, 1, ((modelica_integer) 1))) * ((-((985549096.23276) * (real_array_get(_o, 1, ((modelica_integer) 3))))) + (real_array_get(_o, 1, ((modelica_integer) 1))) * ((2822454697.3002) * (real_array_get(_o, 1, ((modelica_integer) 3))) + (real_array_get(_o, 1, ((modelica_integer) 1))) * ((real_array_get(_o, 1, ((modelica_integer) 3))) * (-3594897141.0703 + (3715408.5996233) * (real_array_get(_o, 1, ((modelica_integer) 5)))) + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (_pi)) * (252266.40357872 + (_pi) * (1722734991.3197 + (_pi) * (12848734.66465 + (-13105236.545054 - ((415351.64835634) * (real_array_get(_o, 1, ((modelica_integer) 3))))) * (_pi)))))))))))))))))))));
  }
  else
  {
    if((_pi < ((0.00012809002730136) * (_etabc) - 0.67955786399241) * (_etabc) + 905.84278514723))
    {
      _eta2b = _eta - 2.6;

      _pi2b = _pi - 2.0;

      real_array_get(_o, 1, ((modelica_integer) 1)) = (_pi2b) * (_pi2b);

      real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_pi2b);

      real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

      real_array_get(_o, 1, ((modelica_integer) 4)) = (_eta2b) * (_eta2b);

      real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

      real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

      real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

      _T = 1489.5041079516 + (0.9374714737793201) * (_pi2b) + (_eta2b) * (743.0779831403401 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (0.00011032831789999 - (((1.7565233969407e-18) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 3))))) + (_eta2b) * (-97.70831879783699 + (_pi2b) * (3.3593118604916 + (_pi2b) * (-0.021810755324761 + (_pi2b) * (0.00018955248387902 + (2.8640237477456e-07 - ((8.1456365207833e-14) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_pi2b)))) + (real_array_get(_o, 1, ((modelica_integer) 5))) * ((3.3809355601454) * (_pi2b) + (real_array_get(_o, 1, ((modelica_integer) 4))) * ((-((0.10829784403677) * (real_array_get(_o, 1, ((modelica_integer) 1))))) + (real_array_get(_o, 1, ((modelica_integer) 5))) * (2.4742464705674 + (0.16844539671904 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.0030891541160537 - ((1.0779857357512e-05) * (_pi2b)))) * (_pi2b) + (real_array_get(_o, 1, ((modelica_integer) 6))) * (-0.63281320016026 + (_pi2b) * (0.73875745236695 + (-0.046333324635812 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-7.6462712454814e-05 + (2.821728163504e-07) * (_pi2b))) * (_pi2b)) + (real_array_get(_o, 1, ((modelica_integer) 6))) * (1.1385952129658 + (_pi2b) * (-0.47128737436186 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.0013555504554949 + (1.4052392818316e-05 + (1.2704902271945e-06) * (_pi2b)) * (_pi2b))) + (real_array_get(_o, 1, ((modelica_integer) 5))) * (-0.47811863648625 + (0.15020273139707 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-3.1083814331434e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.1030139238909e-08 - ((2.5180545682962e-11) * (_pi2b))))) * (_pi2b) + ((real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (0.0085208123431544 + (_pi2b) * (-0.002176411421975 + (_pi2b) * (7.1280351959551e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.0302738212103e-06 + (7.3803353468292e-08 + (8.6934156344163e-15) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_pi2b)))))))))))));
    }
    else
    {
      _eta2c = _eta - 1.8;

      _pi2c = _pi + 25.0;

      real_array_get(_o, 1, ((modelica_integer) 1)) = (_pi2c) * (_pi2c);

      real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

      real_array_get(_o, 1, ((modelica_integer) 3)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_pi2c);

      tmp1 = real_array_get(_o, 1, ((modelica_integer) 3));
      if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[3]");}
      real_array_get(_o, 1, ((modelica_integer) 4)) = (1.0) / tmp1;

      real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

      real_array_get(_o, 1, ((modelica_integer) 6)) = (_eta2c) * (_eta2c);

      real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

      real_array_get(_o, 1, ((modelica_integer) 8)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

      tmp2 = real_array_get(_o, 1, ((modelica_integer) 1));
      if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(859777.2253558 + o[1] * (482.19755109255 + 1.126159740723e-12 * o[5])) / o[1]");}
      tmp3 = real_array_get(_o, 1, ((modelica_integer) 5));
      if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-583401318515.9 + (20825544563.171 + 31081.088422714 * o[2]) * pi2c) / o[5]");}
      _T = (_eta2c) * ((859777.2253558 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (482.19755109255 + (1.126159740723e-12) * (real_array_get(_o, 1, ((modelica_integer) 5))))) / tmp2 + (_eta2c) * ((-583401318515.9 + (20825544563.171 + (31081.088422714) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_pi2c)) / tmp3 + (real_array_get(_o, 1, ((modelica_integer) 6))) * ((real_array_get(_o, 1, ((modelica_integer) 8))) * ((real_array_get(_o, 1, ((modelica_integer) 6))) * ((1.2324579690832e-07) * (real_array_get(_o, 1, ((modelica_integer) 5))) + (real_array_get(_o, 1, ((modelica_integer) 6))) * ((-((1.1606921130984e-06) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + (real_array_get(_o, 1, ((modelica_integer) 8))) * ((2.7846367088554e-05) * (real_array_get(_o, 1, ((modelica_integer) 5))) + ((-((0.00059270038474176) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + ((0.0012918582991878) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) - ((10.842984880077) * (_pi2c))) + (real_array_get(_o, 1, ((modelica_integer) 4))) * (7326335090218.1 + (real_array_get(_o, 1, ((modelica_integer) 7))) * (3.7966001272486 + (-0.04536417267666 - ((1.7804982240686e-11) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_pi2c)))))) + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-3236839855524.2 + (_pi2c) * (358250899454.47 + (_pi2c) * (-10783068217.47 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (_pi2c)) * (610747.8356451601 + (_pi2c) * (-25745.72360417 + (1208.2315865936 + (1.4559115658698e-13) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_pi2c))))));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2(threadData, tmp1, tmp2);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_real _p)
{
  modelica_real _t_sat;
  modelica_real _pi;
  real_array _o;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  static int tmp8 = 0;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  _tailrecursive: OMC_LABEL_UNUSED
  // _t_sat has no default value.
  // _pi has no default value.
  alloc_real_array(&(_o), 1, (_index_t)20); // _o has no default value.
  {
    if(!(_p > 611.657))
    {
      tmpMeta1 = stringAppend(_OMC_LIT82,_OMC_LIT58);
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta3 = stringAppend(tmpMeta1,tmp2);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT59);
      tmp5 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta6 = stringAppend(tmpMeta4,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",2900,9,2903,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta7));
      }
    }
  }

  _pi = (fmin(_p,22064000.0)) * (1e-06);

  tmp9 = _pi;
  tmp10 = 0.25;
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }
  real_array_get(_o, 1, ((modelica_integer) 1)) = tmp11;

  real_array_get(_o, 1, ((modelica_integer) 2)) = (-((3232555.0322333) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  tmp16 = _pi;
  if(!(tmp16 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(pi) was %g should be >= 0", tmp16);
  }
  real_array_get(_o, 1, ((modelica_integer) 3)) = sqrt(tmp16);

  real_array_get(_o, 1, ((modelica_integer) 4)) = (-((724213.16703206) * (real_array_get(_o, 1, ((modelica_integer) 3)))));

  real_array_get(_o, 1, ((modelica_integer) 5)) = 405113.40542057 + real_array_get(_o, 1, ((modelica_integer) 2)) + real_array_get(_o, 1, ((modelica_integer) 4));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (-((17.073846940092) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  real_array_get(_o, 1, ((modelica_integer) 7)) = 14.91510861353 + real_array_get(_o, 1, ((modelica_integer) 3)) + real_array_get(_o, 1, ((modelica_integer) 6));

  real_array_get(_o, 1, ((modelica_integer) 8)) = (-(((4.0) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (1167.0521452767) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = -4823.2657361591 + real_array_get(_o, 1, ((modelica_integer) 10)) + real_array_get(_o, 1, ((modelica_integer) 9));

  real_array_get(_o, 1, ((modelica_integer) 12)) = (real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 11)));

  real_array_get(_o, 1, ((modelica_integer) 13)) = real_array_get(_o, 1, ((modelica_integer) 12)) + real_array_get(_o, 1, ((modelica_integer) 8));

  tmp17 = real_array_get(_o, 1, ((modelica_integer) 13));
  if(!(tmp17 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(o[13]) was %g should be >= 0", tmp17);
  }
  real_array_get(_o, 1, ((modelica_integer) 14)) = sqrt(tmp17);

  real_array_get(_o, 1, ((modelica_integer) 15)) = (-real_array_get(_o, 1, ((modelica_integer) 14)));

  real_array_get(_o, 1, ((modelica_integer) 16)) = (-((12020.82470247) * (real_array_get(_o, 1, ((modelica_integer) 1)))));

  real_array_get(_o, 1, ((modelica_integer) 17)) = (-((1167.0521452767) * (real_array_get(_o, 1, ((modelica_integer) 3)))));

  real_array_get(_o, 1, ((modelica_integer) 18)) = 4823.2657361591 + real_array_get(_o, 1, ((modelica_integer) 15)) + real_array_get(_o, 1, ((modelica_integer) 16)) + real_array_get(_o, 1, ((modelica_integer) 17));

  tmp18 = real_array_get(_o, 1, ((modelica_integer) 18));
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / o[18]");}
  real_array_get(_o, 1, ((modelica_integer) 19)) = (1.0) / tmp18;

  real_array_get(_o, 1, ((modelica_integer) 20)) = ((2.0) * (real_array_get(_o, 1, ((modelica_integer) 19)))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  tmp19 = 650.17534844798 + real_array_get(_o, 1, ((modelica_integer) 20));
  tmp20 = (-((4.0) * (-0.23855557567849 + ((1300.35069689596) * (real_array_get(_o, 1, ((modelica_integer) 19)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))))) + (tmp19 * tmp19);
  if(!(tmp20 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt((-4.0 * (-0.23855557567849 + 1300.35069689596 * o[19] * o[5])) + (650.17534844798 + o[20]) ^ 2.0) was %g should be >= 0", tmp20);
  }
  _t_sat = (0.5) * (650.17534844798 + real_array_get(_o, 1, ((modelica_integer) 20)) - (sqrt(tmp20)));
  _return: OMC_LABEL_UNUSED
  return _t_sat;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _t_sat;
  modelica_metatype out_t_sat;
  tmp1 = mmc_unbox_real(_p);
  _t_sat = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, tmp1);
  out_t_sat = mmc_mk_rcon(_t_sat);
  return out_t_sat;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _v;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _vstar;
  modelica_real _pstar;
  modelica_real _hstar;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_real _eta;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_real tmp300;
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_real tmp309;
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_real tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_real tmp321;
  modelica_real tmp322;
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_real tmp333;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_real tmp342;
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_real tmp345;
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_real tmp352;
  modelica_real tmp353;
  modelica_real tmp354;
  modelica_real tmp355;
  modelica_real tmp356;
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_real tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_real tmp365;
  modelica_real tmp366;
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  modelica_real tmp375;
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_real tmp378;
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  modelica_real tmp387;
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_real tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_real tmp399;
  modelica_real tmp400;
  modelica_real tmp401;
  modelica_real tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  modelica_real tmp405;
  modelica_real tmp406;
  modelica_real tmp407;
  modelica_real tmp408;
  modelica_real tmp409;
  modelica_real tmp410;
  modelica_real tmp411;
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_real tmp414;
  modelica_real tmp415;
  modelica_real tmp416;
  modelica_real tmp417;
  modelica_real tmp418;
  modelica_real tmp419;
  modelica_real tmp420;
  modelica_real tmp421;
  modelica_real tmp422;
  modelica_real tmp423;
  modelica_real tmp424;
  modelica_real tmp425;
  modelica_real tmp426;
  modelica_real tmp427;
  modelica_real tmp428;
  modelica_real tmp429;
  modelica_real tmp430;
  modelica_real tmp431;
  modelica_real tmp432;
  modelica_real tmp433;
  modelica_real tmp434;
  modelica_real tmp435;
  modelica_real tmp436;
  modelica_real tmp437;
  modelica_real tmp438;
  modelica_real tmp439;
  modelica_real tmp440;
  modelica_real tmp441;
  modelica_real tmp442;
  modelica_real tmp443;
  modelica_real tmp444;
  modelica_real tmp445;
  modelica_real tmp446;
  modelica_real tmp447;
  modelica_real tmp448;
  modelica_real tmp449;
  modelica_real tmp450;
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  real_array_alloc_copy(_OMC_LIT85, _n);
  
  real_array_alloc_copy(_OMC_LIT86, _I);
  
  real_array_alloc_copy(_OMC_LIT87, _J);
  
  _vstar = 0.0028;
  _pstar = 100000000.0;
  _hstar = 2100000.0;
  tmp1 = _pstar;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / pstar");}
  _pi = (_p) / tmp1;
  tmp2 = _hstar;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / hstar");}
  _eta = (_h) / tmp2;
  tmp3 = _pi + 0.128;
  tmp4 = real_array_get(_I, 1, ((modelica_integer) 1));
  if(tmp3 < 0.0 && tmp4 != 0.0)
  {
    tmp6 = modf(tmp4, &tmp7);
    
    if(tmp6 > 0.5)
    {
      tmp6 -= 1.0;
      tmp7 += 1.0;
    }
    else if(tmp6 < -0.5)
    {
      tmp6 += 1.0;
      tmp7 -= 1.0;
    }
    
    if(fabs(tmp6) < 1e-10)
      tmp5 = pow(tmp3, tmp7);
    else
    {
      tmp9 = modf(1.0/tmp4, &tmp8);
      if(tmp9 > 0.5)
      {
        tmp9 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp9 < -0.5)
      {
        tmp9 += 1.0;
        tmp8 -= 1.0;
      }
      if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
      {
        tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
      }
    }
  }
  else
  {
    tmp5 = pow(tmp3, tmp4);
  }
  if(isnan(tmp5) || isinf(tmp5))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
  }tmp10 = _eta - 0.727;
  tmp11 = real_array_get(_J, 1, ((modelica_integer) 1));
  if(tmp10 < 0.0 && tmp11 != 0.0)
  {
    tmp13 = modf(tmp11, &tmp14);
    
    if(tmp13 > 0.5)
    {
      tmp13 -= 1.0;
      tmp14 += 1.0;
    }
    else if(tmp13 < -0.5)
    {
      tmp13 += 1.0;
      tmp14 -= 1.0;
    }
    
    if(fabs(tmp13) < 1e-10)
      tmp12 = pow(tmp10, tmp14);
    else
    {
      tmp16 = modf(1.0/tmp11, &tmp15);
      if(tmp16 > 0.5)
      {
        tmp16 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp16 < -0.5)
      {
        tmp16 += 1.0;
        tmp15 -= 1.0;
      }
      if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
      {
        tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
    }
  }
  else
  {
    tmp12 = pow(tmp10, tmp11);
  }
  if(isnan(tmp12) || isinf(tmp12))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
  }tmp17 = _pi + 0.128;
  tmp18 = real_array_get(_I, 1, ((modelica_integer) 2));
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }tmp24 = _eta - 0.727;
  tmp25 = real_array_get(_J, 1, ((modelica_integer) 2));
  if(tmp24 < 0.0 && tmp25 != 0.0)
  {
    tmp27 = modf(tmp25, &tmp28);
    
    if(tmp27 > 0.5)
    {
      tmp27 -= 1.0;
      tmp28 += 1.0;
    }
    else if(tmp27 < -0.5)
    {
      tmp27 += 1.0;
      tmp28 -= 1.0;
    }
    
    if(fabs(tmp27) < 1e-10)
      tmp26 = pow(tmp24, tmp28);
    else
    {
      tmp30 = modf(1.0/tmp25, &tmp29);
      if(tmp30 > 0.5)
      {
        tmp30 -= 1.0;
        tmp29 += 1.0;
      }
      else if(tmp30 < -0.5)
      {
        tmp30 += 1.0;
        tmp29 -= 1.0;
      }
      if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
      {
        tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
    }
  }
  else
  {
    tmp26 = pow(tmp24, tmp25);
  }
  if(isnan(tmp26) || isinf(tmp26))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
  }tmp31 = _pi + 0.128;
  tmp32 = real_array_get(_I, 1, ((modelica_integer) 3));
  if(tmp31 < 0.0 && tmp32 != 0.0)
  {
    tmp34 = modf(tmp32, &tmp35);
    
    if(tmp34 > 0.5)
    {
      tmp34 -= 1.0;
      tmp35 += 1.0;
    }
    else if(tmp34 < -0.5)
    {
      tmp34 += 1.0;
      tmp35 -= 1.0;
    }
    
    if(fabs(tmp34) < 1e-10)
      tmp33 = pow(tmp31, tmp35);
    else
    {
      tmp37 = modf(1.0/tmp32, &tmp36);
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp36 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp36 -= 1.0;
      }
      if(fabs(tmp37) < 1e-10 && ((unsigned long)tmp36 & 1))
      {
        tmp33 = -pow(-tmp31, tmp34)*pow(tmp31, tmp35);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
      }
    }
  }
  else
  {
    tmp33 = pow(tmp31, tmp32);
  }
  if(isnan(tmp33) || isinf(tmp33))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
  }tmp38 = _eta - 0.727;
  tmp39 = real_array_get(_J, 1, ((modelica_integer) 3));
  if(tmp38 < 0.0 && tmp39 != 0.0)
  {
    tmp41 = modf(tmp39, &tmp42);
    
    if(tmp41 > 0.5)
    {
      tmp41 -= 1.0;
      tmp42 += 1.0;
    }
    else if(tmp41 < -0.5)
    {
      tmp41 += 1.0;
      tmp42 -= 1.0;
    }
    
    if(fabs(tmp41) < 1e-10)
      tmp40 = pow(tmp38, tmp42);
    else
    {
      tmp44 = modf(1.0/tmp39, &tmp43);
      if(tmp44 > 0.5)
      {
        tmp44 -= 1.0;
        tmp43 += 1.0;
      }
      else if(tmp44 < -0.5)
      {
        tmp44 += 1.0;
        tmp43 -= 1.0;
      }
      if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
      {
        tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
      }
    }
  }
  else
  {
    tmp40 = pow(tmp38, tmp39);
  }
  if(isnan(tmp40) || isinf(tmp40))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
  }tmp45 = _pi + 0.128;
  tmp46 = real_array_get(_I, 1, ((modelica_integer) 4));
  if(tmp45 < 0.0 && tmp46 != 0.0)
  {
    tmp48 = modf(tmp46, &tmp49);
    
    if(tmp48 > 0.5)
    {
      tmp48 -= 1.0;
      tmp49 += 1.0;
    }
    else if(tmp48 < -0.5)
    {
      tmp48 += 1.0;
      tmp49 -= 1.0;
    }
    
    if(fabs(tmp48) < 1e-10)
      tmp47 = pow(tmp45, tmp49);
    else
    {
      tmp51 = modf(1.0/tmp46, &tmp50);
      if(tmp51 > 0.5)
      {
        tmp51 -= 1.0;
        tmp50 += 1.0;
      }
      else if(tmp51 < -0.5)
      {
        tmp51 += 1.0;
        tmp50 -= 1.0;
      }
      if(fabs(tmp51) < 1e-10 && ((unsigned long)tmp50 & 1))
      {
        tmp47 = -pow(-tmp45, tmp48)*pow(tmp45, tmp49);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
      }
    }
  }
  else
  {
    tmp47 = pow(tmp45, tmp46);
  }
  if(isnan(tmp47) || isinf(tmp47))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
  }tmp52 = _eta - 0.727;
  tmp53 = real_array_get(_J, 1, ((modelica_integer) 4));
  if(tmp52 < 0.0 && tmp53 != 0.0)
  {
    tmp55 = modf(tmp53, &tmp56);
    
    if(tmp55 > 0.5)
    {
      tmp55 -= 1.0;
      tmp56 += 1.0;
    }
    else if(tmp55 < -0.5)
    {
      tmp55 += 1.0;
      tmp56 -= 1.0;
    }
    
    if(fabs(tmp55) < 1e-10)
      tmp54 = pow(tmp52, tmp56);
    else
    {
      tmp58 = modf(1.0/tmp53, &tmp57);
      if(tmp58 > 0.5)
      {
        tmp58 -= 1.0;
        tmp57 += 1.0;
      }
      else if(tmp58 < -0.5)
      {
        tmp58 += 1.0;
        tmp57 -= 1.0;
      }
      if(fabs(tmp58) < 1e-10 && ((unsigned long)tmp57 & 1))
      {
        tmp54 = -pow(-tmp52, tmp55)*pow(tmp52, tmp56);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
      }
    }
  }
  else
  {
    tmp54 = pow(tmp52, tmp53);
  }
  if(isnan(tmp54) || isinf(tmp54))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
  }tmp59 = _pi + 0.128;
  tmp60 = real_array_get(_I, 1, ((modelica_integer) 5));
  if(tmp59 < 0.0 && tmp60 != 0.0)
  {
    tmp62 = modf(tmp60, &tmp63);
    
    if(tmp62 > 0.5)
    {
      tmp62 -= 1.0;
      tmp63 += 1.0;
    }
    else if(tmp62 < -0.5)
    {
      tmp62 += 1.0;
      tmp63 -= 1.0;
    }
    
    if(fabs(tmp62) < 1e-10)
      tmp61 = pow(tmp59, tmp63);
    else
    {
      tmp65 = modf(1.0/tmp60, &tmp64);
      if(tmp65 > 0.5)
      {
        tmp65 -= 1.0;
        tmp64 += 1.0;
      }
      else if(tmp65 < -0.5)
      {
        tmp65 += 1.0;
        tmp64 -= 1.0;
      }
      if(fabs(tmp65) < 1e-10 && ((unsigned long)tmp64 & 1))
      {
        tmp61 = -pow(-tmp59, tmp62)*pow(tmp59, tmp63);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
      }
    }
  }
  else
  {
    tmp61 = pow(tmp59, tmp60);
  }
  if(isnan(tmp61) || isinf(tmp61))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
  }tmp66 = _eta - 0.727;
  tmp67 = real_array_get(_J, 1, ((modelica_integer) 5));
  if(tmp66 < 0.0 && tmp67 != 0.0)
  {
    tmp69 = modf(tmp67, &tmp70);
    
    if(tmp69 > 0.5)
    {
      tmp69 -= 1.0;
      tmp70 += 1.0;
    }
    else if(tmp69 < -0.5)
    {
      tmp69 += 1.0;
      tmp70 -= 1.0;
    }
    
    if(fabs(tmp69) < 1e-10)
      tmp68 = pow(tmp66, tmp70);
    else
    {
      tmp72 = modf(1.0/tmp67, &tmp71);
      if(tmp72 > 0.5)
      {
        tmp72 -= 1.0;
        tmp71 += 1.0;
      }
      else if(tmp72 < -0.5)
      {
        tmp72 += 1.0;
        tmp71 -= 1.0;
      }
      if(fabs(tmp72) < 1e-10 && ((unsigned long)tmp71 & 1))
      {
        tmp68 = -pow(-tmp66, tmp69)*pow(tmp66, tmp70);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
      }
    }
  }
  else
  {
    tmp68 = pow(tmp66, tmp67);
  }
  if(isnan(tmp68) || isinf(tmp68))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
  }tmp73 = _pi + 0.128;
  tmp74 = real_array_get(_I, 1, ((modelica_integer) 6));
  if(tmp73 < 0.0 && tmp74 != 0.0)
  {
    tmp76 = modf(tmp74, &tmp77);
    
    if(tmp76 > 0.5)
    {
      tmp76 -= 1.0;
      tmp77 += 1.0;
    }
    else if(tmp76 < -0.5)
    {
      tmp76 += 1.0;
      tmp77 -= 1.0;
    }
    
    if(fabs(tmp76) < 1e-10)
      tmp75 = pow(tmp73, tmp77);
    else
    {
      tmp79 = modf(1.0/tmp74, &tmp78);
      if(tmp79 > 0.5)
      {
        tmp79 -= 1.0;
        tmp78 += 1.0;
      }
      else if(tmp79 < -0.5)
      {
        tmp79 += 1.0;
        tmp78 -= 1.0;
      }
      if(fabs(tmp79) < 1e-10 && ((unsigned long)tmp78 & 1))
      {
        tmp75 = -pow(-tmp73, tmp76)*pow(tmp73, tmp77);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
      }
    }
  }
  else
  {
    tmp75 = pow(tmp73, tmp74);
  }
  if(isnan(tmp75) || isinf(tmp75))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
  }tmp80 = _eta - 0.727;
  tmp81 = real_array_get(_J, 1, ((modelica_integer) 6));
  if(tmp80 < 0.0 && tmp81 != 0.0)
  {
    tmp83 = modf(tmp81, &tmp84);
    
    if(tmp83 > 0.5)
    {
      tmp83 -= 1.0;
      tmp84 += 1.0;
    }
    else if(tmp83 < -0.5)
    {
      tmp83 += 1.0;
      tmp84 -= 1.0;
    }
    
    if(fabs(tmp83) < 1e-10)
      tmp82 = pow(tmp80, tmp84);
    else
    {
      tmp86 = modf(1.0/tmp81, &tmp85);
      if(tmp86 > 0.5)
      {
        tmp86 -= 1.0;
        tmp85 += 1.0;
      }
      else if(tmp86 < -0.5)
      {
        tmp86 += 1.0;
        tmp85 -= 1.0;
      }
      if(fabs(tmp86) < 1e-10 && ((unsigned long)tmp85 & 1))
      {
        tmp82 = -pow(-tmp80, tmp83)*pow(tmp80, tmp84);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
      }
    }
  }
  else
  {
    tmp82 = pow(tmp80, tmp81);
  }
  if(isnan(tmp82) || isinf(tmp82))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
  }tmp87 = _pi + 0.128;
  tmp88 = real_array_get(_I, 1, ((modelica_integer) 7));
  if(tmp87 < 0.0 && tmp88 != 0.0)
  {
    tmp90 = modf(tmp88, &tmp91);
    
    if(tmp90 > 0.5)
    {
      tmp90 -= 1.0;
      tmp91 += 1.0;
    }
    else if(tmp90 < -0.5)
    {
      tmp90 += 1.0;
      tmp91 -= 1.0;
    }
    
    if(fabs(tmp90) < 1e-10)
      tmp89 = pow(tmp87, tmp91);
    else
    {
      tmp93 = modf(1.0/tmp88, &tmp92);
      if(tmp93 > 0.5)
      {
        tmp93 -= 1.0;
        tmp92 += 1.0;
      }
      else if(tmp93 < -0.5)
      {
        tmp93 += 1.0;
        tmp92 -= 1.0;
      }
      if(fabs(tmp93) < 1e-10 && ((unsigned long)tmp92 & 1))
      {
        tmp89 = -pow(-tmp87, tmp90)*pow(tmp87, tmp91);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
      }
    }
  }
  else
  {
    tmp89 = pow(tmp87, tmp88);
  }
  if(isnan(tmp89) || isinf(tmp89))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
  }tmp94 = _eta - 0.727;
  tmp95 = real_array_get(_J, 1, ((modelica_integer) 7));
  if(tmp94 < 0.0 && tmp95 != 0.0)
  {
    tmp97 = modf(tmp95, &tmp98);
    
    if(tmp97 > 0.5)
    {
      tmp97 -= 1.0;
      tmp98 += 1.0;
    }
    else if(tmp97 < -0.5)
    {
      tmp97 += 1.0;
      tmp98 -= 1.0;
    }
    
    if(fabs(tmp97) < 1e-10)
      tmp96 = pow(tmp94, tmp98);
    else
    {
      tmp100 = modf(1.0/tmp95, &tmp99);
      if(tmp100 > 0.5)
      {
        tmp100 -= 1.0;
        tmp99 += 1.0;
      }
      else if(tmp100 < -0.5)
      {
        tmp100 += 1.0;
        tmp99 -= 1.0;
      }
      if(fabs(tmp100) < 1e-10 && ((unsigned long)tmp99 & 1))
      {
        tmp96 = -pow(-tmp94, tmp97)*pow(tmp94, tmp98);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
      }
    }
  }
  else
  {
    tmp96 = pow(tmp94, tmp95);
  }
  if(isnan(tmp96) || isinf(tmp96))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
  }tmp101 = _pi + 0.128;
  tmp102 = real_array_get(_I, 1, ((modelica_integer) 8));
  if(tmp101 < 0.0 && tmp102 != 0.0)
  {
    tmp104 = modf(tmp102, &tmp105);
    
    if(tmp104 > 0.5)
    {
      tmp104 -= 1.0;
      tmp105 += 1.0;
    }
    else if(tmp104 < -0.5)
    {
      tmp104 += 1.0;
      tmp105 -= 1.0;
    }
    
    if(fabs(tmp104) < 1e-10)
      tmp103 = pow(tmp101, tmp105);
    else
    {
      tmp107 = modf(1.0/tmp102, &tmp106);
      if(tmp107 > 0.5)
      {
        tmp107 -= 1.0;
        tmp106 += 1.0;
      }
      else if(tmp107 < -0.5)
      {
        tmp107 += 1.0;
        tmp106 -= 1.0;
      }
      if(fabs(tmp107) < 1e-10 && ((unsigned long)tmp106 & 1))
      {
        tmp103 = -pow(-tmp101, tmp104)*pow(tmp101, tmp105);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
      }
    }
  }
  else
  {
    tmp103 = pow(tmp101, tmp102);
  }
  if(isnan(tmp103) || isinf(tmp103))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
  }tmp108 = _eta - 0.727;
  tmp109 = real_array_get(_J, 1, ((modelica_integer) 8));
  if(tmp108 < 0.0 && tmp109 != 0.0)
  {
    tmp111 = modf(tmp109, &tmp112);
    
    if(tmp111 > 0.5)
    {
      tmp111 -= 1.0;
      tmp112 += 1.0;
    }
    else if(tmp111 < -0.5)
    {
      tmp111 += 1.0;
      tmp112 -= 1.0;
    }
    
    if(fabs(tmp111) < 1e-10)
      tmp110 = pow(tmp108, tmp112);
    else
    {
      tmp114 = modf(1.0/tmp109, &tmp113);
      if(tmp114 > 0.5)
      {
        tmp114 -= 1.0;
        tmp113 += 1.0;
      }
      else if(tmp114 < -0.5)
      {
        tmp114 += 1.0;
        tmp113 -= 1.0;
      }
      if(fabs(tmp114) < 1e-10 && ((unsigned long)tmp113 & 1))
      {
        tmp110 = -pow(-tmp108, tmp111)*pow(tmp108, tmp112);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
      }
    }
  }
  else
  {
    tmp110 = pow(tmp108, tmp109);
  }
  if(isnan(tmp110) || isinf(tmp110))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
  }tmp115 = _pi + 0.128;
  tmp116 = real_array_get(_I, 1, ((modelica_integer) 9));
  if(tmp115 < 0.0 && tmp116 != 0.0)
  {
    tmp118 = modf(tmp116, &tmp119);
    
    if(tmp118 > 0.5)
    {
      tmp118 -= 1.0;
      tmp119 += 1.0;
    }
    else if(tmp118 < -0.5)
    {
      tmp118 += 1.0;
      tmp119 -= 1.0;
    }
    
    if(fabs(tmp118) < 1e-10)
      tmp117 = pow(tmp115, tmp119);
    else
    {
      tmp121 = modf(1.0/tmp116, &tmp120);
      if(tmp121 > 0.5)
      {
        tmp121 -= 1.0;
        tmp120 += 1.0;
      }
      else if(tmp121 < -0.5)
      {
        tmp121 += 1.0;
        tmp120 -= 1.0;
      }
      if(fabs(tmp121) < 1e-10 && ((unsigned long)tmp120 & 1))
      {
        tmp117 = -pow(-tmp115, tmp118)*pow(tmp115, tmp119);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
      }
    }
  }
  else
  {
    tmp117 = pow(tmp115, tmp116);
  }
  if(isnan(tmp117) || isinf(tmp117))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
  }tmp122 = _eta - 0.727;
  tmp123 = real_array_get(_J, 1, ((modelica_integer) 9));
  if(tmp122 < 0.0 && tmp123 != 0.0)
  {
    tmp125 = modf(tmp123, &tmp126);
    
    if(tmp125 > 0.5)
    {
      tmp125 -= 1.0;
      tmp126 += 1.0;
    }
    else if(tmp125 < -0.5)
    {
      tmp125 += 1.0;
      tmp126 -= 1.0;
    }
    
    if(fabs(tmp125) < 1e-10)
      tmp124 = pow(tmp122, tmp126);
    else
    {
      tmp128 = modf(1.0/tmp123, &tmp127);
      if(tmp128 > 0.5)
      {
        tmp128 -= 1.0;
        tmp127 += 1.0;
      }
      else if(tmp128 < -0.5)
      {
        tmp128 += 1.0;
        tmp127 -= 1.0;
      }
      if(fabs(tmp128) < 1e-10 && ((unsigned long)tmp127 & 1))
      {
        tmp124 = -pow(-tmp122, tmp125)*pow(tmp122, tmp126);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
      }
    }
  }
  else
  {
    tmp124 = pow(tmp122, tmp123);
  }
  if(isnan(tmp124) || isinf(tmp124))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
  }tmp129 = _pi + 0.128;
  tmp130 = real_array_get(_I, 1, ((modelica_integer) 10));
  if(tmp129 < 0.0 && tmp130 != 0.0)
  {
    tmp132 = modf(tmp130, &tmp133);
    
    if(tmp132 > 0.5)
    {
      tmp132 -= 1.0;
      tmp133 += 1.0;
    }
    else if(tmp132 < -0.5)
    {
      tmp132 += 1.0;
      tmp133 -= 1.0;
    }
    
    if(fabs(tmp132) < 1e-10)
      tmp131 = pow(tmp129, tmp133);
    else
    {
      tmp135 = modf(1.0/tmp130, &tmp134);
      if(tmp135 > 0.5)
      {
        tmp135 -= 1.0;
        tmp134 += 1.0;
      }
      else if(tmp135 < -0.5)
      {
        tmp135 += 1.0;
        tmp134 -= 1.0;
      }
      if(fabs(tmp135) < 1e-10 && ((unsigned long)tmp134 & 1))
      {
        tmp131 = -pow(-tmp129, tmp132)*pow(tmp129, tmp133);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
      }
    }
  }
  else
  {
    tmp131 = pow(tmp129, tmp130);
  }
  if(isnan(tmp131) || isinf(tmp131))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
  }tmp136 = _eta - 0.727;
  tmp137 = real_array_get(_J, 1, ((modelica_integer) 10));
  if(tmp136 < 0.0 && tmp137 != 0.0)
  {
    tmp139 = modf(tmp137, &tmp140);
    
    if(tmp139 > 0.5)
    {
      tmp139 -= 1.0;
      tmp140 += 1.0;
    }
    else if(tmp139 < -0.5)
    {
      tmp139 += 1.0;
      tmp140 -= 1.0;
    }
    
    if(fabs(tmp139) < 1e-10)
      tmp138 = pow(tmp136, tmp140);
    else
    {
      tmp142 = modf(1.0/tmp137, &tmp141);
      if(tmp142 > 0.5)
      {
        tmp142 -= 1.0;
        tmp141 += 1.0;
      }
      else if(tmp142 < -0.5)
      {
        tmp142 += 1.0;
        tmp141 -= 1.0;
      }
      if(fabs(tmp142) < 1e-10 && ((unsigned long)tmp141 & 1))
      {
        tmp138 = -pow(-tmp136, tmp139)*pow(tmp136, tmp140);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
      }
    }
  }
  else
  {
    tmp138 = pow(tmp136, tmp137);
  }
  if(isnan(tmp138) || isinf(tmp138))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
  }tmp143 = _pi + 0.128;
  tmp144 = real_array_get(_I, 1, ((modelica_integer) 11));
  if(tmp143 < 0.0 && tmp144 != 0.0)
  {
    tmp146 = modf(tmp144, &tmp147);
    
    if(tmp146 > 0.5)
    {
      tmp146 -= 1.0;
      tmp147 += 1.0;
    }
    else if(tmp146 < -0.5)
    {
      tmp146 += 1.0;
      tmp147 -= 1.0;
    }
    
    if(fabs(tmp146) < 1e-10)
      tmp145 = pow(tmp143, tmp147);
    else
    {
      tmp149 = modf(1.0/tmp144, &tmp148);
      if(tmp149 > 0.5)
      {
        tmp149 -= 1.0;
        tmp148 += 1.0;
      }
      else if(tmp149 < -0.5)
      {
        tmp149 += 1.0;
        tmp148 -= 1.0;
      }
      if(fabs(tmp149) < 1e-10 && ((unsigned long)tmp148 & 1))
      {
        tmp145 = -pow(-tmp143, tmp146)*pow(tmp143, tmp147);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
      }
    }
  }
  else
  {
    tmp145 = pow(tmp143, tmp144);
  }
  if(isnan(tmp145) || isinf(tmp145))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
  }tmp150 = _eta - 0.727;
  tmp151 = real_array_get(_J, 1, ((modelica_integer) 11));
  if(tmp150 < 0.0 && tmp151 != 0.0)
  {
    tmp153 = modf(tmp151, &tmp154);
    
    if(tmp153 > 0.5)
    {
      tmp153 -= 1.0;
      tmp154 += 1.0;
    }
    else if(tmp153 < -0.5)
    {
      tmp153 += 1.0;
      tmp154 -= 1.0;
    }
    
    if(fabs(tmp153) < 1e-10)
      tmp152 = pow(tmp150, tmp154);
    else
    {
      tmp156 = modf(1.0/tmp151, &tmp155);
      if(tmp156 > 0.5)
      {
        tmp156 -= 1.0;
        tmp155 += 1.0;
      }
      else if(tmp156 < -0.5)
      {
        tmp156 += 1.0;
        tmp155 -= 1.0;
      }
      if(fabs(tmp156) < 1e-10 && ((unsigned long)tmp155 & 1))
      {
        tmp152 = -pow(-tmp150, tmp153)*pow(tmp150, tmp154);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
      }
    }
  }
  else
  {
    tmp152 = pow(tmp150, tmp151);
  }
  if(isnan(tmp152) || isinf(tmp152))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
  }tmp157 = _pi + 0.128;
  tmp158 = real_array_get(_I, 1, ((modelica_integer) 12));
  if(tmp157 < 0.0 && tmp158 != 0.0)
  {
    tmp160 = modf(tmp158, &tmp161);
    
    if(tmp160 > 0.5)
    {
      tmp160 -= 1.0;
      tmp161 += 1.0;
    }
    else if(tmp160 < -0.5)
    {
      tmp160 += 1.0;
      tmp161 -= 1.0;
    }
    
    if(fabs(tmp160) < 1e-10)
      tmp159 = pow(tmp157, tmp161);
    else
    {
      tmp163 = modf(1.0/tmp158, &tmp162);
      if(tmp163 > 0.5)
      {
        tmp163 -= 1.0;
        tmp162 += 1.0;
      }
      else if(tmp163 < -0.5)
      {
        tmp163 += 1.0;
        tmp162 -= 1.0;
      }
      if(fabs(tmp163) < 1e-10 && ((unsigned long)tmp162 & 1))
      {
        tmp159 = -pow(-tmp157, tmp160)*pow(tmp157, tmp161);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
      }
    }
  }
  else
  {
    tmp159 = pow(tmp157, tmp158);
  }
  if(isnan(tmp159) || isinf(tmp159))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
  }tmp164 = _eta - 0.727;
  tmp165 = real_array_get(_J, 1, ((modelica_integer) 12));
  if(tmp164 < 0.0 && tmp165 != 0.0)
  {
    tmp167 = modf(tmp165, &tmp168);
    
    if(tmp167 > 0.5)
    {
      tmp167 -= 1.0;
      tmp168 += 1.0;
    }
    else if(tmp167 < -0.5)
    {
      tmp167 += 1.0;
      tmp168 -= 1.0;
    }
    
    if(fabs(tmp167) < 1e-10)
      tmp166 = pow(tmp164, tmp168);
    else
    {
      tmp170 = modf(1.0/tmp165, &tmp169);
      if(tmp170 > 0.5)
      {
        tmp170 -= 1.0;
        tmp169 += 1.0;
      }
      else if(tmp170 < -0.5)
      {
        tmp170 += 1.0;
        tmp169 -= 1.0;
      }
      if(fabs(tmp170) < 1e-10 && ((unsigned long)tmp169 & 1))
      {
        tmp166 = -pow(-tmp164, tmp167)*pow(tmp164, tmp168);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
      }
    }
  }
  else
  {
    tmp166 = pow(tmp164, tmp165);
  }
  if(isnan(tmp166) || isinf(tmp166))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
  }tmp171 = _pi + 0.128;
  tmp172 = real_array_get(_I, 1, ((modelica_integer) 13));
  if(tmp171 < 0.0 && tmp172 != 0.0)
  {
    tmp174 = modf(tmp172, &tmp175);
    
    if(tmp174 > 0.5)
    {
      tmp174 -= 1.0;
      tmp175 += 1.0;
    }
    else if(tmp174 < -0.5)
    {
      tmp174 += 1.0;
      tmp175 -= 1.0;
    }
    
    if(fabs(tmp174) < 1e-10)
      tmp173 = pow(tmp171, tmp175);
    else
    {
      tmp177 = modf(1.0/tmp172, &tmp176);
      if(tmp177 > 0.5)
      {
        tmp177 -= 1.0;
        tmp176 += 1.0;
      }
      else if(tmp177 < -0.5)
      {
        tmp177 += 1.0;
        tmp176 -= 1.0;
      }
      if(fabs(tmp177) < 1e-10 && ((unsigned long)tmp176 & 1))
      {
        tmp173 = -pow(-tmp171, tmp174)*pow(tmp171, tmp175);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
      }
    }
  }
  else
  {
    tmp173 = pow(tmp171, tmp172);
  }
  if(isnan(tmp173) || isinf(tmp173))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
  }tmp178 = _eta - 0.727;
  tmp179 = real_array_get(_J, 1, ((modelica_integer) 13));
  if(tmp178 < 0.0 && tmp179 != 0.0)
  {
    tmp181 = modf(tmp179, &tmp182);
    
    if(tmp181 > 0.5)
    {
      tmp181 -= 1.0;
      tmp182 += 1.0;
    }
    else if(tmp181 < -0.5)
    {
      tmp181 += 1.0;
      tmp182 -= 1.0;
    }
    
    if(fabs(tmp181) < 1e-10)
      tmp180 = pow(tmp178, tmp182);
    else
    {
      tmp184 = modf(1.0/tmp179, &tmp183);
      if(tmp184 > 0.5)
      {
        tmp184 -= 1.0;
        tmp183 += 1.0;
      }
      else if(tmp184 < -0.5)
      {
        tmp184 += 1.0;
        tmp183 -= 1.0;
      }
      if(fabs(tmp184) < 1e-10 && ((unsigned long)tmp183 & 1))
      {
        tmp180 = -pow(-tmp178, tmp181)*pow(tmp178, tmp182);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
      }
    }
  }
  else
  {
    tmp180 = pow(tmp178, tmp179);
  }
  if(isnan(tmp180) || isinf(tmp180))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
  }tmp185 = _pi + 0.128;
  tmp186 = real_array_get(_I, 1, ((modelica_integer) 14));
  if(tmp185 < 0.0 && tmp186 != 0.0)
  {
    tmp188 = modf(tmp186, &tmp189);
    
    if(tmp188 > 0.5)
    {
      tmp188 -= 1.0;
      tmp189 += 1.0;
    }
    else if(tmp188 < -0.5)
    {
      tmp188 += 1.0;
      tmp189 -= 1.0;
    }
    
    if(fabs(tmp188) < 1e-10)
      tmp187 = pow(tmp185, tmp189);
    else
    {
      tmp191 = modf(1.0/tmp186, &tmp190);
      if(tmp191 > 0.5)
      {
        tmp191 -= 1.0;
        tmp190 += 1.0;
      }
      else if(tmp191 < -0.5)
      {
        tmp191 += 1.0;
        tmp190 -= 1.0;
      }
      if(fabs(tmp191) < 1e-10 && ((unsigned long)tmp190 & 1))
      {
        tmp187 = -pow(-tmp185, tmp188)*pow(tmp185, tmp189);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
      }
    }
  }
  else
  {
    tmp187 = pow(tmp185, tmp186);
  }
  if(isnan(tmp187) || isinf(tmp187))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
  }tmp192 = _eta - 0.727;
  tmp193 = real_array_get(_J, 1, ((modelica_integer) 14));
  if(tmp192 < 0.0 && tmp193 != 0.0)
  {
    tmp195 = modf(tmp193, &tmp196);
    
    if(tmp195 > 0.5)
    {
      tmp195 -= 1.0;
      tmp196 += 1.0;
    }
    else if(tmp195 < -0.5)
    {
      tmp195 += 1.0;
      tmp196 -= 1.0;
    }
    
    if(fabs(tmp195) < 1e-10)
      tmp194 = pow(tmp192, tmp196);
    else
    {
      tmp198 = modf(1.0/tmp193, &tmp197);
      if(tmp198 > 0.5)
      {
        tmp198 -= 1.0;
        tmp197 += 1.0;
      }
      else if(tmp198 < -0.5)
      {
        tmp198 += 1.0;
        tmp197 -= 1.0;
      }
      if(fabs(tmp198) < 1e-10 && ((unsigned long)tmp197 & 1))
      {
        tmp194 = -pow(-tmp192, tmp195)*pow(tmp192, tmp196);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
      }
    }
  }
  else
  {
    tmp194 = pow(tmp192, tmp193);
  }
  if(isnan(tmp194) || isinf(tmp194))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
  }tmp199 = _pi + 0.128;
  tmp200 = real_array_get(_I, 1, ((modelica_integer) 15));
  if(tmp199 < 0.0 && tmp200 != 0.0)
  {
    tmp202 = modf(tmp200, &tmp203);
    
    if(tmp202 > 0.5)
    {
      tmp202 -= 1.0;
      tmp203 += 1.0;
    }
    else if(tmp202 < -0.5)
    {
      tmp202 += 1.0;
      tmp203 -= 1.0;
    }
    
    if(fabs(tmp202) < 1e-10)
      tmp201 = pow(tmp199, tmp203);
    else
    {
      tmp205 = modf(1.0/tmp200, &tmp204);
      if(tmp205 > 0.5)
      {
        tmp205 -= 1.0;
        tmp204 += 1.0;
      }
      else if(tmp205 < -0.5)
      {
        tmp205 += 1.0;
        tmp204 -= 1.0;
      }
      if(fabs(tmp205) < 1e-10 && ((unsigned long)tmp204 & 1))
      {
        tmp201 = -pow(-tmp199, tmp202)*pow(tmp199, tmp203);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
      }
    }
  }
  else
  {
    tmp201 = pow(tmp199, tmp200);
  }
  if(isnan(tmp201) || isinf(tmp201))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
  }tmp206 = _eta - 0.727;
  tmp207 = real_array_get(_J, 1, ((modelica_integer) 15));
  if(tmp206 < 0.0 && tmp207 != 0.0)
  {
    tmp209 = modf(tmp207, &tmp210);
    
    if(tmp209 > 0.5)
    {
      tmp209 -= 1.0;
      tmp210 += 1.0;
    }
    else if(tmp209 < -0.5)
    {
      tmp209 += 1.0;
      tmp210 -= 1.0;
    }
    
    if(fabs(tmp209) < 1e-10)
      tmp208 = pow(tmp206, tmp210);
    else
    {
      tmp212 = modf(1.0/tmp207, &tmp211);
      if(tmp212 > 0.5)
      {
        tmp212 -= 1.0;
        tmp211 += 1.0;
      }
      else if(tmp212 < -0.5)
      {
        tmp212 += 1.0;
        tmp211 -= 1.0;
      }
      if(fabs(tmp212) < 1e-10 && ((unsigned long)tmp211 & 1))
      {
        tmp208 = -pow(-tmp206, tmp209)*pow(tmp206, tmp210);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
      }
    }
  }
  else
  {
    tmp208 = pow(tmp206, tmp207);
  }
  if(isnan(tmp208) || isinf(tmp208))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
  }tmp213 = _pi + 0.128;
  tmp214 = real_array_get(_I, 1, ((modelica_integer) 16));
  if(tmp213 < 0.0 && tmp214 != 0.0)
  {
    tmp216 = modf(tmp214, &tmp217);
    
    if(tmp216 > 0.5)
    {
      tmp216 -= 1.0;
      tmp217 += 1.0;
    }
    else if(tmp216 < -0.5)
    {
      tmp216 += 1.0;
      tmp217 -= 1.0;
    }
    
    if(fabs(tmp216) < 1e-10)
      tmp215 = pow(tmp213, tmp217);
    else
    {
      tmp219 = modf(1.0/tmp214, &tmp218);
      if(tmp219 > 0.5)
      {
        tmp219 -= 1.0;
        tmp218 += 1.0;
      }
      else if(tmp219 < -0.5)
      {
        tmp219 += 1.0;
        tmp218 -= 1.0;
      }
      if(fabs(tmp219) < 1e-10 && ((unsigned long)tmp218 & 1))
      {
        tmp215 = -pow(-tmp213, tmp216)*pow(tmp213, tmp217);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
      }
    }
  }
  else
  {
    tmp215 = pow(tmp213, tmp214);
  }
  if(isnan(tmp215) || isinf(tmp215))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
  }tmp220 = _eta - 0.727;
  tmp221 = real_array_get(_J, 1, ((modelica_integer) 16));
  if(tmp220 < 0.0 && tmp221 != 0.0)
  {
    tmp223 = modf(tmp221, &tmp224);
    
    if(tmp223 > 0.5)
    {
      tmp223 -= 1.0;
      tmp224 += 1.0;
    }
    else if(tmp223 < -0.5)
    {
      tmp223 += 1.0;
      tmp224 -= 1.0;
    }
    
    if(fabs(tmp223) < 1e-10)
      tmp222 = pow(tmp220, tmp224);
    else
    {
      tmp226 = modf(1.0/tmp221, &tmp225);
      if(tmp226 > 0.5)
      {
        tmp226 -= 1.0;
        tmp225 += 1.0;
      }
      else if(tmp226 < -0.5)
      {
        tmp226 += 1.0;
        tmp225 -= 1.0;
      }
      if(fabs(tmp226) < 1e-10 && ((unsigned long)tmp225 & 1))
      {
        tmp222 = -pow(-tmp220, tmp223)*pow(tmp220, tmp224);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
      }
    }
  }
  else
  {
    tmp222 = pow(tmp220, tmp221);
  }
  if(isnan(tmp222) || isinf(tmp222))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
  }tmp227 = _pi + 0.128;
  tmp228 = real_array_get(_I, 1, ((modelica_integer) 17));
  if(tmp227 < 0.0 && tmp228 != 0.0)
  {
    tmp230 = modf(tmp228, &tmp231);
    
    if(tmp230 > 0.5)
    {
      tmp230 -= 1.0;
      tmp231 += 1.0;
    }
    else if(tmp230 < -0.5)
    {
      tmp230 += 1.0;
      tmp231 -= 1.0;
    }
    
    if(fabs(tmp230) < 1e-10)
      tmp229 = pow(tmp227, tmp231);
    else
    {
      tmp233 = modf(1.0/tmp228, &tmp232);
      if(tmp233 > 0.5)
      {
        tmp233 -= 1.0;
        tmp232 += 1.0;
      }
      else if(tmp233 < -0.5)
      {
        tmp233 += 1.0;
        tmp232 -= 1.0;
      }
      if(fabs(tmp233) < 1e-10 && ((unsigned long)tmp232 & 1))
      {
        tmp229 = -pow(-tmp227, tmp230)*pow(tmp227, tmp231);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
      }
    }
  }
  else
  {
    tmp229 = pow(tmp227, tmp228);
  }
  if(isnan(tmp229) || isinf(tmp229))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
  }tmp234 = _eta - 0.727;
  tmp235 = real_array_get(_J, 1, ((modelica_integer) 17));
  if(tmp234 < 0.0 && tmp235 != 0.0)
  {
    tmp237 = modf(tmp235, &tmp238);
    
    if(tmp237 > 0.5)
    {
      tmp237 -= 1.0;
      tmp238 += 1.0;
    }
    else if(tmp237 < -0.5)
    {
      tmp237 += 1.0;
      tmp238 -= 1.0;
    }
    
    if(fabs(tmp237) < 1e-10)
      tmp236 = pow(tmp234, tmp238);
    else
    {
      tmp240 = modf(1.0/tmp235, &tmp239);
      if(tmp240 > 0.5)
      {
        tmp240 -= 1.0;
        tmp239 += 1.0;
      }
      else if(tmp240 < -0.5)
      {
        tmp240 += 1.0;
        tmp239 -= 1.0;
      }
      if(fabs(tmp240) < 1e-10 && ((unsigned long)tmp239 & 1))
      {
        tmp236 = -pow(-tmp234, tmp237)*pow(tmp234, tmp238);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
      }
    }
  }
  else
  {
    tmp236 = pow(tmp234, tmp235);
  }
  if(isnan(tmp236) || isinf(tmp236))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
  }tmp241 = _pi + 0.128;
  tmp242 = real_array_get(_I, 1, ((modelica_integer) 18));
  if(tmp241 < 0.0 && tmp242 != 0.0)
  {
    tmp244 = modf(tmp242, &tmp245);
    
    if(tmp244 > 0.5)
    {
      tmp244 -= 1.0;
      tmp245 += 1.0;
    }
    else if(tmp244 < -0.5)
    {
      tmp244 += 1.0;
      tmp245 -= 1.0;
    }
    
    if(fabs(tmp244) < 1e-10)
      tmp243 = pow(tmp241, tmp245);
    else
    {
      tmp247 = modf(1.0/tmp242, &tmp246);
      if(tmp247 > 0.5)
      {
        tmp247 -= 1.0;
        tmp246 += 1.0;
      }
      else if(tmp247 < -0.5)
      {
        tmp247 += 1.0;
        tmp246 -= 1.0;
      }
      if(fabs(tmp247) < 1e-10 && ((unsigned long)tmp246 & 1))
      {
        tmp243 = -pow(-tmp241, tmp244)*pow(tmp241, tmp245);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
      }
    }
  }
  else
  {
    tmp243 = pow(tmp241, tmp242);
  }
  if(isnan(tmp243) || isinf(tmp243))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
  }tmp248 = _eta - 0.727;
  tmp249 = real_array_get(_J, 1, ((modelica_integer) 18));
  if(tmp248 < 0.0 && tmp249 != 0.0)
  {
    tmp251 = modf(tmp249, &tmp252);
    
    if(tmp251 > 0.5)
    {
      tmp251 -= 1.0;
      tmp252 += 1.0;
    }
    else if(tmp251 < -0.5)
    {
      tmp251 += 1.0;
      tmp252 -= 1.0;
    }
    
    if(fabs(tmp251) < 1e-10)
      tmp250 = pow(tmp248, tmp252);
    else
    {
      tmp254 = modf(1.0/tmp249, &tmp253);
      if(tmp254 > 0.5)
      {
        tmp254 -= 1.0;
        tmp253 += 1.0;
      }
      else if(tmp254 < -0.5)
      {
        tmp254 += 1.0;
        tmp253 -= 1.0;
      }
      if(fabs(tmp254) < 1e-10 && ((unsigned long)tmp253 & 1))
      {
        tmp250 = -pow(-tmp248, tmp251)*pow(tmp248, tmp252);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
      }
    }
  }
  else
  {
    tmp250 = pow(tmp248, tmp249);
  }
  if(isnan(tmp250) || isinf(tmp250))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
  }tmp255 = _pi + 0.128;
  tmp256 = real_array_get(_I, 1, ((modelica_integer) 19));
  if(tmp255 < 0.0 && tmp256 != 0.0)
  {
    tmp258 = modf(tmp256, &tmp259);
    
    if(tmp258 > 0.5)
    {
      tmp258 -= 1.0;
      tmp259 += 1.0;
    }
    else if(tmp258 < -0.5)
    {
      tmp258 += 1.0;
      tmp259 -= 1.0;
    }
    
    if(fabs(tmp258) < 1e-10)
      tmp257 = pow(tmp255, tmp259);
    else
    {
      tmp261 = modf(1.0/tmp256, &tmp260);
      if(tmp261 > 0.5)
      {
        tmp261 -= 1.0;
        tmp260 += 1.0;
      }
      else if(tmp261 < -0.5)
      {
        tmp261 += 1.0;
        tmp260 -= 1.0;
      }
      if(fabs(tmp261) < 1e-10 && ((unsigned long)tmp260 & 1))
      {
        tmp257 = -pow(-tmp255, tmp258)*pow(tmp255, tmp259);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
      }
    }
  }
  else
  {
    tmp257 = pow(tmp255, tmp256);
  }
  if(isnan(tmp257) || isinf(tmp257))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
  }tmp262 = _eta - 0.727;
  tmp263 = real_array_get(_J, 1, ((modelica_integer) 19));
  if(tmp262 < 0.0 && tmp263 != 0.0)
  {
    tmp265 = modf(tmp263, &tmp266);
    
    if(tmp265 > 0.5)
    {
      tmp265 -= 1.0;
      tmp266 += 1.0;
    }
    else if(tmp265 < -0.5)
    {
      tmp265 += 1.0;
      tmp266 -= 1.0;
    }
    
    if(fabs(tmp265) < 1e-10)
      tmp264 = pow(tmp262, tmp266);
    else
    {
      tmp268 = modf(1.0/tmp263, &tmp267);
      if(tmp268 > 0.5)
      {
        tmp268 -= 1.0;
        tmp267 += 1.0;
      }
      else if(tmp268 < -0.5)
      {
        tmp268 += 1.0;
        tmp267 -= 1.0;
      }
      if(fabs(tmp268) < 1e-10 && ((unsigned long)tmp267 & 1))
      {
        tmp264 = -pow(-tmp262, tmp265)*pow(tmp262, tmp266);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
      }
    }
  }
  else
  {
    tmp264 = pow(tmp262, tmp263);
  }
  if(isnan(tmp264) || isinf(tmp264))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
  }tmp269 = _pi + 0.128;
  tmp270 = real_array_get(_I, 1, ((modelica_integer) 20));
  if(tmp269 < 0.0 && tmp270 != 0.0)
  {
    tmp272 = modf(tmp270, &tmp273);
    
    if(tmp272 > 0.5)
    {
      tmp272 -= 1.0;
      tmp273 += 1.0;
    }
    else if(tmp272 < -0.5)
    {
      tmp272 += 1.0;
      tmp273 -= 1.0;
    }
    
    if(fabs(tmp272) < 1e-10)
      tmp271 = pow(tmp269, tmp273);
    else
    {
      tmp275 = modf(1.0/tmp270, &tmp274);
      if(tmp275 > 0.5)
      {
        tmp275 -= 1.0;
        tmp274 += 1.0;
      }
      else if(tmp275 < -0.5)
      {
        tmp275 += 1.0;
        tmp274 -= 1.0;
      }
      if(fabs(tmp275) < 1e-10 && ((unsigned long)tmp274 & 1))
      {
        tmp271 = -pow(-tmp269, tmp272)*pow(tmp269, tmp273);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
      }
    }
  }
  else
  {
    tmp271 = pow(tmp269, tmp270);
  }
  if(isnan(tmp271) || isinf(tmp271))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
  }tmp276 = _eta - 0.727;
  tmp277 = real_array_get(_J, 1, ((modelica_integer) 20));
  if(tmp276 < 0.0 && tmp277 != 0.0)
  {
    tmp279 = modf(tmp277, &tmp280);
    
    if(tmp279 > 0.5)
    {
      tmp279 -= 1.0;
      tmp280 += 1.0;
    }
    else if(tmp279 < -0.5)
    {
      tmp279 += 1.0;
      tmp280 -= 1.0;
    }
    
    if(fabs(tmp279) < 1e-10)
      tmp278 = pow(tmp276, tmp280);
    else
    {
      tmp282 = modf(1.0/tmp277, &tmp281);
      if(tmp282 > 0.5)
      {
        tmp282 -= 1.0;
        tmp281 += 1.0;
      }
      else if(tmp282 < -0.5)
      {
        tmp282 += 1.0;
        tmp281 -= 1.0;
      }
      if(fabs(tmp282) < 1e-10 && ((unsigned long)tmp281 & 1))
      {
        tmp278 = -pow(-tmp276, tmp279)*pow(tmp276, tmp280);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
      }
    }
  }
  else
  {
    tmp278 = pow(tmp276, tmp277);
  }
  if(isnan(tmp278) || isinf(tmp278))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
  }tmp283 = _pi + 0.128;
  tmp284 = real_array_get(_I, 1, ((modelica_integer) 21));
  if(tmp283 < 0.0 && tmp284 != 0.0)
  {
    tmp286 = modf(tmp284, &tmp287);
    
    if(tmp286 > 0.5)
    {
      tmp286 -= 1.0;
      tmp287 += 1.0;
    }
    else if(tmp286 < -0.5)
    {
      tmp286 += 1.0;
      tmp287 -= 1.0;
    }
    
    if(fabs(tmp286) < 1e-10)
      tmp285 = pow(tmp283, tmp287);
    else
    {
      tmp289 = modf(1.0/tmp284, &tmp288);
      if(tmp289 > 0.5)
      {
        tmp289 -= 1.0;
        tmp288 += 1.0;
      }
      else if(tmp289 < -0.5)
      {
        tmp289 += 1.0;
        tmp288 -= 1.0;
      }
      if(fabs(tmp289) < 1e-10 && ((unsigned long)tmp288 & 1))
      {
        tmp285 = -pow(-tmp283, tmp286)*pow(tmp283, tmp287);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
      }
    }
  }
  else
  {
    tmp285 = pow(tmp283, tmp284);
  }
  if(isnan(tmp285) || isinf(tmp285))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
  }tmp290 = _eta - 0.727;
  tmp291 = real_array_get(_J, 1, ((modelica_integer) 21));
  if(tmp290 < 0.0 && tmp291 != 0.0)
  {
    tmp293 = modf(tmp291, &tmp294);
    
    if(tmp293 > 0.5)
    {
      tmp293 -= 1.0;
      tmp294 += 1.0;
    }
    else if(tmp293 < -0.5)
    {
      tmp293 += 1.0;
      tmp294 -= 1.0;
    }
    
    if(fabs(tmp293) < 1e-10)
      tmp292 = pow(tmp290, tmp294);
    else
    {
      tmp296 = modf(1.0/tmp291, &tmp295);
      if(tmp296 > 0.5)
      {
        tmp296 -= 1.0;
        tmp295 += 1.0;
      }
      else if(tmp296 < -0.5)
      {
        tmp296 += 1.0;
        tmp295 -= 1.0;
      }
      if(fabs(tmp296) < 1e-10 && ((unsigned long)tmp295 & 1))
      {
        tmp292 = -pow(-tmp290, tmp293)*pow(tmp290, tmp294);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
      }
    }
  }
  else
  {
    tmp292 = pow(tmp290, tmp291);
  }
  if(isnan(tmp292) || isinf(tmp292))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
  }tmp297 = _pi + 0.128;
  tmp298 = real_array_get(_I, 1, ((modelica_integer) 22));
  if(tmp297 < 0.0 && tmp298 != 0.0)
  {
    tmp300 = modf(tmp298, &tmp301);
    
    if(tmp300 > 0.5)
    {
      tmp300 -= 1.0;
      tmp301 += 1.0;
    }
    else if(tmp300 < -0.5)
    {
      tmp300 += 1.0;
      tmp301 -= 1.0;
    }
    
    if(fabs(tmp300) < 1e-10)
      tmp299 = pow(tmp297, tmp301);
    else
    {
      tmp303 = modf(1.0/tmp298, &tmp302);
      if(tmp303 > 0.5)
      {
        tmp303 -= 1.0;
        tmp302 += 1.0;
      }
      else if(tmp303 < -0.5)
      {
        tmp303 += 1.0;
        tmp302 -= 1.0;
      }
      if(fabs(tmp303) < 1e-10 && ((unsigned long)tmp302 & 1))
      {
        tmp299 = -pow(-tmp297, tmp300)*pow(tmp297, tmp301);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
      }
    }
  }
  else
  {
    tmp299 = pow(tmp297, tmp298);
  }
  if(isnan(tmp299) || isinf(tmp299))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
  }tmp304 = _eta - 0.727;
  tmp305 = real_array_get(_J, 1, ((modelica_integer) 22));
  if(tmp304 < 0.0 && tmp305 != 0.0)
  {
    tmp307 = modf(tmp305, &tmp308);
    
    if(tmp307 > 0.5)
    {
      tmp307 -= 1.0;
      tmp308 += 1.0;
    }
    else if(tmp307 < -0.5)
    {
      tmp307 += 1.0;
      tmp308 -= 1.0;
    }
    
    if(fabs(tmp307) < 1e-10)
      tmp306 = pow(tmp304, tmp308);
    else
    {
      tmp310 = modf(1.0/tmp305, &tmp309);
      if(tmp310 > 0.5)
      {
        tmp310 -= 1.0;
        tmp309 += 1.0;
      }
      else if(tmp310 < -0.5)
      {
        tmp310 += 1.0;
        tmp309 -= 1.0;
      }
      if(fabs(tmp310) < 1e-10 && ((unsigned long)tmp309 & 1))
      {
        tmp306 = -pow(-tmp304, tmp307)*pow(tmp304, tmp308);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
      }
    }
  }
  else
  {
    tmp306 = pow(tmp304, tmp305);
  }
  if(isnan(tmp306) || isinf(tmp306))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
  }tmp311 = _pi + 0.128;
  tmp312 = real_array_get(_I, 1, ((modelica_integer) 23));
  if(tmp311 < 0.0 && tmp312 != 0.0)
  {
    tmp314 = modf(tmp312, &tmp315);
    
    if(tmp314 > 0.5)
    {
      tmp314 -= 1.0;
      tmp315 += 1.0;
    }
    else if(tmp314 < -0.5)
    {
      tmp314 += 1.0;
      tmp315 -= 1.0;
    }
    
    if(fabs(tmp314) < 1e-10)
      tmp313 = pow(tmp311, tmp315);
    else
    {
      tmp317 = modf(1.0/tmp312, &tmp316);
      if(tmp317 > 0.5)
      {
        tmp317 -= 1.0;
        tmp316 += 1.0;
      }
      else if(tmp317 < -0.5)
      {
        tmp317 += 1.0;
        tmp316 -= 1.0;
      }
      if(fabs(tmp317) < 1e-10 && ((unsigned long)tmp316 & 1))
      {
        tmp313 = -pow(-tmp311, tmp314)*pow(tmp311, tmp315);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
      }
    }
  }
  else
  {
    tmp313 = pow(tmp311, tmp312);
  }
  if(isnan(tmp313) || isinf(tmp313))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
  }tmp318 = _eta - 0.727;
  tmp319 = real_array_get(_J, 1, ((modelica_integer) 23));
  if(tmp318 < 0.0 && tmp319 != 0.0)
  {
    tmp321 = modf(tmp319, &tmp322);
    
    if(tmp321 > 0.5)
    {
      tmp321 -= 1.0;
      tmp322 += 1.0;
    }
    else if(tmp321 < -0.5)
    {
      tmp321 += 1.0;
      tmp322 -= 1.0;
    }
    
    if(fabs(tmp321) < 1e-10)
      tmp320 = pow(tmp318, tmp322);
    else
    {
      tmp324 = modf(1.0/tmp319, &tmp323);
      if(tmp324 > 0.5)
      {
        tmp324 -= 1.0;
        tmp323 += 1.0;
      }
      else if(tmp324 < -0.5)
      {
        tmp324 += 1.0;
        tmp323 -= 1.0;
      }
      if(fabs(tmp324) < 1e-10 && ((unsigned long)tmp323 & 1))
      {
        tmp320 = -pow(-tmp318, tmp321)*pow(tmp318, tmp322);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
      }
    }
  }
  else
  {
    tmp320 = pow(tmp318, tmp319);
  }
  if(isnan(tmp320) || isinf(tmp320))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
  }tmp325 = _pi + 0.128;
  tmp326 = real_array_get(_I, 1, ((modelica_integer) 24));
  if(tmp325 < 0.0 && tmp326 != 0.0)
  {
    tmp328 = modf(tmp326, &tmp329);
    
    if(tmp328 > 0.5)
    {
      tmp328 -= 1.0;
      tmp329 += 1.0;
    }
    else if(tmp328 < -0.5)
    {
      tmp328 += 1.0;
      tmp329 -= 1.0;
    }
    
    if(fabs(tmp328) < 1e-10)
      tmp327 = pow(tmp325, tmp329);
    else
    {
      tmp331 = modf(1.0/tmp326, &tmp330);
      if(tmp331 > 0.5)
      {
        tmp331 -= 1.0;
        tmp330 += 1.0;
      }
      else if(tmp331 < -0.5)
      {
        tmp331 += 1.0;
        tmp330 -= 1.0;
      }
      if(fabs(tmp331) < 1e-10 && ((unsigned long)tmp330 & 1))
      {
        tmp327 = -pow(-tmp325, tmp328)*pow(tmp325, tmp329);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
      }
    }
  }
  else
  {
    tmp327 = pow(tmp325, tmp326);
  }
  if(isnan(tmp327) || isinf(tmp327))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
  }tmp332 = _eta - 0.727;
  tmp333 = real_array_get(_J, 1, ((modelica_integer) 24));
  if(tmp332 < 0.0 && tmp333 != 0.0)
  {
    tmp335 = modf(tmp333, &tmp336);
    
    if(tmp335 > 0.5)
    {
      tmp335 -= 1.0;
      tmp336 += 1.0;
    }
    else if(tmp335 < -0.5)
    {
      tmp335 += 1.0;
      tmp336 -= 1.0;
    }
    
    if(fabs(tmp335) < 1e-10)
      tmp334 = pow(tmp332, tmp336);
    else
    {
      tmp338 = modf(1.0/tmp333, &tmp337);
      if(tmp338 > 0.5)
      {
        tmp338 -= 1.0;
        tmp337 += 1.0;
      }
      else if(tmp338 < -0.5)
      {
        tmp338 += 1.0;
        tmp337 -= 1.0;
      }
      if(fabs(tmp338) < 1e-10 && ((unsigned long)tmp337 & 1))
      {
        tmp334 = -pow(-tmp332, tmp335)*pow(tmp332, tmp336);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
      }
    }
  }
  else
  {
    tmp334 = pow(tmp332, tmp333);
  }
  if(isnan(tmp334) || isinf(tmp334))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
  }tmp339 = _pi + 0.128;
  tmp340 = real_array_get(_I, 1, ((modelica_integer) 25));
  if(tmp339 < 0.0 && tmp340 != 0.0)
  {
    tmp342 = modf(tmp340, &tmp343);
    
    if(tmp342 > 0.5)
    {
      tmp342 -= 1.0;
      tmp343 += 1.0;
    }
    else if(tmp342 < -0.5)
    {
      tmp342 += 1.0;
      tmp343 -= 1.0;
    }
    
    if(fabs(tmp342) < 1e-10)
      tmp341 = pow(tmp339, tmp343);
    else
    {
      tmp345 = modf(1.0/tmp340, &tmp344);
      if(tmp345 > 0.5)
      {
        tmp345 -= 1.0;
        tmp344 += 1.0;
      }
      else if(tmp345 < -0.5)
      {
        tmp345 += 1.0;
        tmp344 -= 1.0;
      }
      if(fabs(tmp345) < 1e-10 && ((unsigned long)tmp344 & 1))
      {
        tmp341 = -pow(-tmp339, tmp342)*pow(tmp339, tmp343);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
      }
    }
  }
  else
  {
    tmp341 = pow(tmp339, tmp340);
  }
  if(isnan(tmp341) || isinf(tmp341))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
  }tmp346 = _eta - 0.727;
  tmp347 = real_array_get(_J, 1, ((modelica_integer) 25));
  if(tmp346 < 0.0 && tmp347 != 0.0)
  {
    tmp349 = modf(tmp347, &tmp350);
    
    if(tmp349 > 0.5)
    {
      tmp349 -= 1.0;
      tmp350 += 1.0;
    }
    else if(tmp349 < -0.5)
    {
      tmp349 += 1.0;
      tmp350 -= 1.0;
    }
    
    if(fabs(tmp349) < 1e-10)
      tmp348 = pow(tmp346, tmp350);
    else
    {
      tmp352 = modf(1.0/tmp347, &tmp351);
      if(tmp352 > 0.5)
      {
        tmp352 -= 1.0;
        tmp351 += 1.0;
      }
      else if(tmp352 < -0.5)
      {
        tmp352 += 1.0;
        tmp351 -= 1.0;
      }
      if(fabs(tmp352) < 1e-10 && ((unsigned long)tmp351 & 1))
      {
        tmp348 = -pow(-tmp346, tmp349)*pow(tmp346, tmp350);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
      }
    }
  }
  else
  {
    tmp348 = pow(tmp346, tmp347);
  }
  if(isnan(tmp348) || isinf(tmp348))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
  }tmp353 = _pi + 0.128;
  tmp354 = real_array_get(_I, 1, ((modelica_integer) 26));
  if(tmp353 < 0.0 && tmp354 != 0.0)
  {
    tmp356 = modf(tmp354, &tmp357);
    
    if(tmp356 > 0.5)
    {
      tmp356 -= 1.0;
      tmp357 += 1.0;
    }
    else if(tmp356 < -0.5)
    {
      tmp356 += 1.0;
      tmp357 -= 1.0;
    }
    
    if(fabs(tmp356) < 1e-10)
      tmp355 = pow(tmp353, tmp357);
    else
    {
      tmp359 = modf(1.0/tmp354, &tmp358);
      if(tmp359 > 0.5)
      {
        tmp359 -= 1.0;
        tmp358 += 1.0;
      }
      else if(tmp359 < -0.5)
      {
        tmp359 += 1.0;
        tmp358 -= 1.0;
      }
      if(fabs(tmp359) < 1e-10 && ((unsigned long)tmp358 & 1))
      {
        tmp355 = -pow(-tmp353, tmp356)*pow(tmp353, tmp357);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
      }
    }
  }
  else
  {
    tmp355 = pow(tmp353, tmp354);
  }
  if(isnan(tmp355) || isinf(tmp355))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
  }tmp360 = _eta - 0.727;
  tmp361 = real_array_get(_J, 1, ((modelica_integer) 26));
  if(tmp360 < 0.0 && tmp361 != 0.0)
  {
    tmp363 = modf(tmp361, &tmp364);
    
    if(tmp363 > 0.5)
    {
      tmp363 -= 1.0;
      tmp364 += 1.0;
    }
    else if(tmp363 < -0.5)
    {
      tmp363 += 1.0;
      tmp364 -= 1.0;
    }
    
    if(fabs(tmp363) < 1e-10)
      tmp362 = pow(tmp360, tmp364);
    else
    {
      tmp366 = modf(1.0/tmp361, &tmp365);
      if(tmp366 > 0.5)
      {
        tmp366 -= 1.0;
        tmp365 += 1.0;
      }
      else if(tmp366 < -0.5)
      {
        tmp366 += 1.0;
        tmp365 -= 1.0;
      }
      if(fabs(tmp366) < 1e-10 && ((unsigned long)tmp365 & 1))
      {
        tmp362 = -pow(-tmp360, tmp363)*pow(tmp360, tmp364);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
      }
    }
  }
  else
  {
    tmp362 = pow(tmp360, tmp361);
  }
  if(isnan(tmp362) || isinf(tmp362))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
  }tmp367 = _pi + 0.128;
  tmp368 = real_array_get(_I, 1, ((modelica_integer) 27));
  if(tmp367 < 0.0 && tmp368 != 0.0)
  {
    tmp370 = modf(tmp368, &tmp371);
    
    if(tmp370 > 0.5)
    {
      tmp370 -= 1.0;
      tmp371 += 1.0;
    }
    else if(tmp370 < -0.5)
    {
      tmp370 += 1.0;
      tmp371 -= 1.0;
    }
    
    if(fabs(tmp370) < 1e-10)
      tmp369 = pow(tmp367, tmp371);
    else
    {
      tmp373 = modf(1.0/tmp368, &tmp372);
      if(tmp373 > 0.5)
      {
        tmp373 -= 1.0;
        tmp372 += 1.0;
      }
      else if(tmp373 < -0.5)
      {
        tmp373 += 1.0;
        tmp372 -= 1.0;
      }
      if(fabs(tmp373) < 1e-10 && ((unsigned long)tmp372 & 1))
      {
        tmp369 = -pow(-tmp367, tmp370)*pow(tmp367, tmp371);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
      }
    }
  }
  else
  {
    tmp369 = pow(tmp367, tmp368);
  }
  if(isnan(tmp369) || isinf(tmp369))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
  }tmp374 = _eta - 0.727;
  tmp375 = real_array_get(_J, 1, ((modelica_integer) 27));
  if(tmp374 < 0.0 && tmp375 != 0.0)
  {
    tmp377 = modf(tmp375, &tmp378);
    
    if(tmp377 > 0.5)
    {
      tmp377 -= 1.0;
      tmp378 += 1.0;
    }
    else if(tmp377 < -0.5)
    {
      tmp377 += 1.0;
      tmp378 -= 1.0;
    }
    
    if(fabs(tmp377) < 1e-10)
      tmp376 = pow(tmp374, tmp378);
    else
    {
      tmp380 = modf(1.0/tmp375, &tmp379);
      if(tmp380 > 0.5)
      {
        tmp380 -= 1.0;
        tmp379 += 1.0;
      }
      else if(tmp380 < -0.5)
      {
        tmp380 += 1.0;
        tmp379 -= 1.0;
      }
      if(fabs(tmp380) < 1e-10 && ((unsigned long)tmp379 & 1))
      {
        tmp376 = -pow(-tmp374, tmp377)*pow(tmp374, tmp378);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
      }
    }
  }
  else
  {
    tmp376 = pow(tmp374, tmp375);
  }
  if(isnan(tmp376) || isinf(tmp376))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
  }tmp381 = _pi + 0.128;
  tmp382 = real_array_get(_I, 1, ((modelica_integer) 28));
  if(tmp381 < 0.0 && tmp382 != 0.0)
  {
    tmp384 = modf(tmp382, &tmp385);
    
    if(tmp384 > 0.5)
    {
      tmp384 -= 1.0;
      tmp385 += 1.0;
    }
    else if(tmp384 < -0.5)
    {
      tmp384 += 1.0;
      tmp385 -= 1.0;
    }
    
    if(fabs(tmp384) < 1e-10)
      tmp383 = pow(tmp381, tmp385);
    else
    {
      tmp387 = modf(1.0/tmp382, &tmp386);
      if(tmp387 > 0.5)
      {
        tmp387 -= 1.0;
        tmp386 += 1.0;
      }
      else if(tmp387 < -0.5)
      {
        tmp387 += 1.0;
        tmp386 -= 1.0;
      }
      if(fabs(tmp387) < 1e-10 && ((unsigned long)tmp386 & 1))
      {
        tmp383 = -pow(-tmp381, tmp384)*pow(tmp381, tmp385);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
      }
    }
  }
  else
  {
    tmp383 = pow(tmp381, tmp382);
  }
  if(isnan(tmp383) || isinf(tmp383))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
  }tmp388 = _eta - 0.727;
  tmp389 = real_array_get(_J, 1, ((modelica_integer) 28));
  if(tmp388 < 0.0 && tmp389 != 0.0)
  {
    tmp391 = modf(tmp389, &tmp392);
    
    if(tmp391 > 0.5)
    {
      tmp391 -= 1.0;
      tmp392 += 1.0;
    }
    else if(tmp391 < -0.5)
    {
      tmp391 += 1.0;
      tmp392 -= 1.0;
    }
    
    if(fabs(tmp391) < 1e-10)
      tmp390 = pow(tmp388, tmp392);
    else
    {
      tmp394 = modf(1.0/tmp389, &tmp393);
      if(tmp394 > 0.5)
      {
        tmp394 -= 1.0;
        tmp393 += 1.0;
      }
      else if(tmp394 < -0.5)
      {
        tmp394 += 1.0;
        tmp393 -= 1.0;
      }
      if(fabs(tmp394) < 1e-10 && ((unsigned long)tmp393 & 1))
      {
        tmp390 = -pow(-tmp388, tmp391)*pow(tmp388, tmp392);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
      }
    }
  }
  else
  {
    tmp390 = pow(tmp388, tmp389);
  }
  if(isnan(tmp390) || isinf(tmp390))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
  }tmp395 = _pi + 0.128;
  tmp396 = real_array_get(_I, 1, ((modelica_integer) 29));
  if(tmp395 < 0.0 && tmp396 != 0.0)
  {
    tmp398 = modf(tmp396, &tmp399);
    
    if(tmp398 > 0.5)
    {
      tmp398 -= 1.0;
      tmp399 += 1.0;
    }
    else if(tmp398 < -0.5)
    {
      tmp398 += 1.0;
      tmp399 -= 1.0;
    }
    
    if(fabs(tmp398) < 1e-10)
      tmp397 = pow(tmp395, tmp399);
    else
    {
      tmp401 = modf(1.0/tmp396, &tmp400);
      if(tmp401 > 0.5)
      {
        tmp401 -= 1.0;
        tmp400 += 1.0;
      }
      else if(tmp401 < -0.5)
      {
        tmp401 += 1.0;
        tmp400 -= 1.0;
      }
      if(fabs(tmp401) < 1e-10 && ((unsigned long)tmp400 & 1))
      {
        tmp397 = -pow(-tmp395, tmp398)*pow(tmp395, tmp399);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
      }
    }
  }
  else
  {
    tmp397 = pow(tmp395, tmp396);
  }
  if(isnan(tmp397) || isinf(tmp397))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
  }tmp402 = _eta - 0.727;
  tmp403 = real_array_get(_J, 1, ((modelica_integer) 29));
  if(tmp402 < 0.0 && tmp403 != 0.0)
  {
    tmp405 = modf(tmp403, &tmp406);
    
    if(tmp405 > 0.5)
    {
      tmp405 -= 1.0;
      tmp406 += 1.0;
    }
    else if(tmp405 < -0.5)
    {
      tmp405 += 1.0;
      tmp406 -= 1.0;
    }
    
    if(fabs(tmp405) < 1e-10)
      tmp404 = pow(tmp402, tmp406);
    else
    {
      tmp408 = modf(1.0/tmp403, &tmp407);
      if(tmp408 > 0.5)
      {
        tmp408 -= 1.0;
        tmp407 += 1.0;
      }
      else if(tmp408 < -0.5)
      {
        tmp408 += 1.0;
        tmp407 -= 1.0;
      }
      if(fabs(tmp408) < 1e-10 && ((unsigned long)tmp407 & 1))
      {
        tmp404 = -pow(-tmp402, tmp405)*pow(tmp402, tmp406);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
      }
    }
  }
  else
  {
    tmp404 = pow(tmp402, tmp403);
  }
  if(isnan(tmp404) || isinf(tmp404))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
  }tmp409 = _pi + 0.128;
  tmp410 = real_array_get(_I, 1, ((modelica_integer) 30));
  if(tmp409 < 0.0 && tmp410 != 0.0)
  {
    tmp412 = modf(tmp410, &tmp413);
    
    if(tmp412 > 0.5)
    {
      tmp412 -= 1.0;
      tmp413 += 1.0;
    }
    else if(tmp412 < -0.5)
    {
      tmp412 += 1.0;
      tmp413 -= 1.0;
    }
    
    if(fabs(tmp412) < 1e-10)
      tmp411 = pow(tmp409, tmp413);
    else
    {
      tmp415 = modf(1.0/tmp410, &tmp414);
      if(tmp415 > 0.5)
      {
        tmp415 -= 1.0;
        tmp414 += 1.0;
      }
      else if(tmp415 < -0.5)
      {
        tmp415 += 1.0;
        tmp414 -= 1.0;
      }
      if(fabs(tmp415) < 1e-10 && ((unsigned long)tmp414 & 1))
      {
        tmp411 = -pow(-tmp409, tmp412)*pow(tmp409, tmp413);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
      }
    }
  }
  else
  {
    tmp411 = pow(tmp409, tmp410);
  }
  if(isnan(tmp411) || isinf(tmp411))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
  }tmp416 = _eta - 0.727;
  tmp417 = real_array_get(_J, 1, ((modelica_integer) 30));
  if(tmp416 < 0.0 && tmp417 != 0.0)
  {
    tmp419 = modf(tmp417, &tmp420);
    
    if(tmp419 > 0.5)
    {
      tmp419 -= 1.0;
      tmp420 += 1.0;
    }
    else if(tmp419 < -0.5)
    {
      tmp419 += 1.0;
      tmp420 -= 1.0;
    }
    
    if(fabs(tmp419) < 1e-10)
      tmp418 = pow(tmp416, tmp420);
    else
    {
      tmp422 = modf(1.0/tmp417, &tmp421);
      if(tmp422 > 0.5)
      {
        tmp422 -= 1.0;
        tmp421 += 1.0;
      }
      else if(tmp422 < -0.5)
      {
        tmp422 += 1.0;
        tmp421 -= 1.0;
      }
      if(fabs(tmp422) < 1e-10 && ((unsigned long)tmp421 & 1))
      {
        tmp418 = -pow(-tmp416, tmp419)*pow(tmp416, tmp420);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
      }
    }
  }
  else
  {
    tmp418 = pow(tmp416, tmp417);
  }
  if(isnan(tmp418) || isinf(tmp418))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
  }tmp423 = _pi + 0.128;
  tmp424 = real_array_get(_I, 1, ((modelica_integer) 31));
  if(tmp423 < 0.0 && tmp424 != 0.0)
  {
    tmp426 = modf(tmp424, &tmp427);
    
    if(tmp426 > 0.5)
    {
      tmp426 -= 1.0;
      tmp427 += 1.0;
    }
    else if(tmp426 < -0.5)
    {
      tmp426 += 1.0;
      tmp427 -= 1.0;
    }
    
    if(fabs(tmp426) < 1e-10)
      tmp425 = pow(tmp423, tmp427);
    else
    {
      tmp429 = modf(1.0/tmp424, &tmp428);
      if(tmp429 > 0.5)
      {
        tmp429 -= 1.0;
        tmp428 += 1.0;
      }
      else if(tmp429 < -0.5)
      {
        tmp429 += 1.0;
        tmp428 -= 1.0;
      }
      if(fabs(tmp429) < 1e-10 && ((unsigned long)tmp428 & 1))
      {
        tmp425 = -pow(-tmp423, tmp426)*pow(tmp423, tmp427);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp423, tmp424);
      }
    }
  }
  else
  {
    tmp425 = pow(tmp423, tmp424);
  }
  if(isnan(tmp425) || isinf(tmp425))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp423, tmp424);
  }tmp430 = _eta - 0.727;
  tmp431 = real_array_get(_J, 1, ((modelica_integer) 31));
  if(tmp430 < 0.0 && tmp431 != 0.0)
  {
    tmp433 = modf(tmp431, &tmp434);
    
    if(tmp433 > 0.5)
    {
      tmp433 -= 1.0;
      tmp434 += 1.0;
    }
    else if(tmp433 < -0.5)
    {
      tmp433 += 1.0;
      tmp434 -= 1.0;
    }
    
    if(fabs(tmp433) < 1e-10)
      tmp432 = pow(tmp430, tmp434);
    else
    {
      tmp436 = modf(1.0/tmp431, &tmp435);
      if(tmp436 > 0.5)
      {
        tmp436 -= 1.0;
        tmp435 += 1.0;
      }
      else if(tmp436 < -0.5)
      {
        tmp436 += 1.0;
        tmp435 -= 1.0;
      }
      if(fabs(tmp436) < 1e-10 && ((unsigned long)tmp435 & 1))
      {
        tmp432 = -pow(-tmp430, tmp433)*pow(tmp430, tmp434);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp430, tmp431);
      }
    }
  }
  else
  {
    tmp432 = pow(tmp430, tmp431);
  }
  if(isnan(tmp432) || isinf(tmp432))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp430, tmp431);
  }tmp437 = _pi + 0.128;
  tmp438 = real_array_get(_I, 1, ((modelica_integer) 32));
  if(tmp437 < 0.0 && tmp438 != 0.0)
  {
    tmp440 = modf(tmp438, &tmp441);
    
    if(tmp440 > 0.5)
    {
      tmp440 -= 1.0;
      tmp441 += 1.0;
    }
    else if(tmp440 < -0.5)
    {
      tmp440 += 1.0;
      tmp441 -= 1.0;
    }
    
    if(fabs(tmp440) < 1e-10)
      tmp439 = pow(tmp437, tmp441);
    else
    {
      tmp443 = modf(1.0/tmp438, &tmp442);
      if(tmp443 > 0.5)
      {
        tmp443 -= 1.0;
        tmp442 += 1.0;
      }
      else if(tmp443 < -0.5)
      {
        tmp443 += 1.0;
        tmp442 -= 1.0;
      }
      if(fabs(tmp443) < 1e-10 && ((unsigned long)tmp442 & 1))
      {
        tmp439 = -pow(-tmp437, tmp440)*pow(tmp437, tmp441);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp437, tmp438);
      }
    }
  }
  else
  {
    tmp439 = pow(tmp437, tmp438);
  }
  if(isnan(tmp439) || isinf(tmp439))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp437, tmp438);
  }tmp444 = _eta - 0.727;
  tmp445 = real_array_get(_J, 1, ((modelica_integer) 32));
  if(tmp444 < 0.0 && tmp445 != 0.0)
  {
    tmp447 = modf(tmp445, &tmp448);
    
    if(tmp447 > 0.5)
    {
      tmp447 -= 1.0;
      tmp448 += 1.0;
    }
    else if(tmp447 < -0.5)
    {
      tmp447 += 1.0;
      tmp448 -= 1.0;
    }
    
    if(fabs(tmp447) < 1e-10)
      tmp446 = pow(tmp444, tmp448);
    else
    {
      tmp450 = modf(1.0/tmp445, &tmp449);
      if(tmp450 > 0.5)
      {
        tmp450 -= 1.0;
        tmp449 += 1.0;
      }
      else if(tmp450 < -0.5)
      {
        tmp450 += 1.0;
        tmp449 -= 1.0;
      }
      if(fabs(tmp450) < 1e-10 && ((unsigned long)tmp449 & 1))
      {
        tmp446 = -pow(-tmp444, tmp447)*pow(tmp444, tmp448);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp444, tmp445);
      }
    }
  }
  else
  {
    tmp446 = pow(tmp444, tmp445);
  }
  if(isnan(tmp446) || isinf(tmp446))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp444, tmp445);
  }
  _v = (((real_array_get(_n, 1, ((modelica_integer) 1))) * (tmp5)) * (tmp12) + ((real_array_get(_n, 1, ((modelica_integer) 2))) * (tmp19)) * (tmp26) + ((real_array_get(_n, 1, ((modelica_integer) 3))) * (tmp33)) * (tmp40) + ((real_array_get(_n, 1, ((modelica_integer) 4))) * (tmp47)) * (tmp54) + ((real_array_get(_n, 1, ((modelica_integer) 5))) * (tmp61)) * (tmp68) + ((real_array_get(_n, 1, ((modelica_integer) 6))) * (tmp75)) * (tmp82) + ((real_array_get(_n, 1, ((modelica_integer) 7))) * (tmp89)) * (tmp96) + ((real_array_get(_n, 1, ((modelica_integer) 8))) * (tmp103)) * (tmp110) + ((real_array_get(_n, 1, ((modelica_integer) 9))) * (tmp117)) * (tmp124) + ((real_array_get(_n, 1, ((modelica_integer) 10))) * (tmp131)) * (tmp138) + ((real_array_get(_n, 1, ((modelica_integer) 11))) * (tmp145)) * (tmp152) + ((real_array_get(_n, 1, ((modelica_integer) 12))) * (tmp159)) * (tmp166) + ((real_array_get(_n, 1, ((modelica_integer) 13))) * (tmp173)) * (tmp180) + ((real_array_get(_n, 1, ((modelica_integer) 14))) * (tmp187)) * (tmp194) + ((real_array_get(_n, 1, ((modelica_integer) 15))) * (tmp201)) * (tmp208) + ((real_array_get(_n, 1, ((modelica_integer) 16))) * (tmp215)) * (tmp222) + ((real_array_get(_n, 1, ((modelica_integer) 17))) * (tmp229)) * (tmp236) + ((real_array_get(_n, 1, ((modelica_integer) 18))) * (tmp243)) * (tmp250) + ((real_array_get(_n, 1, ((modelica_integer) 19))) * (tmp257)) * (tmp264) + ((real_array_get(_n, 1, ((modelica_integer) 20))) * (tmp271)) * (tmp278) + ((real_array_get(_n, 1, ((modelica_integer) 21))) * (tmp285)) * (tmp292) + ((real_array_get(_n, 1, ((modelica_integer) 22))) * (tmp299)) * (tmp306) + ((real_array_get(_n, 1, ((modelica_integer) 23))) * (tmp313)) * (tmp320) + ((real_array_get(_n, 1, ((modelica_integer) 24))) * (tmp327)) * (tmp334) + ((real_array_get(_n, 1, ((modelica_integer) 25))) * (tmp341)) * (tmp348) + ((real_array_get(_n, 1, ((modelica_integer) 26))) * (tmp355)) * (tmp362) + ((real_array_get(_n, 1, ((modelica_integer) 27))) * (tmp369)) * (tmp376) + ((real_array_get(_n, 1, ((modelica_integer) 28))) * (tmp383)) * (tmp390) + ((real_array_get(_n, 1, ((modelica_integer) 29))) * (tmp397)) * (tmp404) + ((real_array_get(_n, 1, ((modelica_integer) 30))) * (tmp411)) * (tmp418) + ((real_array_get(_n, 1, ((modelica_integer) 31))) * (tmp425)) * (tmp432) + ((real_array_get(_n, 1, ((modelica_integer) 32))) * (tmp439)) * (tmp446)) * (_vstar);
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _v = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData, tmp1, tmp2);
  out_v = mmc_mk_rcon(_v);
  return out_v;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_real _p, modelica_real _h)
{
  modelica_real _v;
  real_array _n;
  real_array _I;
  real_array _J;
  modelica_real _vstar;
  modelica_real _pstar;
  modelica_real _hstar;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_real _eta;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  modelica_real tmp299;
  modelica_real tmp300;
  modelica_real tmp301;
  modelica_real tmp302;
  modelica_real tmp303;
  modelica_real tmp304;
  modelica_real tmp305;
  modelica_real tmp306;
  modelica_real tmp307;
  modelica_real tmp308;
  modelica_real tmp309;
  modelica_real tmp310;
  modelica_real tmp311;
  modelica_real tmp312;
  modelica_real tmp313;
  modelica_real tmp314;
  modelica_real tmp315;
  modelica_real tmp316;
  modelica_real tmp317;
  modelica_real tmp318;
  modelica_real tmp319;
  modelica_real tmp320;
  modelica_real tmp321;
  modelica_real tmp322;
  modelica_real tmp323;
  modelica_real tmp324;
  modelica_real tmp325;
  modelica_real tmp326;
  modelica_real tmp327;
  modelica_real tmp328;
  modelica_real tmp329;
  modelica_real tmp330;
  modelica_real tmp331;
  modelica_real tmp332;
  modelica_real tmp333;
  modelica_real tmp334;
  modelica_real tmp335;
  modelica_real tmp336;
  modelica_real tmp337;
  modelica_real tmp338;
  modelica_real tmp339;
  modelica_real tmp340;
  modelica_real tmp341;
  modelica_real tmp342;
  modelica_real tmp343;
  modelica_real tmp344;
  modelica_real tmp345;
  modelica_real tmp346;
  modelica_real tmp347;
  modelica_real tmp348;
  modelica_real tmp349;
  modelica_real tmp350;
  modelica_real tmp351;
  modelica_real tmp352;
  modelica_real tmp353;
  modelica_real tmp354;
  modelica_real tmp355;
  modelica_real tmp356;
  modelica_real tmp357;
  modelica_real tmp358;
  modelica_real tmp359;
  modelica_real tmp360;
  modelica_real tmp361;
  modelica_real tmp362;
  modelica_real tmp363;
  modelica_real tmp364;
  modelica_real tmp365;
  modelica_real tmp366;
  modelica_real tmp367;
  modelica_real tmp368;
  modelica_real tmp369;
  modelica_real tmp370;
  modelica_real tmp371;
  modelica_real tmp372;
  modelica_real tmp373;
  modelica_real tmp374;
  modelica_real tmp375;
  modelica_real tmp376;
  modelica_real tmp377;
  modelica_real tmp378;
  modelica_real tmp379;
  modelica_real tmp380;
  modelica_real tmp381;
  modelica_real tmp382;
  modelica_real tmp383;
  modelica_real tmp384;
  modelica_real tmp385;
  modelica_real tmp386;
  modelica_real tmp387;
  modelica_real tmp388;
  modelica_real tmp389;
  modelica_real tmp390;
  modelica_real tmp391;
  modelica_real tmp392;
  modelica_real tmp393;
  modelica_real tmp394;
  modelica_real tmp395;
  modelica_real tmp396;
  modelica_real tmp397;
  modelica_real tmp398;
  modelica_real tmp399;
  modelica_real tmp400;
  modelica_real tmp401;
  modelica_real tmp402;
  modelica_real tmp403;
  modelica_real tmp404;
  modelica_real tmp405;
  modelica_real tmp406;
  modelica_real tmp407;
  modelica_real tmp408;
  modelica_real tmp409;
  modelica_real tmp410;
  modelica_real tmp411;
  modelica_real tmp412;
  modelica_real tmp413;
  modelica_real tmp414;
  modelica_real tmp415;
  modelica_real tmp416;
  modelica_real tmp417;
  modelica_real tmp418;
  modelica_real tmp419;
  modelica_real tmp420;
  modelica_real tmp421;
  modelica_real tmp422;
  _tailrecursive: OMC_LABEL_UNUSED
  // _v has no default value.
  real_array_alloc_copy(_OMC_LIT90, _n);
  
  real_array_alloc_copy(_OMC_LIT91, _I);
  
  real_array_alloc_copy(_OMC_LIT92, _J);
  
  _vstar = 0.008800000000000001;
  _pstar = 100000000.0;
  _hstar = 2800000.0;
  tmp1 = _pstar;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / pstar");}
  _pi = (_p) / tmp1;
  tmp2 = _hstar;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / hstar");}
  _eta = (_h) / tmp2;
  tmp3 = _pi + 0.06610000000000001;
  tmp4 = real_array_get(_I, 1, ((modelica_integer) 1));
  if(tmp3 < 0.0 && tmp4 != 0.0)
  {
    tmp6 = modf(tmp4, &tmp7);
    
    if(tmp6 > 0.5)
    {
      tmp6 -= 1.0;
      tmp7 += 1.0;
    }
    else if(tmp6 < -0.5)
    {
      tmp6 += 1.0;
      tmp7 -= 1.0;
    }
    
    if(fabs(tmp6) < 1e-10)
      tmp5 = pow(tmp3, tmp7);
    else
    {
      tmp9 = modf(1.0/tmp4, &tmp8);
      if(tmp9 > 0.5)
      {
        tmp9 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp9 < -0.5)
      {
        tmp9 += 1.0;
        tmp8 -= 1.0;
      }
      if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
      {
        tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
      }
    }
  }
  else
  {
    tmp5 = pow(tmp3, tmp4);
  }
  if(isnan(tmp5) || isinf(tmp5))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
  }tmp10 = _eta - 0.72;
  tmp11 = real_array_get(_J, 1, ((modelica_integer) 1));
  if(tmp10 < 0.0 && tmp11 != 0.0)
  {
    tmp13 = modf(tmp11, &tmp14);
    
    if(tmp13 > 0.5)
    {
      tmp13 -= 1.0;
      tmp14 += 1.0;
    }
    else if(tmp13 < -0.5)
    {
      tmp13 += 1.0;
      tmp14 -= 1.0;
    }
    
    if(fabs(tmp13) < 1e-10)
      tmp12 = pow(tmp10, tmp14);
    else
    {
      tmp16 = modf(1.0/tmp11, &tmp15);
      if(tmp16 > 0.5)
      {
        tmp16 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp16 < -0.5)
      {
        tmp16 += 1.0;
        tmp15 -= 1.0;
      }
      if(fabs(tmp16) < 1e-10 && ((unsigned long)tmp15 & 1))
      {
        tmp12 = -pow(-tmp10, tmp13)*pow(tmp10, tmp14);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
      }
    }
  }
  else
  {
    tmp12 = pow(tmp10, tmp11);
  }
  if(isnan(tmp12) || isinf(tmp12))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp10, tmp11);
  }tmp17 = _pi + 0.06610000000000001;
  tmp18 = real_array_get(_I, 1, ((modelica_integer) 2));
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }tmp24 = _eta - 0.72;
  tmp25 = real_array_get(_J, 1, ((modelica_integer) 2));
  if(tmp24 < 0.0 && tmp25 != 0.0)
  {
    tmp27 = modf(tmp25, &tmp28);
    
    if(tmp27 > 0.5)
    {
      tmp27 -= 1.0;
      tmp28 += 1.0;
    }
    else if(tmp27 < -0.5)
    {
      tmp27 += 1.0;
      tmp28 -= 1.0;
    }
    
    if(fabs(tmp27) < 1e-10)
      tmp26 = pow(tmp24, tmp28);
    else
    {
      tmp30 = modf(1.0/tmp25, &tmp29);
      if(tmp30 > 0.5)
      {
        tmp30 -= 1.0;
        tmp29 += 1.0;
      }
      else if(tmp30 < -0.5)
      {
        tmp30 += 1.0;
        tmp29 -= 1.0;
      }
      if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
      {
        tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
    }
  }
  else
  {
    tmp26 = pow(tmp24, tmp25);
  }
  if(isnan(tmp26) || isinf(tmp26))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
  }tmp31 = _pi + 0.06610000000000001;
  tmp32 = real_array_get(_I, 1, ((modelica_integer) 3));
  if(tmp31 < 0.0 && tmp32 != 0.0)
  {
    tmp34 = modf(tmp32, &tmp35);
    
    if(tmp34 > 0.5)
    {
      tmp34 -= 1.0;
      tmp35 += 1.0;
    }
    else if(tmp34 < -0.5)
    {
      tmp34 += 1.0;
      tmp35 -= 1.0;
    }
    
    if(fabs(tmp34) < 1e-10)
      tmp33 = pow(tmp31, tmp35);
    else
    {
      tmp37 = modf(1.0/tmp32, &tmp36);
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp36 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp36 -= 1.0;
      }
      if(fabs(tmp37) < 1e-10 && ((unsigned long)tmp36 & 1))
      {
        tmp33 = -pow(-tmp31, tmp34)*pow(tmp31, tmp35);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
      }
    }
  }
  else
  {
    tmp33 = pow(tmp31, tmp32);
  }
  if(isnan(tmp33) || isinf(tmp33))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
  }tmp38 = _eta - 0.72;
  tmp39 = real_array_get(_J, 1, ((modelica_integer) 3));
  if(tmp38 < 0.0 && tmp39 != 0.0)
  {
    tmp41 = modf(tmp39, &tmp42);
    
    if(tmp41 > 0.5)
    {
      tmp41 -= 1.0;
      tmp42 += 1.0;
    }
    else if(tmp41 < -0.5)
    {
      tmp41 += 1.0;
      tmp42 -= 1.0;
    }
    
    if(fabs(tmp41) < 1e-10)
      tmp40 = pow(tmp38, tmp42);
    else
    {
      tmp44 = modf(1.0/tmp39, &tmp43);
      if(tmp44 > 0.5)
      {
        tmp44 -= 1.0;
        tmp43 += 1.0;
      }
      else if(tmp44 < -0.5)
      {
        tmp44 += 1.0;
        tmp43 -= 1.0;
      }
      if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
      {
        tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
      }
    }
  }
  else
  {
    tmp40 = pow(tmp38, tmp39);
  }
  if(isnan(tmp40) || isinf(tmp40))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
  }tmp45 = _pi + 0.06610000000000001;
  tmp46 = real_array_get(_I, 1, ((modelica_integer) 4));
  if(tmp45 < 0.0 && tmp46 != 0.0)
  {
    tmp48 = modf(tmp46, &tmp49);
    
    if(tmp48 > 0.5)
    {
      tmp48 -= 1.0;
      tmp49 += 1.0;
    }
    else if(tmp48 < -0.5)
    {
      tmp48 += 1.0;
      tmp49 -= 1.0;
    }
    
    if(fabs(tmp48) < 1e-10)
      tmp47 = pow(tmp45, tmp49);
    else
    {
      tmp51 = modf(1.0/tmp46, &tmp50);
      if(tmp51 > 0.5)
      {
        tmp51 -= 1.0;
        tmp50 += 1.0;
      }
      else if(tmp51 < -0.5)
      {
        tmp51 += 1.0;
        tmp50 -= 1.0;
      }
      if(fabs(tmp51) < 1e-10 && ((unsigned long)tmp50 & 1))
      {
        tmp47 = -pow(-tmp45, tmp48)*pow(tmp45, tmp49);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
      }
    }
  }
  else
  {
    tmp47 = pow(tmp45, tmp46);
  }
  if(isnan(tmp47) || isinf(tmp47))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
  }tmp52 = _eta - 0.72;
  tmp53 = real_array_get(_J, 1, ((modelica_integer) 4));
  if(tmp52 < 0.0 && tmp53 != 0.0)
  {
    tmp55 = modf(tmp53, &tmp56);
    
    if(tmp55 > 0.5)
    {
      tmp55 -= 1.0;
      tmp56 += 1.0;
    }
    else if(tmp55 < -0.5)
    {
      tmp55 += 1.0;
      tmp56 -= 1.0;
    }
    
    if(fabs(tmp55) < 1e-10)
      tmp54 = pow(tmp52, tmp56);
    else
    {
      tmp58 = modf(1.0/tmp53, &tmp57);
      if(tmp58 > 0.5)
      {
        tmp58 -= 1.0;
        tmp57 += 1.0;
      }
      else if(tmp58 < -0.5)
      {
        tmp58 += 1.0;
        tmp57 -= 1.0;
      }
      if(fabs(tmp58) < 1e-10 && ((unsigned long)tmp57 & 1))
      {
        tmp54 = -pow(-tmp52, tmp55)*pow(tmp52, tmp56);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
      }
    }
  }
  else
  {
    tmp54 = pow(tmp52, tmp53);
  }
  if(isnan(tmp54) || isinf(tmp54))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
  }tmp59 = _pi + 0.06610000000000001;
  tmp60 = real_array_get(_I, 1, ((modelica_integer) 5));
  if(tmp59 < 0.0 && tmp60 != 0.0)
  {
    tmp62 = modf(tmp60, &tmp63);
    
    if(tmp62 > 0.5)
    {
      tmp62 -= 1.0;
      tmp63 += 1.0;
    }
    else if(tmp62 < -0.5)
    {
      tmp62 += 1.0;
      tmp63 -= 1.0;
    }
    
    if(fabs(tmp62) < 1e-10)
      tmp61 = pow(tmp59, tmp63);
    else
    {
      tmp65 = modf(1.0/tmp60, &tmp64);
      if(tmp65 > 0.5)
      {
        tmp65 -= 1.0;
        tmp64 += 1.0;
      }
      else if(tmp65 < -0.5)
      {
        tmp65 += 1.0;
        tmp64 -= 1.0;
      }
      if(fabs(tmp65) < 1e-10 && ((unsigned long)tmp64 & 1))
      {
        tmp61 = -pow(-tmp59, tmp62)*pow(tmp59, tmp63);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
      }
    }
  }
  else
  {
    tmp61 = pow(tmp59, tmp60);
  }
  if(isnan(tmp61) || isinf(tmp61))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp59, tmp60);
  }tmp66 = _eta - 0.72;
  tmp67 = real_array_get(_J, 1, ((modelica_integer) 5));
  if(tmp66 < 0.0 && tmp67 != 0.0)
  {
    tmp69 = modf(tmp67, &tmp70);
    
    if(tmp69 > 0.5)
    {
      tmp69 -= 1.0;
      tmp70 += 1.0;
    }
    else if(tmp69 < -0.5)
    {
      tmp69 += 1.0;
      tmp70 -= 1.0;
    }
    
    if(fabs(tmp69) < 1e-10)
      tmp68 = pow(tmp66, tmp70);
    else
    {
      tmp72 = modf(1.0/tmp67, &tmp71);
      if(tmp72 > 0.5)
      {
        tmp72 -= 1.0;
        tmp71 += 1.0;
      }
      else if(tmp72 < -0.5)
      {
        tmp72 += 1.0;
        tmp71 -= 1.0;
      }
      if(fabs(tmp72) < 1e-10 && ((unsigned long)tmp71 & 1))
      {
        tmp68 = -pow(-tmp66, tmp69)*pow(tmp66, tmp70);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
      }
    }
  }
  else
  {
    tmp68 = pow(tmp66, tmp67);
  }
  if(isnan(tmp68) || isinf(tmp68))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp66, tmp67);
  }tmp73 = _pi + 0.06610000000000001;
  tmp74 = real_array_get(_I, 1, ((modelica_integer) 6));
  if(tmp73 < 0.0 && tmp74 != 0.0)
  {
    tmp76 = modf(tmp74, &tmp77);
    
    if(tmp76 > 0.5)
    {
      tmp76 -= 1.0;
      tmp77 += 1.0;
    }
    else if(tmp76 < -0.5)
    {
      tmp76 += 1.0;
      tmp77 -= 1.0;
    }
    
    if(fabs(tmp76) < 1e-10)
      tmp75 = pow(tmp73, tmp77);
    else
    {
      tmp79 = modf(1.0/tmp74, &tmp78);
      if(tmp79 > 0.5)
      {
        tmp79 -= 1.0;
        tmp78 += 1.0;
      }
      else if(tmp79 < -0.5)
      {
        tmp79 += 1.0;
        tmp78 -= 1.0;
      }
      if(fabs(tmp79) < 1e-10 && ((unsigned long)tmp78 & 1))
      {
        tmp75 = -pow(-tmp73, tmp76)*pow(tmp73, tmp77);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
      }
    }
  }
  else
  {
    tmp75 = pow(tmp73, tmp74);
  }
  if(isnan(tmp75) || isinf(tmp75))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp73, tmp74);
  }tmp80 = _eta - 0.72;
  tmp81 = real_array_get(_J, 1, ((modelica_integer) 6));
  if(tmp80 < 0.0 && tmp81 != 0.0)
  {
    tmp83 = modf(tmp81, &tmp84);
    
    if(tmp83 > 0.5)
    {
      tmp83 -= 1.0;
      tmp84 += 1.0;
    }
    else if(tmp83 < -0.5)
    {
      tmp83 += 1.0;
      tmp84 -= 1.0;
    }
    
    if(fabs(tmp83) < 1e-10)
      tmp82 = pow(tmp80, tmp84);
    else
    {
      tmp86 = modf(1.0/tmp81, &tmp85);
      if(tmp86 > 0.5)
      {
        tmp86 -= 1.0;
        tmp85 += 1.0;
      }
      else if(tmp86 < -0.5)
      {
        tmp86 += 1.0;
        tmp85 -= 1.0;
      }
      if(fabs(tmp86) < 1e-10 && ((unsigned long)tmp85 & 1))
      {
        tmp82 = -pow(-tmp80, tmp83)*pow(tmp80, tmp84);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
      }
    }
  }
  else
  {
    tmp82 = pow(tmp80, tmp81);
  }
  if(isnan(tmp82) || isinf(tmp82))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp80, tmp81);
  }tmp87 = _pi + 0.06610000000000001;
  tmp88 = real_array_get(_I, 1, ((modelica_integer) 7));
  if(tmp87 < 0.0 && tmp88 != 0.0)
  {
    tmp90 = modf(tmp88, &tmp91);
    
    if(tmp90 > 0.5)
    {
      tmp90 -= 1.0;
      tmp91 += 1.0;
    }
    else if(tmp90 < -0.5)
    {
      tmp90 += 1.0;
      tmp91 -= 1.0;
    }
    
    if(fabs(tmp90) < 1e-10)
      tmp89 = pow(tmp87, tmp91);
    else
    {
      tmp93 = modf(1.0/tmp88, &tmp92);
      if(tmp93 > 0.5)
      {
        tmp93 -= 1.0;
        tmp92 += 1.0;
      }
      else if(tmp93 < -0.5)
      {
        tmp93 += 1.0;
        tmp92 -= 1.0;
      }
      if(fabs(tmp93) < 1e-10 && ((unsigned long)tmp92 & 1))
      {
        tmp89 = -pow(-tmp87, tmp90)*pow(tmp87, tmp91);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
      }
    }
  }
  else
  {
    tmp89 = pow(tmp87, tmp88);
  }
  if(isnan(tmp89) || isinf(tmp89))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp87, tmp88);
  }tmp94 = _eta - 0.72;
  tmp95 = real_array_get(_J, 1, ((modelica_integer) 7));
  if(tmp94 < 0.0 && tmp95 != 0.0)
  {
    tmp97 = modf(tmp95, &tmp98);
    
    if(tmp97 > 0.5)
    {
      tmp97 -= 1.0;
      tmp98 += 1.0;
    }
    else if(tmp97 < -0.5)
    {
      tmp97 += 1.0;
      tmp98 -= 1.0;
    }
    
    if(fabs(tmp97) < 1e-10)
      tmp96 = pow(tmp94, tmp98);
    else
    {
      tmp100 = modf(1.0/tmp95, &tmp99);
      if(tmp100 > 0.5)
      {
        tmp100 -= 1.0;
        tmp99 += 1.0;
      }
      else if(tmp100 < -0.5)
      {
        tmp100 += 1.0;
        tmp99 -= 1.0;
      }
      if(fabs(tmp100) < 1e-10 && ((unsigned long)tmp99 & 1))
      {
        tmp96 = -pow(-tmp94, tmp97)*pow(tmp94, tmp98);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
      }
    }
  }
  else
  {
    tmp96 = pow(tmp94, tmp95);
  }
  if(isnan(tmp96) || isinf(tmp96))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp94, tmp95);
  }tmp101 = _pi + 0.06610000000000001;
  tmp102 = real_array_get(_I, 1, ((modelica_integer) 8));
  if(tmp101 < 0.0 && tmp102 != 0.0)
  {
    tmp104 = modf(tmp102, &tmp105);
    
    if(tmp104 > 0.5)
    {
      tmp104 -= 1.0;
      tmp105 += 1.0;
    }
    else if(tmp104 < -0.5)
    {
      tmp104 += 1.0;
      tmp105 -= 1.0;
    }
    
    if(fabs(tmp104) < 1e-10)
      tmp103 = pow(tmp101, tmp105);
    else
    {
      tmp107 = modf(1.0/tmp102, &tmp106);
      if(tmp107 > 0.5)
      {
        tmp107 -= 1.0;
        tmp106 += 1.0;
      }
      else if(tmp107 < -0.5)
      {
        tmp107 += 1.0;
        tmp106 -= 1.0;
      }
      if(fabs(tmp107) < 1e-10 && ((unsigned long)tmp106 & 1))
      {
        tmp103 = -pow(-tmp101, tmp104)*pow(tmp101, tmp105);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
      }
    }
  }
  else
  {
    tmp103 = pow(tmp101, tmp102);
  }
  if(isnan(tmp103) || isinf(tmp103))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp101, tmp102);
  }tmp108 = _eta - 0.72;
  tmp109 = real_array_get(_J, 1, ((modelica_integer) 8));
  if(tmp108 < 0.0 && tmp109 != 0.0)
  {
    tmp111 = modf(tmp109, &tmp112);
    
    if(tmp111 > 0.5)
    {
      tmp111 -= 1.0;
      tmp112 += 1.0;
    }
    else if(tmp111 < -0.5)
    {
      tmp111 += 1.0;
      tmp112 -= 1.0;
    }
    
    if(fabs(tmp111) < 1e-10)
      tmp110 = pow(tmp108, tmp112);
    else
    {
      tmp114 = modf(1.0/tmp109, &tmp113);
      if(tmp114 > 0.5)
      {
        tmp114 -= 1.0;
        tmp113 += 1.0;
      }
      else if(tmp114 < -0.5)
      {
        tmp114 += 1.0;
        tmp113 -= 1.0;
      }
      if(fabs(tmp114) < 1e-10 && ((unsigned long)tmp113 & 1))
      {
        tmp110 = -pow(-tmp108, tmp111)*pow(tmp108, tmp112);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
      }
    }
  }
  else
  {
    tmp110 = pow(tmp108, tmp109);
  }
  if(isnan(tmp110) || isinf(tmp110))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp108, tmp109);
  }tmp115 = _pi + 0.06610000000000001;
  tmp116 = real_array_get(_I, 1, ((modelica_integer) 9));
  if(tmp115 < 0.0 && tmp116 != 0.0)
  {
    tmp118 = modf(tmp116, &tmp119);
    
    if(tmp118 > 0.5)
    {
      tmp118 -= 1.0;
      tmp119 += 1.0;
    }
    else if(tmp118 < -0.5)
    {
      tmp118 += 1.0;
      tmp119 -= 1.0;
    }
    
    if(fabs(tmp118) < 1e-10)
      tmp117 = pow(tmp115, tmp119);
    else
    {
      tmp121 = modf(1.0/tmp116, &tmp120);
      if(tmp121 > 0.5)
      {
        tmp121 -= 1.0;
        tmp120 += 1.0;
      }
      else if(tmp121 < -0.5)
      {
        tmp121 += 1.0;
        tmp120 -= 1.0;
      }
      if(fabs(tmp121) < 1e-10 && ((unsigned long)tmp120 & 1))
      {
        tmp117 = -pow(-tmp115, tmp118)*pow(tmp115, tmp119);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
      }
    }
  }
  else
  {
    tmp117 = pow(tmp115, tmp116);
  }
  if(isnan(tmp117) || isinf(tmp117))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp115, tmp116);
  }tmp122 = _eta - 0.72;
  tmp123 = real_array_get(_J, 1, ((modelica_integer) 9));
  if(tmp122 < 0.0 && tmp123 != 0.0)
  {
    tmp125 = modf(tmp123, &tmp126);
    
    if(tmp125 > 0.5)
    {
      tmp125 -= 1.0;
      tmp126 += 1.0;
    }
    else if(tmp125 < -0.5)
    {
      tmp125 += 1.0;
      tmp126 -= 1.0;
    }
    
    if(fabs(tmp125) < 1e-10)
      tmp124 = pow(tmp122, tmp126);
    else
    {
      tmp128 = modf(1.0/tmp123, &tmp127);
      if(tmp128 > 0.5)
      {
        tmp128 -= 1.0;
        tmp127 += 1.0;
      }
      else if(tmp128 < -0.5)
      {
        tmp128 += 1.0;
        tmp127 -= 1.0;
      }
      if(fabs(tmp128) < 1e-10 && ((unsigned long)tmp127 & 1))
      {
        tmp124 = -pow(-tmp122, tmp125)*pow(tmp122, tmp126);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
      }
    }
  }
  else
  {
    tmp124 = pow(tmp122, tmp123);
  }
  if(isnan(tmp124) || isinf(tmp124))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp122, tmp123);
  }tmp129 = _pi + 0.06610000000000001;
  tmp130 = real_array_get(_I, 1, ((modelica_integer) 10));
  if(tmp129 < 0.0 && tmp130 != 0.0)
  {
    tmp132 = modf(tmp130, &tmp133);
    
    if(tmp132 > 0.5)
    {
      tmp132 -= 1.0;
      tmp133 += 1.0;
    }
    else if(tmp132 < -0.5)
    {
      tmp132 += 1.0;
      tmp133 -= 1.0;
    }
    
    if(fabs(tmp132) < 1e-10)
      tmp131 = pow(tmp129, tmp133);
    else
    {
      tmp135 = modf(1.0/tmp130, &tmp134);
      if(tmp135 > 0.5)
      {
        tmp135 -= 1.0;
        tmp134 += 1.0;
      }
      else if(tmp135 < -0.5)
      {
        tmp135 += 1.0;
        tmp134 -= 1.0;
      }
      if(fabs(tmp135) < 1e-10 && ((unsigned long)tmp134 & 1))
      {
        tmp131 = -pow(-tmp129, tmp132)*pow(tmp129, tmp133);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
      }
    }
  }
  else
  {
    tmp131 = pow(tmp129, tmp130);
  }
  if(isnan(tmp131) || isinf(tmp131))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp129, tmp130);
  }tmp136 = _eta - 0.72;
  tmp137 = real_array_get(_J, 1, ((modelica_integer) 10));
  if(tmp136 < 0.0 && tmp137 != 0.0)
  {
    tmp139 = modf(tmp137, &tmp140);
    
    if(tmp139 > 0.5)
    {
      tmp139 -= 1.0;
      tmp140 += 1.0;
    }
    else if(tmp139 < -0.5)
    {
      tmp139 += 1.0;
      tmp140 -= 1.0;
    }
    
    if(fabs(tmp139) < 1e-10)
      tmp138 = pow(tmp136, tmp140);
    else
    {
      tmp142 = modf(1.0/tmp137, &tmp141);
      if(tmp142 > 0.5)
      {
        tmp142 -= 1.0;
        tmp141 += 1.0;
      }
      else if(tmp142 < -0.5)
      {
        tmp142 += 1.0;
        tmp141 -= 1.0;
      }
      if(fabs(tmp142) < 1e-10 && ((unsigned long)tmp141 & 1))
      {
        tmp138 = -pow(-tmp136, tmp139)*pow(tmp136, tmp140);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
      }
    }
  }
  else
  {
    tmp138 = pow(tmp136, tmp137);
  }
  if(isnan(tmp138) || isinf(tmp138))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp136, tmp137);
  }tmp143 = _pi + 0.06610000000000001;
  tmp144 = real_array_get(_I, 1, ((modelica_integer) 11));
  if(tmp143 < 0.0 && tmp144 != 0.0)
  {
    tmp146 = modf(tmp144, &tmp147);
    
    if(tmp146 > 0.5)
    {
      tmp146 -= 1.0;
      tmp147 += 1.0;
    }
    else if(tmp146 < -0.5)
    {
      tmp146 += 1.0;
      tmp147 -= 1.0;
    }
    
    if(fabs(tmp146) < 1e-10)
      tmp145 = pow(tmp143, tmp147);
    else
    {
      tmp149 = modf(1.0/tmp144, &tmp148);
      if(tmp149 > 0.5)
      {
        tmp149 -= 1.0;
        tmp148 += 1.0;
      }
      else if(tmp149 < -0.5)
      {
        tmp149 += 1.0;
        tmp148 -= 1.0;
      }
      if(fabs(tmp149) < 1e-10 && ((unsigned long)tmp148 & 1))
      {
        tmp145 = -pow(-tmp143, tmp146)*pow(tmp143, tmp147);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
      }
    }
  }
  else
  {
    tmp145 = pow(tmp143, tmp144);
  }
  if(isnan(tmp145) || isinf(tmp145))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp143, tmp144);
  }tmp150 = _eta - 0.72;
  tmp151 = real_array_get(_J, 1, ((modelica_integer) 11));
  if(tmp150 < 0.0 && tmp151 != 0.0)
  {
    tmp153 = modf(tmp151, &tmp154);
    
    if(tmp153 > 0.5)
    {
      tmp153 -= 1.0;
      tmp154 += 1.0;
    }
    else if(tmp153 < -0.5)
    {
      tmp153 += 1.0;
      tmp154 -= 1.0;
    }
    
    if(fabs(tmp153) < 1e-10)
      tmp152 = pow(tmp150, tmp154);
    else
    {
      tmp156 = modf(1.0/tmp151, &tmp155);
      if(tmp156 > 0.5)
      {
        tmp156 -= 1.0;
        tmp155 += 1.0;
      }
      else if(tmp156 < -0.5)
      {
        tmp156 += 1.0;
        tmp155 -= 1.0;
      }
      if(fabs(tmp156) < 1e-10 && ((unsigned long)tmp155 & 1))
      {
        tmp152 = -pow(-tmp150, tmp153)*pow(tmp150, tmp154);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
      }
    }
  }
  else
  {
    tmp152 = pow(tmp150, tmp151);
  }
  if(isnan(tmp152) || isinf(tmp152))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp150, tmp151);
  }tmp157 = _pi + 0.06610000000000001;
  tmp158 = real_array_get(_I, 1, ((modelica_integer) 12));
  if(tmp157 < 0.0 && tmp158 != 0.0)
  {
    tmp160 = modf(tmp158, &tmp161);
    
    if(tmp160 > 0.5)
    {
      tmp160 -= 1.0;
      tmp161 += 1.0;
    }
    else if(tmp160 < -0.5)
    {
      tmp160 += 1.0;
      tmp161 -= 1.0;
    }
    
    if(fabs(tmp160) < 1e-10)
      tmp159 = pow(tmp157, tmp161);
    else
    {
      tmp163 = modf(1.0/tmp158, &tmp162);
      if(tmp163 > 0.5)
      {
        tmp163 -= 1.0;
        tmp162 += 1.0;
      }
      else if(tmp163 < -0.5)
      {
        tmp163 += 1.0;
        tmp162 -= 1.0;
      }
      if(fabs(tmp163) < 1e-10 && ((unsigned long)tmp162 & 1))
      {
        tmp159 = -pow(-tmp157, tmp160)*pow(tmp157, tmp161);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
      }
    }
  }
  else
  {
    tmp159 = pow(tmp157, tmp158);
  }
  if(isnan(tmp159) || isinf(tmp159))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp157, tmp158);
  }tmp164 = _eta - 0.72;
  tmp165 = real_array_get(_J, 1, ((modelica_integer) 12));
  if(tmp164 < 0.0 && tmp165 != 0.0)
  {
    tmp167 = modf(tmp165, &tmp168);
    
    if(tmp167 > 0.5)
    {
      tmp167 -= 1.0;
      tmp168 += 1.0;
    }
    else if(tmp167 < -0.5)
    {
      tmp167 += 1.0;
      tmp168 -= 1.0;
    }
    
    if(fabs(tmp167) < 1e-10)
      tmp166 = pow(tmp164, tmp168);
    else
    {
      tmp170 = modf(1.0/tmp165, &tmp169);
      if(tmp170 > 0.5)
      {
        tmp170 -= 1.0;
        tmp169 += 1.0;
      }
      else if(tmp170 < -0.5)
      {
        tmp170 += 1.0;
        tmp169 -= 1.0;
      }
      if(fabs(tmp170) < 1e-10 && ((unsigned long)tmp169 & 1))
      {
        tmp166 = -pow(-tmp164, tmp167)*pow(tmp164, tmp168);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
      }
    }
  }
  else
  {
    tmp166 = pow(tmp164, tmp165);
  }
  if(isnan(tmp166) || isinf(tmp166))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp164, tmp165);
  }tmp171 = _pi + 0.06610000000000001;
  tmp172 = real_array_get(_I, 1, ((modelica_integer) 13));
  if(tmp171 < 0.0 && tmp172 != 0.0)
  {
    tmp174 = modf(tmp172, &tmp175);
    
    if(tmp174 > 0.5)
    {
      tmp174 -= 1.0;
      tmp175 += 1.0;
    }
    else if(tmp174 < -0.5)
    {
      tmp174 += 1.0;
      tmp175 -= 1.0;
    }
    
    if(fabs(tmp174) < 1e-10)
      tmp173 = pow(tmp171, tmp175);
    else
    {
      tmp177 = modf(1.0/tmp172, &tmp176);
      if(tmp177 > 0.5)
      {
        tmp177 -= 1.0;
        tmp176 += 1.0;
      }
      else if(tmp177 < -0.5)
      {
        tmp177 += 1.0;
        tmp176 -= 1.0;
      }
      if(fabs(tmp177) < 1e-10 && ((unsigned long)tmp176 & 1))
      {
        tmp173 = -pow(-tmp171, tmp174)*pow(tmp171, tmp175);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
      }
    }
  }
  else
  {
    tmp173 = pow(tmp171, tmp172);
  }
  if(isnan(tmp173) || isinf(tmp173))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp171, tmp172);
  }tmp178 = _eta - 0.72;
  tmp179 = real_array_get(_J, 1, ((modelica_integer) 13));
  if(tmp178 < 0.0 && tmp179 != 0.0)
  {
    tmp181 = modf(tmp179, &tmp182);
    
    if(tmp181 > 0.5)
    {
      tmp181 -= 1.0;
      tmp182 += 1.0;
    }
    else if(tmp181 < -0.5)
    {
      tmp181 += 1.0;
      tmp182 -= 1.0;
    }
    
    if(fabs(tmp181) < 1e-10)
      tmp180 = pow(tmp178, tmp182);
    else
    {
      tmp184 = modf(1.0/tmp179, &tmp183);
      if(tmp184 > 0.5)
      {
        tmp184 -= 1.0;
        tmp183 += 1.0;
      }
      else if(tmp184 < -0.5)
      {
        tmp184 += 1.0;
        tmp183 -= 1.0;
      }
      if(fabs(tmp184) < 1e-10 && ((unsigned long)tmp183 & 1))
      {
        tmp180 = -pow(-tmp178, tmp181)*pow(tmp178, tmp182);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
      }
    }
  }
  else
  {
    tmp180 = pow(tmp178, tmp179);
  }
  if(isnan(tmp180) || isinf(tmp180))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp178, tmp179);
  }tmp185 = _pi + 0.06610000000000001;
  tmp186 = real_array_get(_I, 1, ((modelica_integer) 14));
  if(tmp185 < 0.0 && tmp186 != 0.0)
  {
    tmp188 = modf(tmp186, &tmp189);
    
    if(tmp188 > 0.5)
    {
      tmp188 -= 1.0;
      tmp189 += 1.0;
    }
    else if(tmp188 < -0.5)
    {
      tmp188 += 1.0;
      tmp189 -= 1.0;
    }
    
    if(fabs(tmp188) < 1e-10)
      tmp187 = pow(tmp185, tmp189);
    else
    {
      tmp191 = modf(1.0/tmp186, &tmp190);
      if(tmp191 > 0.5)
      {
        tmp191 -= 1.0;
        tmp190 += 1.0;
      }
      else if(tmp191 < -0.5)
      {
        tmp191 += 1.0;
        tmp190 -= 1.0;
      }
      if(fabs(tmp191) < 1e-10 && ((unsigned long)tmp190 & 1))
      {
        tmp187 = -pow(-tmp185, tmp188)*pow(tmp185, tmp189);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
      }
    }
  }
  else
  {
    tmp187 = pow(tmp185, tmp186);
  }
  if(isnan(tmp187) || isinf(tmp187))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp185, tmp186);
  }tmp192 = _eta - 0.72;
  tmp193 = real_array_get(_J, 1, ((modelica_integer) 14));
  if(tmp192 < 0.0 && tmp193 != 0.0)
  {
    tmp195 = modf(tmp193, &tmp196);
    
    if(tmp195 > 0.5)
    {
      tmp195 -= 1.0;
      tmp196 += 1.0;
    }
    else if(tmp195 < -0.5)
    {
      tmp195 += 1.0;
      tmp196 -= 1.0;
    }
    
    if(fabs(tmp195) < 1e-10)
      tmp194 = pow(tmp192, tmp196);
    else
    {
      tmp198 = modf(1.0/tmp193, &tmp197);
      if(tmp198 > 0.5)
      {
        tmp198 -= 1.0;
        tmp197 += 1.0;
      }
      else if(tmp198 < -0.5)
      {
        tmp198 += 1.0;
        tmp197 -= 1.0;
      }
      if(fabs(tmp198) < 1e-10 && ((unsigned long)tmp197 & 1))
      {
        tmp194 = -pow(-tmp192, tmp195)*pow(tmp192, tmp196);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
      }
    }
  }
  else
  {
    tmp194 = pow(tmp192, tmp193);
  }
  if(isnan(tmp194) || isinf(tmp194))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp192, tmp193);
  }tmp199 = _pi + 0.06610000000000001;
  tmp200 = real_array_get(_I, 1, ((modelica_integer) 15));
  if(tmp199 < 0.0 && tmp200 != 0.0)
  {
    tmp202 = modf(tmp200, &tmp203);
    
    if(tmp202 > 0.5)
    {
      tmp202 -= 1.0;
      tmp203 += 1.0;
    }
    else if(tmp202 < -0.5)
    {
      tmp202 += 1.0;
      tmp203 -= 1.0;
    }
    
    if(fabs(tmp202) < 1e-10)
      tmp201 = pow(tmp199, tmp203);
    else
    {
      tmp205 = modf(1.0/tmp200, &tmp204);
      if(tmp205 > 0.5)
      {
        tmp205 -= 1.0;
        tmp204 += 1.0;
      }
      else if(tmp205 < -0.5)
      {
        tmp205 += 1.0;
        tmp204 -= 1.0;
      }
      if(fabs(tmp205) < 1e-10 && ((unsigned long)tmp204 & 1))
      {
        tmp201 = -pow(-tmp199, tmp202)*pow(tmp199, tmp203);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
      }
    }
  }
  else
  {
    tmp201 = pow(tmp199, tmp200);
  }
  if(isnan(tmp201) || isinf(tmp201))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp199, tmp200);
  }tmp206 = _eta - 0.72;
  tmp207 = real_array_get(_J, 1, ((modelica_integer) 15));
  if(tmp206 < 0.0 && tmp207 != 0.0)
  {
    tmp209 = modf(tmp207, &tmp210);
    
    if(tmp209 > 0.5)
    {
      tmp209 -= 1.0;
      tmp210 += 1.0;
    }
    else if(tmp209 < -0.5)
    {
      tmp209 += 1.0;
      tmp210 -= 1.0;
    }
    
    if(fabs(tmp209) < 1e-10)
      tmp208 = pow(tmp206, tmp210);
    else
    {
      tmp212 = modf(1.0/tmp207, &tmp211);
      if(tmp212 > 0.5)
      {
        tmp212 -= 1.0;
        tmp211 += 1.0;
      }
      else if(tmp212 < -0.5)
      {
        tmp212 += 1.0;
        tmp211 -= 1.0;
      }
      if(fabs(tmp212) < 1e-10 && ((unsigned long)tmp211 & 1))
      {
        tmp208 = -pow(-tmp206, tmp209)*pow(tmp206, tmp210);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
      }
    }
  }
  else
  {
    tmp208 = pow(tmp206, tmp207);
  }
  if(isnan(tmp208) || isinf(tmp208))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp206, tmp207);
  }tmp213 = _pi + 0.06610000000000001;
  tmp214 = real_array_get(_I, 1, ((modelica_integer) 16));
  if(tmp213 < 0.0 && tmp214 != 0.0)
  {
    tmp216 = modf(tmp214, &tmp217);
    
    if(tmp216 > 0.5)
    {
      tmp216 -= 1.0;
      tmp217 += 1.0;
    }
    else if(tmp216 < -0.5)
    {
      tmp216 += 1.0;
      tmp217 -= 1.0;
    }
    
    if(fabs(tmp216) < 1e-10)
      tmp215 = pow(tmp213, tmp217);
    else
    {
      tmp219 = modf(1.0/tmp214, &tmp218);
      if(tmp219 > 0.5)
      {
        tmp219 -= 1.0;
        tmp218 += 1.0;
      }
      else if(tmp219 < -0.5)
      {
        tmp219 += 1.0;
        tmp218 -= 1.0;
      }
      if(fabs(tmp219) < 1e-10 && ((unsigned long)tmp218 & 1))
      {
        tmp215 = -pow(-tmp213, tmp216)*pow(tmp213, tmp217);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
      }
    }
  }
  else
  {
    tmp215 = pow(tmp213, tmp214);
  }
  if(isnan(tmp215) || isinf(tmp215))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp213, tmp214);
  }tmp220 = _eta - 0.72;
  tmp221 = real_array_get(_J, 1, ((modelica_integer) 16));
  if(tmp220 < 0.0 && tmp221 != 0.0)
  {
    tmp223 = modf(tmp221, &tmp224);
    
    if(tmp223 > 0.5)
    {
      tmp223 -= 1.0;
      tmp224 += 1.0;
    }
    else if(tmp223 < -0.5)
    {
      tmp223 += 1.0;
      tmp224 -= 1.0;
    }
    
    if(fabs(tmp223) < 1e-10)
      tmp222 = pow(tmp220, tmp224);
    else
    {
      tmp226 = modf(1.0/tmp221, &tmp225);
      if(tmp226 > 0.5)
      {
        tmp226 -= 1.0;
        tmp225 += 1.0;
      }
      else if(tmp226 < -0.5)
      {
        tmp226 += 1.0;
        tmp225 -= 1.0;
      }
      if(fabs(tmp226) < 1e-10 && ((unsigned long)tmp225 & 1))
      {
        tmp222 = -pow(-tmp220, tmp223)*pow(tmp220, tmp224);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
      }
    }
  }
  else
  {
    tmp222 = pow(tmp220, tmp221);
  }
  if(isnan(tmp222) || isinf(tmp222))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp220, tmp221);
  }tmp227 = _pi + 0.06610000000000001;
  tmp228 = real_array_get(_I, 1, ((modelica_integer) 17));
  if(tmp227 < 0.0 && tmp228 != 0.0)
  {
    tmp230 = modf(tmp228, &tmp231);
    
    if(tmp230 > 0.5)
    {
      tmp230 -= 1.0;
      tmp231 += 1.0;
    }
    else if(tmp230 < -0.5)
    {
      tmp230 += 1.0;
      tmp231 -= 1.0;
    }
    
    if(fabs(tmp230) < 1e-10)
      tmp229 = pow(tmp227, tmp231);
    else
    {
      tmp233 = modf(1.0/tmp228, &tmp232);
      if(tmp233 > 0.5)
      {
        tmp233 -= 1.0;
        tmp232 += 1.0;
      }
      else if(tmp233 < -0.5)
      {
        tmp233 += 1.0;
        tmp232 -= 1.0;
      }
      if(fabs(tmp233) < 1e-10 && ((unsigned long)tmp232 & 1))
      {
        tmp229 = -pow(-tmp227, tmp230)*pow(tmp227, tmp231);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
      }
    }
  }
  else
  {
    tmp229 = pow(tmp227, tmp228);
  }
  if(isnan(tmp229) || isinf(tmp229))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp227, tmp228);
  }tmp234 = _eta - 0.72;
  tmp235 = real_array_get(_J, 1, ((modelica_integer) 17));
  if(tmp234 < 0.0 && tmp235 != 0.0)
  {
    tmp237 = modf(tmp235, &tmp238);
    
    if(tmp237 > 0.5)
    {
      tmp237 -= 1.0;
      tmp238 += 1.0;
    }
    else if(tmp237 < -0.5)
    {
      tmp237 += 1.0;
      tmp238 -= 1.0;
    }
    
    if(fabs(tmp237) < 1e-10)
      tmp236 = pow(tmp234, tmp238);
    else
    {
      tmp240 = modf(1.0/tmp235, &tmp239);
      if(tmp240 > 0.5)
      {
        tmp240 -= 1.0;
        tmp239 += 1.0;
      }
      else if(tmp240 < -0.5)
      {
        tmp240 += 1.0;
        tmp239 -= 1.0;
      }
      if(fabs(tmp240) < 1e-10 && ((unsigned long)tmp239 & 1))
      {
        tmp236 = -pow(-tmp234, tmp237)*pow(tmp234, tmp238);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
      }
    }
  }
  else
  {
    tmp236 = pow(tmp234, tmp235);
  }
  if(isnan(tmp236) || isinf(tmp236))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp234, tmp235);
  }tmp241 = _pi + 0.06610000000000001;
  tmp242 = real_array_get(_I, 1, ((modelica_integer) 18));
  if(tmp241 < 0.0 && tmp242 != 0.0)
  {
    tmp244 = modf(tmp242, &tmp245);
    
    if(tmp244 > 0.5)
    {
      tmp244 -= 1.0;
      tmp245 += 1.0;
    }
    else if(tmp244 < -0.5)
    {
      tmp244 += 1.0;
      tmp245 -= 1.0;
    }
    
    if(fabs(tmp244) < 1e-10)
      tmp243 = pow(tmp241, tmp245);
    else
    {
      tmp247 = modf(1.0/tmp242, &tmp246);
      if(tmp247 > 0.5)
      {
        tmp247 -= 1.0;
        tmp246 += 1.0;
      }
      else if(tmp247 < -0.5)
      {
        tmp247 += 1.0;
        tmp246 -= 1.0;
      }
      if(fabs(tmp247) < 1e-10 && ((unsigned long)tmp246 & 1))
      {
        tmp243 = -pow(-tmp241, tmp244)*pow(tmp241, tmp245);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
      }
    }
  }
  else
  {
    tmp243 = pow(tmp241, tmp242);
  }
  if(isnan(tmp243) || isinf(tmp243))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp241, tmp242);
  }tmp248 = _eta - 0.72;
  tmp249 = real_array_get(_J, 1, ((modelica_integer) 18));
  if(tmp248 < 0.0 && tmp249 != 0.0)
  {
    tmp251 = modf(tmp249, &tmp252);
    
    if(tmp251 > 0.5)
    {
      tmp251 -= 1.0;
      tmp252 += 1.0;
    }
    else if(tmp251 < -0.5)
    {
      tmp251 += 1.0;
      tmp252 -= 1.0;
    }
    
    if(fabs(tmp251) < 1e-10)
      tmp250 = pow(tmp248, tmp252);
    else
    {
      tmp254 = modf(1.0/tmp249, &tmp253);
      if(tmp254 > 0.5)
      {
        tmp254 -= 1.0;
        tmp253 += 1.0;
      }
      else if(tmp254 < -0.5)
      {
        tmp254 += 1.0;
        tmp253 -= 1.0;
      }
      if(fabs(tmp254) < 1e-10 && ((unsigned long)tmp253 & 1))
      {
        tmp250 = -pow(-tmp248, tmp251)*pow(tmp248, tmp252);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
      }
    }
  }
  else
  {
    tmp250 = pow(tmp248, tmp249);
  }
  if(isnan(tmp250) || isinf(tmp250))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp248, tmp249);
  }tmp255 = _pi + 0.06610000000000001;
  tmp256 = real_array_get(_I, 1, ((modelica_integer) 19));
  if(tmp255 < 0.0 && tmp256 != 0.0)
  {
    tmp258 = modf(tmp256, &tmp259);
    
    if(tmp258 > 0.5)
    {
      tmp258 -= 1.0;
      tmp259 += 1.0;
    }
    else if(tmp258 < -0.5)
    {
      tmp258 += 1.0;
      tmp259 -= 1.0;
    }
    
    if(fabs(tmp258) < 1e-10)
      tmp257 = pow(tmp255, tmp259);
    else
    {
      tmp261 = modf(1.0/tmp256, &tmp260);
      if(tmp261 > 0.5)
      {
        tmp261 -= 1.0;
        tmp260 += 1.0;
      }
      else if(tmp261 < -0.5)
      {
        tmp261 += 1.0;
        tmp260 -= 1.0;
      }
      if(fabs(tmp261) < 1e-10 && ((unsigned long)tmp260 & 1))
      {
        tmp257 = -pow(-tmp255, tmp258)*pow(tmp255, tmp259);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
      }
    }
  }
  else
  {
    tmp257 = pow(tmp255, tmp256);
  }
  if(isnan(tmp257) || isinf(tmp257))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp255, tmp256);
  }tmp262 = _eta - 0.72;
  tmp263 = real_array_get(_J, 1, ((modelica_integer) 19));
  if(tmp262 < 0.0 && tmp263 != 0.0)
  {
    tmp265 = modf(tmp263, &tmp266);
    
    if(tmp265 > 0.5)
    {
      tmp265 -= 1.0;
      tmp266 += 1.0;
    }
    else if(tmp265 < -0.5)
    {
      tmp265 += 1.0;
      tmp266 -= 1.0;
    }
    
    if(fabs(tmp265) < 1e-10)
      tmp264 = pow(tmp262, tmp266);
    else
    {
      tmp268 = modf(1.0/tmp263, &tmp267);
      if(tmp268 > 0.5)
      {
        tmp268 -= 1.0;
        tmp267 += 1.0;
      }
      else if(tmp268 < -0.5)
      {
        tmp268 += 1.0;
        tmp267 -= 1.0;
      }
      if(fabs(tmp268) < 1e-10 && ((unsigned long)tmp267 & 1))
      {
        tmp264 = -pow(-tmp262, tmp265)*pow(tmp262, tmp266);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
      }
    }
  }
  else
  {
    tmp264 = pow(tmp262, tmp263);
  }
  if(isnan(tmp264) || isinf(tmp264))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp262, tmp263);
  }tmp269 = _pi + 0.06610000000000001;
  tmp270 = real_array_get(_I, 1, ((modelica_integer) 20));
  if(tmp269 < 0.0 && tmp270 != 0.0)
  {
    tmp272 = modf(tmp270, &tmp273);
    
    if(tmp272 > 0.5)
    {
      tmp272 -= 1.0;
      tmp273 += 1.0;
    }
    else if(tmp272 < -0.5)
    {
      tmp272 += 1.0;
      tmp273 -= 1.0;
    }
    
    if(fabs(tmp272) < 1e-10)
      tmp271 = pow(tmp269, tmp273);
    else
    {
      tmp275 = modf(1.0/tmp270, &tmp274);
      if(tmp275 > 0.5)
      {
        tmp275 -= 1.0;
        tmp274 += 1.0;
      }
      else if(tmp275 < -0.5)
      {
        tmp275 += 1.0;
        tmp274 -= 1.0;
      }
      if(fabs(tmp275) < 1e-10 && ((unsigned long)tmp274 & 1))
      {
        tmp271 = -pow(-tmp269, tmp272)*pow(tmp269, tmp273);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
      }
    }
  }
  else
  {
    tmp271 = pow(tmp269, tmp270);
  }
  if(isnan(tmp271) || isinf(tmp271))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp269, tmp270);
  }tmp276 = _eta - 0.72;
  tmp277 = real_array_get(_J, 1, ((modelica_integer) 20));
  if(tmp276 < 0.0 && tmp277 != 0.0)
  {
    tmp279 = modf(tmp277, &tmp280);
    
    if(tmp279 > 0.5)
    {
      tmp279 -= 1.0;
      tmp280 += 1.0;
    }
    else if(tmp279 < -0.5)
    {
      tmp279 += 1.0;
      tmp280 -= 1.0;
    }
    
    if(fabs(tmp279) < 1e-10)
      tmp278 = pow(tmp276, tmp280);
    else
    {
      tmp282 = modf(1.0/tmp277, &tmp281);
      if(tmp282 > 0.5)
      {
        tmp282 -= 1.0;
        tmp281 += 1.0;
      }
      else if(tmp282 < -0.5)
      {
        tmp282 += 1.0;
        tmp281 -= 1.0;
      }
      if(fabs(tmp282) < 1e-10 && ((unsigned long)tmp281 & 1))
      {
        tmp278 = -pow(-tmp276, tmp279)*pow(tmp276, tmp280);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
      }
    }
  }
  else
  {
    tmp278 = pow(tmp276, tmp277);
  }
  if(isnan(tmp278) || isinf(tmp278))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp276, tmp277);
  }tmp283 = _pi + 0.06610000000000001;
  tmp284 = real_array_get(_I, 1, ((modelica_integer) 21));
  if(tmp283 < 0.0 && tmp284 != 0.0)
  {
    tmp286 = modf(tmp284, &tmp287);
    
    if(tmp286 > 0.5)
    {
      tmp286 -= 1.0;
      tmp287 += 1.0;
    }
    else if(tmp286 < -0.5)
    {
      tmp286 += 1.0;
      tmp287 -= 1.0;
    }
    
    if(fabs(tmp286) < 1e-10)
      tmp285 = pow(tmp283, tmp287);
    else
    {
      tmp289 = modf(1.0/tmp284, &tmp288);
      if(tmp289 > 0.5)
      {
        tmp289 -= 1.0;
        tmp288 += 1.0;
      }
      else if(tmp289 < -0.5)
      {
        tmp289 += 1.0;
        tmp288 -= 1.0;
      }
      if(fabs(tmp289) < 1e-10 && ((unsigned long)tmp288 & 1))
      {
        tmp285 = -pow(-tmp283, tmp286)*pow(tmp283, tmp287);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
      }
    }
  }
  else
  {
    tmp285 = pow(tmp283, tmp284);
  }
  if(isnan(tmp285) || isinf(tmp285))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp283, tmp284);
  }tmp290 = _eta - 0.72;
  tmp291 = real_array_get(_J, 1, ((modelica_integer) 21));
  if(tmp290 < 0.0 && tmp291 != 0.0)
  {
    tmp293 = modf(tmp291, &tmp294);
    
    if(tmp293 > 0.5)
    {
      tmp293 -= 1.0;
      tmp294 += 1.0;
    }
    else if(tmp293 < -0.5)
    {
      tmp293 += 1.0;
      tmp294 -= 1.0;
    }
    
    if(fabs(tmp293) < 1e-10)
      tmp292 = pow(tmp290, tmp294);
    else
    {
      tmp296 = modf(1.0/tmp291, &tmp295);
      if(tmp296 > 0.5)
      {
        tmp296 -= 1.0;
        tmp295 += 1.0;
      }
      else if(tmp296 < -0.5)
      {
        tmp296 += 1.0;
        tmp295 -= 1.0;
      }
      if(fabs(tmp296) < 1e-10 && ((unsigned long)tmp295 & 1))
      {
        tmp292 = -pow(-tmp290, tmp293)*pow(tmp290, tmp294);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
      }
    }
  }
  else
  {
    tmp292 = pow(tmp290, tmp291);
  }
  if(isnan(tmp292) || isinf(tmp292))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp290, tmp291);
  }tmp297 = _pi + 0.06610000000000001;
  tmp298 = real_array_get(_I, 1, ((modelica_integer) 22));
  if(tmp297 < 0.0 && tmp298 != 0.0)
  {
    tmp300 = modf(tmp298, &tmp301);
    
    if(tmp300 > 0.5)
    {
      tmp300 -= 1.0;
      tmp301 += 1.0;
    }
    else if(tmp300 < -0.5)
    {
      tmp300 += 1.0;
      tmp301 -= 1.0;
    }
    
    if(fabs(tmp300) < 1e-10)
      tmp299 = pow(tmp297, tmp301);
    else
    {
      tmp303 = modf(1.0/tmp298, &tmp302);
      if(tmp303 > 0.5)
      {
        tmp303 -= 1.0;
        tmp302 += 1.0;
      }
      else if(tmp303 < -0.5)
      {
        tmp303 += 1.0;
        tmp302 -= 1.0;
      }
      if(fabs(tmp303) < 1e-10 && ((unsigned long)tmp302 & 1))
      {
        tmp299 = -pow(-tmp297, tmp300)*pow(tmp297, tmp301);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
      }
    }
  }
  else
  {
    tmp299 = pow(tmp297, tmp298);
  }
  if(isnan(tmp299) || isinf(tmp299))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp297, tmp298);
  }tmp304 = _eta - 0.72;
  tmp305 = real_array_get(_J, 1, ((modelica_integer) 22));
  if(tmp304 < 0.0 && tmp305 != 0.0)
  {
    tmp307 = modf(tmp305, &tmp308);
    
    if(tmp307 > 0.5)
    {
      tmp307 -= 1.0;
      tmp308 += 1.0;
    }
    else if(tmp307 < -0.5)
    {
      tmp307 += 1.0;
      tmp308 -= 1.0;
    }
    
    if(fabs(tmp307) < 1e-10)
      tmp306 = pow(tmp304, tmp308);
    else
    {
      tmp310 = modf(1.0/tmp305, &tmp309);
      if(tmp310 > 0.5)
      {
        tmp310 -= 1.0;
        tmp309 += 1.0;
      }
      else if(tmp310 < -0.5)
      {
        tmp310 += 1.0;
        tmp309 -= 1.0;
      }
      if(fabs(tmp310) < 1e-10 && ((unsigned long)tmp309 & 1))
      {
        tmp306 = -pow(-tmp304, tmp307)*pow(tmp304, tmp308);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
      }
    }
  }
  else
  {
    tmp306 = pow(tmp304, tmp305);
  }
  if(isnan(tmp306) || isinf(tmp306))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp304, tmp305);
  }tmp311 = _pi + 0.06610000000000001;
  tmp312 = real_array_get(_I, 1, ((modelica_integer) 23));
  if(tmp311 < 0.0 && tmp312 != 0.0)
  {
    tmp314 = modf(tmp312, &tmp315);
    
    if(tmp314 > 0.5)
    {
      tmp314 -= 1.0;
      tmp315 += 1.0;
    }
    else if(tmp314 < -0.5)
    {
      tmp314 += 1.0;
      tmp315 -= 1.0;
    }
    
    if(fabs(tmp314) < 1e-10)
      tmp313 = pow(tmp311, tmp315);
    else
    {
      tmp317 = modf(1.0/tmp312, &tmp316);
      if(tmp317 > 0.5)
      {
        tmp317 -= 1.0;
        tmp316 += 1.0;
      }
      else if(tmp317 < -0.5)
      {
        tmp317 += 1.0;
        tmp316 -= 1.0;
      }
      if(fabs(tmp317) < 1e-10 && ((unsigned long)tmp316 & 1))
      {
        tmp313 = -pow(-tmp311, tmp314)*pow(tmp311, tmp315);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
      }
    }
  }
  else
  {
    tmp313 = pow(tmp311, tmp312);
  }
  if(isnan(tmp313) || isinf(tmp313))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp311, tmp312);
  }tmp318 = _eta - 0.72;
  tmp319 = real_array_get(_J, 1, ((modelica_integer) 23));
  if(tmp318 < 0.0 && tmp319 != 0.0)
  {
    tmp321 = modf(tmp319, &tmp322);
    
    if(tmp321 > 0.5)
    {
      tmp321 -= 1.0;
      tmp322 += 1.0;
    }
    else if(tmp321 < -0.5)
    {
      tmp321 += 1.0;
      tmp322 -= 1.0;
    }
    
    if(fabs(tmp321) < 1e-10)
      tmp320 = pow(tmp318, tmp322);
    else
    {
      tmp324 = modf(1.0/tmp319, &tmp323);
      if(tmp324 > 0.5)
      {
        tmp324 -= 1.0;
        tmp323 += 1.0;
      }
      else if(tmp324 < -0.5)
      {
        tmp324 += 1.0;
        tmp323 -= 1.0;
      }
      if(fabs(tmp324) < 1e-10 && ((unsigned long)tmp323 & 1))
      {
        tmp320 = -pow(-tmp318, tmp321)*pow(tmp318, tmp322);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
      }
    }
  }
  else
  {
    tmp320 = pow(tmp318, tmp319);
  }
  if(isnan(tmp320) || isinf(tmp320))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp318, tmp319);
  }tmp325 = _pi + 0.06610000000000001;
  tmp326 = real_array_get(_I, 1, ((modelica_integer) 24));
  if(tmp325 < 0.0 && tmp326 != 0.0)
  {
    tmp328 = modf(tmp326, &tmp329);
    
    if(tmp328 > 0.5)
    {
      tmp328 -= 1.0;
      tmp329 += 1.0;
    }
    else if(tmp328 < -0.5)
    {
      tmp328 += 1.0;
      tmp329 -= 1.0;
    }
    
    if(fabs(tmp328) < 1e-10)
      tmp327 = pow(tmp325, tmp329);
    else
    {
      tmp331 = modf(1.0/tmp326, &tmp330);
      if(tmp331 > 0.5)
      {
        tmp331 -= 1.0;
        tmp330 += 1.0;
      }
      else if(tmp331 < -0.5)
      {
        tmp331 += 1.0;
        tmp330 -= 1.0;
      }
      if(fabs(tmp331) < 1e-10 && ((unsigned long)tmp330 & 1))
      {
        tmp327 = -pow(-tmp325, tmp328)*pow(tmp325, tmp329);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
      }
    }
  }
  else
  {
    tmp327 = pow(tmp325, tmp326);
  }
  if(isnan(tmp327) || isinf(tmp327))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp325, tmp326);
  }tmp332 = _eta - 0.72;
  tmp333 = real_array_get(_J, 1, ((modelica_integer) 24));
  if(tmp332 < 0.0 && tmp333 != 0.0)
  {
    tmp335 = modf(tmp333, &tmp336);
    
    if(tmp335 > 0.5)
    {
      tmp335 -= 1.0;
      tmp336 += 1.0;
    }
    else if(tmp335 < -0.5)
    {
      tmp335 += 1.0;
      tmp336 -= 1.0;
    }
    
    if(fabs(tmp335) < 1e-10)
      tmp334 = pow(tmp332, tmp336);
    else
    {
      tmp338 = modf(1.0/tmp333, &tmp337);
      if(tmp338 > 0.5)
      {
        tmp338 -= 1.0;
        tmp337 += 1.0;
      }
      else if(tmp338 < -0.5)
      {
        tmp338 += 1.0;
        tmp337 -= 1.0;
      }
      if(fabs(tmp338) < 1e-10 && ((unsigned long)tmp337 & 1))
      {
        tmp334 = -pow(-tmp332, tmp335)*pow(tmp332, tmp336);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
      }
    }
  }
  else
  {
    tmp334 = pow(tmp332, tmp333);
  }
  if(isnan(tmp334) || isinf(tmp334))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp332, tmp333);
  }tmp339 = _pi + 0.06610000000000001;
  tmp340 = real_array_get(_I, 1, ((modelica_integer) 25));
  if(tmp339 < 0.0 && tmp340 != 0.0)
  {
    tmp342 = modf(tmp340, &tmp343);
    
    if(tmp342 > 0.5)
    {
      tmp342 -= 1.0;
      tmp343 += 1.0;
    }
    else if(tmp342 < -0.5)
    {
      tmp342 += 1.0;
      tmp343 -= 1.0;
    }
    
    if(fabs(tmp342) < 1e-10)
      tmp341 = pow(tmp339, tmp343);
    else
    {
      tmp345 = modf(1.0/tmp340, &tmp344);
      if(tmp345 > 0.5)
      {
        tmp345 -= 1.0;
        tmp344 += 1.0;
      }
      else if(tmp345 < -0.5)
      {
        tmp345 += 1.0;
        tmp344 -= 1.0;
      }
      if(fabs(tmp345) < 1e-10 && ((unsigned long)tmp344 & 1))
      {
        tmp341 = -pow(-tmp339, tmp342)*pow(tmp339, tmp343);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
      }
    }
  }
  else
  {
    tmp341 = pow(tmp339, tmp340);
  }
  if(isnan(tmp341) || isinf(tmp341))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp339, tmp340);
  }tmp346 = _eta - 0.72;
  tmp347 = real_array_get(_J, 1, ((modelica_integer) 25));
  if(tmp346 < 0.0 && tmp347 != 0.0)
  {
    tmp349 = modf(tmp347, &tmp350);
    
    if(tmp349 > 0.5)
    {
      tmp349 -= 1.0;
      tmp350 += 1.0;
    }
    else if(tmp349 < -0.5)
    {
      tmp349 += 1.0;
      tmp350 -= 1.0;
    }
    
    if(fabs(tmp349) < 1e-10)
      tmp348 = pow(tmp346, tmp350);
    else
    {
      tmp352 = modf(1.0/tmp347, &tmp351);
      if(tmp352 > 0.5)
      {
        tmp352 -= 1.0;
        tmp351 += 1.0;
      }
      else if(tmp352 < -0.5)
      {
        tmp352 += 1.0;
        tmp351 -= 1.0;
      }
      if(fabs(tmp352) < 1e-10 && ((unsigned long)tmp351 & 1))
      {
        tmp348 = -pow(-tmp346, tmp349)*pow(tmp346, tmp350);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
      }
    }
  }
  else
  {
    tmp348 = pow(tmp346, tmp347);
  }
  if(isnan(tmp348) || isinf(tmp348))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp346, tmp347);
  }tmp353 = _pi + 0.06610000000000001;
  tmp354 = real_array_get(_I, 1, ((modelica_integer) 26));
  if(tmp353 < 0.0 && tmp354 != 0.0)
  {
    tmp356 = modf(tmp354, &tmp357);
    
    if(tmp356 > 0.5)
    {
      tmp356 -= 1.0;
      tmp357 += 1.0;
    }
    else if(tmp356 < -0.5)
    {
      tmp356 += 1.0;
      tmp357 -= 1.0;
    }
    
    if(fabs(tmp356) < 1e-10)
      tmp355 = pow(tmp353, tmp357);
    else
    {
      tmp359 = modf(1.0/tmp354, &tmp358);
      if(tmp359 > 0.5)
      {
        tmp359 -= 1.0;
        tmp358 += 1.0;
      }
      else if(tmp359 < -0.5)
      {
        tmp359 += 1.0;
        tmp358 -= 1.0;
      }
      if(fabs(tmp359) < 1e-10 && ((unsigned long)tmp358 & 1))
      {
        tmp355 = -pow(-tmp353, tmp356)*pow(tmp353, tmp357);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
      }
    }
  }
  else
  {
    tmp355 = pow(tmp353, tmp354);
  }
  if(isnan(tmp355) || isinf(tmp355))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp353, tmp354);
  }tmp360 = _eta - 0.72;
  tmp361 = real_array_get(_J, 1, ((modelica_integer) 26));
  if(tmp360 < 0.0 && tmp361 != 0.0)
  {
    tmp363 = modf(tmp361, &tmp364);
    
    if(tmp363 > 0.5)
    {
      tmp363 -= 1.0;
      tmp364 += 1.0;
    }
    else if(tmp363 < -0.5)
    {
      tmp363 += 1.0;
      tmp364 -= 1.0;
    }
    
    if(fabs(tmp363) < 1e-10)
      tmp362 = pow(tmp360, tmp364);
    else
    {
      tmp366 = modf(1.0/tmp361, &tmp365);
      if(tmp366 > 0.5)
      {
        tmp366 -= 1.0;
        tmp365 += 1.0;
      }
      else if(tmp366 < -0.5)
      {
        tmp366 += 1.0;
        tmp365 -= 1.0;
      }
      if(fabs(tmp366) < 1e-10 && ((unsigned long)tmp365 & 1))
      {
        tmp362 = -pow(-tmp360, tmp363)*pow(tmp360, tmp364);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
      }
    }
  }
  else
  {
    tmp362 = pow(tmp360, tmp361);
  }
  if(isnan(tmp362) || isinf(tmp362))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp360, tmp361);
  }tmp367 = _pi + 0.06610000000000001;
  tmp368 = real_array_get(_I, 1, ((modelica_integer) 27));
  if(tmp367 < 0.0 && tmp368 != 0.0)
  {
    tmp370 = modf(tmp368, &tmp371);
    
    if(tmp370 > 0.5)
    {
      tmp370 -= 1.0;
      tmp371 += 1.0;
    }
    else if(tmp370 < -0.5)
    {
      tmp370 += 1.0;
      tmp371 -= 1.0;
    }
    
    if(fabs(tmp370) < 1e-10)
      tmp369 = pow(tmp367, tmp371);
    else
    {
      tmp373 = modf(1.0/tmp368, &tmp372);
      if(tmp373 > 0.5)
      {
        tmp373 -= 1.0;
        tmp372 += 1.0;
      }
      else if(tmp373 < -0.5)
      {
        tmp373 += 1.0;
        tmp372 -= 1.0;
      }
      if(fabs(tmp373) < 1e-10 && ((unsigned long)tmp372 & 1))
      {
        tmp369 = -pow(-tmp367, tmp370)*pow(tmp367, tmp371);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
      }
    }
  }
  else
  {
    tmp369 = pow(tmp367, tmp368);
  }
  if(isnan(tmp369) || isinf(tmp369))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp367, tmp368);
  }tmp374 = _eta - 0.72;
  tmp375 = real_array_get(_J, 1, ((modelica_integer) 27));
  if(tmp374 < 0.0 && tmp375 != 0.0)
  {
    tmp377 = modf(tmp375, &tmp378);
    
    if(tmp377 > 0.5)
    {
      tmp377 -= 1.0;
      tmp378 += 1.0;
    }
    else if(tmp377 < -0.5)
    {
      tmp377 += 1.0;
      tmp378 -= 1.0;
    }
    
    if(fabs(tmp377) < 1e-10)
      tmp376 = pow(tmp374, tmp378);
    else
    {
      tmp380 = modf(1.0/tmp375, &tmp379);
      if(tmp380 > 0.5)
      {
        tmp380 -= 1.0;
        tmp379 += 1.0;
      }
      else if(tmp380 < -0.5)
      {
        tmp380 += 1.0;
        tmp379 -= 1.0;
      }
      if(fabs(tmp380) < 1e-10 && ((unsigned long)tmp379 & 1))
      {
        tmp376 = -pow(-tmp374, tmp377)*pow(tmp374, tmp378);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
      }
    }
  }
  else
  {
    tmp376 = pow(tmp374, tmp375);
  }
  if(isnan(tmp376) || isinf(tmp376))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp374, tmp375);
  }tmp381 = _pi + 0.06610000000000001;
  tmp382 = real_array_get(_I, 1, ((modelica_integer) 28));
  if(tmp381 < 0.0 && tmp382 != 0.0)
  {
    tmp384 = modf(tmp382, &tmp385);
    
    if(tmp384 > 0.5)
    {
      tmp384 -= 1.0;
      tmp385 += 1.0;
    }
    else if(tmp384 < -0.5)
    {
      tmp384 += 1.0;
      tmp385 -= 1.0;
    }
    
    if(fabs(tmp384) < 1e-10)
      tmp383 = pow(tmp381, tmp385);
    else
    {
      tmp387 = modf(1.0/tmp382, &tmp386);
      if(tmp387 > 0.5)
      {
        tmp387 -= 1.0;
        tmp386 += 1.0;
      }
      else if(tmp387 < -0.5)
      {
        tmp387 += 1.0;
        tmp386 -= 1.0;
      }
      if(fabs(tmp387) < 1e-10 && ((unsigned long)tmp386 & 1))
      {
        tmp383 = -pow(-tmp381, tmp384)*pow(tmp381, tmp385);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
      }
    }
  }
  else
  {
    tmp383 = pow(tmp381, tmp382);
  }
  if(isnan(tmp383) || isinf(tmp383))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp381, tmp382);
  }tmp388 = _eta - 0.72;
  tmp389 = real_array_get(_J, 1, ((modelica_integer) 28));
  if(tmp388 < 0.0 && tmp389 != 0.0)
  {
    tmp391 = modf(tmp389, &tmp392);
    
    if(tmp391 > 0.5)
    {
      tmp391 -= 1.0;
      tmp392 += 1.0;
    }
    else if(tmp391 < -0.5)
    {
      tmp391 += 1.0;
      tmp392 -= 1.0;
    }
    
    if(fabs(tmp391) < 1e-10)
      tmp390 = pow(tmp388, tmp392);
    else
    {
      tmp394 = modf(1.0/tmp389, &tmp393);
      if(tmp394 > 0.5)
      {
        tmp394 -= 1.0;
        tmp393 += 1.0;
      }
      else if(tmp394 < -0.5)
      {
        tmp394 += 1.0;
        tmp393 -= 1.0;
      }
      if(fabs(tmp394) < 1e-10 && ((unsigned long)tmp393 & 1))
      {
        tmp390 = -pow(-tmp388, tmp391)*pow(tmp388, tmp392);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
      }
    }
  }
  else
  {
    tmp390 = pow(tmp388, tmp389);
  }
  if(isnan(tmp390) || isinf(tmp390))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp388, tmp389);
  }tmp395 = _pi + 0.06610000000000001;
  tmp396 = real_array_get(_I, 1, ((modelica_integer) 29));
  if(tmp395 < 0.0 && tmp396 != 0.0)
  {
    tmp398 = modf(tmp396, &tmp399);
    
    if(tmp398 > 0.5)
    {
      tmp398 -= 1.0;
      tmp399 += 1.0;
    }
    else if(tmp398 < -0.5)
    {
      tmp398 += 1.0;
      tmp399 -= 1.0;
    }
    
    if(fabs(tmp398) < 1e-10)
      tmp397 = pow(tmp395, tmp399);
    else
    {
      tmp401 = modf(1.0/tmp396, &tmp400);
      if(tmp401 > 0.5)
      {
        tmp401 -= 1.0;
        tmp400 += 1.0;
      }
      else if(tmp401 < -0.5)
      {
        tmp401 += 1.0;
        tmp400 -= 1.0;
      }
      if(fabs(tmp401) < 1e-10 && ((unsigned long)tmp400 & 1))
      {
        tmp397 = -pow(-tmp395, tmp398)*pow(tmp395, tmp399);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
      }
    }
  }
  else
  {
    tmp397 = pow(tmp395, tmp396);
  }
  if(isnan(tmp397) || isinf(tmp397))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp395, tmp396);
  }tmp402 = _eta - 0.72;
  tmp403 = real_array_get(_J, 1, ((modelica_integer) 29));
  if(tmp402 < 0.0 && tmp403 != 0.0)
  {
    tmp405 = modf(tmp403, &tmp406);
    
    if(tmp405 > 0.5)
    {
      tmp405 -= 1.0;
      tmp406 += 1.0;
    }
    else if(tmp405 < -0.5)
    {
      tmp405 += 1.0;
      tmp406 -= 1.0;
    }
    
    if(fabs(tmp405) < 1e-10)
      tmp404 = pow(tmp402, tmp406);
    else
    {
      tmp408 = modf(1.0/tmp403, &tmp407);
      if(tmp408 > 0.5)
      {
        tmp408 -= 1.0;
        tmp407 += 1.0;
      }
      else if(tmp408 < -0.5)
      {
        tmp408 += 1.0;
        tmp407 -= 1.0;
      }
      if(fabs(tmp408) < 1e-10 && ((unsigned long)tmp407 & 1))
      {
        tmp404 = -pow(-tmp402, tmp405)*pow(tmp402, tmp406);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
      }
    }
  }
  else
  {
    tmp404 = pow(tmp402, tmp403);
  }
  if(isnan(tmp404) || isinf(tmp404))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp402, tmp403);
  }tmp409 = _pi + 0.06610000000000001;
  tmp410 = real_array_get(_I, 1, ((modelica_integer) 30));
  if(tmp409 < 0.0 && tmp410 != 0.0)
  {
    tmp412 = modf(tmp410, &tmp413);
    
    if(tmp412 > 0.5)
    {
      tmp412 -= 1.0;
      tmp413 += 1.0;
    }
    else if(tmp412 < -0.5)
    {
      tmp412 += 1.0;
      tmp413 -= 1.0;
    }
    
    if(fabs(tmp412) < 1e-10)
      tmp411 = pow(tmp409, tmp413);
    else
    {
      tmp415 = modf(1.0/tmp410, &tmp414);
      if(tmp415 > 0.5)
      {
        tmp415 -= 1.0;
        tmp414 += 1.0;
      }
      else if(tmp415 < -0.5)
      {
        tmp415 += 1.0;
        tmp414 -= 1.0;
      }
      if(fabs(tmp415) < 1e-10 && ((unsigned long)tmp414 & 1))
      {
        tmp411 = -pow(-tmp409, tmp412)*pow(tmp409, tmp413);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
      }
    }
  }
  else
  {
    tmp411 = pow(tmp409, tmp410);
  }
  if(isnan(tmp411) || isinf(tmp411))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp409, tmp410);
  }tmp416 = _eta - 0.72;
  tmp417 = real_array_get(_J, 1, ((modelica_integer) 30));
  if(tmp416 < 0.0 && tmp417 != 0.0)
  {
    tmp419 = modf(tmp417, &tmp420);
    
    if(tmp419 > 0.5)
    {
      tmp419 -= 1.0;
      tmp420 += 1.0;
    }
    else if(tmp419 < -0.5)
    {
      tmp419 += 1.0;
      tmp420 -= 1.0;
    }
    
    if(fabs(tmp419) < 1e-10)
      tmp418 = pow(tmp416, tmp420);
    else
    {
      tmp422 = modf(1.0/tmp417, &tmp421);
      if(tmp422 > 0.5)
      {
        tmp422 -= 1.0;
        tmp421 += 1.0;
      }
      else if(tmp422 < -0.5)
      {
        tmp422 += 1.0;
        tmp421 -= 1.0;
      }
      if(fabs(tmp422) < 1e-10 && ((unsigned long)tmp421 & 1))
      {
        tmp418 = -pow(-tmp416, tmp419)*pow(tmp416, tmp420);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
      }
    }
  }
  else
  {
    tmp418 = pow(tmp416, tmp417);
  }
  if(isnan(tmp418) || isinf(tmp418))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp416, tmp417);
  }
  _v = (((real_array_get(_n, 1, ((modelica_integer) 1))) * (tmp5)) * (tmp12) + ((real_array_get(_n, 1, ((modelica_integer) 2))) * (tmp19)) * (tmp26) + ((real_array_get(_n, 1, ((modelica_integer) 3))) * (tmp33)) * (tmp40) + ((real_array_get(_n, 1, ((modelica_integer) 4))) * (tmp47)) * (tmp54) + ((real_array_get(_n, 1, ((modelica_integer) 5))) * (tmp61)) * (tmp68) + ((real_array_get(_n, 1, ((modelica_integer) 6))) * (tmp75)) * (tmp82) + ((real_array_get(_n, 1, ((modelica_integer) 7))) * (tmp89)) * (tmp96) + ((real_array_get(_n, 1, ((modelica_integer) 8))) * (tmp103)) * (tmp110) + ((real_array_get(_n, 1, ((modelica_integer) 9))) * (tmp117)) * (tmp124) + ((real_array_get(_n, 1, ((modelica_integer) 10))) * (tmp131)) * (tmp138) + ((real_array_get(_n, 1, ((modelica_integer) 11))) * (tmp145)) * (tmp152) + ((real_array_get(_n, 1, ((modelica_integer) 12))) * (tmp159)) * (tmp166) + ((real_array_get(_n, 1, ((modelica_integer) 13))) * (tmp173)) * (tmp180) + ((real_array_get(_n, 1, ((modelica_integer) 14))) * (tmp187)) * (tmp194) + ((real_array_get(_n, 1, ((modelica_integer) 15))) * (tmp201)) * (tmp208) + ((real_array_get(_n, 1, ((modelica_integer) 16))) * (tmp215)) * (tmp222) + ((real_array_get(_n, 1, ((modelica_integer) 17))) * (tmp229)) * (tmp236) + ((real_array_get(_n, 1, ((modelica_integer) 18))) * (tmp243)) * (tmp250) + ((real_array_get(_n, 1, ((modelica_integer) 19))) * (tmp257)) * (tmp264) + ((real_array_get(_n, 1, ((modelica_integer) 20))) * (tmp271)) * (tmp278) + ((real_array_get(_n, 1, ((modelica_integer) 21))) * (tmp285)) * (tmp292) + ((real_array_get(_n, 1, ((modelica_integer) 22))) * (tmp299)) * (tmp306) + ((real_array_get(_n, 1, ((modelica_integer) 23))) * (tmp313)) * (tmp320) + ((real_array_get(_n, 1, ((modelica_integer) 24))) * (tmp327)) * (tmp334) + ((real_array_get(_n, 1, ((modelica_integer) 25))) * (tmp341)) * (tmp348) + ((real_array_get(_n, 1, ((modelica_integer) 26))) * (tmp355)) * (tmp362) + ((real_array_get(_n, 1, ((modelica_integer) 27))) * (tmp369)) * (tmp376) + ((real_array_get(_n, 1, ((modelica_integer) 28))) * (tmp383)) * (tmp390) + ((real_array_get(_n, 1, ((modelica_integer) 29))) * (tmp397)) * (tmp404) + ((real_array_get(_n, 1, ((modelica_integer) 30))) * (tmp411)) * (tmp418)) * (_vstar);
  _return: OMC_LABEL_UNUSED
  return _v;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _v;
  modelica_metatype out_v;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _v = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData, tmp1, tmp2);
  out_v = mmc_mk_rcon(_v);
  return out_v;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_real _p)
{
  modelica_real _d;
  modelica_real _p2;
  real_array _o;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p2 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)3); // _o has no default value.
  _p2 = 7.1 - ((6.049606775559591e-08) * (_p));

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_p2) * (_p2);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  tmp1 = 0.0737412153522555 + (_p2) * (0.00145092247736023 + (_p2) * (0.000102697173772229 + (_p2) * (1.14683182476084e-05 + (_p2) * (1.99080616601101e-06 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (_p2)) * (1.13217858826367e-08 + (((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_p2)) * (1.35549330686006e-17 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-3.11228834832975e-19 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (-7.02987180039442e-22 + (_p2) * (3.29199117056433e-22 + (-5.17859076694812e-23 + (2.73712834080283e-24) * (_p2)) * (_p2))))))))));
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "57.4756752485113 / (0.0737412153522555 + p2 * (0.00145092247736023 + p2 * (0.000102697173772229 + p2 * (1.14683182476084e-05 + p2 * (1.99080616601101e-06 + o[1] * p2 * (1.13217858826367e-08 + o[2] * o[3] * p2 * (1.35549330686006e-17 + o[1] * (-3.11228834832975e-19 + o[1] * o[2] * (-7.02987180039442e-22 + p2 * (3.29199117056433e-22 + (-5.17859076694812e-23 + 2.73712834080283e-24 * p2) * p2))))))))))");}
  _d = (57.4756752485113) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_real _p)
{
  modelica_real _d;
  modelica_real _T;
  real_array _o;
  modelica_real _taug;
  modelica_real _pi;
  modelica_real _gpi23;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _T has no default value.
  alloc_real_array(&(_o), 1, (_index_t)13); // _o has no default value.
  // _taug has no default value.
  // _pi has no default value.
  // _gpi23 has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  tmp2 = -13.91883977887 + _pi;
  if(!(tmp2 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13.91883977887 + pi) was %g should be >= 0", tmp2);
  }
  _T = 572.54459862746 + (31.3220101646784) * (sqrt(tmp2));

  tmp3 = -13.91883977887 + _pi;
  if(!(tmp3 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13.91883977887 + pi) was %g should be >= 0", tmp3);
  }
  real_array_get(_o, 1, ((modelica_integer) 1)) = sqrt(tmp3);

  tmp4 = 572.54459862746 + (31.3220101646784) * (real_array_get(_o, 1, ((modelica_integer) 1)));
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "540.0 / (572.54459862746 + 31.3220101646784 * o[1])");}
  _taug = -0.5 + (540.0) / tmp4;

  real_array_get(_o, 1, ((modelica_integer) 2)) = (_taug) * (_taug);

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (_taug);

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (((real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_taug);

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_taug);

  real_array_get(_o, 1, ((modelica_integer) 9)) = ((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (_pi) * (_pi);

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 10)));

  real_array_get(_o, 1, ((modelica_integer) 12)) = ((real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_taug);

  real_array_get(_o, 1, ((modelica_integer) 13)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  tmp5 = _pi;
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.0 + pi * (-0.0017731742473213 + taug * (-0.017834862292358 + taug * (-0.045996013696365 + (-0.057581259083432 - 0.05032527872793 * o[3]) * taug)) + pi * (taug * (-6.6065283340406e-05 + (-0.0003789797503263 + o[2] * (-0.007878555448671 + o[3] * (-0.087594591301146 - 5.3349095828174e-05 * o[7]))) * taug) + pi * (6.1445213076927e-08 + (1.31612001853305e-06 + o[2] * (-9.683303171571e-05 + o[3] * (-0.0045101773626444 - 0.122004760687947 * o[7]))) * taug + pi * (taug * (-3.15389238237468e-09 + (5.116287140914e-08 + 1.92901490874028e-06 * taug) * taug) + pi * (1.14610381688305e-05 * o[2] * o[4] * taug + pi * (o[3] * (-1.00288598706366e-10 + o[8] * (-0.012702883392813 - 143.374451604624 * o[2] * o[6] * taug)) + pi * (-4.1341695026989e-17 + o[2] * o[5] * (-8.8352662293707e-06 - 0.272627897050173 * o[9]) * taug + pi * (o[5] * (9.0049690883672e-11 - 65.8490727183984 * o[4] * o[5] * o[6]) + pi * (1.78287415218792e-07 * o[8] + pi * (o[4] * (1.0406965210174e-18 + o[2] * (-1.0234747095929e-12 - 1.0018179379511e-08 * o[4]) * o[4]) + o[10] * o[11] * ((-1.29412653835176e-09 + 1.71088510070544 * o[12]) * o[7] + o[10] * ((-6.05920510335078 * o[13] * o[5] * o[6] * taug) + o[10] * (o[4] * o[6] * (1.78371690710842e-23 + o[2] * o[4] * o[5] * (6.1258633752464e-12 - 8.4004935396416e-05 * o[8]) * taug) + pi * ((-1.24017662339842e-24 * o[12]) + pi * (8.32192847496054e-05 * o[13] * o[4] * o[6] * taug + pi * (o[2] * o[5] * o[6] * (1.75410265428146e-27 + (1.32995316841867e-15 - 2.26487297378904e-05 * o[2] * o[6]) * o[9]) * pi - 2.93678005497663e-14 * o[13] * o[2] * o[4] * taug))))))))))))))))) / pi");}
  _gpi23 = (1.0 + (_pi) * (-0.0017731742473213 + (_taug) * (-0.017834862292358 + (_taug) * (-0.045996013696365 + (-0.057581259083432 - ((0.05032527872793) * (real_array_get(_o, 1, ((modelica_integer) 3))))) * (_taug))) + (_pi) * ((_taug) * (-6.6065283340406e-05 + (-0.0003789797503263 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-0.007878555448671 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (-0.087594591301146 - ((5.3349095828174e-05) * (real_array_get(_o, 1, ((modelica_integer) 7))))))) * (_taug)) + (_pi) * (6.1445213076927e-08 + (1.31612001853305e-06 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-9.683303171571e-05 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (-0.0045101773626444 - ((0.122004760687947) * (real_array_get(_o, 1, ((modelica_integer) 7))))))) * (_taug) + (_pi) * ((_taug) * (-3.15389238237468e-09 + (5.116287140914e-08 + (1.92901490874028e-06) * (_taug)) * (_taug)) + (_pi) * ((((1.14610381688305e-05) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (_taug) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 3))) * (-1.00288598706366e-10 + (real_array_get(_o, 1, ((modelica_integer) 8))) * (-0.012702883392813 - ((((143.374451604624) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_taug)))) + (_pi) * (-4.1341695026989e-17 + (((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (-8.8352662293707e-06 - ((0.272627897050173) * (real_array_get(_o, 1, ((modelica_integer) 9)))))) * (_taug) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 5))) * (9.0049690883672e-11 - ((((65.8490727183984) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6))))) + (_pi) * ((1.78287415218792e-07) * (real_array_get(_o, 1, ((modelica_integer) 8))) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 4))) * (1.0406965210174e-18 + ((real_array_get(_o, 1, ((modelica_integer) 2))) * (-1.0234747095929e-12 - ((1.0018179379511e-08) * (real_array_get(_o, 1, ((modelica_integer) 4)))))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) + ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * ((-1.29412653835176e-09 + (1.71088510070544) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 7))) + (real_array_get(_o, 1, ((modelica_integer) 10))) * ((-(((((6.05920510335078) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_taug))) + (real_array_get(_o, 1, ((modelica_integer) 10))) * (((real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (1.78371690710842e-23 + ((((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (6.1258633752464e-12 - ((8.4004935396416e-05) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) * (_taug)) + (_pi) * ((-((1.24017662339842e-24) * (real_array_get(_o, 1, ((modelica_integer) 12))))) + (_pi) * (((((8.32192847496054e-05) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_taug) + (_pi) * (((((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (1.75410265428146e-27 + (1.32995316841867e-15 - (((2.26487297378904e-05) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 6))))) * (real_array_get(_o, 1, ((modelica_integer) 9))))) * (_pi) - (((((2.93678005497663e-14) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (_taug))))))))))))))))))) / tmp5;

  tmp6 = (((461.526) * (_T)) * (_pi)) * (_gpi23);
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (461.526 * T * pi * gpi23)");}
  _d = (_p) / tmp6;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_real _delp, modelica_integer *out_error)
{
  modelica_real _d;
  modelica_integer _error;
  modelica_real _dguess;
  modelica_integer _i;
  modelica_real _dp;
  modelica_real _deld;
  Modelica_Media_Common_HelmholtzDerivs _f;
  Modelica_Media_Common_NewtonDerivatives__pT _nDerivs;
  modelica_boolean _found;
  modelica_boolean _supercritical;
  modelica_boolean _liquid;
  modelica_real _dmin;
  modelica_real _dmax;
  modelica_real _Tmax;
  modelica_real _damping;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta17;
  modelica_string tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_string tmp21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  static int tmp24 = 0;
  modelica_real tmp25;
  Modelica_Media_Common_HelmholtzDerivs tmp26;
  Modelica_Media_Common_NewtonDerivatives__pT tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  static int tmp30 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _error = ((modelica_integer) 0);
  // _dguess has no default value.
  _i = ((modelica_integer) 0);
  // _dp has no default value.
  // _deld has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  Modelica_Media_Common_NewtonDerivatives__pT_construct(threadData, _nDerivs); // _nDerivs has no default value.
  _found = 0;
  // _supercritical has no default value.
  // _liquid has no default value.
  // _dmin has no default value.
  // _dmax has no default value.
  // _Tmax has no default value.
  // _damping has no default value.
  _found = 0;

  {
    if(!(_p >= 16529200.0))
    {
      tmpMeta1 = stringAppend(_OMC_LIT93,_OMC_LIT58);
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta3 = stringAppend(tmpMeta1,tmp2);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT94);
      tmp5 = modelica_real_to_modelica_string(16529200.0, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta6 = stringAppend(tmpMeta4,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT95);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",4991,9,4993,76,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta7));
      }
    }
  }

  {
    if(!(_T >= 623.15))
    {
      tmpMeta9 = stringAppend(_OMC_LIT96,_OMC_LIT97);
      tmp10 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta11 = stringAppend(tmpMeta9,tmp10);
      tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT98);
      tmp13 = modelica_real_to_modelica_string(623.15, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta14 = stringAppend(tmpMeta12,tmp13);
      tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT99);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",4994,9,4996,73,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta15));
      }
    }
  }

  {
    if(!(_p >= omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData, _T)))
    {
      tmpMeta17 = stringAppend(_OMC_LIT100,_OMC_LIT58);
      tmp18 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta19 = stringAppend(tmpMeta17,tmp18);
      tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT101);
      tmp21 = modelica_real_to_modelica_string(_T, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta22 = stringAppend(tmpMeta20,tmp21);
      tmpMeta23 = stringAppend(tmpMeta22,_OMC_LIT99);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",4997,9,4999,66,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta23));
      }
    }
  }

  _supercritical = (_p > 22064000.0);

  _damping = 1.0;

  _Tmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData, _p);

  if(_supercritical)
  {
    _dmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData, _p);

    _dmin = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData, _p);

    tmp25 = 623.15 - _Tmax;
    if (tmp25 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(T - 623.15) / (623.15 - Tmax)");}
    _dguess = _dmax - (((_T - 623.15) / tmp25) * (_dmax - _dmin));
  }
  else
  {
    _liquid = (_T < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p));

    if(_liquid)
    {
      _dmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13(threadData, _p);

      _dmin = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _p);

      _dguess = (1.1) * (omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData, _T));
    }
    else
    {
      _dmax = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _p);

      _dmin = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23(threadData, _p);

      _dguess = (0.9) * (omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData, _T));
    }
  }

  while(1)
  {
    if(!((_i < ((modelica_integer) 50)) && (!_found))) break;
    _d = _dguess;

    tmp26 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d, _T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp26, _f);;

    tmp27 = omc_Modelica_Media_Common_Helmholtz__pT(threadData, _f);
    Modelica_Media_Common_NewtonDerivatives__pT_copy(tmp27, _nDerivs);;

    _dp = _nDerivs._p - _p;

    tmp28 = _p;
    if (tmp28 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dp / p");}
    if((fabs((_dp) / tmp28) <= _delp))
    {
      _found = 1;
    }

    tmp29 = _nDerivs._pd;
    if (tmp29 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dp / nDerivs.pd");}
    _deld = ((_dp) / tmp29) * (_damping);

    _d = _d - _deld;

    if(((_d > _dmin) && (_d < _dmax)))
    {
      _dguess = _d;
    }
    else
    {
      if((_d > _dmax))
      {
        _dguess = _dmax - sqrt(1e-15);
      }
      else
      {
        _dguess = _dmin + sqrt(1e-15);
      }
    }

    _i = _i + ((modelica_integer) 1);
  }

  if((!_found))
  {
    _error = ((modelica_integer) 1);
  }

  {
    if(!(_error != ((modelica_integer) 1)))
    {
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",5050,9,5050,81,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT102));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_error) { *out_error = _error; }
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _delp, modelica_metatype *out_error)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _error;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_real(_delp);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3(threadData, tmp1, tmp2, tmp3, &_error);
  out_d = mmc_mk_rcon(_d);
  if (out_error) { *out_error = mmc_mk_icon(_error); }
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _delp, modelica_real _delh, modelica_real *out_T, modelica_integer *out_error)
{
  modelica_real _d;
  modelica_real _T;
  modelica_integer _error;
  modelica_real _Tguess;
  modelica_real _dguess;
  modelica_integer _i;
  modelica_real _dh;
  modelica_real _dp;
  modelica_real _det;
  modelica_real _deld;
  modelica_real _delt;
  Modelica_Media_Common_HelmholtzDerivs _f;
  Modelica_Media_Common_NewtonDerivatives__ph _nDerivs;
  modelica_boolean _found;
  modelica_integer _subregion;
  static int tmp1 = 0;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  Modelica_Media_Common_HelmholtzDerivs tmp6;
  Modelica_Media_Common_NewtonDerivatives__ph tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  static int tmp12 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _T has no default value.
  // _error has no default value.
  // _Tguess has no default value.
  // _dguess has no default value.
  // _i has no default value.
  // _dh has no default value.
  // _dp has no default value.
  // _det has no default value.
  // _deld has no default value.
  // _delt has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  Modelica_Media_Common_NewtonDerivatives__ph_construct(threadData, _nDerivs); // _nDerivs has no default value.
  _found = 0;
  // _subregion has no default value.
  if((_p < 22064000.0))
  {
    _subregion = ((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData, _p) + 10.0)?((modelica_integer) 1):((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData, _p) - 10.0)?((modelica_integer) 2):((modelica_integer) 0)));

    {
      if(!(_subregion != ((modelica_integer) 0)))
      {
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",5086,11,5087,91,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT103));
        }
      }
    }
  }
  else
  {
    _subregion = ((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p(threadData, _p))?((modelica_integer) 1):((modelica_integer) 2));
  }

  _T = ((_subregion == ((modelica_integer) 1))?omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph(threadData, _p, _h):omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph(threadData, _p, _h));

  tmp4 = (modelica_boolean)(_subregion == ((modelica_integer) 1));
  if(tmp4)
  {
    tmp2 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph(threadData, _p, _h);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.v3a_ph(p, h)");}
    tmp5 = (1.0) / tmp2;
  }
  else
  {
    tmp3 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph(threadData, _p, _h);
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.0 / Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.v3b_ph(p, h)");}
    tmp5 = (1.0) / tmp3;
  }
  _d = tmp5;

  _i = ((modelica_integer) 0);

  _error = ((modelica_integer) 0);

  while(1)
  {
    if(!((_i < ((modelica_integer) 50)) && (!_found))) break;
    tmp6 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _d, _T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp6, _f);;

    tmp7 = omc_Modelica_Media_Common_Helmholtz__ph(threadData, _f);
    Modelica_Media_Common_NewtonDerivatives__ph_copy(tmp7, _nDerivs);;

    _dh = _nDerivs._h - _h;

    _dp = _nDerivs._p - _p;

    tmp8 = _h;
    if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dh / h");}
    tmp9 = _p;
    if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dp / p");}
    if(((fabs((_dh) / tmp8) <= _delh) && (fabs((_dp) / tmp9) <= _delp)))
    {
      _found = 1;
    }

    _det = (_nDerivs._ht) * (_nDerivs._pd) - ((_nDerivs._pt) * (_nDerivs._hd));

    tmp10 = _det;
    if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(nDerivs.pd * dh - nDerivs.hd * dp) / det");}
    _delt = ((_nDerivs._pd) * (_dh) - ((_nDerivs._hd) * (_dp))) / tmp10;

    tmp11 = _det;
    if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(nDerivs.ht * dp - nDerivs.pt * dh) / det");}
    _deld = ((_nDerivs._ht) * (_dp) - ((_nDerivs._pt) * (_dh))) / tmp11;

    _T = _T - _delt;

    _d = _d - _deld;

    _dguess = _d;

    _Tguess = _T;

    _i = _i + ((modelica_integer) 1);

    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData, _dguess, _Tguess ,&_T);
  }

  if((!_found))
  {
    _error = ((modelica_integer) 1);
  }

  {
    if(!(_error != ((modelica_integer) 1)))
    {
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",5118,9,5119,65,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT104));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_T) { *out_T = _T; }
  if (out_error) { *out_error = _error; }
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _delp, modelica_metatype _delh, modelica_metatype *out_T, modelica_metatype *out_error)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _T;
  modelica_integer _error;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_real(_delp);
  tmp4 = mmc_unbox_real(_delh);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3(threadData, tmp1, tmp2, tmp3, tmp4, &_T, &_error);
  out_d = mmc_mk_rcon(_d);
  if (out_T) { *out_T = mmc_mk_rcon(_T); }
  if (out_error) { *out_error = mmc_mk_icon(_error); }
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_real _din, modelica_real _Tin, modelica_real *out_Tout)
{
  modelica_real _dout;
  modelica_real _Tout;
  modelica_real _Tmin;
  modelica_real _Tmax;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dout has no default value.
  // _Tout has no default value.
  // _Tmin has no default value.
  // _Tmax has no default value.
  if((_din > 765.0))
  {
    _dout = 765.0;
  }
  else
  {
    if((_din < 110.0))
    {
      _dout = 110.0;
    }
    else
    {
      _dout = _din;
    }
  }

  if((_dout < 390.0))
  {
    _Tmax = 554.3557377 + (_dout) * (0.809344262);
  }
  else
  {
    _Tmax = 1116.85 - ((_dout) * (0.632948717));
  }

  if((_dout < 322.0))
  {
    tmp1 = 1000000.0;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(dout - 322.0) * (dout - 322.0) / 1000000.0");}
    _Tmin = (647.096) * (1.0 - (((_dout - 322.0) * (_dout - 322.0)) / tmp1));
  }
  else
  {
    tmp2 = 1440000.0;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(dout - 322.0) * (dout - 322.0) / 1440000.0");}
    _Tmin = (647.096) * (1.0 - (((_dout - 322.0) * (_dout - 322.0)) / tmp2));
  }

  if((_Tin < _Tmin))
  {
    _Tout = _Tmin;
  }
  else
  {
    if((_Tin > _Tmax))
    {
      _Tout = _Tmax;
    }
    else
    {
      _Tout = _Tin;
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_Tout) { *out_Tout = _Tout; }
  return _dout;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData_t *threadData, modelica_metatype _din, modelica_metatype _Tin, modelica_metatype *out_Tout)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _Tout;
  modelica_real _dout;
  modelica_metatype out_dout;
  tmp1 = mmc_unbox_real(_din);
  tmp2 = mmc_unbox_real(_Tin);
  _dout = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT(threadData, tmp1, tmp2, &_Tout);
  out_dout = mmc_mk_rcon(_dout);
  if (out_Tout) { *out_Tout = mmc_mk_rcon(_Tout); }
  return out_dout;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_real _reldh, modelica_integer *out_error)
{
  modelica_real _T;
  modelica_integer _error;
  Modelica_Media_Common_GibbsDerivs _g;
  modelica_real _proh;
  modelica_real _Tguess;
  modelica_integer _i;
  modelica_real _relerr;
  modelica_real _dh;
  modelica_real _dT;
  modelica_boolean _found;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  static int tmp4 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  // _error has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  // _proh has no default value.
  _Tguess = 1500.0;
  // _i has no default value.
  // _relerr has no default value.
  // _dh has no default value.
  // _dT has no default value.
  // _found has no default value.
  _i = ((modelica_integer) 0);

  _error = ((modelica_integer) 0);

  _T = _Tguess;

  _found = 0;

  while(1)
  {
    if(!((_i < ((modelica_integer) 50)) && (!_found))) break;
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5(threadData, _p, _T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    _proh = (((461.526) * (_T)) * (_g._tau)) * (_g._gtau);

    _dh = _proh - _h;

    tmp2 = _h;
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dh / h");}
    _relerr = (_dh) / tmp2;

    if((fabs(_relerr) < _reldh))
    {
      _found = 1;
    }

    tmp3 = (-((((461.526) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "dh / (-461.526 * g.tau * g.tau * g.gtautau)");}
    _dT = (_dh) / tmp3;

    _T = _T - _dT;

    _i = _i + ((modelica_integer) 1);
  }

  if((!_found))
  {
    _error = ((modelica_integer) 1);
  }

  {
    if(!(_error != ((modelica_integer) 1)))
    {
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",5349,9,5349,81,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT105));
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_error) { *out_error = _error; }
  return _T;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _reldh, modelica_metatype *out_error)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_integer _error;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_real(_reldh);
  _T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5(threadData, tmp1, tmp2, tmp3, &_error);
  out_T = mmc_mk_rcon(_T);
  if (out_error) { *out_error = mmc_mk_icon(_error); }
  return out_T;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _h;
  real_array _o;
  modelica_real _pi1;
  modelica_real _tau;
  modelica_real _tau1;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_metatype tmpMeta3;
  modelica_string tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  alloc_real_array(&(_o), 1, (_index_t)13); // _o has no default value.
  // _pi1 has no default value.
  // _tau has no default value.
  // _tau1 has no default value.
  tmp1 = _T;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1386.0 / T");}
  _tau = (1386.0) / tmp1;

  tmp2 = 16530000.0;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 16530000.0");}
  _pi1 = 7.1 - ((_p) / tmp2);

  {
    if(!(_p > 611.657))
    {
      tmpMeta3 = stringAppend(_OMC_LIT106,_OMC_LIT58);
      tmp4 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta5 = stringAppend(tmpMeta3,tmp4);
      tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT59);
      tmp7 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta8 = stringAppend(tmpMeta6,tmp7);
      tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",4224,9,4227,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta9));
      }
    }
  }

  _tau1 = -1.222 + _tau;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_tau1) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 8)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (_pi1) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 9))) * (real_array_get(_o, 1, ((modelica_integer) 9)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 10)));

  real_array_get(_o, 1, ((modelica_integer) 12)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 13)) = (real_array_get(_o, 1, ((modelica_integer) 12))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  tmp11 = real_array_get(_o, 1, ((modelica_integer) 5));
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.00254871721114236 + o[1] * (0.00424944110961118 + (0.018990068218419 + (-0.021841717175414 - 0.00015851507390979 * o[1]) * o[1]) * o[6])) / o[5]");}
  tmp12 = real_array_get(_o, 1, ((modelica_integer) 3));
  if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.00141552963219801 + o[3] * (4.7661393906987e-05 + o[1] * (-1.32425535992538e-05 - 1.2358149370591e-14 * o[1] * o[3] * o[4]))) / o[3]");}
  tmp13 = real_array_get(_o, 1, ((modelica_integer) 7));
  if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.000126718579380216 - 5.11230768720618e-09 * o[5]) / o[7]");}
  tmp14 = real_array_get(_o, 1, ((modelica_integer) 6));
  if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.1212640954e-05 + o[2] * (1.30342445791202e-06 - 1.4341729937924e-12 * o[8])) / o[6]");}
  tmp15 = real_array_get(_o, 1, ((modelica_integer) 8));
  if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.40077319158051e-08 + 1.04549227383804e-09 * o[7]) / o[8]");}
  tmp16 = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4)));
  if (tmp16 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.9941018075704e-17 / (o[1] * o[12] * o[3] * o[4])");}
  tmp17 = real_array_get(_o, 1, ((modelica_integer) 13));
  if (tmp17 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "4.48827542684151e-19 / o[13]");}
  tmp18 = (real_array_get(_o, 1, ((modelica_integer) 13))) * (real_array_get(_o, 1, ((modelica_integer) 4)));
  if (tmp18 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "4.65957282962769e-22 / (o[13] * o[4])");}
  tmp19 = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 4)));
  if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.83502057899078e-24 * pi1 / (o[1] * o[13] * o[4])");}
  tmp20 = ((real_array_get(_o, 1, ((modelica_integer) 13))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (_tau1);
  if (tmp20 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "7.2912378325616e-23 / (o[13] * o[4] * tau1)");}
  tmp21 = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp21 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.00075970318621e-21 / (o[1] * o[13] * o[3] * tau1)");}
  tmp22 = (real_array_get(_o, 1, ((modelica_integer) 4))) * (_tau1);
  if (tmp22 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.24135974880936e-06 / (o[4] * tau1)");}
  tmp23 = real_array_get(_o, 1, ((modelica_integer) 2));
  if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.29265942426334 + tau1 * (0.84548187169114 + o[1] * (3.3855169168385 + tau1 * (-1.91583926775744 + tau1 * (0.47316115539684 + (-0.066465668798004 + 0.0040607314991784 * tau1) * tau1))))) / o[2]");}
  _h = (((461.526) * (_T)) * (_tau)) * ((_pi1) * ((-0.00254871721114236 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.00424944110961118 + (0.018990068218419 + (-0.021841717175414 - ((0.00015851507390979) * (real_array_get(_o, 1, ((modelica_integer) 1))))) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 6))))) / tmp11 + (_pi1) * ((0.00141552963219801 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (4.7661393906987e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.32425535992538e-05 - ((((1.2358149370591e-14) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4))))))) / tmp12 + (_pi1) * ((0.000126718579380216 - ((5.11230768720618e-09) * (real_array_get(_o, 1, ((modelica_integer) 5))))) / tmp13 + (_pi1) * ((1.1212640954e-05 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (1.30342445791202e-06 - ((1.4341729937924e-12) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) / tmp14 + (_pi1) * (((real_array_get(_o, 1, ((modelica_integer) 9))) * (_pi1)) * ((1.40077319158051e-08 + (1.04549227383804e-09) * (real_array_get(_o, 1, ((modelica_integer) 7)))) / tmp15 + (((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (_pi1)) * ((1.9941018075704e-17) / tmp16 + (real_array_get(_o, 1, ((modelica_integer) 9))) * ((-((4.48827542684151e-19) / tmp17)) + ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) * ((_pi1) * ((4.65957282962769e-22) / tmp18 + (_pi1) * (((3.83502057899078e-24) * (_pi1)) / tmp19 - ((7.2912378325616e-23) / tmp20))) - ((1.00075970318621e-21) / tmp21))))) + (3.24135974880936e-06) / tmp22))))) + (-0.29265942426334 + (_tau1) * (0.84548187169114 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (3.3855169168385 + (_tau1) * (-1.91583926775744 + (_tau1) * (0.47316115539684 + (-0.066465668798004 + (0.0040607314991784) * (_tau1)) * (_tau1)))))) / tmp23);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData, tmp1, tmp2);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _h;
  real_array _o;
  modelica_real _pi;
  modelica_real _tau;
  modelica_real _tau2;
  modelica_metatype tmpMeta1;
  modelica_string tmp2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_string tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  static int tmp8 = 0;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  alloc_real_array(&(_o), 1, (_index_t)16); // _o has no default value.
  // _pi has no default value.
  // _tau has no default value.
  // _tau2 has no default value.
  {
    if(!(_p > 611.657))
    {
      tmpMeta1 = stringAppend(_OMC_LIT107,_OMC_LIT58);
      tmp2 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta3 = stringAppend(tmpMeta1,tmp2);
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT59);
      tmp5 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta6 = stringAppend(tmpMeta4,tmp5);
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",4377,9,4380,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta7));
      }
    }
  }

  tmp9 = 1000000.0;
  if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp9;

  tmp10 = _T;
  if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "540.0 / T");}
  _tau = (540.0) / tmp10;

  _tau2 = -0.5 + _tau;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_tau) * (_tau);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (_tau2) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = (((real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 9)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = ((real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 11)) = ((real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 12)) = ((real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 13)) = ((real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)));

  real_array_get(_o, 1, ((modelica_integer) 14)) = (_pi) * (_pi);

  real_array_get(_o, 1, ((modelica_integer) 15)) = (real_array_get(_o, 1, ((modelica_integer) 14))) * (real_array_get(_o, 1, ((modelica_integer) 14)));

  real_array_get(_o, 1, ((modelica_integer) 16)) = (real_array_get(_o, 1, ((modelica_integer) 7))) * (real_array_get(_o, 1, ((modelica_integer) 7)));

  tmp11 = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)));
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.0280439559151 + tau * (-0.2858109552582 + tau * (1.2213149471784 + tau * (-2.848163942888 + tau * (4.38395111945 + o[1] * (10.08665568018 + (-0.5681726521544 + 0.06380539059921 * tau) * tau)))))) / (o[1] * o[2])");}
  _h = (((461.526) * (_T)) * (_tau)) * ((0.0280439559151 + (_tau) * (-0.2858109552582 + (_tau) * (1.2213149471784 + (_tau) * (-2.848163942888 + (_tau) * (4.38395111945 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (10.08665568018 + (-0.5681726521544 + (0.06380539059921) * (_tau)) * (_tau))))))) / tmp11 + (_pi) * (-0.017834862292358 + (_tau2) * (-0.09199202739273001 + (-0.172743777250296 - ((0.30195167236758) * (real_array_get(_o, 1, ((modelica_integer) 4))))) * (_tau2)) + (_pi) * (-3.3032641670203e-05 + (-0.0003789797503263 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (-0.015757110897342 + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-0.306581069554011 - ((0.000960283724907132) * (real_array_get(_o, 1, ((modelica_integer) 8))))))) * (_tau2) + (_pi) * (4.3870667284435e-07 + (real_array_get(_o, 1, ((modelica_integer) 3))) * (-9.683303171571e-05 + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-0.009020354725288801 - ((1.42338887469272) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) + (_pi) * (-7.8847309559367e-10 + (2.558143570457e-08 + (1.44676118155521e-06) * (_tau2)) * (_tau2) + (_pi) * ((1.60454534363627e-05) * (real_array_get(_o, 1, ((modelica_integer) 9))) + (_pi) * ((-5.0144299353183e-11 + (real_array_get(_o, 1, ((modelica_integer) 10))) * (-0.033874355714168 - ((836.35096769364) * (real_array_get(_o, 1, ((modelica_integer) 11)))))) * (real_array_get(_o, 1, ((modelica_integer) 3))) + (_pi) * (((-1.38839897890111e-05 - ((0.973671060893475) * (real_array_get(_o, 1, ((modelica_integer) 12))))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 6))) + (_pi) * ((((9.0049690883672e-11 - ((296.320827232793) * (real_array_get(_o, 1, ((modelica_integer) 13))))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_tau2) + (_pi) * (((2.57526266427144e-07) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6))) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 4))) * (4.1627860840696e-19 + (-1.0234747095929e-12 - ((1.40254511313154e-08) * (real_array_get(_o, 1, ((modelica_integer) 5))))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) + ((real_array_get(_o, 1, ((modelica_integer) 14))) * (real_array_get(_o, 1, ((modelica_integer) 15)))) * ((real_array_get(_o, 1, ((modelica_integer) 13))) * (-2.34560435076256e-09 + (((5.3465159397045) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_tau2)) + (real_array_get(_o, 1, ((modelica_integer) 14))) * ((-((((19.1874828272775) * (real_array_get(_o, 1, ((modelica_integer) 16)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7))))) + (real_array_get(_o, 1, ((modelica_integer) 14))) * ((real_array_get(_o, 1, ((modelica_integer) 11))) * (1.78371690710842e-23 + ((((1.07202609066812e-11 - ((0.000201611844951398) * (real_array_get(_o, 1, ((modelica_integer) 10))))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_tau2)) + (_pi) * ((-(((1.24017662339842e-24) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 7))))) + (_pi) * ((((0.000200482822351322) * (real_array_get(_o, 1, ((modelica_integer) 16)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 7))) + (_pi) * ((-((((4.97975748452559e-14) * (real_array_get(_o, 1, ((modelica_integer) 16)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + ((((real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (1.90027787547159e-27 + (real_array_get(_o, 1, ((modelica_integer) 12))) * (2.21658861403112e-15 - (((5.47344301999018e-05) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 7))))))) * (_pi)) * (_tau2))))))))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData, tmp1, tmp2);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_real _p)
{
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_real _plim;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  Modelica_Media_Common_HelmholtzDerivs tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97PhaseBoundaryProperties_construct(threadData, _bpro); // _bpro has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  _plim = fmin(_p,22063999.9999999);
  _bpro._R_s = 461.526;

  _bpro._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _plim);

  _bpro._dpT = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, _bpro._T);

  _bpro._region3boundary = (_bpro._T > 623.15);

  if((!_bpro._region3boundary))
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1(threadData, _p, _bpro._T);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    tmp2 = (((_bpro._R_s) * (_bpro._T)) * (_g._pi)) * (_g._gpi);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (bpro.R_s * bpro.T * g.pi * g.gpi)");}
    _bpro._d = (_p) / tmp2;

    _bpro._h = ((_p > _plim)?2087546.84511715:(((_bpro._R_s) * (_bpro._T)) * (_g._tau)) * (_g._gtau));

    _bpro._s = (_g._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    _bpro._cp = (-((((_bpro._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

    tmp3 = _p;
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "bpro.R_s / p");}
    _bpro._vt = ((_bpro._R_s) / tmp3) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

    tmp4 = (_p) * (_p);
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "bpro.R_s * bpro.T / (p * p)");}
    _bpro._vp = (((((_bpro._R_s) * (_bpro._T)) / tmp4) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

    tmp5 = _bpro._T;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / bpro.T");}
    tmp6 = (_g._gpipi) * (_g._pi);
    if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / bpro.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
    _bpro._pt = (-((((_p) / tmp5) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp6));

    tmp7 = _g._gpipi;
    if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "bpro.R_s * bpro.T * g.gpi * g.gpi / g.gpipi");}
    _bpro._pd = (-(((((_bpro._R_s) * (_bpro._T)) * (_g._gpi)) * (_g._gpi)) / tmp7));
  }
  else
  {
    _bpro._d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _plim);

    tmp8 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _bpro._d, _bpro._T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp8, _f);;

    _bpro._h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData, _plim);

    _bpro._s = (_f._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

    _bpro._cv = (_bpro._R_s) * ((-(((_f._tau) * (_f._tau)) * (_f._ftautau))));

    _bpro._pt = (((_bpro._R_s) * (_bpro._d)) * (_f._delta)) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));

    _bpro._pd = (((_bpro._R_s) * (_bpro._T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));
  }
  _return: OMC_LABEL_UNUSED
  return _bpro;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype out_bpro;
  tmp1 = mmc_unbox_real(_p);
  _bpro = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, tmp1);
  tmpMeta2 = mmc_mk_icon(_bpro._region3boundary);
  tmpMeta3 = mmc_mk_rcon(_bpro._R_s);
  tmpMeta4 = mmc_mk_rcon(_bpro._T);
  tmpMeta5 = mmc_mk_rcon(_bpro._d);
  tmpMeta6 = mmc_mk_rcon(_bpro._h);
  tmpMeta7 = mmc_mk_rcon(_bpro._s);
  tmpMeta8 = mmc_mk_rcon(_bpro._cp);
  tmpMeta9 = mmc_mk_rcon(_bpro._cv);
  tmpMeta10 = mmc_mk_rcon(_bpro._dpT);
  tmpMeta11 = mmc_mk_rcon(_bpro._pt);
  tmpMeta12 = mmc_mk_rcon(_bpro._pd);
  tmpMeta13 = mmc_mk_rcon(_bpro._vt);
  tmpMeta14 = mmc_mk_rcon(_bpro._vp);
  out_bpro = mmc_mk_box14(3, &Modelica_Media_Common_IF97PhaseBoundaryProperties__desc, tmpMeta2, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14);
  return out_bpro;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_real _t)
{
  modelica_real _p;
  real_array _n;
  _tailrecursive: OMC_LABEL_UNUSED
  // _p has no default value.
  alloc_real_array(&(_n), 1, (_index_t)5);
  real_array_copy_data(_OMC_LIT108, _n);
  
  _p = (1000000.0) * (real_array_get(_n, 1, ((modelica_integer) 1)) + (_t) * (real_array_get(_n, 1, ((modelica_integer) 2)) + (_t) * (real_array_get(_n, 1, ((modelica_integer) 3)))));
  _return: OMC_LABEL_UNUSED
  return _p;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData_t *threadData, modelica_metatype _t)
{
  modelica_real tmp1;
  modelica_real _p;
  modelica_metatype out_p;
  tmp1 = mmc_unbox_real(_t);
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT(threadData, tmp1);
  out_p = mmc_mk_rcon(_p);
  return out_p;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_real _p)
{
  modelica_real _t;
  real_array _n;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  modelica_real tmp10;
  modelica_real tmp11;
  _tailrecursive: OMC_LABEL_UNUSED
  // _t has no default value.
  alloc_real_array(&(_n), 1, (_index_t)5);
  real_array_copy_data(_OMC_LIT108, _n);
  
  // _pi has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT109,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",222,9,225,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  tmp10 = real_array_get(_n, 1, ((modelica_integer) 3));
  if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(pi - n[5]) / n[3]");}
  tmp11 = (_pi - real_array_get(_n, 1, ((modelica_integer) 5))) / tmp10;
  if(!(tmp11 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt((pi - n[5]) / n[3]) was %g should be >= 0", tmp11);
  }
  _t = real_array_get(_n, 1, ((modelica_integer) 4)) + sqrt(tmp11);
  _return: OMC_LABEL_UNUSED
  return _t;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _t;
  modelica_metatype out_t;
  tmp1 = mmc_unbox_real(_p);
  _t = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData, tmp1);
  out_t = mmc_mk_rcon(_t);
  return out_t;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _d;
  modelica_real _pi;
  modelica_real _pi1;
  modelica_real _tau;
  modelica_real _tau1;
  modelica_real _gpi;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _pi has no default value.
  // _pi1 has no default value.
  // _tau has no default value.
  // _tau1 has no default value.
  // _gpi has no default value.
  alloc_real_array(&(_o), 1, (_index_t)11); // _o has no default value.
  tmp1 = 16530000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 16530000.0");}
  _pi = (_p) / tmp1;

  tmp2 = _T;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1386.0 / T");}
  _tau = (1386.0) / tmp2;

  _pi1 = 7.1 - _pi;

  _tau1 = _tau - 1.222;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_tau1) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 6)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (_tau1);

  real_array_get(_o, 1, ((modelica_integer) 7)) = (_pi1) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 8)) = (real_array_get(_o, 1, ((modelica_integer) 7))) * (real_array_get(_o, 1, ((modelica_integer) 7)));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (real_array_get(_o, 1, ((modelica_integer) 8))) * (real_array_get(_o, 1, ((modelica_integer) 8)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 10)));

  tmp3 = real_array_get(_o, 1, ((modelica_integer) 2));
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(9.5038934535162e-05 + o[2] * (8.4812393955936e-06 + 2.55615384360309e-09 * o[4])) / o[2]");}
  tmp4 = real_array_get(_o, 1, ((modelica_integer) 6));
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(8.970112763199999e-06 + (2.60684891582404e-06 + 5.7366919751696e-13 * o[2] * o[3]) * o[5]) / o[6]");}
  tmp5 = real_array_get(_o, 1, ((modelica_integer) 3));
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.02584984300585e-06 / o[3]");}
  tmp6 = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 2)));
  if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "7.63737668221055e-22 / (o[1] * o[11] * o[2])");}
  tmp7 = (real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 3)));
  if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "5.65070932023524e-23 / (o[11] * o[3])");}
  tmp8 = ((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp8 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "2.99318679335866e-24 * pi1 / (o[11] * o[3] * tau1)");}
  tmp9 = (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_tau1);
  if (tmp9 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.5842867920213e-22 / (o[1] * o[11] * o[2] * tau1)");}
  tmp10 = ((((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp10 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.33001080055983e-19 / (o[1] * o[10] * o[2] * o[3] * tau1)");}
  tmp11 = (((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "1.44400475720615e-17 / (o[10] * o[2] * o[3] * tau1)");}
  tmp12 = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau1);
  if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.01874413933128e-08 + 1.39398969845072e-09 * o[6]) / (o[1] * o[3] * tau1)");}
  tmp13 = real_array_get(_o, 1, ((modelica_integer) 5));
  if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(0.00094368642146534 + o[5] * (0.00060003561586052 + (-9.5322787813974e-05 + o[1] * (8.828369066169199e-06 + 1.45389992595188e-15 * o[1] * o[2] * o[3])) * tau1)) / o[5]");}
  tmp14 = (real_array_get(_o, 1, ((modelica_integer) 3))) * (_tau1);
  if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(-0.00028319080123804 + o[1] * (0.00060706301565874 + o[4] * (0.018990068218419 + tau1 * (0.032529748770505 + (0.021841717175414 + 5.283835796993e-05 * o[1]) * tau1)))) / (o[3] * tau1)");}
  _gpi = (_pi1) * ((_pi1) * ((9.5038934535162e-05 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (8.4812393955936e-06 + (2.55615384360309e-09) * (real_array_get(_o, 1, ((modelica_integer) 4))))) / tmp3 + (_pi1) * ((8.970112763199999e-06 + (2.60684891582404e-06 + ((5.7366919751696e-13) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) / tmp4 + (_pi1) * ((2.02584984300585e-06) / tmp5 + ((real_array_get(_o, 1, ((modelica_integer) 7))) * (_pi1)) * ((((real_array_get(_o, 1, ((modelica_integer) 8))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) * (_pi1)) * ((real_array_get(_o, 1, ((modelica_integer) 7))) * (((real_array_get(_o, 1, ((modelica_integer) 7))) * (real_array_get(_o, 1, ((modelica_integer) 8)))) * ((-((7.63737668221055e-22) / tmp6)) + (_pi1) * ((_pi1) * ((-((5.65070932023524e-23) / tmp7)) + ((2.99318679335866e-24) * (_pi1)) / tmp8) + (3.5842867920213e-22) / tmp9)) - ((3.33001080055983e-19) / tmp10)) + (1.44400475720615e-17) / tmp11) + (1.01874413933128e-08 + (1.39398969845072e-09) * (real_array_get(_o, 1, ((modelica_integer) 6)))) / tmp12)))) + (0.00094368642146534 + (real_array_get(_o, 1, ((modelica_integer) 5))) * (0.00060003561586052 + (-9.5322787813974e-05 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (8.828369066169199e-06 + (((1.45389992595188e-15) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (real_array_get(_o, 1, ((modelica_integer) 3))))) * (_tau1))) / tmp13) + (-0.00028319080123804 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (0.00060706301565874 + (real_array_get(_o, 1, ((modelica_integer) 4))) * (0.018990068218419 + (_tau1) * (0.032529748770505 + (0.021841717175414 + (5.283835796993e-05) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (_tau1))))) / tmp14;

  tmp15 = (((461.526) * (_T)) * (_pi)) * (_gpi);
  if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (461.526 * T * pi * gpi)");}
  _d = (_p) / tmp15;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData, tmp1, tmp2);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_real _p, modelica_real _T)
{
  modelica_real _d;
  modelica_real _pi;
  modelica_real _tau;
  modelica_real _tau2;
  modelica_real _gpi;
  real_array _o;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _pi has no default value.
  // _tau has no default value.
  // _tau2 has no default value.
  // _gpi has no default value.
  alloc_real_array(&(_o), 1, (_index_t)12); // _o has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  tmp2 = _T;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "540.0 / T");}
  _tau = (540.0) / tmp2;

  _tau2 = _tau - 0.5;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_tau2) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 3)));

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (((real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 7)) = ((real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 8)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (_pi) * (_pi);

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 9))) * (real_array_get(_o, 1, ((modelica_integer) 9)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = ((real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_tau2);

  real_array_get(_o, 1, ((modelica_integer) 12)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  tmp3 = _pi;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(1.0 + pi * (-0.0017731742473213 + tau2 * (-0.017834862292358 + tau2 * (-0.045996013696365 + (-0.057581259083432 - 0.05032527872793 * o[2]) * tau2)) + pi * (tau2 * (-6.6065283340406e-05 + (-0.0003789797503263 + o[1] * (-0.007878555448671 + o[2] * (-0.087594591301146 - 5.3349095828174e-05 * o[6]))) * tau2) + pi * (6.1445213076927e-08 + (1.31612001853305e-06 + o[1] * (-9.683303171571e-05 + o[2] * (-0.0045101773626444 - 0.122004760687947 * o[6]))) * tau2 + pi * (tau2 * (-3.15389238237468e-09 + (5.116287140914e-08 + 1.92901490874028e-06 * tau2) * tau2) + pi * (1.14610381688305e-05 * o[1] * o[3] * tau2 + pi * (o[2] * (-1.00288598706366e-10 + o[7] * (-0.012702883392813 - 143.374451604624 * o[1] * o[5] * tau2)) + pi * (-4.1341695026989e-17 + o[1] * o[4] * (-8.8352662293707e-06 - 0.272627897050173 * o[8]) * tau2 + pi * (o[4] * (9.0049690883672e-11 - 65.8490727183984 * o[3] * o[4] * o[5]) + pi * (1.78287415218792e-07 * o[7] + pi * (o[3] * (1.0406965210174e-18 + o[1] * (-1.0234747095929e-12 - 1.0018179379511e-08 * o[3]) * o[3]) + o[10] * o[9] * ((-1.29412653835176e-09 + 1.71088510070544 * o[11]) * o[6] + o[9] * ((-6.05920510335078 * o[12] * o[4] * o[5] * tau2) + o[9] * (o[3] * o[5] * (1.78371690710842e-23 + o[1] * o[3] * o[4] * (6.1258633752464e-12 - 8.4004935396416e-05 * o[7]) * tau2) + pi * ((-1.24017662339842e-24 * o[11]) + pi * (8.32192847496054e-05 * o[12] * o[3] * o[5] * tau2 + pi * (o[1] * o[4] * o[5] * (1.75410265428146e-27 + (1.32995316841867e-15 - 2.26487297378904e-05 * o[1] * o[5]) * o[8]) * pi - 2.93678005497663e-14 * o[1] * o[12] * o[3] * tau2))))))))))))))))) / pi");}
  _gpi = (1.0 + (_pi) * (-0.0017731742473213 + (_tau2) * (-0.017834862292358 + (_tau2) * (-0.045996013696365 + (-0.057581259083432 - ((0.05032527872793) * (real_array_get(_o, 1, ((modelica_integer) 2))))) * (_tau2))) + (_pi) * ((_tau2) * (-6.6065283340406e-05 + (-0.0003789797503263 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-0.007878555448671 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-0.087594591301146 - ((5.3349095828174e-05) * (real_array_get(_o, 1, ((modelica_integer) 6))))))) * (_tau2)) + (_pi) * (6.1445213076927e-08 + (1.31612001853305e-06 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-9.683303171571e-05 + (real_array_get(_o, 1, ((modelica_integer) 2))) * (-0.0045101773626444 - ((0.122004760687947) * (real_array_get(_o, 1, ((modelica_integer) 6))))))) * (_tau2) + (_pi) * ((_tau2) * (-3.15389238237468e-09 + (5.116287140914e-08 + (1.92901490874028e-06) * (_tau2)) * (_tau2)) + (_pi) * ((((1.14610381688305e-05) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau2) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 2))) * (-1.00288598706366e-10 + (real_array_get(_o, 1, ((modelica_integer) 7))) * (-0.012702883392813 - ((((143.374451604624) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_tau2)))) + (_pi) * (-4.1341695026989e-17 + (((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (-8.8352662293707e-06 - ((0.272627897050173) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) * (_tau2) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 4))) * (9.0049690883672e-11 - ((((65.8490727183984) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5))))) + (_pi) * ((1.78287415218792e-07) * (real_array_get(_o, 1, ((modelica_integer) 7))) + (_pi) * ((real_array_get(_o, 1, ((modelica_integer) 3))) * (1.0406965210174e-18 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (-1.0234747095929e-12 - ((1.0018179379511e-08) * (real_array_get(_o, 1, ((modelica_integer) 3)))))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) + ((real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) * ((-1.29412653835176e-09 + (1.71088510070544) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 6))) + (real_array_get(_o, 1, ((modelica_integer) 9))) * ((-(((((6.05920510335078) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_tau2))) + (real_array_get(_o, 1, ((modelica_integer) 9))) * (((real_array_get(_o, 1, ((modelica_integer) 3))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (1.78371690710842e-23 + ((((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (6.1258633752464e-12 - ((8.4004935396416e-05) * (real_array_get(_o, 1, ((modelica_integer) 7)))))) * (_tau2)) + (_pi) * ((-((1.24017662339842e-24) * (real_array_get(_o, 1, ((modelica_integer) 11))))) + (_pi) * (((((8.32192847496054e-05) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_tau2) + (_pi) * (((((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (1.75410265428146e-27 + (1.32995316841867e-15 - (((2.26487297378904e-05) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 5))))) * (real_array_get(_o, 1, ((modelica_integer) 8))))) * (_pi) - (((((2.93678005497663e-14) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_tau2))))))))))))))))))) / tmp3;

  tmp4 = (((461.526) * (_T)) * (_pi)) * (_gpi);
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (461.526 * T * pi * gpi)");}
  _d = (_p) / tmp4;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData, tmp1, tmp2);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
Modelica_Media_Common_IF97PhaseBoundaryProperties omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_real _p)
{
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  Modelica_Media_Common_GibbsDerivs _g;
  Modelica_Media_Common_HelmholtzDerivs _f;
  modelica_real _plim;
  Modelica_Media_Common_GibbsDerivs tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  Modelica_Media_Common_HelmholtzDerivs tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  Modelica_Media_Common_IF97PhaseBoundaryProperties_construct(threadData, _bpro); // _bpro has no default value.
  Modelica_Media_Common_GibbsDerivs_construct(threadData, _g); // _g has no default value.
  Modelica_Media_Common_HelmholtzDerivs_construct(threadData, _f); // _f has no default value.
  _plim = fmin(_p,22063999.9999999);
  _bpro._R_s = 461.526;

  _bpro._T = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _plim);

  _bpro._dpT = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT(threadData, _bpro._T);

  _bpro._region3boundary = (_bpro._T > 623.15);

  if((!_bpro._region3boundary))
  {
    tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2(threadData, _p, _bpro._T, 1);
    Modelica_Media_Common_GibbsDerivs_copy(tmp1, _g);;

    tmp2 = (((_bpro._R_s) * (_bpro._T)) * (_g._pi)) * (_g._gpi);
    if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / (bpro.R_s * bpro.T * g.pi * g.gpi)");}
    _bpro._d = (_p) / tmp2;

    _bpro._h = ((_p > _plim)?2087546.84511715:(((_bpro._R_s) * (_bpro._T)) * (_g._tau)) * (_g._gtau));

    _bpro._s = (_g._R_s) * ((_g._tau) * (_g._gtau) - _g._g);

    _bpro._cp = (-((((_bpro._R_s) * (_g._tau)) * (_g._tau)) * (_g._gtautau)));

    tmp3 = _p;
    if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "bpro.R_s / p");}
    _bpro._vt = ((_bpro._R_s) / tmp3) * ((_g._pi) * (_g._gpi) - (((_g._tau) * (_g._pi)) * (_g._gtaupi)));

    tmp4 = (_p) * (_p);
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "bpro.R_s * bpro.T / (p * p)");}
    _bpro._vp = (((((_bpro._R_s) * (_bpro._T)) / tmp4) * (_g._pi)) * (_g._pi)) * (_g._gpipi);

    tmp5 = _bpro._T;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / bpro.T");}
    tmp6 = (_g._gpipi) * (_g._pi);
    if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / bpro.T * (g.gpi - g.tau * g.gtaupi) / (g.gpipi * g.pi)");}
    _bpro._pt = (-((((_p) / tmp5) * (_g._gpi - ((_g._tau) * (_g._gtaupi)))) / tmp6));

    tmp7 = _g._gpipi;
    if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "bpro.R_s * bpro.T * g.gpi * g.gpi / g.gpipi");}
    _bpro._pd = (-(((((_bpro._R_s) * (_bpro._T)) * (_g._gpi)) * (_g._gpi)) / tmp7));
  }
  else
  {
    _bpro._d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _plim);

    tmp8 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3(threadData, _bpro._d, _bpro._T);
    Modelica_Media_Common_HelmholtzDerivs_copy(tmp8, _f);;

    _bpro._h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData, _plim);

    _bpro._s = (_f._R_s) * ((_f._tau) * (_f._ftau) - _f._f);

    _bpro._cv = (_bpro._R_s) * ((-(((_f._tau) * (_f._tau)) * (_f._ftautau))));

    _bpro._pt = (((_bpro._R_s) * (_bpro._d)) * (_f._delta)) * (_f._fdelta - ((_f._tau) * (_f._fdeltatau)));

    _bpro._pd = (((_bpro._R_s) * (_bpro._T)) * (_f._delta)) * ((2.0) * (_f._fdelta) + (_f._delta) * (_f._fdeltadelta));
  }
  _return: OMC_LABEL_UNUSED
  return _bpro;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype out_bpro;
  tmp1 = mmc_unbox_real(_p);
  _bpro = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, tmp1);
  tmpMeta2 = mmc_mk_icon(_bpro._region3boundary);
  tmpMeta3 = mmc_mk_rcon(_bpro._R_s);
  tmpMeta4 = mmc_mk_rcon(_bpro._T);
  tmpMeta5 = mmc_mk_rcon(_bpro._d);
  tmpMeta6 = mmc_mk_rcon(_bpro._h);
  tmpMeta7 = mmc_mk_rcon(_bpro._s);
  tmpMeta8 = mmc_mk_rcon(_bpro._cp);
  tmpMeta9 = mmc_mk_rcon(_bpro._cv);
  tmpMeta10 = mmc_mk_rcon(_bpro._dpT);
  tmpMeta11 = mmc_mk_rcon(_bpro._pt);
  tmpMeta12 = mmc_mk_rcon(_bpro._pd);
  tmpMeta13 = mmc_mk_rcon(_bpro._vt);
  tmpMeta14 = mmc_mk_rcon(_bpro._vp);
  out_bpro = mmc_mk_box14(3, &Modelica_Media_Common_IF97PhaseBoundaryProperties__desc, tmpMeta2, tmpMeta3, tmpMeta4, tmpMeta5, tmpMeta6, tmpMeta7, tmpMeta8, tmpMeta9, tmpMeta10, tmpMeta11, tmpMeta12, tmpMeta13, tmpMeta14);
  return out_bpro;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _x;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _x has no default value.
  tmp1 = 22064000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 22064000.0");}
  tmp2 = (_p) / tmp1;
  if(!(tmp2 >= -1.0 && tmp2 <= 1.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of acos(p / 22064000.0) outside the domain -1.0 <= %g <= 1.0", tmp2);
  }
  _x = acos(tmp2);

  _h = (1.0 + (_x) * (-0.4945586958175176 + (_x) * (1.346800016564904 + (_x) * (-3.889388153209752 + (_x) * (6.679385472887931 + (_x) * (-6.75820241066552 + (_x) * (3.558919744656498 + (-0.717981855497894 - ((0.0001152032945617821) * (_x))) * (_x)))))))) * (2087546.84511715);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi1;
  real_array _o;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi1 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)3); // _o has no default value.
  tmp1 = 16530000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 16530000.0");}
  _pi1 = 7.1 - ((_p) / tmp1);

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT110,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",310,9,313,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_pi1) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  _h = (639675.036) * (0.173379420894777 + (_pi1) * (-0.022914084306349 + (_pi1) * (-0.00017146768241932 + (_pi1) * (-4.18695814670391e-06 + (_pi1) * (-2.41630417490008e-07 + (_pi1) * (1.73545618580828e-11 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (_pi1)) * (8.43755552264362e-14 + (((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_pi1)) * (5.35429206228374e-35 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-8.12140581014818e-38 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (-1.43870236842915e-44 + (_pi1) * (1.73894459122923e-45 + (-7.06381628462585e-47 + (9.64504638626269e-49) * (_pi1)) * (_pi1))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  modelica_real _q1;
  modelica_real _q2;
  real_array _o;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  // _q1 has no default value.
  // _q2 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)18); // _o has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT111,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",416,9,419,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  tmp10 = -13.91883977887 + _pi;
  if(!(tmp10 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of sqrt(-13.91883977887 + pi) was %g should be >= 0", tmp10);
  }
  _q1 = 572.54459862746 + (31.3220101646784) * (sqrt(tmp10));

  tmp11 = _q1;
  if (tmp11 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "540.0 / q1");}
  _q2 = -0.5 + (540.0) / tmp11;

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_q1) * (_q1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  real_array_get(_o, 1, ((modelica_integer) 4)) = (_pi) * (_pi);

  real_array_get(_o, 1, ((modelica_integer) 5)) = (real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 4)));

  real_array_get(_o, 1, ((modelica_integer) 6)) = (_q2) * (_q2);

  real_array_get(_o, 1, ((modelica_integer) 7)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 8)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (real_array_get(_o, 1, ((modelica_integer) 7)));

  real_array_get(_o, 1, ((modelica_integer) 9)) = (real_array_get(_o, 1, ((modelica_integer) 5))) * (real_array_get(_o, 1, ((modelica_integer) 5)));

  real_array_get(_o, 1, ((modelica_integer) 10)) = (real_array_get(_o, 1, ((modelica_integer) 7))) * (real_array_get(_o, 1, ((modelica_integer) 7)));

  real_array_get(_o, 1, ((modelica_integer) 11)) = (real_array_get(_o, 1, ((modelica_integer) 9))) * (real_array_get(_o, 1, ((modelica_integer) 9)));

  real_array_get(_o, 1, ((modelica_integer) 12)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 10)));

  real_array_get(_o, 1, ((modelica_integer) 13)) = (real_array_get(_o, 1, ((modelica_integer) 12))) * (real_array_get(_o, 1, ((modelica_integer) 12)));

  real_array_get(_o, 1, ((modelica_integer) 14)) = (real_array_get(_o, 1, ((modelica_integer) 7))) * (_q2);

  real_array_get(_o, 1, ((modelica_integer) 15)) = (real_array_get(_o, 1, ((modelica_integer) 6))) * (_q2);

  real_array_get(_o, 1, ((modelica_integer) 16)) = (real_array_get(_o, 1, ((modelica_integer) 10))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 17)) = (real_array_get(_o, 1, ((modelica_integer) 13))) * (real_array_get(_o, 1, ((modelica_integer) 6)));

  real_array_get(_o, 1, ((modelica_integer) 18)) = ((real_array_get(_o, 1, ((modelica_integer) 13))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_q2);

  tmp12 = real_array_get(_o, 1, ((modelica_integer) 1));
  if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(4636975733.03507 + 3.74686560065793 * o[2] + 3.57966647812489e-06 * o[1] * o[2] + 2.81881548488163e-13 * o[3] - 76465233.24521451 * q1 - 0.00450789338787835 * o[2] * q1 - 1.55131504410292e-09 * o[1] * o[2] * q1 + o[1] * (2513837.07870341 - 4781981.98764471 * o[10] * o[11] * o[12] * o[13] * o[4] + 49.9651389369988 * o[11] * o[12] * o[13] * o[4] * o[5] * o[7] + o[15] * o[4] * (1.03746636552761e-13 - 0.00349547959376899 * o[16] - 2.55074501962569e-07 * o[8]) * o[9] + ((-242662.235426958 * o[10] * o[12]) - 3.46022402653609 * o[16]) * o[4] * o[5] * pi + o[4] * (0.109336249381227 - 2248.08924686956 * o[14] - 354742.725841972 * o[17] - 24.1331193696374 * o[6]) * pi - 3.09081828396912e-19 * o[11] * o[12] * o[5] * o[7] * pi - 1.24107527851371e-08 * o[11] * o[13] * o[4] * o[5] * o[6] * o[7] * pi + 3.99891272904219 * o[5] * o[8] * pi + 0.0641817365250892 * o[10] * o[7] * o[9] * pi + pi * (-4444.87643334512 - 75253.6156722047 * o[14] - 43051.9020511789 * o[6] - 22926.6247146068 * q2) + o[4] * (-8.23252840892034 - 3927.0508365636 * o[15] - 239.325789467604 * o[18] - 76407.3727417716 * o[8] - 94.4508644545118 * q2) + 0.360567666582363 * o[5] * (-0.0161221195808321 + q2) * (0.0338039844460968 + q2) + o[11] * ((-0.000584580992538624 * o[10] * o[12] * o[7]) + 1332480.30241755 * o[12] * o[13] * q2) + o[9] * ((-73850273.6990986 * o[18]) + 2.24425477627799e-05 * o[6] * o[7] * q2) + o[4] * o[5] * ((-208438767.026518 * o[17]) - 1.24971648677697e-05 * o[6] - 8442.30378348203 * o[10] * o[6] * o[7] * q2) + o[11] * o[9] * (4.73594929247646e-22 * o[10] * o[12] * q2 - 13.6411358215175 * o[10] * o[12] * o[13] * q2 + 5.524271694068359e-10 * o[13] * o[6] * o[7] * q2) + o[11] * o[5] * (2.67174673301715e-06 * o[17] + 4.44545133805865e-18 * o[12] * o[6] * q2 - 50.2465185106411 * o[10] * o[13] * o[6] * o[7] * q2))) / o[1]");}
  _h = (4636975733.03507 + (3.74686560065793) * (real_array_get(_o, 1, ((modelica_integer) 2))) + ((3.57966647812489e-06) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 2))) + (2.81881548488163e-13) * (real_array_get(_o, 1, ((modelica_integer) 3))) - ((76465233.24521451) * (_q1)) - (((0.00450789338787835) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_q1)) - ((((1.55131504410292e-09) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (_q1)) + (real_array_get(_o, 1, ((modelica_integer) 1))) * (2513837.07870341 - ((((((4781981.98764471) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) + ((((((49.9651389369988) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 7))) + (((real_array_get(_o, 1, ((modelica_integer) 15))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (1.03746636552761e-13 - ((0.00349547959376899) * (real_array_get(_o, 1, ((modelica_integer) 16)))) - ((2.55074501962569e-07) * (real_array_get(_o, 1, ((modelica_integer) 8)))))) * (real_array_get(_o, 1, ((modelica_integer) 9))) + ((((-(((242662.235426958) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 12))))) - ((3.46022402653609) * (real_array_get(_o, 1, ((modelica_integer) 16))))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (_pi) + ((real_array_get(_o, 1, ((modelica_integer) 4))) * (0.109336249381227 - ((2248.08924686956) * (real_array_get(_o, 1, ((modelica_integer) 14)))) - ((354742.725841972) * (real_array_get(_o, 1, ((modelica_integer) 17)))) - ((24.1331193696374) * (real_array_get(_o, 1, ((modelica_integer) 6)))))) * (_pi) - ((((((3.09081828396912e-19) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_pi)) - ((((((((1.24107527851371e-08) * (real_array_get(_o, 1, ((modelica_integer) 11)))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 4)))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_pi)) + (((3.99891272904219) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (real_array_get(_o, 1, ((modelica_integer) 8)))) * (_pi) + ((((0.0641817365250892) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) * (_pi) + (_pi) * (-4444.87643334512 - ((75253.6156722047) * (real_array_get(_o, 1, ((modelica_integer) 14)))) - ((43051.9020511789) * (real_array_get(_o, 1, ((modelica_integer) 6)))) - ((22926.6247146068) * (_q2))) + (real_array_get(_o, 1, ((modelica_integer) 4))) * (-8.23252840892034 - ((3927.0508365636) * (real_array_get(_o, 1, ((modelica_integer) 15)))) - ((239.325789467604) * (real_array_get(_o, 1, ((modelica_integer) 18)))) - ((76407.3727417716) * (real_array_get(_o, 1, ((modelica_integer) 8)))) - ((94.4508644545118) * (_q2))) + (((0.360567666582363) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * (-0.0161221195808321 + _q2)) * (0.0338039844460968 + _q2) + (real_array_get(_o, 1, ((modelica_integer) 11))) * ((-((((0.000584580992538624) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 7))))) + (((1332480.30241755) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (_q2)) + (real_array_get(_o, 1, ((modelica_integer) 9))) * ((-((73850273.6990986) * (real_array_get(_o, 1, ((modelica_integer) 18))))) + (((2.24425477627799e-05) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_q2)) + ((real_array_get(_o, 1, ((modelica_integer) 4))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * ((-((208438767.026518) * (real_array_get(_o, 1, ((modelica_integer) 17))))) - ((1.24971648677697e-05) * (real_array_get(_o, 1, ((modelica_integer) 6)))) - (((((8442.30378348203) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_q2))) + ((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 9)))) * ((((4.73594929247646e-22) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (_q2) - (((((13.6411358215175) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (_q2)) + ((((5.524271694068359e-10) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_q2)) + ((real_array_get(_o, 1, ((modelica_integer) 11))) * (real_array_get(_o, 1, ((modelica_integer) 5)))) * ((2.67174673301715e-06) * (real_array_get(_o, 1, ((modelica_integer) 17))) + (((4.44545133805865e-18) * (real_array_get(_o, 1, ((modelica_integer) 12)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (_q2) - ((((((50.2465185106411) * (real_array_get(_o, 1, ((modelica_integer) 10)))) * (real_array_get(_o, 1, ((modelica_integer) 13)))) * (real_array_get(_o, 1, ((modelica_integer) 6)))) * (real_array_get(_o, 1, ((modelica_integer) 7)))) * (_q2))))) / tmp12;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT112,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",238,9,241,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  _h = (461526.0) * (9.01505286876203 + (_pi) * (-0.009790434902460921 + (-2.03245575263501e-05 + (3.36540214679088e-07) * (_pi)) * (_pi)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi1;
  real_array _o;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi1 has no default value.
  alloc_real_array(&(_o), 1, (_index_t)3); // _o has no default value.
  tmp1 = 16530000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 16530000.0");}
  _pi1 = 7.1 - ((_p) / tmp1);

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT113,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",336,9,339,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_pi1) * (_pi1);

  real_array_get(_o, 1, ((modelica_integer) 2)) = (real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  real_array_get(_o, 1, ((modelica_integer) 3)) = (real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 2)));

  _h = (639675.036) * (2.42896927729349 + (_pi1) * (-0.00141131225285294 + (_pi1) * (0.00143759406818289 + (_pi1) * (0.000125338925082983 + (_pi1) * (1.23617764767172e-05 + (_pi1) * (3.17834967400818e-06 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (_pi1)) * (1.46754947271665e-08 + (((real_array_get(_o, 1, ((modelica_integer) 2))) * (real_array_get(_o, 1, ((modelica_integer) 3)))) * (_pi1)) * (1.86779322717506e-17 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-4.18568363667416e-19 + ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 2)))) * (-9.19148577641497e-22 + (_pi1) * (4.27026404402408e-22 + (-6.66749357417962e-23 + (3.49930466305574e-24) * (_pi1)) * (_pi1))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  real_array _o;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  alloc_real_array(&(_o), 1, (_index_t)2); // _o has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT114,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",478,9,481,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  real_array_get(_o, 1, ((modelica_integer) 1)) = (_pi) * (_pi);

  real_array_get(_o, 1, ((modelica_integer) 2)) = ((real_array_get(_o, 1, ((modelica_integer) 1))) * (real_array_get(_o, 1, ((modelica_integer) 1)))) * (real_array_get(_o, 1, ((modelica_integer) 1)));

  _h = 4160663.37647071 + (_pi) * (-4518.48617188327 + (_pi) * (-8.53409968320258 + (_pi) * (0.109090430596056 + (_pi) * (-0.000172486052272327 + (_pi) * (4.2261295097284e-15 + (_pi) * (-1.27295130636232e-10 + (_pi) * (-3.79407294691742e-25 + (_pi) * (7.56960433802525e-23 + (_pi) * (7.16825117265975e-32 + (_pi) * (3.37267475986401e-21 + (-7.5656940729795e-74 + (real_array_get(_o, 1, ((modelica_integer) 1))) * (-8.00969737237617e-134 + (1.6746290980312e-65 + (_pi) * (-3.71600586812966e-69 + (_pi) * (8.066305891708841e-129 + (-1.76117969553159e-103 + (1.88543121025106e-84) * (_pi)) * (_pi)))) * (real_array_get(_o, 1, ((modelica_integer) 1))))) * (real_array_get(_o, 1, ((modelica_integer) 2)))))))))))));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _pi;
  modelica_real tmp1;
  modelica_metatype tmpMeta2;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  static int tmp9 = 0;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _pi has no default value.
  tmp1 = 1000000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 1000000.0");}
  _pi = (_p) / tmp1;

  {
    if(!(_p > 611.657))
    {
      tmpMeta2 = stringAppend(_OMC_LIT115,_OMC_LIT58);
      tmp3 = modelica_real_to_modelica_string(_p, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta4 = stringAppend(tmpMeta2,tmp3);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT59);
      tmp6 = modelica_real_to_modelica_string(611.657, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta7 = stringAppend(tmpMeta5,tmp6);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT60);
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/Water/IF97_Utilities.mo",255,9,258,41,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta8));
      }
    }
  }

  _h = (461526.0) * (15.9838891400332 + (_pi) * (-0.000489898813722568 + (-5.01510211858761e-08 + (7.5006972718273e-08) * (_pi)) * (_pi)));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, _p));
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _h;
  modelica_real _x;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  // _x has no default value.
  tmp1 = 22064000.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 22064000.0");}
  tmp2 = (_p) / tmp1;
  if(!(tmp2 >= -1.0 && tmp2 <= 1.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of acos(p / 22064000.0) outside the domain -1.0 <= %g <= 1.0", tmp2);
  }
  _x = acos(tmp2);

  _h = (1.0 + (_x) * (0.4880153718655694 + (_x) * (0.2079670746250689 + (_x) * (-6.084122698421623 + (_x) * (25.08887602293532 + (_x) * (-48.38215180269516 + (_x) * (45.66489164833212 + (-16.98555442961553 + (0.0006616936460057692) * (_x)) * (_x)))))))) * (2087546.84511715);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_real _p, Modelica_Media_Common_IF97PhaseBoundaryProperties _bpro)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = _bpro._h;
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData_t *threadData, modelica_metatype _p, modelica_metatype _bpro)
{
  modelica_real tmp1;
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_real tmp6;
  modelica_metatype tmpMeta7;
  modelica_real tmp8;
  modelica_metatype tmpMeta9;
  modelica_real tmp10;
  modelica_metatype tmpMeta11;
  modelica_real tmp12;
  modelica_metatype tmpMeta13;
  modelica_real tmp14;
  modelica_metatype tmpMeta15;
  modelica_real tmp16;
  modelica_metatype tmpMeta17;
  modelica_real tmp18;
  modelica_metatype tmpMeta19;
  modelica_real tmp20;
  modelica_metatype tmpMeta21;
  modelica_real tmp22;
  modelica_metatype tmpMeta23;
  modelica_real tmp24;
  modelica_metatype tmpMeta25;
  modelica_real tmp26;
  modelica_metatype tmpMeta27;
  modelica_real tmp28;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmpMeta3 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 2)));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmp2._region3boundary = tmp4;
  tmpMeta5 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 3)));
  tmp6 = mmc_unbox_real(tmpMeta5);
  tmp2._R_s = tmp6;
  tmpMeta7 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 4)));
  tmp8 = mmc_unbox_real(tmpMeta7);
  tmp2._T = tmp8;
  tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 5)));
  tmp10 = mmc_unbox_real(tmpMeta9);
  tmp2._d = tmp10;
  tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 6)));
  tmp12 = mmc_unbox_real(tmpMeta11);
  tmp2._h = tmp12;
  tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 7)));
  tmp14 = mmc_unbox_real(tmpMeta13);
  tmp2._s = tmp14;
  tmpMeta15 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 8)));
  tmp16 = mmc_unbox_real(tmpMeta15);
  tmp2._cp = tmp16;
  tmpMeta17 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 9)));
  tmp18 = mmc_unbox_real(tmpMeta17);
  tmp2._cv = tmp18;
  tmpMeta19 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 10)));
  tmp20 = mmc_unbox_real(tmpMeta19);
  tmp2._dpT = tmp20;
  tmpMeta21 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 11)));
  tmp22 = mmc_unbox_real(tmpMeta21);
  tmp2._pt = tmp22;
  tmpMeta23 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 12)));
  tmp24 = mmc_unbox_real(tmpMeta23);
  tmp2._pd = tmp24;
  tmpMeta25 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 13)));
  tmp26 = mmc_unbox_real(tmpMeta25);
  tmp2._vt = tmp26;
  tmpMeta27 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bpro), 14)));
  tmp28 = mmc_unbox_real(tmpMeta27);
  tmp2._vp = tmp28;
  _h = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p(threadData, tmp1, tmp2);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_real _p, modelica_real _T, modelica_integer _mode)
{
  modelica_integer _region;
  _tailrecursive: OMC_LABEL_UNUSED
  // _region has no default value.
  if((_mode != ((modelica_integer) 0)))
  {
    _region = _mode;
  }
  else
  {
    if((_p < 16529200.0))
    {
      if((_T > 1073.15))
      {
        _region = ((modelica_integer) 5);
      }
      else
      {
        if((_T > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p)))
        {
          _region = ((modelica_integer) 2);
        }
        else
        {
          _region = ((modelica_integer) 1);
        }
      }
    }
    else
    {
      if((_T < 623.15))
      {
        _region = ((modelica_integer) 1);
      }
      else
      {
        if((_T < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp(threadData, _p)))
        {
          _region = ((modelica_integer) 3);
        }
        else
        {
          _region = ((modelica_integer) 2);
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _region;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _mode)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer _region;
  modelica_metatype out_region;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  tmp3 = mmc_unbox_integer(_mode);
  _region = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT(threadData, tmp1, tmp2, tmp3);
  out_region = mmc_mk_icon(_region);
  return out_region;
}

DLLExport
modelica_integer omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_real _p, modelica_real _h, modelica_integer _phase, modelica_integer _mode)
{
  modelica_integer _region;
  modelica_boolean _hsubcrit;
  modelica_real _Ttest;
  real_array _n;
  modelica_real _hl;
  modelica_real _hv;
  _tailrecursive: OMC_LABEL_UNUSED
  // _region has no default value.
  // _hsubcrit has no default value.
  // _Ttest has no default value.
  alloc_real_array(&(_n), 1, (_index_t)5);
  real_array_copy_data(_OMC_LIT108, _n);
  
  // _hl has no default value.
  // _hv has no default value.
  if((_mode != ((modelica_integer) 0)))
  {
    _region = _mode;
  }
  else
  {
    _hl = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p(threadData, _p);

    _hv = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p(threadData, _p);

    if((_phase == ((modelica_integer) 2)))
    {
      _region = ((modelica_integer) 4);
    }
    else
    {
      if((((((_p < 611.657) || (_p > 100000000.0)) || (_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1(threadData, _p))) || ((_p < 10000000.0) && (_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData, _p)))) || ((_p >= 10000000.0) && (_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2(threadData, _p)))))
      {
        _region = ((modelica_integer) -1);
      }
      else
      {
        _hsubcrit = (_h < 2087546.84511715);

        if((_p < 16529200.0))
        {
          if(_hsubcrit)
          {
            if((_phase == ((modelica_integer) 1)))
            {
              _region = ((modelica_integer) 1);
            }
            else
            {
              if((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p))))
              {
                _region = ((modelica_integer) 1);
              }
              else
              {
                _region = ((modelica_integer) 4);
              }
            }
          }
          else
          {
            if((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5(threadData, _p)))
            {
              if(((_p < 10000000.0) && (_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5(threadData, _p))))
              {
                _region = ((modelica_integer) 5);
              }
              else
              {
                _region = ((modelica_integer) -2);
              }
            }
            else
            {
              if((_phase == ((modelica_integer) 1)))
              {
                _region = ((modelica_integer) 2);
              }
              else
              {
                if((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2(threadData, _p, omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, _p))))
                {
                  _region = ((modelica_integer) 2);
                }
                else
                {
                  _region = ((modelica_integer) 4);
                }
              }
            }
          }
        }
        else
        {
          if(_hsubcrit)
          {
            if((_h < omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1(threadData, _p)))
            {
              _region = ((modelica_integer) 1);
            }
            else
            {
              if(((_h < _hl) || (_p > 22064000.0)))
              {
                _region = ((modelica_integer) 3);
              }
              else
              {
                _region = ((modelica_integer) 4);
              }
            }
          }
          else
          {
            if((_h > omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2(threadData, _p)))
            {
              _region = ((modelica_integer) 2);
            }
            else
            {
              if(((_h > _hv) || (_p > 22064000.0)))
              {
                _region = ((modelica_integer) 3);
              }
              else
              {
                _region = ((modelica_integer) 4);
              }
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _region;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _phase, modelica_metatype _mode)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer _region;
  modelica_metatype out_region;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  tmp3 = mmc_unbox_integer(_phase);
  tmp4 = mmc_unbox_integer(_mode);
  _region = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph(threadData, tmp1, tmp2, tmp3, tmp4);
  out_region = mmc_mk_icon(_region);
  return out_region;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _dl;
  modelica_real _x;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dl has no default value.
  // _x has no default value.
  if((_p < 22064000.0))
  {
    tmp1 = 22064000.0;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 22064000.0");}
    tmp2 = (_p) / tmp1;
    if(!(tmp2 >= -1.0 && tmp2 <= 1.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of acos(p / 22064000.0) outside the domain -1.0 <= %g <= 1.0", tmp2);
    }
    _x = acos(tmp2);

    _dl = (1.0 + (_x) * (1.903224079094824 + (_x) * (-2.531486180240112 + (_x) * (-8.191449323843552 + (_x) * (94.34196116778385 + (_x) * (-369.3676833623383 + (_x) * (796.6627910598293 + (_x) * (-994.5385383600702 + (_x) * (673.2581177021598 + (-191.4307733640516 + (0.00052536560808895) * (_x)) * (_x)))))))))) * (322.0);
  }
  else
  {
    _dl = 322.0;
  }
  _return: OMC_LABEL_UNUSED
  return _dl;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _dl;
  modelica_metatype out_dl;
  tmp1 = mmc_unbox_real(_p);
  _dl = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b(threadData, tmp1);
  out_dl = mmc_mk_rcon(_dl);
  return out_dl;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_real _T)
{
  modelica_real _d;
  modelica_real _p;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  // _p has no default value.
  _p = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat(threadData, _T);

  if((_T < 623.15))
  {
    _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n(threadData, _p, _T);
  }
  else
  {
    if((_T < 647.096))
    {
      _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, _p);
    }
    else
    {
      _d = 322.0;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData_t *threadData, modelica_metatype _T)
{
  modelica_real tmp1;
  modelica_real _d;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_real(_T);
  _d = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLExport
modelica_real omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_real _p)
{
  modelica_real _dv;
  modelica_real _x;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dv has no default value.
  // _x has no default value.
  if((_p < 22064000.0))
  {
    tmp1 = 22064000.0;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "p / 22064000.0");}
    tmp2 = (_p) / tmp1;
    if(!(tmp2 >= -1.0 && tmp2 <= 1.0))
    {
      FILE_INFO info = {"",0,0,0,0,0};
      omc_assert(threadData, info, "Model error: Argument of acos(p / 22064000.0) outside the domain -1.0 <= %g <= 1.0", tmp2);
    }
    _x = acos(tmp2);

    _dv = (1.0 + (_x) * (-1.84638508033626 + (_x) * (-1.144787271887849 + (_x) * (59.18702203076563 + (_x) * (-403.5391431811611 + (_x) * (1437.200724533239 + (_x) * (-3015.853540307519 + (_x) * (3740.579034867006 + (_x) * (-2537.375817253895 + (725.8761975803782 - ((0.001115111165833234) * (_x))) * (_x)))))))))) * (322.0);
  }
  else
  {
    _dv = 322.0;
  }
  _return: OMC_LABEL_UNUSED
  return _dv;
}
modelica_metatype boxptr_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData_t *threadData, modelica_metatype _p)
{
  modelica_real tmp1;
  modelica_real _dv;
  modelica_metatype out_dv;
  tmp1 = mmc_unbox_real(_p);
  _dv = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b(threadData, tmp1);
  out_dv = mmc_mk_rcon(_dv);
  return out_dv;
}

#ifdef __cplusplus
}
#endif
