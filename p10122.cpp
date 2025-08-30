#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSame(int x, int y, int a, int b, int c) {
  if (x == y) return a == x && b == x && c == x;
  int cnt1 = (x == a) + (x == b) + (x == c);
  int cnt2 = (y == a) + (y == b) + (y == c);
  return cnt1 + cnt2 == 3 && (cnt1 != 3 && cnt2 != 3)/*判断组队时要去除单人的情况*/;
}

bool isWin(vector<string> &board, int x, int y) {
  for (int i = 0; i < 3; i ++) {
    if (isSame(x, y, board[i][0], board[i][1], board[i][2])) return true;
    if (isSame(x, y, board[0][i], board[1][i], board[2][i])) return true;
  }
  if (isSame(x, y, board[0][0], board[1][1], board[2][2])) return true;
  if (isSame(x, y, board[0][2], board[1][1], board[2][0])) return true;
  return false;
}

int main() {
  vector<string> board(3);
  for (auto &line: board) cin >> line;
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < 26; i ++) {
    if (isWin(board, i +'A', i + 'A')) cnt1 ++;
    for ( int j = 0; j < i; j ++) {
      if (isWin(board, i +'A', j + 'A')) cnt2 ++;
    }
  }
  cout << cnt1 << endl;
  cout << cnt2 << endl;
}