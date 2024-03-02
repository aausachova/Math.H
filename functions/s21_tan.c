#include "../s21_math.h"

long double s21_tan(double x) {
  if (x == S21_INF || x == -S21_INF) {
    return S21_NAN;
  }

  long double tan_x = s21_sin(x) / s21_cos(x);
  // Проверка на бесконечность
  if (tan_x == S21_INF || tan_x == -S21_INF) {
    return S21_NAN;
  }
  return tan_x;
}
