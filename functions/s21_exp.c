#include "../s21_math.h"

long double s21_exp(double x) {
  long double i = 1;
  long double step = 1;
  long double result = 1;
  int flag_max = 0;

  if (S21_IS_NAN(x)) {
    result = S21_NAN;
  } else if (x == S21_INF_POS) {
    result = S21_INF_POS;
  } else if (x == S21_INF_NEG || x < -14.5) {
    result = 0.0;
  } else {
    while (s21_fabs(step) > EPS_16 && flag_max == 0) {
      step *= x / i;
      i++;
      result += step;
      if (result > 1 / EPS_16) {
        flag_max = 1;
        result = S21_INF_POS;
      }
    }
  }

  return result;
}
