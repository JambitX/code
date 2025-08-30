#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <format>
using namespace std;

int main() {
  using pii = pair<int, int>;
  using tiii = tuple<int, int, int>;
  int n;
  cin >> n;//参赛者人数 n
  vector<int> zuzhang(n);
  vector<pii> member(n);// first 打分  second 编号

  vector<tiii> vec(n);// 0总分   1成员打分  2编号
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    zuzhang[a-1] = n - i;
  }
  for (int i = 0; i < n; i++) {
    cin >> member[i].first;
    member[i].second = i + 1;
  }
  sort(member.begin(), member.end());
  for (int i = 0; i < n; i++) {
    get<2>(vec[i]) = i + 1;
    get<1>(vec[member[i].second - 1]) = i + 1;
  }
  for (int i = 0; i < n; i++) {
    get<0>(vec[i]) = get<1>(vec[i]) + zuzhang[i];
  }
  sort(vec.begin(), vec.end(), [](tiii &a, tiii &b) {
    auto &[total_a, member_a, _] = a;
    auto &[total_b, member_b, __] = b;
    if (total_a == total_b) return member_a > member_b;
    return total_a > total_b;
  });
  for (int i = 0; i < n; i ++) {
    if (get<2>(vec[i]) < 10) {
      cout << i + 1 << ". " << "Kod0" << get<2>(vec[i]) << " (" << get<0>(vec[i]) << ')' << endl;
    }
    else {
      cout << i + 1 << ". " << "Kod" << get<2>(vec[i]) << " (" << get<0>(vec[i]) << ')' << endl;
    }
  }
}
//---------------------------------------------------------------------
  // id, s1, s2, rank, count
// struct Info{
//   int id, s1, s2, rank, count;
// };
// int main() {
//   int n;
//   cin >> n; //参赛者数目n
//   vector<Info> infos(n);
//   for (int i = 0; i < n; i ++) infos[i].id = i + 1;
//   for (int rank = n; rank >= 1; rank --) {
//     int id;
//     cin >> id;
//     infos[id-1].s1 = rank;
//   }
//   for (auto &info : infos) cin >> info.count;
//   sort(infos.begin(), infos.end(), [](Info &a, Info &b) {
//     return a.count < b.count;
//   });
//   for (int i = 0; i < n; i++) {
//     infos[i].s2 = i + 1;
//   }
//   sort(infos.begin(), infos.end(), [](Info &a, Info &b) {
//     if (a.s1 + a.s2 == b.s1 + b.s2) return a.s2 > b.s2;
//     return a.s1 + a.s2 > b.s1 + b.s2;
//   });
//   for (int i = 0; i < n; i ++) {
//     cout << format("{}. Kod{:0>2} ({})", i + 1, infos[i].id, infos[i].s1 + infos[i].s2) << endl;
//   }
// }






