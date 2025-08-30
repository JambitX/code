#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int x, y;
    scanf("%d %d", &x, &y);
    if (x + y == 3) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}