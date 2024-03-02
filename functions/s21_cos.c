#include "../s21_math.h"

long double s21_pow_int(double base, long long int exp);

long double s21_cos(double x) {
  long double res = 0;

  if (x == S21_INF || x == -(S21_INF))
    res = S21_NAN;
  else if (x == 0)
    res = 1;
  else if (x == S21_PI || x == -(S21_PI))
    res = -1;
  else if (S21_IS_NAN(x))
    res = S21_NAN;
  else {
    x = s21_fmod(x, 2 * S21_PI);
    for (int i = 0; i < 20; i++) {
      res += s21_pow_int(-1, i) * s21_pow_int(x, 2 * i) / s21_factorial(2 * i);
    }
  }
  return res;
}