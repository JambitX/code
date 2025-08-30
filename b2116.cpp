#include <iostream>
#include <string.h>
#include <algorithm>
#include <ctype.h>
using namespace std;
int main()
{
  char str[50];
  cin >> str;
  int len = strlen(str);
  for (int i = 0; i < len; i ++)
  {
    if (isupper(str[i]))
    {
      str[i] = tolower(str[i]);
    }
    else
    {
      str[i] = toupper(str[i]); 
    }
  }
  reverse(str, str + len);
  for (int i = 0; i < len; i ++)
  {
    if (isupper(str[i]))
    {
      str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }
    else
    {
      str[i] = (str[i] - 'a' + 3) % 26 + 'a';
    }
  }
  cout << str << endl;
}