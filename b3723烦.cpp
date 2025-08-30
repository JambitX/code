#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<long long> coins(n);
  for (auto &x : coins)
    cin >> x;
  int m = n;
  long long sum_1 = 0, sum_2 = 0;
  while (n--)
  {
    int small = -1;
    int big = -1;
    for (int i = 0; i < coins.size(); i++)
    {
      if (n % 2 != m % 2) {// 轮到FJ
          if (coins[i] <= sum_1 && small == -1) {
            small = i;
          } else if (small != -1 && coins[i] > coins[small] && coins[i] <= sum_1) {
            small = i;
          } else if (coins[i] > sum_1 && big == -1) {
            big = i;
          } else if (big != -1 && coins[i] < coins[big]) {
            big = i;
          }
      } else {
        if (coins[i] <= sum_2 && small == -1) {
          small = i;
        } else if (small != -1 && coins[i] > coins[small] && coins[i] <= sum_2) {
          small = i;
        } else if (coins[i] > sum_2 && big == -1) {
          big = i;
        } else if (big != -1 && coins[i] < coins[big]) {
          big = i;
        }
      }
    }
    if (n % 2 != m % 2)
    { // 判断这一轮是谁的=>塞到谁的口袋里
      if (small != -1)
      {
        sum_1 += coins[small];
        coins.erase(coins.begin() + small);
      }
      else
      {
        sum_1 += coins[big];
        coins.erase(coins.begin() + big);
      }
    }
    else
    {
      if (small != -1)
      {
        sum_2 += coins[small];
        coins.erase(coins.begin() + small);
      }
      else
      {
        sum_2 += coins[big];
        coins.erase(coins.begin() + big);
      }
    }
  }
  cout << sum_1 << ' ' << sum_2 << endl;
}