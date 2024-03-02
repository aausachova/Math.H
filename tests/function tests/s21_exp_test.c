#include <float.h>

#include "../s21_math_tests.h"

START_TEST(test_positive_input_values) {
  double x = 2.0;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}  // (с допуском) когда значения не обязаны быть равными идеально
END_TEST
START_TEST(test_inf_pos) {
  double x = S21_INF;
  ck_assert_ldouble_eq(exp(x), s21_exp(x));
}
END_TEST
START_TEST(test_inf_neg) {
  double x = S21_INF_NEG;
  ck_assert_ldouble_eq(exp(x), s21_exp(x));
}
END_TEST

START_TEST(test_neg) {
  double x = -2;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}
END_TEST

START_TEST(test_zero_input_value) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}
END_TEST

START_TEST(test_nan_pos) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST
START_TEST(test_nan_neg) {
  double x = S21_NEGZERO;
  ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), 1e-6);
}
END_TEST
START_TEST(test_infinity_negative) {
  double x = S21_INF_NEG;
  ck_assert_ldouble_eq(exp(x), s21_exp(x));
}
END_TEST

START_TEST(test_maximum) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq(exp(x), s21_exp(x));
}
END_TEST
START_TEST(test_minimum) {
  double x = DBL_MIN;
  ck_assert_ldouble_eq(exp(x), s21_exp(x));
}
END_TEST
Suite *s21_suite_exp(void) {
  Suite *suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_exp "
      "\033[1;35m "
      "========================||\033[0m\n\n");
  TCase *tc = tcase_create("энто мои тестики");
  tcase_add_test(tc, test_positive_input_values);
  tcase_add_test(tc, test_inf_pos);
  tcase_add_test(tc, test_inf_neg);
  tcase_add_test(tc, test_neg);
  tcase_add_test(tc, test_zero_input_value);
  tcase_add_test(tc, test_nan_pos);
  tcase_add_test(tc, test_nan_neg);
  tcase_add_test(tc, test_infinity_negative);
  tcase_add_test(tc, test_maximum);
  tcase_add_test(tc, test_minimum);
  suite_add_tcase(suite, tc);
  return suite;
}