#include "../s21_math.h"

long double s21_asin(double x) {
  long double tm = x;
  long double result_asin =
      (x == 1.0) ? S21_PI / 2.0 : ((x == -1.0) ? -S21_PI / 2.0 : S21_NAN);

  if (-1.0 < x && x < 1.0) {
    result_asin = tm;
    x *= x;

    for (int k = 1; s21_fabs(tm) > 1e-12; k += 2) {
      result_asin += (tm *= x * k / (k + 1)) / (k + 2);
    }
  }

  return result_asin;
}