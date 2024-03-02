#include "s21_math_tests.h"

int main(void) {
  Suite* cases[] = {s21_abs_suite_create(),  s21_acos_suite_create(),
                    s21_asin_suite_create(), s21_atan_suite_create(),
                    s21_ceil_suite_create(), s21_sqrt_suite_create(),
                    s21_log_suite_create(),  s21_pow_tests(),
                    s21_sin_suite_create(),  s21_tan_suite_create(),
                    s21_suite_fmod(),        s21_suite_floor(),
                    s21_suite_fabs(),        s21_suite_exp(),
                    s21_suite_cos(),         NULL};

  for (Suite** current_testcase = cases; *current_testcase != NULL;
       current_testcase++) {
    SRunner* runner = srunner_create(*current_testcase);
    srunner_run_all(runner, CK_NORMAL);
    srunner_ntests_failed(runner);
    srunner_free(runner);
  }

  return EXIT_SUCCESS;
}
