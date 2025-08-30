#include <iostream>
#include "stdio.h"
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin >> n;
  int maxx = 0;
  while(n--){
    int x;
    cin >> x;
    maxx = max(maxx,x);
  }
  cout << maxx << endl;
}