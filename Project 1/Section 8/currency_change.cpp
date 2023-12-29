#include <iostream>

using namespace std;

int main() {
  cout << "Enter your amount in cents: ";
  int cents {0};
  cin >> cents;
  cout << "Your change is: " << cents / 100 << " dollars, ";
  cents %= 100;
  cout << cents/25 << " cents, ";
  cents %= 25;
  cout << cents/10 << " dime, ";
  cents %= 10;
  cout << cents/5 << " nickel, ";
  cents %= 5;
  cout << cents << " pennys";
  return 0;
}