#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSame(int x, int a, int b, int c) {
  return a == x && b == x && c == x;
}

bool isWin(vector<vector<int>> &board, int x) {
  for (int i = 0; i < 3; i ++) {
    if (isSame(x, board[i][0], board[i][1], board[i][2])) return true;
    if (isSame(x, board[0][i], board[1][i], board[2][i])) return true;
  }
  if (isSame(x, board[0][0], board[1][1], board[2][2])) return true;
  if (isSame(x, board[0][2], board[1][1], board[2][0])) return true;
  return false;
}

int main() {
  string str;
  cin >> str;
  auto board(vector(3, vector(3, -1)));
  for (size_t i = 0; i < str.size(); i ++) {
    int pos = str[i]-'1';
    int y = pos%3;
    int x = pos/3;
    board[x][y] = i%2;//a0  uim 1
  }
  if (isWin(board, 0)) cout << "xiaoa wins." << endl;
  else if (isWin(board, 1)) cout << "uim wins." << endl;
  else cout << "drew." << endl;
}