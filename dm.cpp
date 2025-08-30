#include <iostream>
#include <fstream>
#include<sstream>
using  namespace std;

int main() {
  ifstream data("data.csv");
  string str;
  string name =  "小张";
  getline(data,str);
  string order = "20241223131200210";
  bool found = false;
  while (getline(data, str)) {
    stringstream ss(str);
    char ch;
    string orderInput;
    ss >> ch >> orderInput;
    cout << orderInput << endl;
    if (orderInput == order) {
      found = true;
      break;
    }
  }
  if (!found) {
    cout << "订单不合法: " << order << endl;
    return 1;
  }
  ifstream fin("used");
  string orderInput, nameInput;
  while (fin >> orderInput >> nameInput) {
    if (orderInput == order) {
      cout << "订单已被使用: " << nameInput << endl;
      return 2;
    }
  }
  cout << "合法订单" << endl;
  fin.close();
  ofstream fout("used", ios::app);
  fout << order << ' ' << name << endl;
  return 0;
}