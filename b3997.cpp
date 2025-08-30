#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  string str;
  cin >> str;
  int index = 0, length = 1;
  int cnt = 0;
  while (index < str.length()) {
    string subStr = str.substr(index, length);
    index += length;
    length ++;
    string revStr = subStr;
    reverse(revStr.begin(), revStr.end());
    if (revStr == subStr) cnt ++;
  }
  cout << cnt << endl;
}