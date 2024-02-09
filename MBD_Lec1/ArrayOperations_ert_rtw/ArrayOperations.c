/*
 * File: ArrayOperations.c
 *
 * Code generated for Simulink model 'ArrayOperations'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 02:44:44 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ArrayOperations.h"
#include "ArrayOperations_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_ArrayOperations_T ArrayOperations_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ArrayOperations_T ArrayOperations_Y;

/* Real-time model */
static RT_MODEL_ArrayOperations_T ArrayOperations_M_;
RT_MODEL_ArrayOperations_T *const ArrayOperations_M = &ArrayOperations_M_;

/* Model step function */
void ArrayOperations_step(void)
{
  real_T rtb_SumofElements;
  boolean_T tmp;
  boolean_T tmp_0;
  boolean_T tmp_1;

  /* MinMax: '<Root>/Max' incorporates:
   *  Inport: '<Root>/Input'
   *  MinMax: '<Root>/Max1'
   */
  tmp = rtIsNaN(ArrayOperations_U.Input[1]);
  if ((ArrayOperations_U.Input[0] > ArrayOperations_U.Input[1]) || tmp) {
    rtb_SumofElements = ArrayOperations_U.Input[0];
  } else {
    rtb_SumofElements = ArrayOperations_U.Input[1];
  }

  tmp_1 = !rtIsNaN(ArrayOperations_U.Input[2]);
  if ((!(rtb_SumofElements > ArrayOperations_U.Input[2])) && tmp_1) {
    rtb_SumofElements = ArrayOperations_U.Input[2];
  }

  tmp_0 = rtIsNaN(ArrayOperations_U.Input[3]);
  if ((rtb_SumofElements > ArrayOperations_U.Input[3]) || tmp_0) {
    /* Outport: '<Root>/Output' */
    ArrayOperations_Y.Output = rtb_SumofElements;
  } else {
    /* Outport: '<Root>/Output' */
    ArrayOperations_Y.Output = ArrayOperations_U.Input[3];
  }

  /* End of MinMax: '<Root>/Max' */

  /* MinMax: '<Root>/Max1' incorporates:
   *  Inport: '<Root>/Input'
   */
  if ((ArrayOperations_U.Input[0] < ArrayOperations_U.Input[1]) || tmp) {
    rtb_SumofElements = ArrayOperations_U.Input[0];
  } else {
    rtb_SumofElements = ArrayOperations_U.Input[1];
  }

  if ((!(rtb_SumofElements < ArrayOperations_U.Input[2])) && tmp_1) {
    rtb_SumofElements = ArrayOperations_U.Input[2];
  }

  if ((rtb_SumofElements < ArrayOperations_U.Input[3]) || tmp_0) {
    /* Outport: '<Root>/Output1' */
    ArrayOperations_Y.Output1 = rtb_SumofElements;
  } else {
    /* Outport: '<Root>/Output1' */
    ArrayOperations_Y.Output1 = ArrayOperations_U.Input[3];
  }

  /* Sum: '<Root>/Sum of Elements' incorporates:
   *  Inport: '<Root>/Input'
   */
  rtb_SumofElements = ((ArrayOperations_U.Input[0] + ArrayOperations_U.Input[1])
                       + ArrayOperations_U.Input[2]) + ArrayOperations_U.Input[3];

  /* Outport: '<Root>/Output2' */
  ArrayOperations_Y.Output2 = rtb_SumofElements;

  /* Outport: '<Root>/Output3' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  Product: '<Root>/Divide'
   */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:3' y = numel(u); */
  ArrayOperations_Y.Output3 = rtb_SumofElements / 4.0;
}

/* Model initialize function */
void ArrayOperations_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(ArrayOperations_M, (NULL));

  /* external inputs */
  (void)memset(&ArrayOperations_U, 0, sizeof(ExtU_ArrayOperations_T));

  /* external outputs */
  (void) memset((void *)&ArrayOperations_Y, 0,
                sizeof(ExtY_ArrayOperations_T));
}

/* Model terminate function */
void ArrayOperations_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
