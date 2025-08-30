#include "stdio.h"
// int main()
// {
//   int i;
//   scanf("%d",&i);
//   printf("%d%d%d",(i%100)%10,(i/10)%10,i/100);
// }

#include<iostream>
using namespace std;
int main()
{
  char a,b,c;//int 不太行，a会把三位数全吃了
  cin >> a >> b >> c;
  cout << c << endl; 
  cout << b << endl;
  cout << a << endl;
}