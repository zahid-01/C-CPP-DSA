#include <iostream>

using namespace std;

int RPower(int n, int pow) {
	if (pow == 1) return n;

	return n * RPower(n, pow-1);
}

int RPower_opt(int n, int pow) {
	if (pow == 1) return n;

	if (pow % 2 == 0) {
		pow /= 2;
		return RPower_opt(n * n, pow);
	}
	else {
		pow /= 2;
		return  RPower_opt(n * n * n , pow);
	}
}

int main() {
	//cout << RPower(2, 6);

	cout << RPower_opt(2, 7);
}