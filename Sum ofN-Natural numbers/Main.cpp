#include <iostream>

using namespace std;

int sum_N_Numbers(int n) {
	if (n == 1) return 1;

	return n + sum_N_Numbers(n - 1);
}

int main() {
	cout << "Sum of first 5 natural numbers is " << sum_N_Numbers(5) << endl;
	// int counter = 0;
	// for (int i = 0; i < 1000000; i++)
	// 	counter += i;

	// cout << counter << endl;
	return 0;
}