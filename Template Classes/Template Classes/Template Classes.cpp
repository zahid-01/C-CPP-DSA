#include <iostream>

using namespace std;

template <class T>
class Arithmetic {
private:
	T a;
	T b;
public:
	Arithmetic(T a, T b);
	T add();
	T xply();
};

template <class T>
Arithmetic <T> ::Arithmetic(T a, T b) {
	this->a = a;
	this->b = b;
}

template <class T>
T Arithmetic <T> ::add() {
	return a + b;
}

template <class T>
T Arithmetic <T> ::xply() {
	return a * b;
}

int main() {

}