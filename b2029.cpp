#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int h,r;
  cin >> h >> r;
  double pi = 3.14;
  double v = h*pi*r*r/1000;
  cout << ceil(20/v) << endl;

}