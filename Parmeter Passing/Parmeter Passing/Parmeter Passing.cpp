#include <iostream>

using namespace std;

void xchange(int *x, int *y) {
	cout << "Here" << endl;
	int temp = *x;
	*x = *y;
	*y = temp;
}

void xchange(int x, int y) {
	cout << "Here" << endl;
	int temp = x;
	x = y;
	y = temp;
}

void interchange(int& x, int& y) {
	cout << "Interchange" << endl;
	int temp = x;
	x = y;
	y = temp;
}

void arr(int A[]) {
	int start = 0;
	int end = sizeof(A) - 1;

	while (start < end) {
		cout << A[start] << " " << A[end];
		int temp = A[start];
		A[start++] = A[end];
		A[end--] = temp;
	}

	for (int i = 0; i < sizeof(A); i++)
		cout << A[i] << endl;
}

int * retArr() {
	int* p;
	p = (int*)malloc(sizeof(int) * 5);

	int A[] = {2,3,4,5}
	return A;
}

int main() {
	int a = 20;
	int b = 30;
	/*cout << a << " " << b << endl;
	interchange(a, b);
	cout << a << " " << b << endl;*/

	int A[] = {0,1,2,3,4,5,6,7,8,9};
	
	arr(A);
	return 0;
}