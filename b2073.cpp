#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int a, b, n;
  cin >> a >> b >> n;
  //5  3 
  a%=b;//2 3
  int x;
  while (n--){
    a*=10;//20 3
    x = a / b;//6
    a -= x*b;//2
  }
  cout << x << endl;
}