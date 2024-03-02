#include "../s21_math.h"

long double s21_sin(double x) {
  long double result = 0;
  if (S21_IS_INF(x)) {
    return S21_NAN;
  } else if (S21_IS_NAN(x)) {
    return S21_NAN;
  } else {
    int sign = x < 0.0;
    x = sign ? -x : x;
    x = x * 2 / S21_PI;
    long long int x_int = (long long int)x;
    x = x - x_int;
    if (x_int % 2) x = 1 - x;
    long double xx = x * x;
    result =
        x * (1.5707963267948965822 +
             xx * (-0.6459640975062407217 +
                   xx * (0.07969262624592800593 +
                         xx * (-0.0046817541307639977752 +
                               xx * (0.00016044114022967599853 +
                                     xx * (-3.5986097146969802712e-6 +
                                           5.629793865626169033e-8 * xx))))));
    if (sign != (x_int / 2) % 2) result = -result;
  }
  return result;
}