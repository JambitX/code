#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m], real[n][m];
  //输入数组
  for (auto& line: arr) {
    for (auto& x: line) {
      cin >> x;
    }
  }
  for (int i = 1; i < n - 1; i ++) {
    for (int j = 1; j < m -1; j ++) {
      real[i][j] = (int)round((arr[i - 1][j] + arr[i][j - 1] + arr[i + 1][j] + arr[i][j + 1] + arr[i][j]) / 5.0);
    }
  }
  for (int i = 1; i < n - 1; i ++) {
    for (int j = 1; j < m -1; j ++) {
      arr[i][j] = real[i][j];
    }
  }
  //输出数组
  for (auto& line: arr) {
    for (auto& x: line) {
      cout << x << ' ';
    }
    cout << endl;
  }
}