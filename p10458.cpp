#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

void draw(auto& matrix, int x, int y, int size) {
  if (size == 1) {
    matrix[x][y] = 'X';
    return ;
  }
  int m1 = size / 3;
  int m2 = m1 * 2;
  draw(matrix, x, y, m1);
  draw(matrix, x, y + m2, m1);
  draw(matrix, x + m1, y + m1, m1);
  draw(matrix, x + m2, y, m1);
  draw(matrix, x + m2, y + m2, m1);
}
int main() {
  int n;
  while (cin >> n) {
    if (n == -1) break;
    int size = pow(3, n-1);
    vector<string> matrix(size,string(size, ' '));
    draw(matrix, 0, 0, size);
    for (auto line : matrix) {
      cout << line << endl;
    }
    cout << '-' << endl;
  }

}