#include "../s21_math_tests.h"

START_TEST(s21_tan_1) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_2) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_3) {
  long double test_val = S21_NAN;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_4) {
  long double test_val = S21_INFINITY;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_5) {
  long double test_val = -S21_INFINITY;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_6) {
  long double test_val = -S21_NAN;
  ck_assert_ldouble_nan(s21_tan(test_val));
  ck_assert_ldouble_nan(tan(test_val));
}
END_TEST

START_TEST(s21_tan_7) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_8) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_9) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_10) {
  long double test_val = S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_11) {
  long double test_val = -S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_12) {
  long double test_val = S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

START_TEST(s21_tan_13) {
  long double test_val = -S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_tan(test_val), tan(test_val), AC);
}
END_TEST

Suite* s21_tan_suite_create(void) {
  Suite* suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_tan "
      "\033[1;35m "
      "========================||\033[0m\n\n");

  TCase* tcase_core = tcase_create("Core of s21_tan");

  tcase_add_test(tcase_core, s21_tan_1);
  tcase_add_test(tcase_core, s21_tan_2);
  tcase_add_test(tcase_core, s21_tan_3);
  tcase_add_test(tcase_core, s21_tan_4);
  tcase_add_test(tcase_core, s21_tan_5);
  tcase_add_test(tcase_core, s21_tan_6);
  tcase_add_test(tcase_core, s21_tan_7);
  tcase_add_test(tcase_core, s21_tan_8);
  tcase_add_test(tcase_core, s21_tan_9);
  tcase_add_test(tcase_core, s21_tan_10);
  tcase_add_test(tcase_core, s21_tan_11);
  tcase_add_test(tcase_core, s21_tan_12);
  tcase_add_test(tcase_core, s21_tan_13);

  suite_add_tcase(suite, tcase_core);

  return suite;
}