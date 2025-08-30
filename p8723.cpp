#include <iostream>
#include <format>
#include <string>
#include <algorithm>

using namespace std;

string toBase(int x, int base) {
  string res;
  while (x) {
    int mod = x % base;
    res += (mod < 10 ? mod + '0': mod-10 + 'A');
    x /= base;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  int P;
  cin >> P;
  for (int i = 1; i < P; i ++) {
    for (int j = 1; j <= i; j ++) {
      cout << format("{}*{}={} ", toBase(i, P), toBase(j, P), toBase(i * j, P));
    }
    cout << endl;
  }


}