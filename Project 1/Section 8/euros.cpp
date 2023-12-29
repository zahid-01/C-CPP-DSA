#include <iostream>

using namespace std;

int main() {
  const double euro_per_dollar {0.94};
  cout << "Enter dollars: ";
  double dollars {0};
  cin >> dollars;

  cout << "$" << dollars << " in Euros are " << dollars * euro_per_dollar;
  return 0;
}