#include "../s21_math.h"

long double s21_floor(double x) {
  long double result = x;
  if (!S21_IS_NAN(x) && (S21_IS_NAN(x - x) || S21_IS_NAN(x + x))) {
    result = x;
  } else if (x == 0) {
    result = 0;
  } else if (x > 0) {
    result = (long long int)x;
  } else if (x < 0) {
    if (x == (long long int)x) {
      result = (long long int)x;
    } else {
      result = (long long int)x - 1;
    }
  }
  return result;
}