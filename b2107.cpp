#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (auto& line: arr) {
    for (auto& x: line) {
      cin >> x;
    }
  }
  int change_arr[m][n];
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < m; j ++) {
      change_arr[j][n - i - 1] = arr[i][j];
    }
  }
  for (auto& line: change_arr) {
    for (auto& x: line) {
      cout << x << ' ';
    }
    cout << endl;
  }
}