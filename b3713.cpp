#include <iostream>
#include <string>
#include <format>
#include <vector>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  vector<string> problems(m);
  for (auto& str: problems) cin >> str;
  while (n --)
  {
    string id;
    cin >> id;
    for (auto& problem: problems)
    {
      string pattern;
      cin >> pattern;
      if (pattern == format("{0}.zip/{0}/{1}/{1}.cpp", id, problem))
      {
        cout << "Fusu is happy!" << endl;
      }
      else
      {
        cout << "Fusu is angry!" << endl;
      }
    }
  }
}