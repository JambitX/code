#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// int rexp(string &s, int l, int r) {
//   int cnt = 0;
//   for (int i = l; i <= r; i ++) {
//     if (s[i] == '(') cnt ++;
//     if (s[i] == ')') cnt --;
//     if (cnt == 0 && s[i] == '|') {
//       return max((rexp(s, l, i - 1)), rexp(s, i + 1, r));
//     }
//   }

//   if (int left = s.find('(', l); left != string::npos && left <= r) {
//     int cnt = 1;
//     for (int i = left + 1; ; i ++) {
//       if (s[i] == '(') cnt ++;
//       if (s[i] == ')') {
//         cnt --;
//         if (cnt == 0) {
//           return rexp(s, l, left - 1) + rexp(s, left + 1, i - 1) + rexp(s, i + 1, r);
//         }
//       }
//     }
//   }
//   return r - l + 1;
// }

//对遇到每个字符所做的操作进行定义
int rexp(string& s, int& i) {
  int cnt = 0;
  for ( ; i < s.length(); i ++) {
    if (s[i] == 'a') {
      cnt ++;
    } else if (s[i] == '(') {
      cnt += rexp(s, ++i);
    } else if (s[i] ==')') {
      return cnt;
    } else if (s[i] == '|') {
      return max(cnt, rexp(s, ++i));
    }
  }
  return cnt;
} 

// int rexp() {
//   int cnt = 0;
//   char ch;
//   while(cin >> ch) {
//     if (ch == 'a') cnt ++;
//     if (ch == '(') cnt += rexp();
//     if (ch == ')') return cnt;
//     if (ch == '|') return max(cnt, rexp());
//   }
//   return cnt;
// }
int main() {
  string s;
  cin >> s;
  // cout << rexp(s, 0, s.length() - 1) << endl;

  int i = 0;
  cout << rexp(s, i) << endl;
  // cout << rexp() << endl;
}