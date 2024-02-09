/*
 * File: BitwiseCalculator.c
 *
 * Code generated for Simulink model 'BitwiseCalculator'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 03:13:21 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BitwiseCalculator.h"
#include "BitwiseCalculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_BitwiseCalculator_T BitwiseCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BitwiseCalculator_T BitwiseCalculator_Y;

/* Real-time model */
static RT_MODEL_BitwiseCalculator_T BitwiseCalculator_M_;
RT_MODEL_BitwiseCalculator_T *const BitwiseCalculator_M = &BitwiseCalculator_M_;

/* Model step function */
void BitwiseCalculator_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT'
   */
  BitwiseCalculator_Y.Output = (uint8_T)~BitwiseCalculator_U.Input;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise NOT1'
   */
  BitwiseCalculator_Y.Output1 = (uint8_T)~BitwiseCalculator_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise AND'
   */
  BitwiseCalculator_Y.Output2 = (uint8_T)(BitwiseCalculator_U.Input &
    BitwiseCalculator_U.Input1);

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise OR'
   */
  BitwiseCalculator_Y.Output3 = (uint8_T)(BitwiseCalculator_U.Input |
    BitwiseCalculator_U.Input1);

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise XOR'
   */
  BitwiseCalculator_Y.Output4 = (uint8_T)(BitwiseCalculator_U.Input ^
    BitwiseCalculator_U.Input1);
}

/* Model initialize function */
void BitwiseCalculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(BitwiseCalculator_M, (NULL));

  /* external inputs */
  (void)memset(&BitwiseCalculator_U, 0, sizeof(ExtU_BitwiseCalculator_T));

  /* external outputs */
  (void) memset((void *)&BitwiseCalculator_Y, 0,
                sizeof(ExtY_BitwiseCalculator_T));
}

/* Model terminate function */
void BitwiseCalculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
