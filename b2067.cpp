#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int m, n, count = 0;
  cin >> m >> n;
  while (n--){
    int x;
    cin >> x;
    if (x <= m){
      m -=x;
    } else {
      count ++;
    }
  }
  cout << count << endl;
}