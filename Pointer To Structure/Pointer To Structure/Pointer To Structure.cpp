#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int breadth;
};

int main() {
	Rectangle r = { 20, 30 };
	Rectangle* rr = (Rectangle *) malloc(sizeof(Rectangle));

	Rectangle* qq = new Rectangle[2];

	cout << (*rr).length << (*rr).breadth << endl;
	rr->breadth = 22;
	rr->length = 33;

	cout << rr->length << rr->breadth << endl;
}