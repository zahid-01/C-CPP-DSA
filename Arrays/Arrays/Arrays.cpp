#include <iostream>
#include <stdio.h>

using namespace std;

struct Person
{
	string name;
	int age;
};

enum Colors
{
	Red, Black
};

struct Cards
{
	int number;
	string color;
	string shape;
};

int nonMain() {
	int nums[9] = { 2,5,6,2,4,7,1,4,7 };

	for (int x : nums)
		printf("%d", x);

	struct Person p = { "Zahid Hussian Khan", 27 };

	cout << p.name << " is " << p.age << " years old" << endl;

	string colors[2] = { "RED", "BLACK" };
	int currentColor = 1;
	int colorsLength = sizeof(colors) / sizeof(colors[0]);

	string shapes[4] = { "SPADE", "BLACK HEART", "DIAMOND", "HEART" };
	int currentShape = 1;
	int shapesLength = sizeof(shapes) / sizeof(shapes[0]);

	Cards myCards[52];


	int counter = 1;

	for (int i = 0; i < 52; i++) {
		currentColor %= colorsLength;
		myCards[i].color = colors[currentColor];

		currentShape %= shapesLength;
		myCards[i].shape = shapes[currentShape];

		counter %= 13;
		myCards[i].number = counter;

		currentColor++;
		currentShape++;
		counter++;
	}

	//for (Cards card : myCards) {
		//cout << card.shape << " of " << card.color << " " << card.number << endl;
	//}

	struct Rectangle
	{
		char y;
		char z;
		int x;
	};

	Rectangle r1;

	cout << "The size of R1 is " << sizeof(r1);
}