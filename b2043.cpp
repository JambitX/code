#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  int x;
  cin >> x;
  if (x % 3 &&  x % 5 && x % 7) puts("n");
  else {
    if (x % 3 == 0) cout << "3 ";
    if (x % 5 == 0) cout << "5 ";
    if (x % 7 == 0) cout << "7 "; 
  }
}