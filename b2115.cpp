#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str[10001];
  cin.getline(str, 10001);
  for (int i = 0; i < strlen(str); i ++)
  {
    if ((str[i] > 'A' && str[i] <= 'Z') || (str[i] > 'a' && str[i] <= 'z'))
    {
      str[i] = char(str[i] - 1);
    }
    else if (str[i] == 'a')
    {
      str[i] = 'z';
    }
    else if (str[i] == 'A')
    {
      str[i] = 'Z';
    }
  }
  cout << str << endl;
}