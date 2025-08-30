#include "stdio.h"
// int main()
// {
//   double d;
//   scanf("%lf",&d);
//   printf("%.12lf\n",d);
// }

#include <iostream>
using namespace std;
// int main()
// {
//   double d;
//   cin >> d;
//   cout.precision(12);
//   cout << fixed;
//   cout << d << endl;
// }

#include <format>
int main()
{
  double d;
  cin >> d;
  cout << format("{:.12f}\n",d);//f不是float，而是fixed!!
}