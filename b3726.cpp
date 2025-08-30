#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n, q;
  cin >> n >> q;
  vector<string> str(n);
  for (auto& s : str) cin >> s;
  while (q --) {
    int op;
    cin >> op;
    if (op == 1) {
      int x, y, i;
      cin >> x >> y >> i;
      str[y-1].insert(i, str[x-1]);
    } else { //op == 2
      int y;
      cin >> y;
      cout << str[y - 1] << endl;;
    }
  }
}