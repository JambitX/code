#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
  string str, res;
  cin >> str;
  for (auto& c : str) {//C语言的字符串无法范围循环
    if (isalpha(c)) {
      res += c;
    }
  }
  cout << res << endl;
}

