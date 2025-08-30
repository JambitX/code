#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    stack<unsigned long long> stk;
    int n;
    cin >> n;
    while (n --) {
      string op;
      unsigned long long x;
      cin >> op;
      if (op == "push") {
        cin >> x;
        stk.push(x);
      } else if (op == "pop") {
        if (stk.empty()) {
          cout << "Empty" << endl;
        } else {
          stk.pop();
        }
      } else if (op == "query") {
        if (stk.empty()) {
          cout << "Anguei!" << endl;
        } else {
          cout << stk.top() << endl;
        }
      } else if (op == "size") {
        cout << stk.size() << endl;
      }
    }
  }

}