#include <iostream>
using namespace std;
int main() {
  int fib[30];
  fib[1] = fib[2] = 1;
  for (int i = 3; i <=30; i ++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  //先输出看看会不会越界
  // for (auto& x: fib) {
  //   cout << x << ' ';
  // } 
  //不会
  //同时理解老师的意思是：题目的范围在第1-30个数，
  //老师创建数组元素为
  int n, a;
  cin >> n;
  while (n--) {
    cin >> a;
    cout << fib[a] << endl;
  }

}