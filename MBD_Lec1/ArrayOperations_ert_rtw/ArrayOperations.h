/*
 * File: ArrayOperations.h
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

#ifndef RTW_HEADER_ArrayOperations_h_
#define RTW_HEADER_ArrayOperations_h_
#include <string.h>
#include <stddef.h>
#ifndef ArrayOperations_COMMON_INCLUDES_
#define ArrayOperations_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ArrayOperations_COMMON_INCLUDES_ */

#include "ArrayOperations_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input[4];                     /* '<Root>/Input' */
} ExtU_ArrayOperations_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
} ExtY_ArrayOperations_T;

/* Real-time Model Data Structure */
struct tag_RTM_ArrayOperations_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_ArrayOperations_T ArrayOperations_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ArrayOperations_T ArrayOperations_Y;

/* Model entry point functions */
extern void ArrayOperations_initialize(void);
extern void ArrayOperations_step(void);
extern void ArrayOperations_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ArrayOperations_T *const ArrayOperations_M;

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
 * '<Root>' : 'ArrayOperations'
 * '<S1>'   : 'ArrayOperations/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_ArrayOperations_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
