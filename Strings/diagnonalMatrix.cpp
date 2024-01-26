#include <iostream>

using namespace std;

class Solution
{
private:
  int n;

public:
  Solution(int n)
  {
    n = n;
  }
  void gt()
  {
    cout << n;
  }
};

int main()
{
  Solution so(2);
  so.gt();
  return 0;
}