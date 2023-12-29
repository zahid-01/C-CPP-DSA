#include <iostream>

using namespace std;

int main() {
  const int cost {30};
  const float tax {0.06};
  cout << "Welcome to franks cleaning service\n";
  cout << "\nHow many rooms do you have? ";
  int rooms {0};
  cin >> rooms;
  cout << "\nCost per room is $ "<<cost;
  cout << "\nCost is: " << cost * rooms;
  cout << "\nTax is: " << cost * rooms * tax;


  return 0;
}