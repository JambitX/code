#include <iostream>

using namespace std;

string encode(string s) {
  if (s.find('0') == string::npos) {
    return "B";
  }
  if (s.find('1') == string::npos) {
    return "A";
  }
  int half = s.length() / 2;
  return "C" + encode(s.substr(0, half)) + encode(s.substr(half));
}

int main() {
  string str;
  cin >> str;
  cout << encode(str) << endl;
}