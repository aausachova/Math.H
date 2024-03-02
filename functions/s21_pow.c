#include "../s21_math.h"

long double s21_pow_exp_fast(double base, long long int exp);

long double s21_pow(double base, double exp) {
  long double result = base;
  long long int cexp = (long long int)exp;
  if (exp == 0 || base == 1 ||
      (base == -1 && !S21_IS_NAN(exp) &&
       (S21_IS_NAN(exp - exp) || S21_IS_NAN(exp + exp)))) {
    result = 1;
  } else if (S21_IS_NAN(exp)) {
    result = S21_NAN;
  } else if (base == 0 && exp < 0) {
    result = S21_INFINITY;
  } else if (base == 0 && exp == 1) {
    result = 0;
  } else if (!S21_IS_NAN(base) &&
             (S21_IS_NAN(base - base) || S21_IS_NAN(base + base))) {
    if (exp < 0) {
      result = 0;
      if (exp == cexp && cexp % 2 == -1 && base < 0) {
        result *= -1;
      }
    }
    if (exp > 0) {
      if (base < 0) {
        result *= -1;
      }
      if (exp == cexp && cexp % 2 == 1 && base < 0) {
        result *= -1;
      }
    }
  } else {
    if (base < 0) {
      if (exp != cexp) {
        result = S21_NAN;
      } else {
        base = -1 * base;
        long long int exp_i = (long long int)exp;
        double exp_d = exp - exp_i;
        result = s21_exp(s21_log(base) * exp_d) * s21_pow_exp_fast(base, exp_i);
        if (s21_fmod(exp, 2) != 0) {
          result *= -1;
        }
      }
    } else {
      result = s21_exp(s21_log(base) * exp);
    }
  }
  return result;
}
