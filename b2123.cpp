#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main() {
  string str, res;
  cin >> str;
  char lastchar = str[0];
  int length = 1;
  for (int i = 1; i <= str.length(); i ++) {
    if (str[i] == lastchar) {
      length ++;
    } else {
      res += to_string(length) + lastchar;
      lastchar = str[i];;
      length = 1;
    }
  }
  cout << res << endl; 
}