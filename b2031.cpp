#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double x1,y1,x2,y2,x3,y3;
  cin >> x1 >> y2 >> x2 >> y2 >> x3 >> y3; 
  double a1=x2-x1 , b1 = y2-y1, a2 = x3-x1 , b2 = y3-y1;
  cout.precision(2);
  cout << fixed << abs(a1*b2-a2*b1)/2 << endl;
}