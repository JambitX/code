#include <iostream>
using namespace std;

int decode() {
  int res = 0;
  char ch;
  while (cin >> ch) {
    if (ch == 'F') {
      cin >> ch;
      int x;
      cin >> x;
      res += x;
    }
    else if (ch == 'B') {
      cin >> ch;
      int x;
      cin >> x;
      res -= x;
    }
    else if (ch == 'R') {
      while (getchar() != ' ') 
        ;
      int x;
      cin >> x >> ch;
      
        res += x * decode();
    }
    else {
      return res;
    }
  }
  return res;
}

int main() {
  cout << abs(decode()) << endl;
}