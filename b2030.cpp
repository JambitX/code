#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double xa,ya,xb,yb;
  cin >> xa >> ya;
  cin >> xb >> yb;
  cout.precision(3);
  cout << fixed << 
  sqrt((pow(xa - xb, 2)+pow(ya- yb, 2))) << endl;
}