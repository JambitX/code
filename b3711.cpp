#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t --) {
    long long n;
    cin >> n;
    if (n % 4 == 0) {
      cout << "Yes" << endl;
      continue;
    } 
    vector<int> digits;
    while (n) {
      digits.push_back(n % 10);
      n /= 10;
    }
    reverse(digits.begin(), digits.end());
    bool found = false;
    for (int i = 0; i < digits.size() && !found; i ++) {
      for (int j = i + 1; j <= digits.size() && !found; j ++) {
        auto temp = digits;
        temp.erase(temp.begin() + i, temp.begin() + j);
        if (temp.empty()) continue;
        long long x = 0;
        for (auto& d: temp) {
          x = x * 10 + d;
        }
        if (x % 4 == 0) {
          found = true;
        }
      }
    }
    cout << (found ? "Yes" : "No") << endl;
  }
}