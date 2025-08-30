#include <iostream>
#include "stdio.h"
#include <format>
using namespace std;
int main(){
  long long n;//n可能会非常大，int不行会tle，要用long long
  cin >> n;
  while(n - 1){
    if (n % 2 ==0) {
      cout << format("{}/2={}\n",n ,n / 2);
      n /= 2;
    } else {
      cout << format("{}*3+1={}\n",n ,n*3+1);
      n = n*3+1;
    }
  }
  puts("End");
}