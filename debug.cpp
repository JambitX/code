/* 学号 姓名 班级 */
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
	/* srand函数用于生成伪随机数的种子，只需在程序开始时执行一次即可
	   下面的两个srand，根据需要打开其中的一个，注释掉另一个，观察运行结果
	*/
	srand((unsigned int)(time(0)));
//	srand(111); //可以替换为其它数字，自行替换并观察结果 

	/*生成10个伪随机数 */ 
  for (int j = 1; j <= 11; j ++) {
    if (j < 10) {
      cout << "[s2-0" << j << "]" << endl;
    }
    else {
      cout <<"[s2-" << j << "]" << endl;
    }


        // cout << rand()%2;
        cout << j + 2 << endl;
        cout << endl;
    

  }
	/* 结论：
		1、当srand的种子不变时，产生的伪随机数序列____(变/不变) 
		2、如果程序需要产生大量随机数，则srand_______ (仅需要在最开始调用一次/每次rand之前都需要调用) */

	return 0;
}