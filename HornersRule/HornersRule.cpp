#include <iostream>

int tsHorner(int x, int numerator) {
	if (numerator == 0) return 1;

	return (1 + x / numerator) * tsHorner(x, numerator - 1);
}

int main()
{
	std::cout << tsHorner(2, 10);
}