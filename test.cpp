#include<iostream>
using namespace std;
int main()
{
  cout << "get_input_data test-data.txt 3-b6-0" << 1 << "| 5-b11-demo > 5-b11-2-a.txt" << endl;

  for (int i = 2; i <= 332; i++) {
    if (i < 10) {
      cout << "get_input_data test-data.txt 3-b6-0" << i << "| 5-b11-demo >> 5-b11-2-a.txt" << endl;
    } else {
      cout << "get_input_data test-data.txt 3-b6-" << i << "| 5-b11-demo >> 5-b11-2-a.txt" << endl;
    }
  }
  cout << endl << endl;
  cout << "get_input_data test-data.txt 3-b6-0" << 1 << "| 5-b11-2 > 5-b11-2-r.txt" << endl;
  for (int i = 2; i <=332; i++) {
    if (i < 10) {
      cout << "get_input_data test-data.txt 3-b6-0" << i << "| 5-b11-2 >> 5-b11-2-r.txt" << endl;
    } else {
      cout << "get_input_data test-data.txt 3-b6-" << i << "| 5-b11-2 >> 5-b11-2-r.txt" << endl;
    }
  }
  cout << endl;
  cout << "txt_compare --file1 5-b11-2-a.txt --file2 5-b11-2-r.txt --display detailed" << endl;
}