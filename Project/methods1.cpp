#include <iostream>

#include "methods1.h"


const int max_ = 20000;
static int x0 = 1;
bool is_prime(int n) {
	if (n != 1) {
		for (int i = 2; i < n / 2. + 1; i++) {
			return (n%i) != 0;
		}
	}
	else return false;
}
int m_is_prime() {
	for (int i = max_; i > 1; i--) {
		if (is_prime(i)) return i;
	}
}
void methods1(int t) {
	x0 = t;
}





static const int m1 = m_is_prime(), a1 = 17681, c1 = 21379;
int met_1_int() {

	x0 = (a1*x0 + c1) % m1;
	return x0;

}
double met_1() {
	return met_1_int() / double(m1);
}



static const int m2 = 13873, a2 = 836, c2 = 12345, d2 = 7;
int met_2_int() {
	x0 = (d2*x0*x0 + a2 * x0 + c2) % m2;

	return x0;
}
double met_2() {
	return met_2_int() / double(m2);
}




static const int m3 = m_is_prime();
static int f1 = 0, f2 = 1, f;// , n = 83739;//x0=n
int met_3_int() {
	for (int k = 1; k < x0; ++k) {
		f = (f1 + f2) % m3;
		f2 = f1;
		f1 = f;
	}
	return f1;
}
double met_3() {
	return met_3_int() / double(m3);
}




static const int a4 = 29962, c4 = 12437;
static int  p = 53;
int inv(int x) {
	if (x == 0) return 0;
	else for (int x1 = 0; x1 < p; x1++) {
		if ((x*x1) % p == 1) return x1;
	}
}
int met_4_int() {
	int x = inv(x0);
	x0 = (a4*x + c4) % p;
	return x0;
}
double met_4() {
	return met_4_int() / double(p);
}




static const int m5 = m_is_prime();
int met_5_int() {

	int z0 = int(met_1()*m5);
	int y0 = int(met_2()*m5);
	x0 = (z0 - y0 + m5) % m5;
	return x0;
}
double met_5() {
	return met_5_int() / double(m5);
}



