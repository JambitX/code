#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, string>> vec(n);
  for (auto &[score, name] : vec) {
    cin >> score >> name;
  }
  cout << max_element(vec.begin(), vec.end())->second;
}