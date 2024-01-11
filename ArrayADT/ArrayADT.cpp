#include <iostream>
#include <stdlib.h>

using namespace std;

struct ADTArray {
	int A[10];
	int size;
	int length;
};

void display(ADTArray arr) {
	for (int i = 0; i < arr.length; i++)
		cout << arr.A[i] << " ";

	cout << endl;
}

void insert(ADTArray *arr, int el, int index) {
	if (index >= 0 && index <= arr->length-1) {
		for (int i = arr->length; i > index; i--)
			arr->A[i] = arr->A[i - 1];

		arr->A[index] = el;
		arr->length++;
	}
}

void delElement(ADTArray *arr, int index) {
	if (index >= 0 && index < arr->length) {
		for (int i = index; i < arr->length; i++) 
			arr->A[i] = arr->A[i + 1];
		arr->length--;
	}
}

int main()
{
	ADTArray Arr = { {5,6,7,1,2}, 10, 5};
	display(Arr);

	insert(&Arr, 200, 4);
	display(Arr);
	
	delElement(&Arr, 6);
	display(Arr);
};