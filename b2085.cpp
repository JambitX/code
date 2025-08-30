#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int cnt = 0;
  int n;
  cin >> n;
  for (int i = 2;;i++) {
    bool isPrime = true;
    for (int j = 2;j <= (int)sqrt(i); j++) {
      if (i%j == 0) {
      isPrime = false;
      break;
      }
    }
    if (isPrime) {
      cnt ++;
      if (cnt == n) {
        cout << i << endl;
        break;
      }
    }
  }
}