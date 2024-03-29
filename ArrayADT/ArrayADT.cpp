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

void revArr(int arr[], int n)
{
	int p = 0, q = n - 1;
	while (p < q)
	{
		int temp = arr[p];
		arr[p++] = arr[q];
		arr[q--] = temp;
	}
}

void flip(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void arrangeArray(int arr[], int length)
{
	int p = 0, q = length - 1;

	while (p < q)
	{
		while (arr[p] < 0)
			p++;

		while (arr[q] > 0)
			q--;

		if (p < q)
			flip(&arr[p], &arr[q]);
	}
}

void mergeArrays(int a1[], int l1, int a2[], int l2)
{
	int newArraySize = l1 + l2;
	int *mergedArray = new int[newArraySize];

	int p = 0, q = 0, r = 0;

	while (p < l1 && q < l2)
	{
		while (a1[p] < a2[q])
		{
			p++;
		}

		while (a2[q] < a1[p])
		{
			q++;
		}

		if (a1[p] == a2[q])
		{
			mergedArray[r] = a1[p];
			r++;
			p++;
			q++;
		}
	}
	for (int i = 0; i < r; i++)
	{
		cout << mergedArray[i] << "  ";
	}
}

int main()
{
	ADTArray Arr = {{0, -1, 2, -3, 4, 5, -6, 7, 8, 2000}, 11, 10};
	// display(Arr);

	// insert(&Arr, 200, 4);
	// delElement(&Arr, 6);

	// cout << lSearch(Arr, 2)<< endl;

	// lSearchOpt(&Arr, 1);

	// cout << BSearch(Arr.A, 3000, 0, 10);

	// revArr(Arr.A, Arr.length);

	// arrangeArray(Arr.A, Arr.length);
	// display(Arr);

	int a1[] = {1, 2, 3, 4, 5, 7, 8}, a2[] = {5, 6, 7, 8, 9, 10};
	mergeArrays(a1, 8, a2, 6);
};