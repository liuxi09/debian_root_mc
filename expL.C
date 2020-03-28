#include "TMath.h"
#define MAX 1000000
const double lambda = 0.5;

void expL() {
	TRandom3 r(0);

	TH1D *h1 = new TH1D("h1", "Exponential distribution of L", 200, 0.0, 20.0);
	for (int i = 0; i < MAX; i++) {
		double randomL = -1.0 * log(r.Uniform(0, 1)) / lambda;
		h1->Fill(randomL);
	}
	h1->Draw();
}
