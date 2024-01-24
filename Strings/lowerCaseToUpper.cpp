#include <iostream>

using namespace std;

int wordsInStringNumber(char str[])
{
  int spaces;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 32 && str[i - 1] != 32)
      spaces++;
  }

  return spaces + 1;
}

void changeCase(char name[])
{
  int i = 0;
  for (i = 0; name[i] != '\0'; i++)
  {
    int t = name[i];
    if (t >= 97 && t <= 122)
    {
      name[i] = (char)t - 32;
    }
    else if (t >= 65 && t <= 97)
    {
      name[i] = (char)t + 32;
    }
  }
}

void reverseString(char str[], int len)
{
  int p = 0, q = len - 2;

  while (p < q)
  {
    char temp = str[p];
    str[p++] = str[q];
    str[q--] = temp;
  }
}

void displayString(char str[])
{
  for (int i = 0; str[i] != '\0'; i++)
    cout << str[i];
  cout << endl;
}

int main()
{
  char name[] = "zahid hussain khan";
  displayString(name);

  // char test[] = "this is a     test";
  // cout << wordsInStringNumber(test);
  char s[] = "zainab";
  reverseString(name, sizeof(name));
  reverseString(s, sizeof(s));
  displayString(s);

  return 0;
}