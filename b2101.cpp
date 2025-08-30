#include <iostream>
using namespace std;
int main() {
  int m, n;
  cin >> m >> n;
  int arr[m][n];
  for (auto& line: arr) {
    for (int& x: line) {
      cin >> x;
    }
  } 
  int sum = 0;
  // for (int i = 0; i < m; i++) {
  //   for (int j = 0; j < n; j++) {
  //     if (i == 0 || j == 0 || i == n - 1 || j == n -  1) {
  //       sum +=arr[i][j];
  //     }
  //   }
  // }
  for (int i = 0; i < m; i ++) {
    sum += arr[i][0];
    if (m - 1 == 0) continue; 
    sum += arr[i][n-1];
  }
  for (int j = 1; j < n - 1; j ++) {
    sum += arr[0][j];
    if (m - 1 ==0) continue;
    sum += arr[m-1][j];
  } //需考虑边缘情况
  cout << sum << endl;
}