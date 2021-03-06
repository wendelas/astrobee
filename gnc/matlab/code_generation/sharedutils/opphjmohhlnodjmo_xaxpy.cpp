//
// File: opphjmohhlnodjmo_xaxpy.cpp
//
// Code generated for Simulink model 'fam_force_allocation_module'.
//
// Model version                  : 1.1142
// Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
// C/C++ source code generated on : Mon Dec  4 08:34:01 2017
//
#include "rtwtypes.h"
#include "opphjmohhlnodjmo_xaxpy.h"

// Function for MATLAB Function: '<S12>/MATLAB Function'
void opphjmohhlnodjmo_xaxpy(int32_T n, real32_T a, const real32_T x[12], int32_T
  ix0, real32_T y[72], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (!((n < 1) || (a == 0.0F))) {
    ix = (int32_T)(ix0 - 1);
    iy = (int32_T)(iy0 - 1);
    for (k = 0; k <= (int32_T)(n - 1); k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
