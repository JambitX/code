#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  unsigned int high = n >> 16;
  unsigned int low = (n << 16) >> 16;
  //或者  n & 0xffff 或者  n & ((1 << 16) - 1)
  cout << ((low << 16) | high) << endl;
}