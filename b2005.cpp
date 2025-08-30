// #include "stdio.h"
// int main()
// {
//   char c;
//   scanf("%c",&c);
//   printf("  %c  \n",c);
//   printf(" %c%c%c \n",c,c,c);
//   printf("%c%c%c%c%c\n",c,c,c,c,c); 
// }

#include <iostream>
#include <format>
using namespace std;
int main()
{
  char c;
  cin >> c;
  cout << format("{:^5c}",c) << endl;
  cout << format(" {0:}{0:}{0:} ",c) << endl;
  cout << format("{0:}{0:}{0:}{0:}{0:}",c) << endl;
}



