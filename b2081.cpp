#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int n, sum=0;
  cin >> n;
  for (int i = 1;i<=n;i++) {
    int num = i;
    int has_no_seven = 1;
    while (num >0) {
      if (num%10 == 7) {
        has_no_seven = 0;
        break;
      } else num /= 10;
    }
    if (i % 7 != 0 && has_no_seven) {
      sum += i*i;
    }
  }
  cout << sum << endl;
}