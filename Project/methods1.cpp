#include <iostream>

#include "methods1.h"



static int x0 = 1;

void methods1(int t) {
	x0 = t;
}





static const int m1= 65537, a1 = 19577, c1 = 32159;
double met_1() {

	x0 = (a1*x0 + c1) % m1;
	return x0 / double(m1);

}


static const int m2 = 43873;
static const int  a2 = 101427, c2 = 321, d2 =304 ;
double met_2() {
	x0 = (d2*x0*x0 + a2 * x0 + c2) % m2;

	return x0 / double(m2);
}




static const int  m3 =  13873;
static int f1 = 0, f2 = 1, f, n = 83739;

double met_3() {

		for (int k = 1; k < n; ++k) {
			f = (f1 + f2) % m3;
			f2 = f1;
			f1 = f;
		}

	
		return f1 / double(m3);
	}




static const int a4 = 29962, c4 = 12437;
static int  p = 53, m4 = 256;
int inv(int x) {
	if (x == 0) return 0;
	else for (int x1 = 0; x1 < p; x1++) {
		if ((x*x1) % p == 1) return x1;
	}
}
double met_4() {
	int x = inv(x0);
	x0 = (a4*x + c4) % p;
	return x0 / double(p);
}




static const int m5 = 13873;
double met_5() {

	int z0 = int(met_1()*m5);
	int y0 = int(met_4()*m5);
	x0 = (z0 - y0+m5 ) % m5;
	return x0 / double(m5);
}




