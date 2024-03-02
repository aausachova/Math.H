#include "../s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  if (S21_IS_INF(x)) {
    result = S21_INF_POS;
  } else if (x == 0) {
    result = -1 * S21_INF_POS;
  } else if (x < 0) {
    result = S21_NAN;
  } else if (x == 1) {
    result = 0;
  } else if (x == 2) {
    result = S21_LN2;
  } else {
    int n = 0;
    int k = 0;
    if (x > 0 && x < 1) {
      while (x < 1) {
        x *= 2;
        k--;
      }
    } else if (x >= 2) {
      while (x > 10) {
        x /= 10;
        n++;
      }
      while (x > 2) {
        x /= 2;
        k++;
      }
    }
    double buf = x - 1.;
    double vr = buf;
    result = vr;
    for (int i = 2; s21_fabs(vr) > EPS_16; i++) {
      buf *= (-1) * (x - 1.);
      vr = buf / i;
      result += vr;
    }
    result += n * S21_LN10 + k * S21_LN2;
  }
  return result;
}