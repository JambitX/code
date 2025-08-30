#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  using pii = pair<int, int>;
  vector<pair<int, int>> vec(n);//score,id
  for (int i = 0; i < n; i++) {
    vec[i].second = i + 1;
    for (int j = 0; j < k; j++) {
      int x;
      cin >> x;
      vec[i].first += x;
    }
  }
  sort(vec.begin(), vec.end(), [](pii &a, pii &b) {
    if (a.first == b.first) {
      return a.second < b.second;
    }
    else {
      return a.first > b.first;
    }
  });
  for (int i = 0; i < 2; i++) {
    cout << vec[i].second << endl;
  }
}