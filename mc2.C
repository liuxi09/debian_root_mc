#include <stdio.h>
#include <TMath.h>
#define MAX 1000000
#define PI 3.1415926535898

void mc2() {
	int count = 0;
	TRandom3 r(0);
	srand((unsigned int)time(NULL));
	for (int i = 0; i < MAX; i++) {
		double a = 2.0*r.Uniform(0, 1.0);
		double b = 2.0*r.Uniform(0, 1.0);
		if ((a - 1) * (a - 1) + (b - 1) * (b - 1) <= 1)
			count++;
	}
	double P = (double)count / MAX;
	double pi = 4 * P;
	printf("PI=%f \n", pi);
}
