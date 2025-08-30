#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int x;
  char c;
  cin >> x >> c;
  int cost = ((x<=1000)?8:(8+ceil((x-1000)/500.0)*4));
  cout << cost+(c=='y'?5:0) << endl;
}