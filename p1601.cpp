#include <iostream>
#include <string.h>
using namespace std;

class bint {
  int *digits = nullptr;
  int size = 0;
 public:
  bint operator=(const string &rhs) {
    size = rhs.size();
    if (digits != nullptr) {
      delete[] digits;
      digits = nullptr;
    }
    digits = new int[size];
    for (int i = 0; i < size; i ++) {
      digits[i] = rhs[size - 1 - i] - '0';
    }
    return *this;
  }
  bint operator+(const bint &rhs) {
    bint ret;
    ret.size = max(size, rhs.size) + 1;
    ret.digits = new int[ret.size];
    memset(ret.digits, 0, sizeof(int) * ret.size);
    for (int i = 0; i < ret.size - 1; i ++) {
      if (i < size) ret.digits[i] += digits[i];
      if (i < rhs.size) ret.digits[i] += rhs.digits[i];
      if (ret.digits[i] >= 10) {
        ret.digits[i] -= 10;
        ret.digits[i + 1] ++;//确认i+1不会越界
      }
    }
    while (ret.size > 1 && ret.digits[ret.size - 1] == 0) ret.size --;
    return ret;
  }
  friend istream& operator>>(istream &lhs, bint &rhs) {
    string str;
    lhs >> str;
    rhs = str;
    return lhs;
  }
  friend ostream& operator<<(ostream &lhs, const bint &rhs) {
    for (int i = rhs.size - 1; i >= 0; i --) {
      lhs << rhs.digits[i];
    }
    return lhs;
  }
};


int main() {
  bint a, b;
  cin >> a >> b;
  // cout << a << endl;
  // cout << b << endl;
  cout << a + b << endl;

}