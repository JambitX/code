#include <iostream>
using namespace std;

int main() {
/* 0
 * -1 1
 * -3 -1 1 3
 * -7 -5 -3 -1 1 3 5 7 
 */
  int T;
  cin >> T;
  while (T --) {
    int n, cnt = 0;
    cin >> n;
    if ((n & 1) == 0) {
      cout << -1 << endl;
      continue;
    }
    while (n) {
      cnt++;
      n /= 2;
    }
    cout << cnt << endl;
  }

}