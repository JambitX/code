#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> vec(n);
  for (auto& x : vec) {
    scanf("%d", &x);
  }
  nth_element(vec.begin(), vec.begin() + k, vec.end());
  printf("%d\n", vec[k]);
}