#include "../s21_math_tests.h"

START_TEST(s21_acos_1) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_2) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_3) {
  long double test_val = S21_NAN;
  ck_assert_ldouble_nan(s21_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(s21_acos_4) {
  long double test_val = S21_INF_POS;
  ck_assert_ldouble_nan(s21_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(s21_acos_5) {
  long double test_val = -S21_INF_POS;
  ck_assert_ldouble_nan(s21_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(s21_acos_6) {
  long double test_val = -S21_NAN;
  ck_assert_ldouble_nan(s21_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(s21_acos_7) {
  long double test_val = S21_PI;
  ck_assert_ldouble_nan(s21_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(s21_acos_8) {
  long double test_val = -S21_PI;
  ck_assert_ldouble_nan(s21_acos(test_val));
  ck_assert_ldouble_nan(acos(test_val));
}
END_TEST

START_TEST(s21_acos_9) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_10) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_11) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_12) {
  long double test_val = S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_13) {
  long double test_val = -S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_14) {
  long double test_val = S21_PI / 9;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_15) {
  long double test_val = -S21_PI / 9;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_16) {
  long double test_val = S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_17) {
  long double test_val = -S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_18) {
  long double test_val = S21_PI / 21;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_19) {
  long double test_val = -S21_PI / 21;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_20) {
  long double test_val = S21_PI / 99;
  ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_acos_21) {
  for (int i = 0; i < 5; ++i) {
    long double test_val = i * 0.01 * S21_PI;
    ck_assert_ldouble_eq_tol(s21_acos(test_val), acos(test_val), 1e-06);
    long double test_val_m = -i * 0.01 * S21_PI;
    ck_assert_ldouble_eq_tol(s21_acos(test_val_m), acos(test_val_m), 1e-06);
  }
}
END_TEST

Suite* s21_acos_suite_create(void) {
  Suite* suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_acos \033[1;35m "
      "=======================||\033[0m\n\n");

  TCase* tcase_core = tcase_create("Core of s21_acos");

  tcase_add_test(tcase_core, s21_acos_1);
  tcase_add_test(tcase_core, s21_acos_2);
  tcase_add_test(tcase_core, s21_acos_3);
  tcase_add_test(tcase_core, s21_acos_4);
  tcase_add_test(tcase_core, s21_acos_5);
  tcase_add_test(tcase_core, s21_acos_6);
  tcase_add_test(tcase_core, s21_acos_7);
  tcase_add_test(tcase_core, s21_acos_8);
  tcase_add_test(tcase_core, s21_acos_9);
  tcase_add_test(tcase_core, s21_acos_10);
  tcase_add_test(tcase_core, s21_acos_11);
  tcase_add_test(tcase_core, s21_acos_12);
  tcase_add_test(tcase_core, s21_acos_13);
  tcase_add_test(tcase_core, s21_acos_14);
  tcase_add_test(tcase_core, s21_acos_15);
  tcase_add_test(tcase_core, s21_acos_16);
  tcase_add_test(tcase_core, s21_acos_17);
  tcase_add_test(tcase_core, s21_acos_18);
  tcase_add_test(tcase_core, s21_acos_19);
  tcase_add_test(tcase_core, s21_acos_20);
  tcase_add_test(tcase_core, s21_acos_21);

  suite_add_tcase(suite, tcase_core);

  return suite;
}