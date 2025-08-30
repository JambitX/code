#include <iostream>
#include "stdio.h"
#include <numeric>
using namespace std;
int main(){
  // int n, i, count=1;
  // double e = 1, sum = 1;
  // cin >> n;
  // for (i=1;i<=n;i++) {
  //   sum /= i;
  //   e += sum;
  // }
  // cout << fixed;
  // cout.precision(10);
  // cout << e << endl;
  double InverseFact[16];
  InverseFact[0] = 1;
  for (int i = 1; i < 16; i ++ ) {
    InverseFact[i] = InverseFact[i - 1] / i;
  }
  int n;
  double e = 0;
  cin >> n;
  // for (int i = 0; i <= n; i ++) {
  //   e += InverseFact[i];
  // } //计算一个数组从起点到终点的和
  cout.precision(10);
  cout << fixed;
  // cout << e << endl;
  cout << accumulate(InverseFact,InverseFact+n+1,0.0/*初始值需要传一个double0.0*/) << endl;
}