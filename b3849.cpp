#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n, r;
  cin >> n >> r;
  // 例：十进制
  //123  123%10 (3) 123/10 12%10 (2) 12/10 1%10 (1)
  vector<int> digits;
  while (n) {
    digits.push_back(n % r);
    n /= r;
  } 
  reverse(digits.begin(), digits.end());
  for (auto& d: digits) {
    if (d < 10) cout << d;
    else cout << char('A' + (d - 10));
  }
}