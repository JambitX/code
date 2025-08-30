#include "stdio.h"
// int main()
// {
//   char c;
//   int i;
//   float f;
//   double d;
//   scanf("%c%d%f%lf",&c,&i,&f,&d);
//   printf("%c %d %f %lf\n",c,i,f,d);
// }

#include <iostream>
using namespace std;
// int main()
// {
//   char c;
//   int i;
//   float f;
//   double d;
//   cin >> c >> i >> f >> d;
//   cout << c << " " << i << ' ' ;
//   cout.precision(6);
//   cout << fixed << f << ' ' << d << endl;
// }

#include <format>
int main()
{
  char c;
  int i;
  float f;
  double d;
  cin >> c >> i >> f >> d;
  cout << format("{} {} {:.6f} {:.6f}\n",c,i,f,d);
}


