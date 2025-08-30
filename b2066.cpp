#include <iostream>
#include "stdio.h"
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  double time = 0;
  while (n --){
    double x, y, c;
    cin >> x >> y >> c;
    double dis = sqrt(x*x+y*y);
    time += dis / 25 + 1.5 * c;
  }
  cout << int(ceil(time)) << endl;
}