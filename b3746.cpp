#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, m;//n个节点，m个任务
  cin >> n >> m;
  vector<int> times(m);
  vector<long long> points_time(n, 0);//0 <= ti <= 1e9
  vector<vector<int>> points(n);
  //接受m个评测任务的时间
  for (auto& time: times) 
  {
    cin >> time;
  }
  int m0 = m;
  while(m --) 
  {
    //第m0 - m个任务
    int index = 0;
    for (int i = 0; i < n; i ++)
    {
      if (points_time[i] < points_time[index])
      {
        index = i;
      }
    }
    points[index].push_back(m0 - m);
    points_time[index] += times[m0 - m - 1];
  }
  
  for (auto point: points)
  {
    if (!point.empty())
    {
      for (auto mission: point)
      {
        cout << mission << ' ';
      }
    }
    else
    {
      cout << 0;
    }
    cout << endl;
  }
} 