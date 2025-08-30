#include <iostream>
#include "stdio.h"
using namespace std;
int main(){
  char c;
  int a, b;
  cin >> a >> b >> c;
  // if (c == '+') cout << a + b << endl;
  // else if (c == '-') cout << a-b << endl;
  // else if (c == '*') cout << a*b << endl;
  // else if(c == '/') {
  //   if (b == 0) cout << "Divided by zero!" << endl;
  //   else cout << a / b << endl;
  // } else puts("Invalid operator!");
  switch (c) {
    case '+':
      cout << a + b << endl;
      break;
    case '-':
      cout << a - b << endl;
      break;
    case '*':
      cout << a * b << endl;
      break;
    case '/':
      if (b == 0) {
        cout << "Divided by zero!" << endl;
      } else {
        cout << a / b << endl;
      }
      break;
    default:
      cout << "Invalid operator!" << endl;
  }
}