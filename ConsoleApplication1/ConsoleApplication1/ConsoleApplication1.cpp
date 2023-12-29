#include <iostream>

void fun1() {
    static int x = 0;
}

void fun2() {
    static int x = 0;
}

int main()
{
    std::cout << x;
}
