#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int a, b, c=1;
  cin >> a >> b;
  a %= 1000;
  while(b--){
    c *= a;
    c %= 1000;
  }
  // if (c < 10) {
  //   cout << '0' << '0' << c << endl;
  // } else if (c < 100) {
  //   cout << '0' << c << endl;
  // } else {
  //   cout << c << endl;
  // }
  cout.width(3);
  cout.fill('0');
  cout << c << endl;
}