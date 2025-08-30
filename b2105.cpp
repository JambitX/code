#include <iostream>
using namespace std;
int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int arr1[n][m], arr2[m][k];
  for (auto& line: arr1) {
    for (auto& x: line) {
      cin >> x;
    }
  }
  for (auto& line: arr2) {
    for (auto& x: line) {
      cin >> x;
    }
  }
  int arr[n][k];
  for (int i = 0; i < n; i ++) {
    for (int j = 0; j < k; j ++) {
      int sum = 0;
      for (int l = 0; l < m; l ++) {
        sum += arr1[i][l] * arr2[l][j];
      }
      arr[i][j] = sum;
    }
  }
  for (auto& line: arr) {
    for (auto& x: line) {
      cout << x << ' ';
    }
    cout << endl;
  }
}