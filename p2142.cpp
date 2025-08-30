#include <iostream>
#include <string.h>
using namespace std;

class bint {
  int *digits = nullptr;
  int size = 0;
  void reset(int len) {
    if (digits != nullptr) {
      delete[] digits;
      digits = nullptr;
    }
    size = len;
    digits = new int[size];
  }
  void trim() {
    while (size > 1 && digits[size - 1] == 0) size --;
  }
 public:
  ~bint() {
    if (digits == nullptr) return ;
    delete[] digits;
    digits = nullptr;
  }
  bint& operator=(const bint &rhs) {
    reset(rhs.size);
    memcpy(digits, rhs.digits, sizeof(int) * size);
    return *this;
  }
  bint& operator=(const string &rhs) {
    reset(rhs.length());
    for (int i = 0; i < size; i ++) {
      digits[i] = rhs[size - 1 - i] - '0';
    }
    return *this;
  }
    bool operator<(const bint &rhs) {
    if (size != rhs.size) return size < rhs.size;
    for (int i = size - 1; i >= 0; i --) {
      if (digits[i] != rhs.digits[i]) {
        return digits[i] < rhs.digits[i];
      }
    }
    //最后一定剩=
    return false;
  }
  bint operator-(const bint &rhs) {
    bint ret;
    ret = *this;
    // for (int i = 0; i < rhs.size; i ++) {
    //   if (ret.digits[i] < rhs.digits[i]) {
    //     ret.digits[i] += 10;
    //     ret.digits[i + 1] --;
    //   }
    //   ret.digits[i] -= rhs.digits[i]; 
    //   //cout << ret.digits[i] << endl;
    // }
    for (int i = 0; i < size; i ++) {
      if (i < rhs.size) ret.digits[i] -= rhs.digits[i];
      if (ret.digits[i] < 0) {
        ret.digits[i] += 10;
        ret.digits[i + 1] --;
      }
    }
    ret.trim();
    //cout << ret.size << endl;
    return ret;
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
    ret.trim();
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
  if (a < b) {
    cout << '-' << b - a << endl;
  } else {
    cout << a - b << endl;
  }
  // cout << a << endl;
  // cout << b << endl;
}