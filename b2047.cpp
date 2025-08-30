#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  float x;
  cin >> x;
  cout << fixed;
  cout.precision(3);
  if (0 <= x && x < 5) cout << 2.5 - x << endl;
  else if (x < 10) cout << 2 - 1.5 * (x - 3) * (x - 3) << endl;
  else if (x < 20) cout << x / 2 - 1.5 << endl;
}