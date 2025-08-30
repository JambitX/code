#include <iostream>
#include "stdio.h"
#include <algorithm>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int d = max(max(a, b), c);
  if (a + b + c - 2*d > 0) cout << 1;
  else cout << 0;
}