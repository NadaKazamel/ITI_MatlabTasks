/*
 * File: BitwiseCalculator.h
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

#ifndef RTW_HEADER_BitwiseCalculator_h_
#define RTW_HEADER_BitwiseCalculator_h_
#include <string.h>
#include <stddef.h>
#ifndef BitwiseCalculator_COMMON_INCLUDES_
#define BitwiseCalculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BitwiseCalculator_COMMON_INCLUDES_ */

#include "BitwiseCalculator_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Input;                       /* '<Root>/Input' */
  uint8_T Input1;                      /* '<Root>/Input1' */
} ExtU_BitwiseCalculator_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output;                      /* '<Root>/Output' */
  uint8_T Output1;                     /* '<Root>/Output1' */
  uint8_T Output2;                     /* '<Root>/Output2' */
  uint8_T Output3;                     /* '<Root>/Output3' */
  uint8_T Output4;                     /* '<Root>/Output4' */
} ExtY_BitwiseCalculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_BitwiseCalculator_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_BitwiseCalculator_T BitwiseCalculator_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BitwiseCalculator_T BitwiseCalculator_Y;

/* Model entry point functions */
extern void BitwiseCalculator_initialize(void);
extern void BitwiseCalculator_step(void);
extern void BitwiseCalculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BitwiseCalculator_T *const BitwiseCalculator_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BitwiseCalculator'
 */
#endif                                 /* RTW_HEADER_BitwiseCalculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
