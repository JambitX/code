#include <iostream>
#include "stdio.h"
#include <format>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
  double a, b, c;
  cin >> a >> b >> c;
  if (double rt = b * b - 4 * a * c; rt < 0) {
    puts("No answer!");
  } else if (rt > 0) {
    rt = sqrt(rt);
    double x1 = (-b+rt)/2/a, x2 = (-b-rt)/2/a;
    cout << format("x1={:.5f};x2={:.5f}",min(x1, x2),max(x1, x2)) << endl;
  } else {
    cout << format("x1=x2={:.5f}",-b/2/a) << endl;
  }
}