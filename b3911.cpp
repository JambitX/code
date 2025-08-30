#include <iostream>
using namespace std;
int main() {
  // getline
   // 1. names, value
   // 2. find { find},  
   int n, k;
   cin >> n >> k;
   string names[n];
  int values[n];
  for (int i = 0; i < n; i ++) {
    cin >> names[i] >> values[i];
  }
  string str;
  getline(cin, str);
  while (k --) {
    getline(cin, str);
    int left = str.find("{");
    while (left != string::npos) {
      int right = str.find("}");
      string name = str.substr(left + 1, right - left - 1);
      int value;
      for (int i = 0; i < n; i ++) {
        if (names[i] == name) {
          value = values[i];
          break;
        }
      }
      str.replace(left, right - left + 1, to_string(value));
      left = str.find("{", left + 1);
    }
    cout << str << endl;
  }
}