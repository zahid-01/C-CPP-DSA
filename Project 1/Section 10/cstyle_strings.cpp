#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main() {
  char my_name[8] {}, ch;

  // for(int i = 0; i< 8; i++){
  //   cin >> ch;
  //   my_name[i] = ch;
  // }
  strcpy(my_name, "zahidhk");

  cout << my_name;
  return 0;
}