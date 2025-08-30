#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s, t;
  cin >> s >> t;
  int q;
  cin >> q;
  while (q --) {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    auto order = s.substr(l1 - 1, r1 - l1 + 1)<=>t.substr(l2 - 1, r2 - l2 + 1);
    if (order < 0) {
      cout << "yifusuyi" << endl;
    } else if (order > 0) {
      cout << "erfusuer" << endl;
    } else {
      cout << "ovo" << endl;
    }
  }
}