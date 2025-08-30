#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str[30000];
  cin.getline(str, 30000);
  char delimiter[] = " ,.";
  auto token = strtok(str, delimiter);
  char shortest[101], longest[101];
  strcpy(shortest, token);
  strcpy(longest, token);
  while (token) {
    if (strlen(token) < strlen(shortest))
    {
      strcpy(shortest, token);
    }
    if (strlen(longest) < strlen(token))
    {
      strcpy(longest, token);
    }
    token = strtok(NULL, delimiter);
  }
  cout << longest << endl;
  cout << shortest << endl;
}