#include <iostream>

using namespace std;

int Fact(int n) {
	if (n == 1) return 1;

	return n * Fact(n - 1);
}

int main() {
	cout << "Factorial of 5 is " << Fact(5);

	return 0;
}