#ifndef _S21_MATH_TESTS_H_
#define _S21_MATH_TESTS_H_
#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "../s21_math.h"

Suite* s21_abs_suite_create(void);
Suite* s21_acos_suite_create(void);
Suite* s21_asin_suite_create(void);
Suite* s21_atan_suite_create(void);
Suite* s21_ceil_suite_create(void);
Suite* s21_log_suite_create(void);
Suite* s21_pow_tests(void);
Suite* s21_sin_suite_create(void);
Suite* s21_sqrt_suite_create(void);
Suite* s21_tan_suite_create(void);
Suite* s21_suite_fmod(void);
Suite* s21_suite_floor(void);
Suite* s21_suite_fabs(void);
Suite* s21_suite_cos(void);
Suite* s21_suite_exp(void);

#endif  // _S21_MATH_TESTS_H_
