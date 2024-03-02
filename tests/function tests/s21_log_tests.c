#include "../s21_math_tests.h"

START_TEST(s21_log_1) { ck_assert_ldouble_eq_tol(s21_log(1), log(1), AC); }
END_TEST

START_TEST(s21_log_2) { ck_assert_ldouble_eq_tol(s21_log(15), log(15), AC); }
END_TEST

START_TEST(s21_log_3) {
  ck_assert_ldouble_eq_tol(s21_log(0.2544576373), log(0.2544576373), AC);
}
END_TEST

START_TEST(s21_log_4) {
  ck_assert_ldouble_nan(s21_log(-6));
  ck_assert_ldouble_nan(log(-6));
}
END_TEST

START_TEST(s21_log_5) {
  ck_assert_ldouble_nan(s21_log(-1));
  ck_assert_ldouble_nan(log(-1));
}
END_TEST

START_TEST(s21_log_6) {
  ck_assert_ldouble_eq_tol(s21_log(1.123123), log(1.123123), AC);
}
END_TEST

START_TEST(s21_log_7) {
  ck_assert_ldouble_nan(s21_log(S21_NAN));
  ck_assert_ldouble_nan(exp(S21_NAN));
}
END_TEST

START_TEST(s21_log_8) {
  ck_assert_ldouble_nan(s21_log(-567));
  ck_assert_ldouble_nan(log(-567));
}
END_TEST

START_TEST(s21_log_9) { ck_assert_ldouble_eq_tol(s21_log(999), log(999), AC); }
END_TEST

START_TEST(s21_log_10) { ck_assert_ldouble_eq_tol(s21_log(21), log(21), AC); }
END_TEST

START_TEST(s21_log_11) {
  ck_assert_ldouble_eq_tol(s21_log(1.156156), log(1.156156), AC);
}
END_TEST

START_TEST(s21_log_12) {
  ck_assert_ldouble_eq_tol(s21_log(1.156156), log(1.156156), AC);
}
END_TEST

START_TEST(s21_log_13) {
  ck_assert_ldouble_eq_tol(s21_log(0.2544576373), log(0.2544576373), AC);
}
END_TEST

START_TEST(s21_log_14) {
  ck_assert_ldouble_eq_tol(s21_log(0.5555555555555555), log(0.5555555555555555),
                           AC);
}
END_TEST

START_TEST(s21_log_15) {
  ck_assert_ldouble_eq_tol(s21_log(25.978987987879978778),
                           log(25.978987987879978778), AC);
}
END_TEST

START_TEST(s21_log_16) {
  ck_assert_ldouble_infinite(s21_log(0));
  ck_assert_ldouble_infinite(log(0));
}
END_TEST

START_TEST(s21_log_17) {
  ck_assert_ldouble_infinite(s21_log(S21_INFINITY));
  ck_assert_ldouble_infinite(log(S21_INFINITY));
}
END_TEST

START_TEST(s21_log_18) { ck_assert_ldouble_eq_tol(s21_log(2), log(2), AC); }
END_TEST

Suite* s21_log_suite_create(void) {
  Suite* suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_log "
      "\033[1;35m "
      "========================||\033[0m\n\n");

  TCase* tcase_core = tcase_create("Core of s21_log");

  tcase_add_test(tcase_core, s21_log_1);
  tcase_add_test(tcase_core, s21_log_2);
  tcase_add_test(tcase_core, s21_log_3);
  tcase_add_test(tcase_core, s21_log_4);
  tcase_add_test(tcase_core, s21_log_5);
  tcase_add_test(tcase_core, s21_log_6);
  tcase_add_test(tcase_core, s21_log_7);
  tcase_add_test(tcase_core, s21_log_8);
  tcase_add_test(tcase_core, s21_log_9);
  tcase_add_test(tcase_core, s21_log_10);
  tcase_add_test(tcase_core, s21_log_11);
  tcase_add_test(tcase_core, s21_log_12);
  tcase_add_test(tcase_core, s21_log_13);
  tcase_add_test(tcase_core, s21_log_14);
  tcase_add_test(tcase_core, s21_log_15);
  tcase_add_test(tcase_core, s21_log_16);
  tcase_add_test(tcase_core, s21_log_17);
  tcase_add_test(tcase_core, s21_log_18);

  suite_add_tcase(suite, tcase_core);

  return suite;
}