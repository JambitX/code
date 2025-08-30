#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int k, count = 0;
  long long m;
  cin >> m >> k;
  while (m != 0) {
    if (m % 10 == 3) {
      count ++;
    }
    m /= 10;
  }
  if (count == k) puts("YES");
  else puts("NO");
}