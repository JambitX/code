#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
  int m, n;
  cin >> m >> n; // m：学员人数  n: 参与考试次数
  using pds = pair<double, string>;
  vector<pds> stus(m);
  vector<int> scores(n);
  for (auto &[deviation, name] : stus) {
    cin >> name;
    double sum = 0;
    for (int i = 0; i < n; i ++) {
      cin >> scores[i];
      sum += scores[i];
    }
    double ave = sum / n;
    for (auto score : scores) {
      deviation += (score - ave) * (score - ave);
    }
  }
  sort(stus.begin(), stus.end(), [](pds& a, pds& b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
  });
  for (int i = 0; i < min(m, 20); i++) {
    cout << stus[i].second << endl;
  }
}