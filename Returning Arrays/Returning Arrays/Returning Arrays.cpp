#include <iostream>

using namespace std;

struct Nums {
	int A[5];
};

void fun(Nums *nums) {
	for (int i = 0; i < 5; i++) {
		nums->A[i] = i + 1;
		cout << nums->A[i] << endl;
	}
}

void printing(Nums& nn) {
	for (int x : nn.A) {
		cout << x << endl;
	}
}


int main() {
	Nums qq;

	qq.A[0] = 23;
	qq.A[1] = 24;
	qq.A[2] = 25;
	qq.A[3] = 26;
	qq.A[4] = 27;

	fun(&qq);

	for (int i = 0; i < 5; i++) {
		cout << qq.A[i] << " ";
	}

	printing(qq);

	return 0;
}