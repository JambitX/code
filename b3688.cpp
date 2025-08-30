#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (auto& x: p) cin >> x;
  do {
    int back = p.back();
    p.erase(p.begin() + n - 1);
    p.insert(p.begin(), back);
    for (auto x: p) cout << x << ' ';
    cout << endl;
  } while(p.back() != n);

}