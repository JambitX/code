#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int a, b, c, cnt = 0;
  cin >> a >> b >> c;
  if (a < 60) cnt++;
  if (b < 60) cnt++;
  if (c < 60) cnt++;
  if (cnt ==1) cout << 1 << endl;
  else cout << 0 << endl;
}