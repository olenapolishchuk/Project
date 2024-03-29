#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

#include "methods1.h"
#include "methods2.h"


static const double m = 0, s = 1;
double sum() {
	double sum = 0;
	double u[12];
	for (size_t i = 0; i < 12; i++) {
		u[i] = met_1();
		sum += u[i];
	}
	return sum;
}
double met_6() {
	double x;
	x = m + (sum() - 6)*s;
	return x;
}



double met_7() {
	double u[2];
	for (size_t i = 0; i < 2; i++) {
		u[i] = met_1();
	}

	double v1 = 2 * u[0] - 1;
	double v2 = 2 * u[1] - 1;

	double s = v1 * v1 + v2 * v2;
	if (s >= 1) {
		return met_7();
	}
	else {
		double x1 = v1 * sqrt(-2 * log(s) / s);
		double x2 = v2 * sqrt(-2 * log(s) / s);
		return x1 -x2;
	}
}



double met_8() {
	double u = met_1();
	double v = met_4();
	double x = sqrt(8 / M_E)* ((v - 0.5) / u);
	if (x*x <= 5 - 4 * pow(M_E, 0.25)*u)return x;
	if (x*x >= (4 * pow(M_E, -1.35)) / u + 1.4) return met_8();
	if (x*x > -4 * log(u)) return met_8();
	return x;
}