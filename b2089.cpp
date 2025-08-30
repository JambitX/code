#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n = 0;
  cin >> n;
  int arr[n];
  for (auto& x: arr) cin >> x;
  // for (int i = n - 1; i >= 0; i --) {
  //   cout << arr[i] << ' ';
  // }
  // for (int i = 0, j = n - 1; i < j; i++, j--) {
    // int temp = arr[i];
    // arr[i] = arr[j];
    // arr[j] = temp;

    //algorithm 里的交换函数
    // swap(arr[i],arr[j]);
  // }
  reverse(arr, arr + n);//旋转这部分数字
  for (auto x: arr) {
    cout << x << ' ';
  }
}