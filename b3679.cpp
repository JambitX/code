#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, k, T;
  cin >> n >> k >> T;
  auto mimaji = vector(n, tuple<int, int, bool>());
  for (auto& [x, y, withS] : mimaji) {
    cin >> x >> y;
    //withS = 0;
  }
  while (k--) {
    int sx, sy;
    cin >> sx >> sy;
    for (auto &[x, y, p] : mimaji) {
      if (x == sx && y == sy) {
        p = 1;
        break;
      }
    }
  }
  int cnt = 0;
  while (T --) {
    int fx, fy;
    cin >> fx >> fy;
    int maxDist = 0;
    int withSurvivor = false;
    for (auto &[x, y, withS] : mimaji) {
      int dist = (x - fx) * (x - fx) + (y - fy) * (y - fy);
      if (dist > maxDist) {
        maxDist = dist;
        withSurvivor = withS;
      }
    }
    cnt += withSurvivor;
  }
  cout << cnt << endl;
  return 0;  
}