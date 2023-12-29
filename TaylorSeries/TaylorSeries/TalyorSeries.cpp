#include <iostream>
#include <math.h>

using namespace std;

int Factorial(int n) {
	if (n == 1) return 1;

	return n * Factorial(n - 1);
}

int TaylorSeries(int x, int n) {
	if (x == 1) return 1;

	return  pow(x,n)/ Factorial(n) + TaylorSeries(x, n-1);
}

void main() {
	int x = TaylorSeries(3, 3);
	cout << x;
}