#include <iostream>
#include <math.h>

using namespace std;



int TaylorSeries(int x, int n) {
	static double p = 1, f = 1;
	int r = 0;

	if (n == 0) return 1;
	
	r = TaylorSeries(x, n - 1);
	p = p * x;
	f = f * n;

	return ((p / f) + r);
}



void main() {
	int x = TaylorSeries(3,3);
	cout << x;
}