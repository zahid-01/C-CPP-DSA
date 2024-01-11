#include <iostream>

int nCr(int n, int r) {
    if (n == r || r == 0) return 1;

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    std::cout << "Hello World!\n";

    std::cout << nCr(4, 2);
}