#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cin >> str;
  int index = str.find("luogu");//find 数的应用
  int cnt = 0;
  while (index != string::npos) {
    cnt ++;
    index = str.find("luogu",index + 1);
  }
  cout << cnt << endl;
}