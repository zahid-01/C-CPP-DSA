#include <iostream>
#include <stdlib.h>

using namespace std;

struct ADTArray
{
	int A[11];
	int size;
	int length;
};

void display(ADTArray arr)
{
	for (int i = 0; i < arr.length; i++)
		cout << arr.A[i] << " ";

	cout << endl;
}

void insert(ADTArray *arr, int el, int index)
{
	if (index >= 0 && index <= arr->length - 1)
	{
		for (int i = arr->length; i > index; i--)
			arr->A[i] = arr->A[i - 1];

		arr->A[index] = el;
		arr->length++;
	}
}

void delElement(ADTArray *arr, int index)
{
	if (index >= 0 && index < arr->length)
	{
		for (int i = index; i < arr->length; i++)
			arr->A[i] = arr->A[i + 1];
		arr->length--;
	}
}

int lSearch(ADTArray arr, int el)
{
	for (int i = 0; i < arr.length; i++)
		if (arr.A[i] == el)
			return i;

	return -1;
}

int lSearchOpt(ADTArray *arr, int el)
{
	for (int i = 0; i < arr->length; i++)
	{
		if (arr->A[i] == el)
		{
			int temp = arr->A[i];
			arr->A[i] = arr->A[i - 1];
			arr->A[i - 1] = temp;

			return i;
		}
	}

	return -1;
}

int BSearch(int arr[], int el, int p, int q)
{
	if (p > q)
		return -1;

	int mid = (p + q) / 2;

	if (arr[mid] == el)
		return mid;

	if (arr[mid] > el)
		return BSearch(arr, el, p, mid - 1);
	else
		return BSearch(arr, el, mid + 1, q);
}

int main()
{
	ADTArray Arr = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 2000, 3000}, 11, 11};
	display(Arr);

	// insert(&Arr, 200, 4);
	// delElement(&Arr, 6);

	// cout << lSearch(Arr, 2)<< endl;

	// lSearchOpt(&Arr, 1);

	cout << BSearch(Arr.A, 3000, 0, 10);
	// display(Arr);
};