#ifndef _CUNIT_CUERROR_H
#define _CUNIT_CUERROR_H

 #include <errno.h>

 /*------------------------------------------------------------------------*/
 typedef enum {
   /* basic errors */
   CUE_SUCCESS           = 0,
   CUE_NOMEMORY          = 1,
   /* Test Registry Level Errors */
   CUE_NOREGISTRY        = 10,
   CUE_REGISTRY_EXISTS   = 11,
   /* Test Suite Level Errors */
   CUE_NOSUITE           = 20,
   CUE_NO_SUITENAME      = 21,
   CUE_SINIT_FAILED      = 22,
   CUE_SCLEAN_FAILED     = 23,
   CUE_DUP_SUITE         = 24,
   /* Test Case Level Errors */
   CUE_NOTEST            = 30,
   CUE_NO_TESTNAME       = 31,
   CUE_DUP_TEST          = 32,
   CUE_TEST_NOT_IN_SUITE = 33,
   /* File handling errors */
   CUE_FOPEN_FAILED      = 40,
   CUE_FCLOSE_FAILED     = 41,
   CUE_BAD_FILENAME      = 42,
   CUE_WRITE_ERROR       = 43
 } CU_ErrorCode;

 /*------------------------------------------------------------------------*/
 typedef enum CU_ErrorAction {
   CUEA_IGNORE,
   CUEA_FAIL,
   CUEA_ABORT
 } CU_ErrorAction;

 /* Error handling & reporting functions. */

 #ifdef __cplusplus
 extern "C" {
 #endif

 CU_ErrorCode   CU_get_error(void);
 const char*    CU_get_error_msg(void);
 void           CU_set_error_action(CU_ErrorAction action);
 CU_ErrorAction CU_get_error_action(void);

 #ifdef CUNIT_BUILD_TESTS
 void test_cunit_CUError(void);
 #endif

 /* Internal function - users should not generally call this function */
 void  CU_set_error(CU_ErrorCode error);

 #ifdef __cplusplus
 }
 #endif

 #ifdef USE_DEPRECATED_CUNIT_NAMES

 #define get_error() CU_get_error_msg()
 #endif  /* USE_DEPRECATED_CUNIT_NAMES */

 #endif  /*  _CUNIT_CUERROR_H  */
