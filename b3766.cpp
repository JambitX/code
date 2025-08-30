#include <iostream>
#include <vector>
using namespace std;
int main () {
  int n, t;
  cin >> n >> t;
  vector<int> ids(n);
  for (auto& id: ids) {
    cin >> id;
  }
  vector<int> new_ids;//不要初始化，会有n个0，只要一个空的就行
  while (t --) {
    int k;
    cin >> k;
    for (int i = 0; i < k; i ++) {
      for (int j = i; j < n; j +=k) {
        new_ids.push_back(ids[j]); 
      }
    }
    ids = new_ids;
    new_ids.clear();
  }
  for (auto& id: ids) cout << id << ' ';
  cout << endl;
}