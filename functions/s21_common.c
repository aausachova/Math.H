#include "../s21_math.h"

long double s21_factorial(int x) {
  if (x < 0)
    return 0;
  else if (x == 0 || x == 1)
    return 1;
  long double result = 1;
  for (int i = 2; i <= x; ++i) {
    result *= i;
  }
  return result;
}

long double s21_pow_exp_fast(double base, long long int exp) {
  long double result = 1.0;
  if (exp < 0) {
    exp = -exp;
    base = 1.0 / base;
  }
  while (exp) {
    if (exp & 1) {
      result *= base;
    }
    exp >>= 1;
    base *= base;
  }
  return result;
}

long double s21_pow_int(double base, long long int exp) {
  long double answer = 1;
  exp *= (exp > 0) ? 1 : -1;  // если изначально exp меньше 0, меняем знак

  for (long long int i = 0; i < exp; i++)
    /*
    Если exp положительное,
    то переменная answer умножается на base.
    Если exp отрицательное,
    то переменная answer делится на base
    */
    answer = (exp > 0) ? answer * base : answer / base;
  return answer;
}