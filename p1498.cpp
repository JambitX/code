#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void draw(auto& matrix, int x, int y, int height, int width) {
    if (height == 2) {
        matrix[x][y+1] = '/';
        matrix[x][y+2] = '\\';
        matrix[x+1][y] = '/';
        matrix[x+1][y+1] = '_';
        matrix[x+1][y+2] = '_';
        matrix[x+1][y+3] = '\\';        
        return;
    }
    draw(matrix, x, y + width/4, height/2, width/2);
    draw(matrix, x + height/2, y, height/2, width/2);
    draw(matrix, x + height/2, y + width/2, height/2, width/2);
}
int main() {
    int n;
    cin >> n;
    int height = pow(2, n);
    int width = pow(2, n+1);
    auto matrix = vector(height, vector<char>(width, ' '));
    draw(matrix, 0, 0, height, width);
    for (auto line : matrix) {
      for (auto x : line) {
        cout << x;
      }
      cout << endl;
    }
}
