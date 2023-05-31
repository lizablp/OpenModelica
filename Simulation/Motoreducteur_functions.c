#include "omc_simulation_settings.h"
#include "Motoreducteur_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "Motoreducteur_includes.h"


DLLExport
modelica_boolean omc_Modelica_Math_Matrices_isEqual(threadData_t *threadData, real_array _M1, real_array _M2, modelica_real _eps)
{
  modelica_boolean _result;
  modelica_integer _nrow;
  modelica_integer tmp1;
  modelica_integer _ncol;
  modelica_integer tmp2;
  modelica_integer _i;
  modelica_integer _j;
  modelica_integer tmp3;
  modelica_integer tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _result has no default value.
  tmp1 = size_of_dimension_base_array(_M1, ((modelica_integer) 1));
  _nrow = tmp1;
  tmp2 = size_of_dimension_base_array(_M1, ((modelica_integer) 2));
  _ncol = tmp2;
  _i = ((modelica_integer) 1);
  // _j has no default value.
  _result = 0;

  tmp3 = size_of_dimension_base_array(_M2, ((modelica_integer) 1));
  tmp4 = size_of_dimension_base_array(_M2, ((modelica_integer) 2));
  if(((tmp3 == _nrow) && (tmp4 == _ncol)))
  {
    _result = 1;

    while(1)
    {
      if(!(_i <= _nrow)) break;
      _j = ((modelica_integer) 1);

      while(1)
      {
        if(!(_j <= _ncol)) break;
        if((fabs(real_array_get(_M1, 2, _i, _j) - real_array_get(_M2, 2, _i, _j)) > _eps))
        {
          _result = 0;

          _i = _nrow;

          _j = _ncol;
        }

        _j = _j + ((modelica_integer) 1);
      }

      _i = _i + ((modelica_integer) 1);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _result;
}
modelica_metatype boxptr_Modelica_Math_Matrices_isEqual(threadData_t *threadData, modelica_metatype _M1, modelica_metatype _M2, modelica_metatype _eps)
{
  modelica_real tmp1;
  modelica_boolean _result;
  modelica_metatype out_result;
  tmp1 = mmc_unbox_real(_eps);
  _result = omc_Modelica_Math_Matrices_isEqual(threadData, *((base_array_t*)_M1), *((base_array_t*)_M2), tmp1);
  out_result = mmc_mk_icon(_result);
  return out_result;
}

DLLExport
modelica_real omc_Modelica_Math_Vectors_interpolate(threadData_t *threadData, real_array _x, real_array _y, modelica_real _xi, modelica_integer _iLast, modelica_integer *out_iNew)
{
  modelica_real _yi;
  modelica_integer _iNew;
  modelica_integer _i;
  modelica_integer _nx;
  modelica_integer tmp1;
  modelica_real _x1;
  modelica_real _x2;
  modelica_real _y1;
  modelica_real _y2;
  static int tmp2 = 0;
  static int tmp3 = 0;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _yi has no default value.
  _iNew = ((modelica_integer) 1);
  // _i has no default value.
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _nx = tmp1;
  // _x1 has no default value.
  // _x2 has no default value.
  // _y1 has no default value.
  // _y2 has no default value.
  {
    if(!(_nx > ((modelica_integer) 0)))
    {
      {
        FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Math/package.mo",514,5,514,68,0};
        omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT0));
      }
    }
  }

  if((_nx == ((modelica_integer) 1)))
  {
    _yi = real_array_get(_y, 1, ((modelica_integer) 1));
  }
  else
  {
    _i = modelica_integer_min((modelica_integer)(modelica_integer_max((modelica_integer)(_iLast),(modelica_integer)(((modelica_integer) 1)))),(modelica_integer)(_nx - ((modelica_integer) 1)));

    if((_xi >= real_array_get(_x, 1, _i)))
    {
      while(1)
      {
        if(!((_i < _nx) && (_xi >= real_array_get(_x, 1, _i)))) break;
        _i = _i + ((modelica_integer) 1);
      }

      _i = _i - ((modelica_integer) 1);
    }
    else
    {
      while(1)
      {
        if(!((_i > ((modelica_integer) 1)) && (_xi < real_array_get(_x, 1, _i)))) break;
        _i = _i - ((modelica_integer) 1);
      }
    }

    _x1 = real_array_get(_x, 1, _i);

    _x2 = real_array_get(_x, 1, _i + ((modelica_integer) 1));

    _y1 = real_array_get(_y, 1, _i);

    _y2 = real_array_get(_y, 1, _i + ((modelica_integer) 1));

    {
      if(!(_x2 > _x1))
      {
        {
          FILE_INFO info = {"C:/Users/Lizab/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Math/package.mo",539,7,539,73,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT1));
        }
      }
    }

    tmp4 = _x2 - _x1;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y2 - y1) * (xi - x1) / (x2 - x1)");}
    _yi = _y1 + ((_y2 - _y1) * (_xi - _x1)) / tmp4;

    _iNew = _i;
  }
  _return: OMC_LABEL_UNUSED
  if (out_iNew) { *out_iNew = _iNew; }
  return _yi;
}
modelica_metatype boxptr_Modelica_Math_Vectors_interpolate(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _xi, modelica_metatype _iLast, modelica_metatype *out_iNew)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_integer _iNew;
  modelica_real _yi;
  modelica_metatype out_yi;
  tmp1 = mmc_unbox_real(_xi);
  tmp2 = mmc_unbox_integer(_iLast);
  _yi = omc_Modelica_Math_Vectors_interpolate(threadData, *((base_array_t*)_x), *((base_array_t*)_y), tmp1, tmp2, &_iNew);
  out_yi = mmc_mk_rcon(_yi);
  if (out_iNew) { *out_iNew = mmc_mk_icon(_iNew); }
  return out_yi;
}

#ifdef __cplusplus
}
#endif
