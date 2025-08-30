#include <iostream>
using namespace std;
int main() {
  int arr[10];
  double sum = 0;
  double prices[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
  for (auto& price: prices) {
    int num;
    cin >> num;
    sum += num * price;
  }
  cout << fixed;
  cout.precision(1);
  cout << sum << endl;
}