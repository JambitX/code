#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char digit[101], str[101];
  cin >> digit;
  int len = strlen(digit);
  for (int i = 0; i < len;i ++ )
  {
    str[i] = digit[i] + digit[(i + 1) % len];
  }
  str[len] = 0;
  cout << str << endl;
}