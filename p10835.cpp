#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n, T;
  cin >> T;
  while (T --) {
    cin >> n >> m;
    if (m % 2 == 1) {
      if (n != 0) cout << "Yes" << endl;
      else cout << "No" << endl;
    } else {
      if (n != 0) cout << "No" << endl;
      else cout << "Yes" << endl;
    }
  } 
}