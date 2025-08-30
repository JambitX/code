#include <iostream>
using namespace std;
int main()
{
  // int a,b,c,d,e,eat=0;
  // cin >> a >> b >> c >> d >> e;
  // eat += a%3;
  // a = a/3;
  // b += a;
  // e += a;

  // eat += b%3; 
  // b = b/3;
  // a += b;
  // c += b;

  // eat += c%3; 
  // c /= 3;
  // b += c;
  // d += c;

  // eat += d%3;
  // d /= 3;
  // c += d;
  // e += d;

  // eat += e % 3;
  // e /= 3;
  // d += e;
  // a += e; 
  // cout << a << ' ' << b << ' ' << c 
  // << ' ' << d << ' ' << e << endl;
  // cout << eat << endl;
  int arr[5];
  for (auto& x : arr) cin >> x;
  int sum = 0;
  for (int i = 0; i <5; i++) {
    sum += arr[i] % 3;
    arr[(i + 4) % 5] += arr[i] / 3;
    arr[(i + 1) % 5] += arr[i] / 3;
    arr[i] /= 3;
  } 
  for (auto& x: arr) {
    cout << x << ' ';
  }
  cout << endl;
  cout << sum << endl;
}