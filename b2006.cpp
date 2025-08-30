#include <iostream>
using namespace std;
int main()
{
  double x,a,y,b;
  cin >> x >> a >> y >> b;
  //x*a = base + a * rate
  //y*b = base + b * rate
  cout << fixed;
  cout.precision(2);
  cout << (y*b-x*a)/(b-a) << endl;
}