#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void pardon(auto& matrix, int x, int y, int size) {
  if (size == 1) return;
  int half = size / 2;
  for (int i = x; i < x + half; i ++) {
    for (int j = y; j < y + half; j ++) {
      matrix[i][j] = 0;
    }
  }
  pardon(matrix, x + half, y, half);
  pardon(matrix, x, y + half, half);
  pardon(matrix, x + half, y + half, half);
}


int main() {
  int n;
  cin >> n;
  int m = pow(2, n);
  auto matrix = vector(m, vector(m, 1));
  pardon(matrix, 0, 0, m);

  for (auto line : matrix) {
    for (auto x : line) {
        cout << x << ' ';
    }
    cout << endl;
  }
}