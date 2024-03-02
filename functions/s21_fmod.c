#include "../s21_math.h"

long double s21_fmod(double base, double exp) {
  int marker = 1;
  if (base < 0) marker = -1;
  long double result = base + exp;
  if (S21_IS_NAN(exp)) {
    result = S21_NAN;
  } else if (S21_IS_NAN(base)) {
    result = S21_NAN;
  } else if (exp == 0) {
    result = S21_NAN;
  } else if (s21_fabs(exp) > 0 && s21_fabs(exp) < S21_EPS) {
    result = 0;
  } else if (base < S21_EPS && base >= 0) {
    result = 0;
  } else if (!S21_IS_NAN(base) &&
             (S21_IS_NAN(base - base) || S21_IS_NAN(base + base))) {
    result = S21_NAN;
  } else if (!S21_IS_NAN(exp) &&
             (S21_IS_NAN(exp - exp) || S21_IS_NAN(exp + exp))) {
    result = base;
  } else {
    base = s21_fabs(base);
    exp = s21_fabs(exp);
    while (base > 0) {
      base -= exp;
      if (base > 2 * exp) {
        long double vr = s21_floor(base / exp - 1) * exp;
        base -= vr;
      }
    }
    if (base == 0) {
      result = base;
    } else {
      result = base + exp;
    }
    result *= marker;
  }
  return result;
}