#include <iostream>
#include <vector>
using namespace std;
int main () {
  int n, m, r;
  cin >> n >> m >> r;
  vector<int> f1(n), f2(n), p1(n), p2(n);
  for (auto& x: f1) cin >> x;
  for (auto& x: p1) cin >> x;
  for (auto& x: f2) cin >> x;
  for (auto& x: p2) cin >> x;
  while (n--) {
    int order;
    cin >> order;
    order --;
    int index = -1;
    for (int i = 0; i < f2.size(); i ++) {
      if (f1[order] == f2[i] && p2[i] > p1[order]) {
        if (index == -1 || p2[i] < p2[index]) /*是比较这是否是小F手中最小的牌*/{
          index = i;
        }
      }
    }
    if (index != -1) {
      f2.erase(f2.begin() + index);
      p2.erase(p2.begin() + index);
    }
  }
  cout << f2.size() << endl;
}