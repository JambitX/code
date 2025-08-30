#include <iostream>
#include <vector>
#include <format>
using namespace std;

int w(auto& saved, long long a, long long b, long long c) {
  if (a <= 0 || b <= 0 || c <= 0) return 1;
  else if (a > 20 || c > 20 || b > 20) return w(saved, a, b, c);

  int &memo = saved[a][b][c];
  if (memo != -1) return memo;
  if (a < b && b < c) return memo = w(saved, a, b, c - 1) + w(saved, a, b - 1, c - 1) - w(saved, a, b - 1, c); 
  return memo = w(saved, a - 1, b, c) + w(saved, a - 1, b - 1, c) + w(saved, a - 1, b, c - 1) - w(saved, a - 1, b - 1, c - 1);

}

int main()
{
  auto saved = vector(21, vector(21, vector(21, -1)));
  long long a, b, c;
  while (cin >> a >> b >> c) {
    if (a == -1 && b == -1 && c == -1) break;
    cout << format("w({}, {}, {}) = {}", a, b, c, w(saved, a, b, c)) << endl;  
  }
  
}