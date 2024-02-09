/*
 * File: Calculator.c
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb  9 02:04:32 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Calculator.h"
#include "Calculator_private.h"

/* Block signals (default storage) */
B_Calculator_T Calculator_B;

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_T Calculator_Y;

/* Real-time model */
static RT_MODEL_Calculator_T Calculator_M_;
RT_MODEL_Calculator_T *const Calculator_M = &Calculator_M_;

/* Model step function */
void Calculator_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  Calculator_Y.Output = Calculator_U.Input + Calculator_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  Calculator_Y.Output1 = Calculator_U.Input - Calculator_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Product'
   */
  Calculator_Y.Output2 = Calculator_U.Input * Calculator_U.Input1;

  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<S2>/In1'
   */
  if (Calculator_U.Input1 == 0.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Output4' incorporates:
     *  Constant: '<Root>/Constant'
     *  Inport: '<S1>/In1'
     */
    Calculator_Y.Output4 = -1.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    Calculator_B.In1 = Calculator_U.Input1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  }

  /* End of If: '<Root>/If' */

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Product: '<Root>/Divide'
   */
  Calculator_Y.Output3 = Calculator_U.Input / Calculator_B.In1;

  /* Outport: '<Root>/Output5' incorporates:
   *  Bias: '<Root>/Add Constant'
   *  Inport: '<Root>/Input'
   */
  Calculator_Y.Output5 = Calculator_U.Input + 1.0;

  /* Outport: '<Root>/Output6' incorporates:
   *  Bias: '<Root>/Add Constant1'
   *  Inport: '<Root>/Input1'
   */
  Calculator_Y.Output6 = Calculator_U.Input1 + 1.0;

  /* Outport: '<Root>/Output7' incorporates:
   *  Inport: '<Root>/Input'
   *  UnaryMinus: '<Root>/Unary Minus'
   */
  Calculator_Y.Output7 = -Calculator_U.Input;

  /* Outport: '<Root>/Output8' incorporates:
   *  Inport: '<Root>/Input1'
   *  UnaryMinus: '<Root>/Unary Minus1'
   */
  Calculator_Y.Output8 = -Calculator_U.Input1;
}

/* Model initialize function */
void Calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calculator_B), 0,
                sizeof(B_Calculator_T));

  /* external inputs */
  (void)memset(&Calculator_U, 0, sizeof(ExtU_Calculator_T));

  /* external outputs */
  (void) memset((void *)&Calculator_Y, 0,
                sizeof(ExtY_Calculator_T));
}

/* Model terminate function */
void Calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
