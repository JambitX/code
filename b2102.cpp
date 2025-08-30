#include <iostream>
using namespace std;
int main() {
  int n = 5, m = 5;
  bool found = false;
  int arr[n][m];
  for (auto& line: arr) {
    for (auto& x: line) {
      cin >> x;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j ++) {
      bool isMax = true, isMin = true;
      for (int k = 0; k < m; k ++) {
        if (arr[i][k] > arr[i][j]) {
          isMax = false;
          break;
        }
      }
      for (int k = 0; k < m; k ++) {
        if (arr[k][j] < arr[i][j]) {
          isMin = false;
          break;
        }
      }
      if (isMax && isMin) {
        cout << i+1 << ' ' << j+1 << ' ' << arr[i][j] << endl;
        found = true;
      }
    }
  }
  if (!found) cout << "not found" << endl;
}