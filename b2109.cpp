#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str[256];
  cin.getline(str, 256);
  int cnt = 0;
  for (int i = 0; i < strlen(str); i ++) 
  {
    cnt += isdigit(str[i]);
  }
  cout << cnt << endl;
}