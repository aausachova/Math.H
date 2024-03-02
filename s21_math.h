#ifndef S21_MATH_H
#define S21_MATH_H
#include <limits.h>
#include <stdio.h>

#define S21_PI 3.14159265358979323846
#define S21_NAN 0.0 / 0.0
#define S21_N_NAN -0.0 / 0.0
#define S21_INF_POS +1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_INF 1.0 / 0.0
#define S21_LN2 0.693147180559945309417232
#define S21_LN10 2.30258509299404590109361379290930927
#define S21_E 2.71828182845904523536028747
#define EPS_16 1e-16
#define S21_EPS 1e-16
#define AC 1e-06
#define S21_INFINITY 1.0 / 0.0
#define S21_IS_INF(x) (x == S21_INF_NEG || x == S21_INF_POS)
#define S21_IS_NAN(x) (x != x)
#define S21_NEGZERO -0.0
#define TEST_EPS 1e-6l

long double s21_factorial(int x);
long double s21_pow_exp_fast(double base, long long int exp);

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif  // S21_MATH_H