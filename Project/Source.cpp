#include "methods1.h"
#include "methods2.h"
#include "methods3.h"

#include <iostream>
#include <ctime>


using namespace std;

void print_methods1(double u[]) {
	double quantity[10] = { 0 };
	double sum = 0;
	for (size_t i = 0; i < 100; i++) {
		for (int j = 0; j < 10; j++) {
			if (u[i] >= double(j*0.1) && u[i] < 0.1 + double(j *0.1))
				quantity[j]++;
		}
	}
	for (int j = 0; j < 10; j++) {
		sum += (quantity[j] / 100);
		cout << "[" << double(j*0.1) << ";" << 0.1 + double(j *0.1) << "]" << "  " << quantity[j] / 100 << endl;
	}
	//cout << sum << endl;
}
void print_methods2(double u[]) {
	double quantity[12] = { 0 };
	double sum = 0;
	for (size_t i = 0; i < 100; i++) {
		for (int j = 0; j < 12; j++) {
			if (u[i] >= -3 + double(j*0.5) && u[i] < -2.5 + double(j *0.5))
				quantity[j]++;
		}
	}
	for (int j = 0; j < 12; j++) {
		sum += (quantity[j] / 100);
		cout << "[" <<-3 + double(j*0.5) << ";" << -2.5 + double(j *0.5) << "]" << "  " << quantity[j] / 100 << endl;
	}
	//cout << sum << endl;
}
void print_methods3(double u[]) {
	double quantity[100] = { 0 }; 
	for (size_t i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (u[i] >= 0 + double(j) && u[i] < double(1 + double(j )))
				quantity[j]++;
		}
	}
	for (int j = 0; j < 100; j++) {
		cout << "[" << 0 + double(j) << ";" << double(1 + double(j )) << "]" << "  " << quantity[j] / 100 << endl;
	}
}

void f1(double u[], int x0, double met()) {
	methods1(x0);
	for (size_t i = 0; i < 100; i++) {
		u[i] = met();
	}
	print_methods1(u);
}
void f2(double u[], double met()) {
	for (size_t i = 0; i < 100; i++) {
		u[i] = met();
	}
	print_methods2(u);
}
void f3(double u[], double met()) {
	for (size_t i = 0; i < 100; i++) {
		u[i] = met();
	}
	print_methods3(u);
}
int main() {
	int n;
	cout << "Chose function from 1 to 10 end enter it's number " << endl;
	cin >> n;
	double quantity[10] = { 0 };
	double u[100];
	switch (n) {
	case 1:
		f1( u, 1821, met_1);
		break;
	case 2:
		f1(u, 431, met_2);
		break;
	case 3:
		f1(u, 687, met_3);
		break;
	case 4:
		f1(u, 1, met_4);
		break;
	case 5:
		f1(u, 360, met_5);
		break;

	case 6:
		f2(u, met_6);
		break;
	case 7:
		f2(u, met_7);
		break;
	case 8:
		f2(u, met_8);
		break;
	case 9:
		f3(u, met_9);
		break;
	case 10:
		f3(u, met_10);
		break;
	}
	system("pause");
	return 0;
}