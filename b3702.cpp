#include <iostream>
#include <vector>

using namespace std;
 int main()
{
  int m, n, sx, sy;
  cin >> m >> n >> sx >> sy;
  auto matrix = vector(n, vector(m, pair<int, int>()));
  for (auto &line : matrix) {
    for (auto &[x, y] : line) {
        cin >> x >> y;
    }
  }
  do {
    cout << sx << ' ' << sy << endl;
    tie(sx, sy) = matrix[sx - 1][sy - 1];
  } while (sx != 0 && sy != 0);
}