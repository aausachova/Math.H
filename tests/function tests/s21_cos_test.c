#include "../s21_math_tests.h"

START_TEST(s21_cos_1) {
  long double test_val = 1;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_2) {
  long double test_val = -1;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_3) {
  long double test_val = S21_NAN;
  ck_assert_ldouble_nan(s21_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(s21_cos_4) {
  long double test_val = S21_INF_POS;
  ck_assert_ldouble_nan(s21_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(s21_cos_5) {
  long double test_val = -S21_INF_POS;
  ck_assert_ldouble_nan(s21_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(s21_cos_6) {
  long double test_val = -S21_NAN;
  ck_assert_ldouble_nan(s21_cos(test_val));
  ck_assert_ldouble_nan(cos(test_val));
}
END_TEST

START_TEST(s21_cos_7) {
  long double test_val = S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_8) {
  long double test_val = -S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_9) {
  long double test_val = 0.789789;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_10) {
  long double test_val = -0.789789;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_11) {
  long double test_val = 0;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_12) {
  long double test_val = S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_13) {
  long double test_val = -S21_PI / 5;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_14) {
  long double test_val = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_15) {
  long double test_val = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_16) {
  long double test_val = S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_17) {
  long double test_val = -S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_18) {
  long double test_val = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_19) {
  long double test_val = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_20) {
  long double test_val = 2 * S21_PI;
  ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
}
END_TEST

START_TEST(s21_cos_21) {
  for (int i = 0; i < 5; ++i) {
    long double test_val = i * S21_PI;
    ck_assert_ldouble_eq_tol(s21_cos(test_val), cos(test_val), 1e-06);
    long double test_val_m = -i * S21_PI;
    ck_assert_ldouble_eq_tol(s21_cos(test_val_m), cos(test_val_m), 1e-06);
  }
}
END_TEST

START_TEST(s21_cos_22) {
  for (double i = -S21_PI; i <= S21_PI; i += 1.234567) {
    ck_assert_ldouble_eq_tol(cos(1234567890.123456 + i),
                             s21_cos(1234567890.123456 + i), 1e-06);
  }
}
END_TEST

START_TEST(s21_cos_23) {
  for (double i = -S21_PI; i <= S21_PI; i += 1.234467) {
    ck_assert_ldouble_eq_tol(cos(-1234567890.123456 + i),
                             s21_cos(-1234567890.123456 + i), 1e-06);
  }
}
END_TEST

START_TEST(s21_cos_24) {
  ck_assert_ldouble_eq_tol(s21_cos(9999999999.999999), cos(9999999999.999999),
                           1e-06);
}
END_TEST

START_TEST(s21_cos_25) {
  ck_assert_ldouble_eq_tol(s21_cos(-9999999999.999999), cos(-9999999999.999999),
                           1e-06);
}
END_TEST
Suite* s21_suite_cos(void) {
  Suite* suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_cos "
      "\033[1;35m "
      "========================||\033[0m\n\n");

  TCase* tcase_core = tcase_create("Core of s21_cos");

  tcase_add_test(tcase_core, s21_cos_1);
  tcase_add_test(tcase_core, s21_cos_2);
  tcase_add_test(tcase_core, s21_cos_3);
  tcase_add_test(tcase_core, s21_cos_4);
  tcase_add_test(tcase_core, s21_cos_5);
  tcase_add_test(tcase_core, s21_cos_6);
  tcase_add_test(tcase_core, s21_cos_7);
  tcase_add_test(tcase_core, s21_cos_8);
  tcase_add_test(tcase_core, s21_cos_9);
  tcase_add_test(tcase_core, s21_cos_10);
  tcase_add_test(tcase_core, s21_cos_11);
  tcase_add_test(tcase_core, s21_cos_12);
  tcase_add_test(tcase_core, s21_cos_13);
  tcase_add_test(tcase_core, s21_cos_14);
  tcase_add_test(tcase_core, s21_cos_15);
  tcase_add_test(tcase_core, s21_cos_16);
  tcase_add_test(tcase_core, s21_cos_17);
  tcase_add_test(tcase_core, s21_cos_18);
  tcase_add_test(tcase_core, s21_cos_19);
  tcase_add_test(tcase_core, s21_cos_20);
  tcase_add_test(tcase_core, s21_cos_21);
  tcase_add_test(tcase_core, s21_cos_22);
  tcase_add_test(tcase_core, s21_cos_23);
  tcase_add_test(tcase_core, s21_cos_24);
  tcase_add_test(tcase_core, s21_cos_25);

  suite_add_tcase(suite, tcase_core);

  return suite;
}