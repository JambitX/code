#include <bits/stdc++.h>
using namespace std;

int main() {
  queue<int> que;
  int n;
  cin >> n;
  while (n--) {
    int op, x;
    cin >> op;
    if (op == 1) {
      cin >> x;
      que.push(x);
    } else if (op == 2) {
      if (que.empty()) {
        cout << "ERR_CANNOT_POP" << endl;
      } else {
        que.pop();
      }
    } else if (op == 3) {
      if (que.empty()) {
        cout << "ERR_CANNOT_QUERY" << endl;
      } else {
        cout << que.front() << endl;
      }
    } else {
      cout << que.size() << endl;
    }


    

  }
}