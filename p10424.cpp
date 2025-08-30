#include <iostream>
using namespace std;

bool is_good(long long x) {
  for (int i = 1; x; i++, x /= 10) {
    if (x % 2 != i % 2) return false;
  } 
  return true;
}

int main() {
  long long n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i ++) {
    cnt += is_good(i);
  }
  cout << cnt << endl;
}