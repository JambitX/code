#include <iostream>
#include <vector>
using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   vector<long long> coins(n);
//   for (auto& x: coins) cin >> x;
//   vector<int> p1, p2;
//   while (!coins.empty()) {
//     long long sum = 0;
//     for (auto& x: p1) sum += x;
//     int index = -1;
//     int mini = 0;
//     for (int i = 0; i < coins.size(); i ++) {
//       if (coins[i] <= sum) {
//         if (index != -1 || coins[i] > coins[index]) {
//           index = i;
//         }
//       }
//       if (coins[i] < coins[mini]) {
//         mini = i;
//       }
//     }
//     if (index != -1) {
//       p1.push_back(coins[index]);
//       coins.erase(coins.begin() + mini);
//     } else {
//       p1.push_back(coins[mini]);
//       coins.erase(coins.begin() + mini);
//     }
//     if (coins.empty()) break;

    
//     sum = 0;
//     for (auto& x: p2) sum += x;
//     index = -1;
//     mini = 0;
//     for (int i = 0; i < coins.size(); i ++) {
//       if (coins[i] <= sum) {
//         if (index != -1 || coins[i] > coins[index]) {
//           index = i;
//         }
//       }
//       if (coins[i] < coins[mini]) {
//         mini = i;
//       }
//     }
//     if (index != -1) {
//       p2.push_back(coins[index]);
//       coins.erase(coins.begin() + mini);
//     } else {
//       p2.push_back(coins[mini]);
//       coins.erase(coins.begin() + mini);
//     }
//   }
//   long long sum1 = 0, sum2 = 0;
//   for (auto x: p1) sum1 += x;
//   for (auto x: p2) sum2 += x;
//   cout << sum1 << ' ' << sum2 << endl;
// }

// int main() {
//   int n;
//   cin >> n;
//   vector<long long> coins(n);
//   for (auto& x: coins) cin >> x;
//   // vector<int> p1, p2;
//   vector<vector<long long>> players(2);
//   int currentPlayer = 0;
//   while (!coins.empty()) {
//     auto& player = players[currentPlayer];
//     currentPlayer = (currentPlayer + 1) % 2;
//     long long sum = 0;
//     for (auto& x: player) sum += x;
//     int index = -1;
//     int mini = 0;
//     for (int i = 0; i < coins.size(); i ++) {
//       if (coins[i] <= sum) {
//         if (index == -1 || coins[i] > coins[index]) {
//           index = i;
//         }
//       }
//       if (coins[i] < coins[mini]) {
//         mini = i;
//       }
//     }
//     if (index != -1) {
//       player.push_back(coins[index]);
//       coins.erase(coins.begin() + index);
//     } else {
//       player.push_back(coins[mini]);
//       coins.erase(coins.begin() + mini);
//     }
//   }
//   for (auto& player: players) {
//     long long sum = 0;
//     for (auto& x: player) {
//       sum += x;
//     }
//     cout << sum << ' ';
//   }
// }

// //函数做法
// void getCoin(vector<long long> &coins, long long &sum) {
//     int index = -1;
//     int mini = 0;
//     for (int i = 0; i < coins.size(); i ++) {
//       if (coins[i] <= sum) {
//         if (index == -1 || coins[i] > coins[index]) {
//           index = i;
//         }
//       }
//       if (coins[i] < coins[mini]) {
//         mini = i;
//       }
//     }
//     if (index == -1) index = mini;
//       sum += coins[index];
//       coins.erase(coins.begin() + index);
// }

// int main() {
//   int n;
//   cin >> n;
//   vector<long long> coins(n);
//   for (auto& x: coins) cin >> x;
//   long long a = 0, b = 0;
//   while (!coins.empty()) {
//     getCoin(coins, a);
//     if (coins.empty()) break;
//     getCoin(coins, b);
//   }
//   cout << a << " " << b << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
  // select value <= target item
  // select min_value
  // erase
  // 
  using u64 = unsigned long long;
  multiset<u64> coins;
  long long n;
  cin >> n;
  while (n --) {
    u64 coin;
    cin >> coin;
    coins.insert(coin);
  }
  u64 p1 = 0, p2 = 0;

  auto select = [&](u64 &sum) {
    
  };

  while (!coins.empty()) {
    select(p1);
    if (coins.empty()) break;
    select(p2);
  }
}





