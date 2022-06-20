//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: microaccel.cpp
//
// Code generated for Simulink model 'microaccel'.
//
// Model version                  : 3.204
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Sun Jun 19 18:16:15 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "microaccel.h"
#include "microaccel_private.h"

// Block signals (default storage)
B_microaccel_T microaccel_B;

// Block states (default storage)
DW_microaccel_T microaccel_DW;

// Real-time model
RT_MODEL_microaccel_T microaccel_M_ = RT_MODEL_microaccel_T();
RT_MODEL_microaccel_T *const microaccel_M = &microaccel_M_;

// Forward declaration for local functions
static void microaccel_SystemCore_step(boolean_T *varargout_1,
  SL_Bus_microaccel_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0, uint32_T *varargout_2_Layout_DataOffset,
  real_T varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren,
  uint32_T *varargout_2_Data_SL_Info_Receiv);
static void microaccel_SystemCore_step(boolean_T *varargout_1,
  SL_Bus_microaccel_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0, uint32_T *varargout_2_Layout_DataOffset,
  real_T varargout_2_Data[128], uint32_T *varargout_2_Data_SL_Info_Curren,
  uint32_T *varargout_2_Data_SL_Info_Receiv)
{
  *varargout_1 = Sub_microaccel_599.getLatestMessage(&microaccel_B.b_varargout_2);
  memcpy(&varargout_2_Layout_Dim[0], &microaccel_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_microaccel_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    microaccel_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    microaccel_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = microaccel_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Data[0], &microaccel_B.b_varargout_2.Data[0], sizeof
         (real_T) << 7U);
  *varargout_2_Data_SL_Info_Curren =
    microaccel_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    microaccel_B.b_varargout_2.Data_SL_Info.ReceivedLength;
}

// Model step function
void microaccel_step(void)
{
  SL_Bus_microaccel_std_msgs_Float64 rtb_BusAssignment2;
  SL_Bus_microaccel_std_msgs_Float64 rtb_BusAssignment3;
  SL_Bus_microaccel_std_msgs_Float64 rtb_BusAssignment4;
  SL_Bus_microaccel_std_msgs_Float64 rtb_BusAssignment5;
  int32_T i;
  int32_T k;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_I_0;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  boolean_T b_varargout_1;
  boolean_T exitg1;

  // Outputs for Atomic SubSystem: '<S1>/Subscribe8'
  // MATLABSystem: '<S17>/SourceBlock' incorporates:
  //   Inport: '<S22>/In1'

  b_varargout_1 = Sub_microaccel_559.getLatestMessage
    (&microaccel_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S17>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S22>/Enable'

  if (b_varargout_1) {
    microaccel_B.In1_e = microaccel_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S17>/SourceBlock'
  // End of Outputs for SubSystem: '<S17>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe8'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe6'
  // MATLABSystem: '<S16>/SourceBlock' incorporates:
  //   Inport: '<S21>/In1'

  b_varargout_1 = Sub_microaccel_562.getLatestMessage
    (&microaccel_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S16>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S21>/Enable'

  if (b_varargout_1) {
    microaccel_B.In1_i = microaccel_B.b_varargout_2_m;
  }

  // End of MATLABSystem: '<S16>/SourceBlock'
  // End of Outputs for SubSystem: '<S16>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe6'

  // Outputs for Atomic SubSystem: '<S1>/Subscribe4'
  // MATLABSystem: '<S15>/SourceBlock' incorporates:
  //   Inport: '<S20>/In1'

  b_varargout_1 = Sub_microaccel_624.getLatestMessage
    (&microaccel_B.BusAssignment1);

  // Outputs for Enabled SubSystem: '<S15>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S20>/Enable'

  if (b_varargout_1) {
    microaccel_B.In1_n = microaccel_B.BusAssignment1;
  }

  // End of MATLABSystem: '<S15>/SourceBlock'
  // End of Outputs for SubSystem: '<S15>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe4'

  // Sum: '<S1>/Subtract2'
  microaccel_B.Subtract2 = microaccel_B.In1_n.Linear.Z +
    microaccel_B.In1_e.Linear.X;

  // Outputs for Atomic SubSystem: '<S1>/Subscribe2'
  // MATLABSystem: '<S14>/SourceBlock' incorporates:
  //   Inport: '<S19>/In1'

  b_varargout_1 = Sub_microaccel_576.getLatestMessage
    (&microaccel_B.b_varargout_2_m);

  // Outputs for Enabled SubSystem: '<S14>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S19>/Enable'

  if (b_varargout_1) {
    microaccel_B.In1_k = microaccel_B.b_varargout_2_m;
  }

  // End of MATLABSystem: '<S14>/SourceBlock'
  // End of Outputs for SubSystem: '<S14>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe2'

  // MATLABSystem: '<S1>/Current Time2'
  currentROSTimeBus(&microaccel_B.r);

  // Sum: '<S1>/Total Time2' incorporates:
  //   Gain: '<S1>/Gain2'
  //   MATLABSystem: '<S1>/Current Time2'

  microaccel_B.TotalTime2 = microaccel_P.Gain2_Gain * microaccel_B.r.Nsec +
    microaccel_B.r.Sec;

  // Sum: '<S1>/Subtract1' incorporates:
  //   Memory: '<S1>/Memory'

  microaccel_B.Subtract1 = microaccel_B.TotalTime2 -
    microaccel_DW.Memory_PreviousInput;

  // MATLABSystem: '<S1>/Get Parameter'
  ParamGet_microaccel_585.get_parameter(&microaccel_B.v_max);

  // Outputs for Atomic SubSystem: '<S1>/Subscribe'
  // MATLABSystem: '<S13>/SourceBlock' incorporates:
  //   Inport: '<S18>/In1'

  microaccel_SystemCore_step(&b_varargout_1,
    microaccel_B.b_varargout_2_Layout_Dim, &b_varargout_2_Layout_Dim_SL_Inf,
    &b_varargout_2_Layout_Dim_SL_I_0, &b_varargout_2_Layout_DataOffset,
    microaccel_B.b_varargout_2_Data, &b_varargout_2_Data_SL_Info_Curr,
    &b_varargout_2_Data_SL_Info_Rece);

  // Outputs for Enabled SubSystem: '<S13>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S18>/Enable'

  if (b_varargout_1) {
    memcpy(&microaccel_B.In1.Layout.Dim[0],
           &microaccel_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_microaccel_std_msgs_MultiArrayDimension) << 4U);
    microaccel_B.In1.Layout.Dim_SL_Info.CurrentLength =
      b_varargout_2_Layout_Dim_SL_Inf;
    microaccel_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      b_varargout_2_Layout_Dim_SL_I_0;
    microaccel_B.In1.Layout.DataOffset = b_varargout_2_Layout_DataOffset;
    memcpy(&microaccel_B.In1.Data[0], &microaccel_B.b_varargout_2_Data[0],
           sizeof(real_T) << 7U);
    microaccel_B.In1.Data_SL_Info.CurrentLength =
      b_varargout_2_Data_SL_Info_Curr;
    microaccel_B.In1.Data_SL_Info.ReceivedLength =
      b_varargout_2_Data_SL_Info_Rece;
  }

  // End of MATLABSystem: '<S13>/SourceBlock'
  // End of Outputs for SubSystem: '<S13>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S1>/Subscribe'

  // MATLAB Function: '<S1>/MATLAB Function' incorporates:
  //   MATLABSystem: '<S1>/Get Parameter'

  if (!microaccel_DW.time_avg_target_not_empty) {
    microaccel_DW.t_length = 1.0;
    memset(&microaccel_DW.time_avg_target[0], 0, 1280U * sizeof(real_T));
    microaccel_DW.time_avg_target_not_empty = true;
    microaccel_DW.time_avg_target[1279] = microaccel_B.Subtract2;
  } else {
    for (i = 0; i < 1279; i++) {
      microaccel_DW.time_avg_target[i] = microaccel_DW.time_avg_target[i + 1];
    }

    microaccel_DW.time_avg_target[1279] = microaccel_B.Subtract2;
    if (microaccel_DW.t_length < 1280.0) {
      microaccel_DW.t_length++;
    }
  }

  if (!microaccel_DW.previous_dx_not_empty) {
    microaccel_DW.previous_dx = microaccel_B.In1_i.Data;
    microaccel_DW.previous_dx_not_empty = true;
  }

  if (!rtIsNaN(microaccel_B.In1.Data[0])) {
    i = 1;
  } else {
    i = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 129)) {
      if (!rtIsNaN(microaccel_B.In1.Data[k - 1])) {
        i = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (i == 0) {
    microaccel_B.v_des_data = microaccel_B.In1.Data[0];
  } else {
    microaccel_B.v_des_data = microaccel_B.In1.Data[i - 1];
    while (i + 1 < 129) {
      if (microaccel_B.v_des_data > microaccel_B.In1.Data[i]) {
        microaccel_B.v_des_data = microaccel_B.In1.Data[i];
      }

      i++;
    }
  }

  microaccel_B.v_des_dot = microaccel_DW.time_avg_target[0];
  for (i = 0; i < 1023; i++) {
    microaccel_B.v_des_dot += microaccel_DW.time_avg_target[i + 1];
  }

  microaccel_B.bsum = microaccel_DW.time_avg_target[1024];
  for (i = 0; i < 255; i++) {
    microaccel_B.bsum += microaccel_DW.time_avg_target[i + 1025];
  }

  if ((1.0 > microaccel_B.In1_e.Linear.X) || rtIsNaN(microaccel_B.In1_e.Linear.X))
  {
    microaccel_B.a_0 = 1.0;
  } else {
    microaccel_B.a_0 = microaccel_B.In1_e.Linear.X;
  }

  microaccel_B.a_0 = (microaccel_B.In1_i.Data - 3.0 *
                      microaccel_B.In1_e.Linear.X) * 5.0 / microaccel_B.a_0;
  if ((0.0 > microaccel_B.a_0) || rtIsNaN(microaccel_B.a_0)) {
    microaccel_B.a_0 = 0.0;
  }

  microaccel_B.bsum = ((microaccel_B.a_0 * microaccel_B.a_0 * 0.1 +
                        (microaccel_B.v_des_dot + microaccel_B.bsum) /
                        microaccel_DW.t_length) + 4.0 * microaccel_B.v_des_data)
    / 5.0;
  if (!microaccel_DW.previous_v_des_not_empty) {
    microaccel_DW.previous_v_des_not_empty = true;
    microaccel_B.v_des_dot = 0.0;
  } else {
    microaccel_B.v_des_dot = (microaccel_B.bsum - microaccel_DW.previous_v_des) /
      microaccel_B.Subtract1;
  }

  microaccel_DW.previous_v_des = microaccel_B.bsum;
  if (microaccel_B.In1_i.Data - 2.0 > 0.0) {
    microaccel_B.a_0 = microaccel_B.In1_i.Data - 2.0;
  } else {
    microaccel_B.a_0 = 0.0;
  }

  microaccel_B.v_max = sqrt((microaccel_B.Subtract2 * microaccel_B.Subtract2 *
    0.5 / fabs(microaccel_B.v_max) + microaccel_B.a_0) * 6.0);
  if (!microaccel_DW.previous_v_max_not_empty) {
    microaccel_DW.previous_v_max_not_empty = true;
    microaccel_B.Subtract1 = 0.0;
  } else if (fabs(microaccel_B.In1_i.Data - microaccel_DW.previous_dx) >
             microaccel_B.Subtract1 * 50.0) {
    microaccel_B.Subtract1 = 0.0;
  } else {
    microaccel_B.Subtract1 = (microaccel_B.v_max - microaccel_DW.previous_v_max)
      / microaccel_B.Subtract1;
  }

  microaccel_DW.previous_v_max = microaccel_B.v_max;
  if ((0.0 > microaccel_B.In1_i.Data - 2.0) || rtIsNaN(microaccel_B.In1_i.Data -
       2.0)) {
    microaccel_B.a_0 = 0.0;
  } else {
    microaccel_B.a_0 = microaccel_B.In1_i.Data - 2.0;
  }

  microaccel_B.a_12 = microaccel_B.In1_e.Linear.X * microaccel_B.In1_e.Linear.X *
    -0.5 / ((microaccel_B.Subtract2 + 0.001) * (microaccel_B.Subtract2 + 0.001) *
            0.5 / fabs(microaccel_B.In1_k.Data - 0.01) + microaccel_B.a_0);
  microaccel_B.a_0 = microaccel_B.In1_k.Data * microaccel_B.In1_e.Linear.X /
    (microaccel_B.Subtract2 + 0.001);
  if (microaccel_B.In1_k.Data < 0.0) {
    if (microaccel_B.a_12 > microaccel_B.a_0) {
      microaccel_B.a_0 = microaccel_B.a_12;
    } else if (!(microaccel_B.Subtract2 >= microaccel_B.In1_e.Linear.X)) {
      microaccel_B.a_12 = microaccel_B.In1_e.Linear.X - microaccel_B.Subtract2;
      if (microaccel_B.In1_i.Data - 2.0 > 0.001) {
        microaccel_B.a_0 = microaccel_B.In1_i.Data - 2.0;
      } else {
        microaccel_B.a_0 = 0.001;
      }

      microaccel_B.a_0 = microaccel_B.In1_k.Data - microaccel_B.a_12 *
        microaccel_B.a_12 * 0.5 / microaccel_B.a_0;
    }
  } else if (microaccel_B.In1_k.Data >= 0.0) {
    if (microaccel_B.In1_e.Linear.X >= microaccel_B.Subtract2) {
      microaccel_B.a_12 = microaccel_B.In1_e.Linear.X - microaccel_B.Subtract2;
      if (microaccel_B.In1_i.Data - 2.0 > 0.001) {
        microaccel_B.a_0 = microaccel_B.In1_i.Data - 2.0;
      } else {
        microaccel_B.a_0 = 0.001;
      }

      microaccel_B.a_0 = microaccel_B.In1_k.Data - microaccel_B.a_12 *
        microaccel_B.a_12 * 0.5 / microaccel_B.a_0;
    } else {
      microaccel_B.a_0 = (microaccel_B.Subtract2 - microaccel_B.In1_e.Linear.X) *
        microaccel_B.In1_k.Data + microaccel_B.In1_k.Data;
      if ((1.0 < microaccel_B.a_0) || rtIsNaN(microaccel_B.a_0)) {
        microaccel_B.a_0 = 1.0;
      }
    }
  } else {
    microaccel_B.a_0 = (rtNaN);
  }

  if ((microaccel_B.In1_e.Linear.X > microaccel_B.Subtract2) || rtIsNaN
      (microaccel_B.Subtract2)) {
    microaccel_B.Subtract2 = microaccel_B.In1_e.Linear.X;
  }

  if (microaccel_B.In1_i.Data > microaccel_B.Subtract2 * 5.0) {
    microaccel_B.a_0 = 1.0;
  }

  microaccel_DW.previous_dx = microaccel_B.In1_i.Data;
  microaccel_B.Subtract2 = -(microaccel_B.In1_e.Linear.X - microaccel_B.bsum) +
    microaccel_B.v_des_dot;
  if (!(microaccel_B.Subtract2 > -1.0)) {
    microaccel_B.Subtract2 = -1.0;
  }

  microaccel_B.Subtract1 += -(microaccel_B.In1_e.Linear.X - microaccel_B.v_max);
  if ((microaccel_B.Subtract2 < microaccel_B.Subtract1) || rtIsNaN
      (microaccel_B.Subtract1)) {
    microaccel_B.v_des_dot = microaccel_B.Subtract2;
  } else {
    microaccel_B.v_des_dot = microaccel_B.Subtract1;
  }

  if ((!(microaccel_B.v_des_dot < microaccel_B.a_0)) && (!rtIsNaN
       (microaccel_B.a_0))) {
    microaccel_B.v_des_dot = microaccel_B.a_0;
  }

  if (!(microaccel_B.v_des_dot > -3.0)) {
    microaccel_B.v_des_dot = -3.0;
  }

  if (!(microaccel_B.v_des_dot < 1.0)) {
    microaccel_B.v_des_dot = 1.0;
  }

  if ((microaccel_B.In1_e.Linear.X >= 30.0) && ((0.0 < microaccel_B.v_des_dot) ||
       rtIsNaN(microaccel_B.v_des_dot))) {
    microaccel_B.v_des_dot = 0.0;
  }

  // BusAssignment: '<S1>/Bus Assignment1' incorporates:
  //   Constant: '<S1>/Constant'
  //   Constant: '<S2>/Constant'
  //   MATLAB Function: '<S1>/MATLAB Function'

  microaccel_B.BusAssignment1 = microaccel_P.Constant_Value_j;
  microaccel_B.BusAssignment1.Linear.X = microaccel_B.bsum;
  microaccel_B.BusAssignment1.Linear.Y = microaccel_B.v_des_data;
  microaccel_B.BusAssignment1.Linear.Z = 6.0;
  microaccel_B.BusAssignment1.Angular.Z = microaccel_P.Constant_Value_a;
  microaccel_B.BusAssignment1.Angular.X = microaccel_B.v_max;

  // Outputs for Atomic SubSystem: '<S1>/Publish1'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_microaccel_592.publish(&microaccel_B.BusAssignment1);

  // End of Outputs for SubSystem: '<S1>/Publish1'

  // BusAssignment: '<S1>/Bus Assignment5' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment5.Data = microaccel_B.v_des_dot;

  // Outputs for Atomic SubSystem: '<S1>/Publish2'
  // MATLABSystem: '<S9>/SinkBlock'
  Pub_microaccel_609.publish(&rtb_BusAssignment5);

  // End of Outputs for SubSystem: '<S1>/Publish2'

  // BusAssignment: '<S1>/Bus Assignment2' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment2.Data = microaccel_B.Subtract2;

  // Outputs for Atomic SubSystem: '<S1>/Publish3'
  // MATLABSystem: '<S10>/SinkBlock'
  Pub_microaccel_610.publish(&rtb_BusAssignment2);

  // End of Outputs for SubSystem: '<S1>/Publish3'

  // BusAssignment: '<S1>/Bus Assignment3' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment3.Data = microaccel_B.Subtract1;

  // Outputs for Atomic SubSystem: '<S1>/Publish4'
  // MATLABSystem: '<S11>/SinkBlock'
  Pub_microaccel_611.publish(&rtb_BusAssignment3);

  // End of Outputs for SubSystem: '<S1>/Publish4'

  // BusAssignment: '<S1>/Bus Assignment4' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function'

  rtb_BusAssignment4.Data = microaccel_B.a_0;

  // Outputs for Atomic SubSystem: '<S1>/Publish5'
  // MATLABSystem: '<S12>/SinkBlock'
  Pub_microaccel_612.publish(&rtb_BusAssignment4);

  // End of Outputs for SubSystem: '<S1>/Publish5'

  // Update for Memory: '<S1>/Memory'
  microaccel_DW.Memory_PreviousInput = microaccel_B.TotalTime2;
}

// Model initialize function
void microaccel_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimName[17];
    char_T b_zeroDelimTopic_2[11];
    char_T b_zeroDelimTopic_0[10];
    char_T b_zeroDelimTopic_3[9];
    char_T b_zeroDelimTopic_1[8];
    char_T b_zeroDelimTopic[4];
    static const char_T tmp[9] = { 'l', 'e', 'a', 'd', '_', 'd', 'i', 's', 't' };

    static const char_T tmp_0[7] = { 'r', 'e', 'l', '_', 'v', 'e', 'l' };

    static const char_T tmp_1[10] = { 'l', 'e', 'a', 'd', '_', 'a', 'c', 'c',
      'e', 'l' };

    static const char_T tmp_2[9] = { 'd', 'o', 'w', 'n', '_', 'd', 'a', 't', 'a'
    };

    static const char_T tmp_3[7] = { 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_4[9] = { 'c', 'm', 'd', '_', 'a', 'c', 'c', 'e', 'l'
    };

    static const char_T tmp_5[9] = { 'a', '_', 'v', 'd', 'e', 's', 'o', 'u', 't'
    };

    static const char_T tmp_6[9] = { 'a', '_', 'v', 'm', 'a', 'x', 'o', 'u', 't'
    };

    static const char_T tmp_7[8] = { 'a', '_', 'm', 'n', 'g', 'o', 'u', 't' };

    static const char_T tmp_8[16] = { 'm', 'a', 'x', '_', 'd', 'e', 'a', 'c',
      'c', 'e', 'l', '_', 'l', 'e', 'a', 'd' };

    // InitializeConditions for Memory: '<S1>/Memory'
    microaccel_DW.Memory_PreviousInput = microaccel_P.Memory_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe8'
    // SystemInitialize for Enabled SubSystem: '<S17>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S22>/Out1' incorporates:
    //   Inport: '<S22>/In1'

    microaccel_B.In1_e = microaccel_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S17>/Enabled Subsystem'

    // Start for MATLABSystem: '<S17>/SourceBlock'
    microaccel_DW.obj_k.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_k.isInitialized = 1;
    b_zeroDelimTopic[0] = 'v';
    b_zeroDelimTopic[1] = 'e';
    b_zeroDelimTopic[2] = 'l';
    b_zeroDelimTopic[3] = '\x00';
    Sub_microaccel_559.createSubscriber(&b_zeroDelimTopic[0], 1);
    microaccel_DW.obj_k.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S1>/Subscribe8'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe6'
    // SystemInitialize for Enabled SubSystem: '<S16>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S21>/Out1' incorporates:
    //   Inport: '<S21>/In1'

    microaccel_B.In1_i = microaccel_P.Out1_Y0_m;

    // End of SystemInitialize for SubSystem: '<S16>/Enabled Subsystem'

    // Start for MATLABSystem: '<S16>/SourceBlock'
    microaccel_DW.obj_n0.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_n0.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Sub_microaccel_562.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    microaccel_DW.obj_n0.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S16>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe6'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe4'
    // SystemInitialize for Enabled SubSystem: '<S15>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S20>/Out1' incorporates:
    //   Inport: '<S20>/In1'

    microaccel_B.In1_n = microaccel_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S15>/Enabled Subsystem'

    // Start for MATLABSystem: '<S15>/SourceBlock'
    microaccel_DW.obj_h.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_0[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Sub_microaccel_624.createSubscriber(&b_zeroDelimTopic_1[0], 1);
    microaccel_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S15>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe4'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S14>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S19>/Out1' incorporates:
    //   Inport: '<S19>/In1'

    microaccel_B.In1_k = microaccel_P.Out1_Y0_j;

    // End of SystemInitialize for SubSystem: '<S14>/Enabled Subsystem'

    // Start for MATLABSystem: '<S14>/SourceBlock'
    microaccel_DW.obj_d.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      b_zeroDelimTopic_2[i] = tmp_1[i];
    }

    b_zeroDelimTopic_2[10] = '\x00';
    Sub_microaccel_576.createSubscriber(&b_zeroDelimTopic_2[0], 1);
    microaccel_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S14>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<S1>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S13>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S18>/Out1' incorporates:
    //   Inport: '<S18>/In1'

    microaccel_B.In1 = microaccel_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S13>/Enabled Subsystem'

    // Start for MATLABSystem: '<S13>/SourceBlock'
    microaccel_DW.obj_ep.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_ep.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_2[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Sub_microaccel_599.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    microaccel_DW.obj_ep.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S13>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish1'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    microaccel_DW.obj_c.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 7; i++) {
      b_zeroDelimTopic_1[i] = tmp_3[i];
    }

    b_zeroDelimTopic_1[7] = '\x00';
    Pub_microaccel_592.createPublisher(&b_zeroDelimTopic_1[0], 1);
    microaccel_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish2'
    // Start for MATLABSystem: '<S9>/SinkBlock'
    microaccel_DW.obj_n5.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_n5.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_4[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_microaccel_609.createPublisher(&b_zeroDelimTopic_0[0], 1);
    microaccel_DW.obj_n5.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish3'
    // Start for MATLABSystem: '<S10>/SinkBlock'
    microaccel_DW.obj_nb.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_nb.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_5[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_microaccel_610.createPublisher(&b_zeroDelimTopic_0[0], 1);
    microaccel_DW.obj_nb.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish3'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish4'
    // Start for MATLABSystem: '<S11>/SinkBlock'
    microaccel_DW.obj_nj.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_nj.isInitialized = 1;
    for (i = 0; i < 9; i++) {
      b_zeroDelimTopic_0[i] = tmp_6[i];
    }

    b_zeroDelimTopic_0[9] = '\x00';
    Pub_microaccel_611.createPublisher(&b_zeroDelimTopic_0[0], 1);
    microaccel_DW.obj_nj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish4'

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish5'
    // Start for MATLABSystem: '<S12>/SinkBlock'
    microaccel_DW.obj_n.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      b_zeroDelimTopic_3[i] = tmp_7[i];
    }

    b_zeroDelimTopic_3[8] = '\x00';
    Pub_microaccel_612.createPublisher(&b_zeroDelimTopic_3[0], 1);
    microaccel_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S12>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish5'

    // Start for MATLABSystem: '<S1>/Current Time2'
    microaccel_DW.obj.matlabCodegenIsDeleted = false;
    microaccel_DW.obj.isInitialized = 1;
    microaccel_DW.obj.isSetupComplete = true;

    // Start for MATLABSystem: '<S1>/Get Parameter'
    microaccel_DW.obj_e.matlabCodegenIsDeleted = false;
    microaccel_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      b_zeroDelimName[i] = tmp_8[i];
    }

    b_zeroDelimName[16] = '\x00';
    ParamGet_microaccel_585.initialize(&b_zeroDelimName[0]);
    ParamGet_microaccel_585.initialize_error_codes(0, 1, 2, 3);
    ParamGet_microaccel_585.set_initial_value(-4.5);
    microaccel_DW.obj_e.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter'
  }
}

// Model terminate function
void microaccel_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S1>/Subscribe8'
  // Terminate for MATLABSystem: '<S17>/SourceBlock'
  if (!microaccel_DW.obj_k.matlabCodegenIsDeleted) {
    microaccel_DW.obj_k.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S17>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe8'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe6'
  // Terminate for MATLABSystem: '<S16>/SourceBlock'
  if (!microaccel_DW.obj_n0.matlabCodegenIsDeleted) {
    microaccel_DW.obj_n0.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S16>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe6'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe4'
  // Terminate for MATLABSystem: '<S15>/SourceBlock'
  if (!microaccel_DW.obj_h.matlabCodegenIsDeleted) {
    microaccel_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S15>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe4'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe2'
  // Terminate for MATLABSystem: '<S14>/SourceBlock'
  if (!microaccel_DW.obj_d.matlabCodegenIsDeleted) {
    microaccel_DW.obj_d.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S14>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe2'

  // Terminate for MATLABSystem: '<S1>/Current Time2'
  if (!microaccel_DW.obj.matlabCodegenIsDeleted) {
    microaccel_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Current Time2'

  // Terminate for MATLABSystem: '<S1>/Get Parameter'
  if (!microaccel_DW.obj_e.matlabCodegenIsDeleted) {
    microaccel_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S1>/Get Parameter'

  // Terminate for Atomic SubSystem: '<S1>/Subscribe'
  // Terminate for MATLABSystem: '<S13>/SourceBlock'
  if (!microaccel_DW.obj_ep.matlabCodegenIsDeleted) {
    microaccel_DW.obj_ep.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SourceBlock'
  // End of Terminate for SubSystem: '<S1>/Subscribe'

  // Terminate for Atomic SubSystem: '<S1>/Publish1'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!microaccel_DW.obj_c.matlabCodegenIsDeleted) {
    microaccel_DW.obj_c.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish1'

  // Terminate for Atomic SubSystem: '<S1>/Publish2'
  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  if (!microaccel_DW.obj_n5.matlabCodegenIsDeleted) {
    microaccel_DW.obj_n5.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish2'

  // Terminate for Atomic SubSystem: '<S1>/Publish3'
  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!microaccel_DW.obj_nb.matlabCodegenIsDeleted) {
    microaccel_DW.obj_nb.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish3'

  // Terminate for Atomic SubSystem: '<S1>/Publish4'
  // Terminate for MATLABSystem: '<S11>/SinkBlock'
  if (!microaccel_DW.obj_nj.matlabCodegenIsDeleted) {
    microaccel_DW.obj_nj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish4'

  // Terminate for Atomic SubSystem: '<S1>/Publish5'
  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!microaccel_DW.obj_n.matlabCodegenIsDeleted) {
    microaccel_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'
  // End of Terminate for SubSystem: '<S1>/Publish5'
}

//
// File trailer for generated code.
//
// [EOF]
//
