#include <iostream>

using namespace std;

int sum_N_Numbers(int n) {
	if (n <= 0) return 0;

	return n + sum_N_Numbers(n - 1);
}

int main() {
	//cout << "Sum of first 5 natural numbers is " << sum_N_Numbers(1000000) << endl;
	int counter = 0;
	for (int i = 0; i < 1000000; i++)
		counter += i;

	cout << counter << endl;
	return 0;
}