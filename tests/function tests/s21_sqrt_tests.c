#include "../s21_math_tests.h"

START_TEST(s21_sqrt_1) { ck_assert_ldouble_eq_tol(s21_sqrt(4), sqrt(4), AC); }
END_TEST

START_TEST(s21_sqrt_2) { ck_assert_ldouble_eq_tol(s21_sqrt(9), sqrt(9), AC); }
END_TEST

START_TEST(s21_sqrt_3) {
  ck_assert_ldouble_eq_tol(s21_sqrt(44.44), sqrt(44.44), AC);
}
END_TEST

START_TEST(s21_sqrt_4) {
  ck_assert_ldouble_eq_tol(s21_sqrt(44.444444), sqrt(44.444444), AC);
}
END_TEST

START_TEST(s21_sqrt_6) {
  ck_assert_ldouble_nan(sqrt(-1));
  ck_assert_ldouble_nan(s21_sqrt(-1));
}
END_TEST

START_TEST(s21_sqrt_7) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.123123123123), sqrt(0.123123123123), AC);
}
END_TEST

START_TEST(s21_sqrt_8) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.999999999), sqrt(0.999999999), AC);
}
END_TEST

START_TEST(s21_sqrt_9) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.123123123), sqrt(0.123123123), AC);
}
END_TEST

START_TEST(s21_sqrt_10) {
  ck_assert_ldouble_nan(s21_sqrt(-INFINITY));
  ck_assert_ldouble_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_11) {
  ck_assert_ldouble_nan(s21_sqrt(-7));
  ck_assert_ldouble_nan(sqrt(-7));
}
END_TEST

START_TEST(s21_sqrt_12) {
  ck_assert_ldouble_nan(s21_sqrt(NAN));
  ck_assert_ldouble_nan(sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_13) {
  ck_assert_ldouble_eq_tol(s21_sqrt(159159159159.159159159),
                           sqrt(159159159159.159159159), AC);
}
END_TEST

START_TEST(s21_sqrt_14) {
  ck_assert_ldouble_nan(s21_sqrt(-159159159159.159159159));
  ck_assert_ldouble_nan(sqrt(-159159159159.159159159));
}
END_TEST

START_TEST(s21_sqrt_15) {
  ck_assert_ldouble_eq_tol(s21_sqrt(17.01), sqrt(17.01), AC);
}
END_TEST

START_TEST(s21_sqrt_16) { ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), AC); }
END_TEST

Suite* s21_sqrt_suite_create(void) {
  Suite* suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_sqrt "
      "\033[1;35m "
      "=======================||\033[0m\n\n");

  TCase* tcase_core = tcase_create("Core of s21_sqrt");

  tcase_add_test(tcase_core, s21_sqrt_1);
  tcase_add_test(tcase_core, s21_sqrt_2);
  tcase_add_test(tcase_core, s21_sqrt_3);
  tcase_add_test(tcase_core, s21_sqrt_4);
  tcase_add_test(tcase_core, s21_sqrt_6);
  tcase_add_test(tcase_core, s21_sqrt_7);
  tcase_add_test(tcase_core, s21_sqrt_8);
  tcase_add_test(tcase_core, s21_sqrt_9);
  tcase_add_test(tcase_core, s21_sqrt_10);
  tcase_add_test(tcase_core, s21_sqrt_11);
  tcase_add_test(tcase_core, s21_sqrt_12);
  tcase_add_test(tcase_core, s21_sqrt_13);
  tcase_add_test(tcase_core, s21_sqrt_14);
  tcase_add_test(tcase_core, s21_sqrt_15);
  tcase_add_test(tcase_core, s21_sqrt_16);

  suite_add_tcase(suite, tcase_core);

  return suite;
}