#include <iostream>
#include <format>
using namespace std;
int main()
{
  double r,pi = 3.14159;
  cin >> r;
  cout << format("{:.4f} {:.4f} {:.4f}\n",2*r,2*pi*r,pi*r*r);
}