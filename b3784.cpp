#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  //n歌的数量、m选歌数量、a班上人数、b她的学号
  using pii = pair<int, int>;
  vector<pii> songs(n);//first score  second  id
  int fid = 1;

  for (int i = 0; i < a; i++) {
    int f_score = 0;
    for (int j = 0; j < n; j++) {
      if (i == 0) {
        songs[j].second = j + 1;//写id
      }
      int s = 0;
      scanf("%d", &s);//卡常数
      //cin >> s; 
      songs[j].first += s;
      if (i == (b - 1)) {
        if (f_score <= s) {
          fid = j + 1;
          f_score = s;
        }
      }
    }
  } 

  // sort(songs.begin(), songs.end(), [](pii &a, pii &b){
  //   return a.first > b.first;
  // });

  sort(songs.begin(), songs.end(), greater<pair<int, int>>());
  //----------------参考老师的---------------------
  // for (int i = 0; i < n; i ++) {
  //   if (fid == songs[i].second) {
  //     if (i < m) {
  //       songs.insert(songs.begin(), songs[i]);
  //       songs.erase(songs.begin() + i + 1);
  //     } else {
  //       swap(songs[m - 1], songs[i]);
  //     }
  //   }
  // }
  //------------------参考老师的-------------
  //------------------自己写的-------------------
  int loc;
  for (int i = 0; i < n; i++) {
    if (songs[i].second == fid) {
      loc = i;
      break;
    }
  }

  if (loc < m && loc != 0) {
    songs.insert(songs.begin(), songs[loc]);
    songs.erase(songs.begin() + loc + 1);}
  else if (loc > m) {
    swap(songs[loc], songs[m - 1]);
  }
//------------------------自己写的--------------------
  for (int i = 0; i < m; i++) {
    cout << songs[i].second << ' ';
  }

  cout << endl;



}