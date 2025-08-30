#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char subs[16] = "TongjiACM2019", s[5001];
    cin >> s;
    if (strstr(s, subs)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}