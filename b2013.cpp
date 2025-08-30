#include<iostream>
using namespace std;
int main()
{
  double F;
  cin >> F;
  cout << fixed;
  cout.precision(5);
  cout << 5*(F-32)/9 << endl;
}