#define _USE_MATH_DEFINES
#include <cmath>

#include <iostream>

#include "methods3.h"
#include "methods1.h"



static const double m = 10;

double met_9() {
	double u = met_4();
	double x = -m * log(u);
	return x;
}
static const double a = 10;

double met_10() {
	double u = met_1();
	double y = tan(M_PI*u);
	double x = sqrt(2 * a - 1)*y + a - 1;
	if (x <= 0) return met_10();
	double v = met_4();
	if (v > (1 + y * y)*exp((a - 1)*log(x / (a - 1)) - sqrt(2 * a - 1)*y)) return met_10();
	return x;
}