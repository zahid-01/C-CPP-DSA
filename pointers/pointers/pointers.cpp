#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int *p = &a;
    int **x = &p;

    cout << *x << " " << &a << endl;
    cout << sizeof(a) << endl;

    int* qq;
    char* pp;

    cout << sizeof(qq) << sizeof(pp) << endl;

    int *dd = (int *) malloc(sizeof(int) * 5);
    *(dd + 0) = 22;
    *(dd + 1) = 23;
    *(dd + 2) = 24;
    *(dd + 3) = 25;
    *(dd + 4) = 26;

    cout << *(dd + 2) << endl;
}