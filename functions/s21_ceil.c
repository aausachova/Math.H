#include "../s21_math.h"

long double s21_ceil(double x) {
  if (S21_IS_NAN(x) || S21_IS_NAN(x - x) || S21_IS_NAN(x + x)) return x;

  if (x == 0) return 0;

  if (x > 0) {
    if (x == (long long int)x) {
      return (long long int)x;
    } else {
      return (long long int)x + 1;
    }
  }

  if (x < 0) return (long long int)x;

  return x;
}
