#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
 int n;
  cin >> n;
  // if (n>0) cout << "positive" << endl;
  // else if (n == 0) cout << "zero" << endl;
  // else cout << "negative" << endl; 
  if (n > 0) puts("positive");
  if (n == 0) puts("zero");
  if (n < 0) puts("negative");
}
 