#include "../s21_math_tests.h"

START_TEST(s21_abs_1) { ck_assert_int_eq(s21_abs(44), abs(44)); }
END_TEST

START_TEST(s21_abs_2) { ck_assert_int_eq(s21_abs(-44), abs(-44)); }
END_TEST

START_TEST(s21_abs_3) {
  ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
}
END_TEST

START_TEST(s21_abs_4) {
  ck_assert_int_eq(s21_abs(2147483647), abs(2147483647));
}
END_TEST

START_TEST(s21_abs_5) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(s21_abs_6) { ck_assert_int_eq(s21_abs(+0), abs(+0)); }
END_TEST

START_TEST(s21_abs_7) { ck_assert_int_eq(s21_abs(123), abs(123)); }
END_TEST

START_TEST(s21_abs_8) { ck_assert_int_eq(s21_abs(INT32_MAX), abs(INT32_MAX)); }
END_TEST

START_TEST(s21_abs_9) { ck_assert_int_eq(s21_abs(INT32_MIN), abs(INT32_MIN)); }
END_TEST

START_TEST(s21_abs_10) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(s21_abs_11) { ck_assert_int_eq(s21_abs(123), abs(123)); }
END_TEST

START_TEST(s21_abs_12) { ck_assert_int_eq(s21_abs(4456), abs(4456)); }
END_TEST

START_TEST(s21_abs_13) { ck_assert_int_eq(s21_abs(678), abs(678)); }
END_TEST

START_TEST(s21_abs_14) { ck_assert_int_eq(s21_abs(111111), abs(111111)); }
END_TEST

START_TEST(s21_abs_15) { ck_assert_int_eq(s21_abs(-111111), abs(-111111)); }
END_TEST

Suite *s21_abs_suite_create(void) {
  Suite *suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_abs \033[1;35m "
      "========================||\033[0m\n\n");
  TCase *tcase_core = tcase_create("Core");
  tcase_add_test(tcase_core, s21_abs_1);
  tcase_add_test(tcase_core, s21_abs_2);
  tcase_add_test(tcase_core, s21_abs_3);
  tcase_add_test(tcase_core, s21_abs_4);
  tcase_add_test(tcase_core, s21_abs_5);
  tcase_add_test(tcase_core, s21_abs_6);
  tcase_add_test(tcase_core, s21_abs_7);
  tcase_add_test(tcase_core, s21_abs_8);
  tcase_add_test(tcase_core, s21_abs_9);
  tcase_add_test(tcase_core, s21_abs_10);
  tcase_add_test(tcase_core, s21_abs_11);
  tcase_add_test(tcase_core, s21_abs_12);
  tcase_add_test(tcase_core, s21_abs_13);
  tcase_add_test(tcase_core, s21_abs_14);
  tcase_add_test(tcase_core, s21_abs_15);
  suite_add_tcase(suite, tcase_core);
  return suite;
}