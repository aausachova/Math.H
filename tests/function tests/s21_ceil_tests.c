#include "../s21_math_tests.h"

START_TEST(s21_ceil_1) { ck_assert_ldouble_eq(s21_ceil(1.3), ceil(1.3)); }
END_TEST

START_TEST(s21_ceil_2) { ck_assert_ldouble_eq(s21_ceil(-1.3), ceil(-1.3)); }
END_TEST

START_TEST(s21_ceil_3) { ck_assert_ldouble_eq(s21_ceil(0.1), ceil(0.1)); }
END_TEST

START_TEST(s21_ceil_4) { ck_assert_ldouble_eq(s21_ceil(-0.1), ceil(-0.1)); }
END_TEST

START_TEST(s21_ceil_5) {
  ck_assert_ldouble_eq(s21_ceil(-9999.1), ceil(-9999.1));
}
END_TEST

START_TEST(s21_ceil_6) {
  ck_assert_ldouble_eq(s21_ceil(-9999.123), ceil(-9999.123));
}
END_TEST

START_TEST(s21_ceil_7) {
  ck_assert_ldouble_nan(s21_ceil(NAN));
  ck_assert_ldouble_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_8) {
  ck_assert_ldouble_eq(s21_ceil(-9999999999999999.0),
                       ceil(-9999999999999999.0));
}
END_TEST

START_TEST(s21_ceil_9) { ck_assert_ldouble_eq(s21_ceil(-0), ceil(-0)); }
END_TEST

START_TEST(s21_ceil_10) { ck_assert_ldouble_eq(s21_ceil(0), ceil(0)); }
END_TEST

START_TEST(s21_ceil_11) { ck_assert_ldouble_eq(s21_ceil(-0.7), ceil(-0.7)); }
END_TEST

START_TEST(s21_ceil_12) { ck_assert_ldouble_eq(s21_ceil(-1.9), ceil(-1.9)); }
END_TEST

START_TEST(s21_ceil_13) {
  ck_assert_ldouble_eq(s21_ceil(9999999999999999.0), ceil(9999999999999999.0));
}
END_TEST

START_TEST(s21_ceil_14) { ck_assert_ldouble_eq(s21_ceil(-9.0), ceil(-9.0)); }
END_TEST

START_TEST(s21_ceil_15) { ck_assert_ldouble_eq(s21_ceil(9.0), ceil(9.0)); }
END_TEST

START_TEST(s21_ceil_16) { ck_assert_ldouble_eq(s21_ceil(9), ceil(9)); }
END_TEST

START_TEST(s21_ceil_17) { ck_assert_ldouble_eq(s21_ceil(-9), ceil(-9)); }
END_TEST

START_TEST(s21_ceil_18) {
  ck_assert_ldouble_eq(s21_ceil(-S21_INF_POS), ceil(-S21_INF_POS));
}
END_TEST

START_TEST(s21_ceil_19) {
  ck_assert_ldouble_eq(s21_ceil(S21_INF_POS), ceil(S21_INF_POS));
}
END_TEST

Suite* s21_ceil_suite_create(void) {
  Suite* suite = suite_create(
      "\033[1;35m||========================= \033[0m тест s21_ceil \033[1;35m "
      "=======================||\033[0m\n\n");

  TCase* tcase_core = tcase_create("Core of s21_ceil");

  tcase_add_test(tcase_core, s21_ceil_1);
  tcase_add_test(tcase_core, s21_ceil_2);
  tcase_add_test(tcase_core, s21_ceil_3);
  tcase_add_test(tcase_core, s21_ceil_4);
  tcase_add_test(tcase_core, s21_ceil_5);
  tcase_add_test(tcase_core, s21_ceil_6);
  tcase_add_test(tcase_core, s21_ceil_7);
  tcase_add_test(tcase_core, s21_ceil_8);
  tcase_add_test(tcase_core, s21_ceil_9);
  tcase_add_test(tcase_core, s21_ceil_10);
  tcase_add_test(tcase_core, s21_ceil_11);
  tcase_add_test(tcase_core, s21_ceil_12);
  tcase_add_test(tcase_core, s21_ceil_13);
  tcase_add_test(tcase_core, s21_ceil_14);
  tcase_add_test(tcase_core, s21_ceil_15);
  tcase_add_test(tcase_core, s21_ceil_16);
  tcase_add_test(tcase_core, s21_ceil_17);
  tcase_add_test(tcase_core, s21_ceil_18);
  tcase_add_test(tcase_core, s21_ceil_19);
  suite_add_tcase(suite, tcase_core);

  return suite;
}