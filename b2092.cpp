#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  bool light[n+1] = {};
  for (int i = 2; i <= n; i++) {
    for (int j = i; j <= n; j+=i) {
        light[j] = !light[j];
    }
  }
  for (int i = 1; i < n + 1; i ++) {
    if (!light[i]) {
      cout << i << ' ';
    }
  }
}