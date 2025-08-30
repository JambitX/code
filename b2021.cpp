#include "stdio.h"
// int main()
// {
//   float input;
//   scanf("%f",&input);
//   printf("%.3f\n",input);
// }

#include <iostream>
using namespace std;
// int main()
// {
//   float f;
//   cin >> f;
//   cout.precision(3);//默认是general，general是保留6位有效数字
//   cout << fixed; 
//   cout << f << endl;
// }

#include <format>
int main()
{
  float f;
  cin >> f;
  cout << format("{:.3f}",f) << endl; 
}
