#include "../s21_math_tests.h"

START_TEST(test_pow_1) {
  double base = 1.0;
  double exp = 1.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_2) {
  double base = 1.0;
  double exp = 0.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_3) {
  double base = 0.0;
  double exp = 0.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_4) {
  double base = 0.0;
  double exp = -1.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_5) {
  double base = 0.0;
  double exp = 1.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_6) {
  double base = 1.0;
  double exp = -4.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_7) {
  double base = -3.0;
  double exp = 3.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_8) {
  double base = -3.0;
  double exp = 2.0;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_11) {
  double base = -INFINITY;
  double exp = INFINITY;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_12) {
  double base = -INFINITY;
  double exp = -INFINITY;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

START_TEST(test_pow_13) {
  double base = INFINITY;
  double exp = -INFINITY;

  ck_assert_ldouble_eq(s21_pow(base, exp), pow(base, exp));
}
END_TEST

Suite *s21_pow_tests(void) {
  Suite *s = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_pow "
      "\033[1;35m "
      "========================||\033[0m\n\n");
  TCase *tc_core;
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_pow_1);
  tcase_add_test(tc_core, test_pow_2);
  tcase_add_test(tc_core, test_pow_3);
  tcase_add_test(tc_core, test_pow_4);
  tcase_add_test(tc_core, test_pow_5);
  tcase_add_test(tc_core, test_pow_6);
  tcase_add_test(tc_core, test_pow_7);
  tcase_add_test(tc_core, test_pow_8);
  tcase_add_test(tc_core, test_pow_11);
  tcase_add_test(tc_core, test_pow_12);
  tcase_add_test(tc_core, test_pow_13);
  suite_add_tcase(s, tc_core);
  return s;
}