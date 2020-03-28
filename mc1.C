//estimate pai using MC stimulation, random3 function, times:10*e6
//#include <Time.h>
#include <stdio.h>
#include <TMath.h>
#define MAX 1000000
#define PI 3.1415926535898

void mc1() {
	int count = 0;
	double l = 1.8, a = 2.0;
	TRandom3 r(0);
	srand((unsigned int)time(NULL));
	for (int i = 0; i < MAX; i++) {
		double x = a* r.Uniform(0, 1.0);
		double theta = PI * r.Uniform(0, 1.0);
		if (x <= l * sin(theta))
			count++;
	}
	double P = (double)count / MAX;
	double pi = 2 * l / a / P;
	printf("PI=%f \n", pi);
}
