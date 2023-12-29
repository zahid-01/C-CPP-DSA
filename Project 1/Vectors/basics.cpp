#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <int> nums;
  int i = 5,ind {200};
  while (i>0)
  {
    nums.push_back(ind++);
    i--;
  }

  cout << nums.at(3);
  

  return 0;
}