#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
  char str[101];
  cin >> str;
  int len = strlen(str);
  // char init[101];
  // strcpy(init, str);
  // reverse(str, str + len);
  // cout << ((strcmp(str, init) == 0) ? "yes":"no") << endl;
  bool diff = false;
  for (int i = 0, j = len - 1; i < j; i ++, j --)
  {
    if (str[i] != str[j])
    {
      diff = true;
      break;
    }
  }
  cout << (!diff ? "yes" : "no") << endl;
}