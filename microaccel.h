//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: microaccel.h
//
// Code generated for Simulink model 'microaccel'.
//
// Model version                  : 3.200
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Fri May 20 18:43:49 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_microaccel_h_
#define RTW_HEADER_microaccel_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "microaccel_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_microaccel_T {
  SL_Bus_microaccel_std_msgs_Float64MultiArray In1;// '<S18>/In1'
  SL_Bus_microaccel_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_microaccel_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T b_varargout_2_Data[128];
  SL_Bus_microaccel_geometry_msgs_Twist In1_e;// '<S22>/In1'
  SL_Bus_microaccel_geometry_msgs_Twist In1_p;// '<S19>/In1'
  SL_Bus_microaccel_geometry_msgs_Twist BusAssignment1;// '<S1>/Bus Assignment1' 
  char_T b_zeroDelimName[17];
  SL_Bus_microaccel_ros_time_Time r;
  real_T v_des_data;
  real_T v_des_dot;
  real_T v_max;
  real_T a_12;
  real_T a_0;
  real_T bsum;
  real_T TotalTime2;                   // '<S1>/Total Time2'
  real_T Subtract1;                    // '<S1>/Subtract1'
  SL_Bus_microaccel_std_msgs_Float64 In1_i;// '<S21>/In1'
  SL_Bus_microaccel_std_msgs_Float64 In1_k;// '<S20>/In1'
  SL_Bus_microaccel_std_msgs_Float64 b_varargout_2_m;
};

// Block states (default storage) for system '<Root>'
struct DW_microaccel_T {
  ros_slros_internal_block_Curr_T obj; // '<S1>/Current Time2'
  ros_slros_internal_block_GetP_T obj_e;// '<S1>/Get Parameter'
  ros_slroscpp_internal_block_P_T obj_n;// '<S12>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_nj;// '<S11>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_nb;// '<S10>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_n5;// '<S9>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_c;// '<S8>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_k;// '<S17>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n0;// '<S16>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S15>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_a;// '<S14>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_ep;// '<S13>/SourceBlock'
  real_T Memory_PreviousInput;         // '<S1>/Memory'
  real_T previous_v_max;               // '<S1>/MATLAB Function'
  real_T previous_v_des;               // '<S1>/MATLAB Function'
  real_T previous_dx;                  // '<S1>/MATLAB Function'
  real_T time_avg_target[1280];        // '<S1>/MATLAB Function'
  real_T t_length;                     // '<S1>/MATLAB Function'
  boolean_T previous_v_max_not_empty;  // '<S1>/MATLAB Function'
  boolean_T previous_v_des_not_empty;  // '<S1>/MATLAB Function'
  boolean_T previous_dx_not_empty;     // '<S1>/MATLAB Function'
  boolean_T time_avg_target_not_empty; // '<S1>/MATLAB Function'
};

// Parameters (default storage)
struct P_microaccel_T_ {
  SL_Bus_microaccel_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                          //  Referenced by: '<S18>/Out1'

  SL_Bus_microaccel_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                 //  Referenced by: '<S13>/Constant'

  SL_Bus_microaccel_geometry_msgs_Twist Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                            //  Referenced by: '<S2>/Constant'

  SL_Bus_microaccel_geometry_msgs_Twist Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                                     //  Referenced by: '<S19>/Out1'

  SL_Bus_microaccel_geometry_msgs_Twist Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                            //  Referenced by: '<S14>/Constant'

  SL_Bus_microaccel_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                     //  Referenced by: '<S22>/Out1'

  SL_Bus_microaccel_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                            //  Referenced by: '<S17>/Constant'

  SL_Bus_microaccel_std_msgs_Float64 Constant_Value_jy;// Computed Parameter: Constant_Value_jy
                                                          //  Referenced by: '<S3>/Constant'

  SL_Bus_microaccel_std_msgs_Float64 Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                         //  Referenced by: '<S4>/Constant'

  SL_Bus_microaccel_std_msgs_Float64 Constant_Value_og;// Computed Parameter: Constant_Value_og
                                                          //  Referenced by: '<S5>/Constant'

  SL_Bus_microaccel_std_msgs_Float64 Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                         //  Referenced by: '<S6>/Constant'

  SL_Bus_microaccel_std_msgs_Float64 Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                                  //  Referenced by: '<S20>/Out1'

  SL_Bus_microaccel_std_msgs_Float64 Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                         //  Referenced by: '<S15>/Constant'

  SL_Bus_microaccel_std_msgs_Float64 Out1_Y0_m;// Computed Parameter: Out1_Y0_m
                                                  //  Referenced by: '<S21>/Out1'

  SL_Bus_microaccel_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                         //  Referenced by: '<S16>/Constant'

  real_T Gain2_Gain;                   // Expression: 1e-9
                                          //  Referenced by: '<S1>/Gain2'

  real_T Memory_InitialCondition;      // Expression: 0
                                          //  Referenced by: '<S1>/Memory'

  real_T Constant_Value_a;             // Expression: 0
                                          //  Referenced by: '<S1>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_microaccel_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_microaccel_T microaccel_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_microaccel_T microaccel_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_microaccel_T microaccel_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void microaccel_initialize(void);
  extern void microaccel_step(void);
  extern void microaccel_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_microaccel_T *const microaccel_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'microaccel'
//  '<S1>'   : 'microaccel/MicroAccel'
//  '<S2>'   : 'microaccel/MicroAccel/Blank Message1'
//  '<S3>'   : 'microaccel/MicroAccel/Blank Message2'
//  '<S4>'   : 'microaccel/MicroAccel/Blank Message3'
//  '<S5>'   : 'microaccel/MicroAccel/Blank Message4'
//  '<S6>'   : 'microaccel/MicroAccel/Blank Message5'
//  '<S7>'   : 'microaccel/MicroAccel/MATLAB Function'
//  '<S8>'   : 'microaccel/MicroAccel/Publish1'
//  '<S9>'   : 'microaccel/MicroAccel/Publish2'
//  '<S10>'  : 'microaccel/MicroAccel/Publish3'
//  '<S11>'  : 'microaccel/MicroAccel/Publish4'
//  '<S12>'  : 'microaccel/MicroAccel/Publish5'
//  '<S13>'  : 'microaccel/MicroAccel/Subscribe'
//  '<S14>'  : 'microaccel/MicroAccel/Subscribe1'
//  '<S15>'  : 'microaccel/MicroAccel/Subscribe2'
//  '<S16>'  : 'microaccel/MicroAccel/Subscribe6'
//  '<S17>'  : 'microaccel/MicroAccel/Subscribe8'
//  '<S18>'  : 'microaccel/MicroAccel/Subscribe/Enabled Subsystem'
//  '<S19>'  : 'microaccel/MicroAccel/Subscribe1/Enabled Subsystem'
//  '<S20>'  : 'microaccel/MicroAccel/Subscribe2/Enabled Subsystem'
//  '<S21>'  : 'microaccel/MicroAccel/Subscribe6/Enabled Subsystem'
//  '<S22>'  : 'microaccel/MicroAccel/Subscribe8/Enabled Subsystem'

#endif                                 // RTW_HEADER_microaccel_h_

//
// File trailer for generated code.
//
// [EOF]
//
