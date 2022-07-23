#ifndef _MATH_H
#define _MATH_H 1

#include "stdint.h"

#define PI 3.14159265358979323846

double machine_eps(double x);
uint32_t fact(uint32_t n);
double abs(double x);
double pow(double x, double y);
double sqrt(double x);
double inv_sqrt(double x);
double sin(double x);
double cos(double x);
double tan(double x);
double asin(double x);
double acos(double x);
double atan(double x);
double sinh(double x);
double cosh(double x);
double tanh(double x);
double asinh(double x);
double acosh(double x);
double atanh(double x);
double exp(double x);
double ln(double x);
uint32_t log2(uint32_t x);
double log10(double x);
double log(double x, double y);
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

#endif
