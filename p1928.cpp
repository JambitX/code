#include <iostream>
using namespace std;

// string decode(string s) {
//   static int i = 0;
//   for (int j = i; j < s.length() + 1; j ++) {
//     if (s[i] == '[') return decode(s.substr(i, j - i - 1)) + decode(s.substr(j - i + 1));
//     if ('1' <= s[i] && s[i] <= '9' && (s[i+1] <= '0' || s[i+1] >= 9)) {
//       for  (int k = s[i] - '0'; ; k ++) {

//       }
//     }
//   }
//   return s;
// }

string decode() {
  char ch;
  string res;
  while (cin >> ch) {
    if (ch == '[') {
      int x;
      cin >> x;
      string temp = decode();
      while (x--) {
        res += temp;
      }
    }
    else if (ch ==']') {
      return res;
    }
    else {
      res += ch;
    }
  }
  return res;
}


int main() {
  cout << decode() << endl;
  return 0;
}