#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {

	double P = 1000000;
	double r = 0.10;
	double n = 12;
	double t = 40;

	double A = P * pow(1 + r / n, n * t);
	//double B = Mul(P, pow(Sum(1, Div(r, n)), Mul(n, t)));

	//////////printf("From %.2fKRW => %.2KRW!~", P, A);

	return 0;
}