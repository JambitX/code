#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  int n;
  cin >> n;
  vector<vector<int>> urls(n);
  for (auto& url: urls) 
  {
    int t;
    cin >> t;
    url.resize(t);
    for (auto& link: url) 
    {
      cin >> link;
    }
  }
  urls.insert(urls.begin(), vector<int>());
  vector<int> visited(n + 1);
  visited[1] = true;
  for (auto& id: urls[1]) {
    visited[id] = true;
    for (auto& id2: urls[id]) {
      visited[id2] = true;
    }
  }
  int count = 0;
  for (auto vis: visited) {
    count += vis;
  }
  cout << count << endl;
  return 0;
}