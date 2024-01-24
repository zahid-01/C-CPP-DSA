#include <iostream>

using namespace std;

int main()
{
  char name[] = "zaaahidi";

  long int h = 0, a = 0;

  for (int i = 0; name[i] != '\0'; i++)
  {
    a = 1;
    a = a << (name[i] - 97);

    if (h & a)
      cout << name[i];

    h = h | a;
  }
}