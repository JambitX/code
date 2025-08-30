#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> coins(n);
  for (auto &x : coins)
    cin >> x;
  vector<int> FJ(1, 0), B(1, 0);
  int m = n;
  int sum_1 = 0, sum_2 = 0;
  while (n--)
  {
    int small = -1;
    int big = -1;

    for (int i = 0; i < coins.size(); i++)
    {
      if (n % 2 != m % 2)
      { // 轮到FJ
        for (auto f : FJ)
        {
          if (coins[i] <= f && small == -1)
          {
            small = i;
          }
          else if (small != -1 && coins[i] > coins[small])
          {
            small = i;
          }
          else if (big == -1 && coins[i] > f)
          {
            big = i;
          }
          else if (big != -1 && coins[i] < coins[big])
          {
            big = i;
          }
        }
      }
      else
      { // 轮到Bessie
        for (auto b : B)
        {
          if (coins[i] <= b && small == -1)
          {
            small = i;
          }
          else if (small != -1 && coins[i] > coins[small])
          {
            small = i;
          }
          else if (big == -1 && coins[i] > b)
          {
            big = i;
          }
          else if (big != -1 && coins[i] < coins[big])
          {
            big = i;
          }
        }
      }
    }
    if (n % 2 != m % 2)
    { // 判断这一轮是谁的=>塞到谁的口袋里
      if (small != -1)
      {
        FJ.push_back(coins[small]);
        coins.erase(coins.begin() + small);
      }
      else
      {
        FJ.push_back(coins[big]);
        coins.erase(coins.begin() + big);
      }
    }
    else
    {
      if (small != -1)
      {
        B.push_back(coins[small]);
        coins.erase(coins.begin() + small);
      }
      else
      {
        B.push_back(coins[big]);
        coins.erase(coins.begin() + big);
      }
    }
  }
  for (auto f : FJ)
  {
    sum_1 += f;
  }
  for (auto b : B)
  {
    sum_2 += b;
  }
  cout << sum_1 << ' ' << sum_2 << endl;
}