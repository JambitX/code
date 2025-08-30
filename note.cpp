#include<iostream>
//iostream => input output stream 输入输出流
//“流”代表数据流向，从键盘流向程序中的变量/从变量流向终端
// int main()
// {
//   std::cout << "Hello World!" << std::endl;
// }
// 一种简便的写法：
using namespace std;
// int main()
// {
//   cout<< "Hello World!" << endl;
//   //cout 也有write函数调用的方法输出字符
//   //cout.write("Hello World!\n",13);
//   //endl ≈ \n + 确保内容可以立即显示
// }

//int - integer

//输入与输出
// int main()
// {
//   int a;
//   cin >> a;//cin => character input
//   cout << a << endl;//cout => character output
// }

// #include<format>
// int main()
// {
//   int a = 1,b = 2;
//   cout << format("{}+{}={}",a,b,a+b) << endl;
//   //c++插件默认使用较低的版本
//   //将设置 > c++ > intellisense > cpp standard 选择 gnu++ 20
//   //错误提示消失
// }

//  #include<stdio.h>
//  int main()
//  {
//   int d = 255;
//   printf("%d\n",d);//255 //d => decimal     十进制
//   printf("%o\n",d);//377 //o => octal       八进制
//   printf("%x\n",d);//ff  //x => hexadecimal 十六进制
//   printf("%X\n",d);//FF  //‘X’会使对应输出改成大写 FF
//   //十进制和八进制的输出无法区分进制
//   //在‘%’前加上‘#’
//   printf("%#d\n",d);//255 十进制无特殊符号
//   printf("%#o\n",d);//0377
//   printf("%#x\n",d);//0xff
//   printf("%#X\n",d);//0XFF

//   return 0;
//  }

#include<iostream>
#include<format>
using namespace std;
// int main()
// {
  // int d = 255;
  // cout << oct;
  // cout << 8 << ' ' << 16 << endl;
  // //cout << oct << 8 << ' ' << 16 (不建议这么写，会误解为只针对本次输出)
  // cout << dec;
  // cout << hex;
  // cout << uppercase;//将十六进制字母显示为大写
  // cout << nouppercase;//小写
  // cout << showbase;
  // //语义非常明确！ 无需关注有无符号以及长度！
  // //但使用起来比较繁琐

  // //c++ 20 提供的format取了两者之长
  // cout << format("{}",d) << endl;
  // cout << format("{:o}",d) << endl;
  // cout << format("{:x}",d) << endl;
  // cout << format("{:X}",d) << endl;
  // cout << format("{:#o}",d) << endl;
  // cout << format("{:#x}",d) << endl;
  // cout << format("{:#X}",d) << endl;
  // cout << format("{:b}",d) << endl;
  // cout << format("{:#b}",d) << endl;
  // cout << format("{:#B}",d) << endl;

  // //字符型输出
  // char c = 'a';
  // printf("%c\n",c);
  // cout << c << endl;
  // cout << format("{}",c) << endl;
  // cout << format("{:d} {:c}",c,97) << endl;

  // //bool型
  // bool t = true;
  // bool f = false;
  // printf("%d %d\n",t,f);
  // cout << t << " " << f << endl;
  // cout << boolalpha;
  // cout << t << " " << f << endl;
  // cout << format("{} {}",t,f) << endl;
  // //format中， 默认结果是true和false
  // cout << format("{:d} {:d}",t,f) << endl;
  // //除非特地指明，则显示1和0

  //浮点型输出
//   float f = 12.3456789012;
//   printf("%f\n",f);//f => fixed
//   printf("%e\n",f);
//   printf("%g\n",f);//g => general 保留6个有效数字，超过就自动转为科学计数法
//   printf("%a\n",f);//a => hexadecimal 以尾数和指数的形式输出，是最精确的
//   printf("%.8f\n",f);//设定精度位数
//   printf("%.*f\n",8,f);//用*代替数字，用参数来设定精度位数 注：*在f前面，故数字参数也要在f前面
//   double d = 12.3456789012;
//   printf("%.10lf\n",d);
  
//   cout << f << endl;
//   cout << fixed;
//   cout << f << endl;
//   cout << scientific;//对应%e
//   cout << f << endl;
//   cout << defaultfloat;//对应%g
//   cout << f << endl;
//   cout << hexfloat;//对应%a,内存输出法
//   cout << f << endl;
//   cout.precision(10);//一般与fixed结合使用
//   cout << fixed;
//   cout << f << endl;
// //cout 依然语义非常明确，但是非常不直观！
//   float f = 123.456789012;
//   cout << format("{:f}",f) << endl;
//   cout << format("{:e}",f) << endl;
//   cout << format("{:g}",f) << endl;
//   cout << format("{:a}",f) << endl;
//   cout << format("{}",f) << endl;
//   cout << format("{:.8f}",f) << endl;
//   cout << format("{:.{}f}",f,10) << endl;//用花括号作占位符，用左括号来计数的，f在外，代表数字的{}在内，和printf相反
// } 

// int main()
// {
//   int d = 255;
//   // printf
//   printf("%7d|\n",d);//数字表示占字符数，不足就用空格补齐
//   printf("%-7d|\n",d);//负号表示左对齐，正号表示右对齐
//   // cout
//   cout.width(7);// 只生效一次！
//   cout << d << '|' << endl;
//   cout << left;
//   cout.width(7);
//   cout << d << '|' << endl;
//   //format
//   cout << format("{:>7}|",d) << endl;//向右对齐，指向哪向哪对齐
//   cout << format("{:<7}|",d) << endl;
//   cout << format("{:^7}|",d) << endl;//居中

//   //format的冒号前后都能加东西
//   //{arg-id:format-spec}
//   cout << format("{0:4d}{0:4o}{0:4x}",255) << endl;//0指的是第0个元素
//   cout << format("{2}{1}{0}{3}",'a','b','c','d') << endl;
// }


//类型转换 
//浮点型转整型   保留整数部分
//浮点型互转     改变存储方式
//整型转浮点型   改变存储方式
//大整型转小整型 舍弃多余的位数
//小整型转大整形 补充0至一样大小
//计算时的转换   按隐式转换的级别转换
//
//常用数学函数
//

#include "math.h"
// int main()
// {
//   //pow sqrt abs fmod浮点数取模
//   //ceil向上取整 floor向下取整
//   //round四舍五入
//   //cbrt开三次方
//   //三角函数 对数
// }

// int main(){
//   for (int a = 1; a <=9; a ++) {
//     for (int b = 1; b <=a;b ++) {
//       cout << format("{}*{}={:<2} ", a, b, a*b);
//     }
//     cout << endl;
//   }
// }
//数组
//int arr[10];  ???????????
// int arr[10] = {}; 00000000000
// int arr[10] = {1, 2, 3}; 1230000000
// int arr[] = {1, 2, 3};   123
// #include <algorithm>
// int arr[10];
// fill(arr, arr + 10, 1); 111111111111111111
// fill(arr + 3, arr + 8, 2); 1112222211 
// #include <string.h>
// memset(arr, 0, 40);
// memset(arr, 0, sizeof(int) * 10);
// memset(arr, 0, sizeof(arr));
// memset(arr + 3, -1, sizeof(int) * 5);
// memset直接对内存操作，速度快
// fill则是可以赋值为任何值
// int grid[4][5];
// int grid = {
// {1, 2, 3, 4, 5},
// {6, 7, 8},
// {11}
//};
// memset(grid, 0, sizeof(grid))
//
//


//vector
//STL是CPP标准库的一部分
//容器 是STL的重要 组成部分
//vector是一种动态数组容器
#include <vector>
// using namespace std;
// int main() {
//   //vector<类型> 变量名
//   vector<int> vi;
//   vector<double> vd; 
//   //尖括号< >是一种名叫模版的高级语法
//   vector<vector<int>> vvi;//每个内存容器都可以是不同长度
//   //索引 
//   vi[0];支持下标操作符
//   vi.at(0);
//   vi.at(-1);//at会检查是否越界，如果越界在运行时会报错 std::out_of_range: vector
//   //输入/输出
//   vector 在生成时内部没有任何数据，需要读取数据到某个变量
//   for (int i = 0; i < 10; i ++) {
//     int x;
//     cin >> x;
//     vi.push_back(x);
//   }
//   for (int i = 0; i < vi.size(); i ++) {
//     cout << vi[i] << endl;
//   }
//   for (auto& x: vi) {
//     cout << x << endl;
//   }
//   //初始化 圆括号初始化大小，括号内第二个参数为初始值
//   vector<int> v0(5);// 0 0 0 0 0
//   vector<int> v1(5, 1);// 1 1 1 1 1
//   vector<int> v2{1, 2, 3};// 1 2 3
//   vector<int> v3(v1);// 1 1 1 1 1可以直接用另一个vector初始化
//   vector<vector<int>> v4(2, vector<int>(8,3));//3 3 3 3 3 3 3 3 
//                                               //3 3 3 3 3 3 3 3
//   auto v5 = vector(2, vector(8, 3));

// //-----------------------------------------------
// //默认初始化
// int main() {
//   vector<string> svec1; //默认初始化，svec中不包含任何元素
//   //列表初始化
//   vector<int> ivec1 = {1,2};
//   vector<int> ivec1_2{1,2};
//   //vector<int> ivec1_3 = (1,2);//非法，应为花括号
//   //构造初始化，执行类的构造方法
//   vector<int> ivec1_4(10);//10个元素，每个元素初始化为0
//   vector<int> ivec1_5{10};//对比花括号：表示只有一个元素，值为10
//   vector<int> ivec1_6(10,1);//第一个参数是个数，第二个参数是值
//   vector<int> ivec1_7{10,1};//两个元素，10、1
//   //string不太一样
//   vector<string> svec1_1{"Hi"};//只有一个元素Hi
//   //vector<string> svec1_2("Hi");//非法
//   vector<string> svec1_3{10};//10个空元素
//   vector<string> svec1_4{10,"Hi"};//10个Hi
//   vector<string> svec1_5(10,"Hi");//这么写当然不会报错

//   vector<int> ivec2(ivec1);
//   vector<int> ivec3 = ivec1;
//   //vector<string> svec2 = (ivec1);//报错，类型要相同
// }
// //-----------------------------------------------------





//   //可以赋值运算
// v1 = v0
// 比较运算
// 比较字典序
// 
//   //常用成员函数
//   vector<int> v{1, 2, 3};
//   cout << v.front() << endl;//获取第一个元素
//   cout << v.back() << endl;//获取最后一个元素
//   cout << v.size() << endl;//获取当前元素个数
//   cout << v.empty() << endl;//判断当前是否为空
//   v.clear();//清空vector的数据
//   v.push_back(4);//将数据输入vector的末尾
//   v.pop_back();//将最后一个数据从vector中移除
//   v.resize(3);//重新定义vector的大小，如果比原先小，则删除末尾的函数
//   v.resize(5,1);//如果比原先大，则用0填充，如果有第二个参数，则用这个数填充
//   v.begin();指向容器始
//   v.end();指向容器末
//   v.erase(v.begin());//删除一个元素
//   v.erase(v.begin() + 1, v.begin() + 3);//删除一段元素
//   v.insert(v.begin(),4);//插入一个元素
//   v.insert(v.begin() + 1, {4, 5, 6});
//   v1.insert(v1.end(), v2.begin(), v2.end());
// }
#include <stdio.h>
#include <string.h>
// int main() {
//   //字符串！！
//   char str[] = {'a','b','c'};
//   char str[] = "abc";
//   //初始化
//   cin >> str;
//   cin.getline(str, 10);
//   fgets(str, 10, stdin);
//   //常用函数
//   int len= strlen(str);//\0之前
// strcpy(dst, src);将第二个字符串复制到第一个字符串，
                    //只会赋值\0之前的内容
// strcat(a, b);将第二个字符串复制到都一个字符串的末尾
// int order = strcmp(a, b);
// order < 0  => a <  b
// order == 0 => a == b
// order > 0  => a >  b
//
// char str[] = "= one + two * (three / four)";
// char delimiter[] = "=+*/() ";
// char* token = strtok(str, delimiter); 
// memset memcpy 是对memory内存的操作
// 内存是以一个字节为单位的，而字符恰好是一个字节
// 对内存的操作可以看成对字符的操作
// 故这两个函数也在string.h中
// memset(arr, ch, sizeof(arr))
// 可以对别的数据类型的数组操作
// 如果对int操作，如赋值1，则int四个字节每个字节都为00000001，结果是一个很大的数
// 而0和-1的每位相同，所以可以
// memspy(dst目标, src源, size)
// #include <stdlib.h>
// cout << atoi("123")<< endl; //123
// cout << atoll（"12345678901"）<<endl; //12345678901
// cout << atof("3.14")//
// atof("1e-4")
// atof("Oxlp-2")
// atof("abc")<< endl;
// 将字符串转化成对应数字，字符串需是合法数字
#include <ctype.h>
// 
// }
// //
// //
// //string C++提供的字符串
#include <string>
// using namespace std;
// int main()
// {
//   string str1 = "012345";
//   string str2 = str1;
//   string str3(6, '#');
//   string str4(str1);
//   string str("012345");
//   string str6(str1, 2, 2);//从第几个字符开始，使用多少个字符来初始化
//   string str8("012345",2);//使用多少个字符来初始化
//   输入和输出时当普通变量
//   cin >> str;
//   cout << str;
//   getline(cin, str);//从cin中读取一行，到\n结束，\n不读入

//   string 很像vector, 但string里的元素是固定的char类型
//   string str1 = "abc";
//   string str2 = "cba";
//   str2 = str1;
//   str1 </=/> str2;
//   str1[0];
//   string str3 = str1 + str2;
//   str1 += "abc";
//   str1 += 'd';//直接将字符或字符串加到末尾
  /*
  访问
  at     带范围检测的下标访问
  front  获取第一个字符
  back   获取最后一个字符
  c_str  返回C语言字符串
  
  迭代器
  begin
  end

  容量
  empty
  size
  length

  修改
  clear      清空字符串
  insert     插入字符(串）迭代器或下标都可使用
  resize     改变大小 
  erase      删除子串 迭代器或下标都可使用
  push_back  将字符插入末尾
  append     将字符串插入末尾
  pop_back   移除末尾字符
  replace    替换一段子串

  操作
  find          寻找子串首次出现位置，可指定从哪个下标开始找，返回下标 
                找不到返回string::npos
  substr        返回指定子串，指定下标，返回从此开始的子串，可指定返回长度
  starts_with   前缀判断
  ends_with     后缀判断

  stoi / stoll / stod 把字符串转成数值
  to_string   数值转成string

  format 格式化字符串
  */


// 


//main 函数
//现代化编译器中 都会在main函数的最后加上return 0;
//
//
// int main(int argc/*argument count*/, char** argv/*argument value*/) {
//   // cout << argc << endl;
//   // for (int i = 0; i < argc; i ++) {
//   //   cout << argv[i] << endl;
//   // }
//   int sum = 0;
//   for (int i = 1; i < argc; i ++) {
//     sum += atoi(argv[i]);
//   }
//   cout << sum << endl;
// }

//第八章 第三节：C++的内存模型
//-------------过时的理解---------------
// C++的内存分为： 代码区、全局区、堆区、栈区
// 代码区分为代码文本text段(.text)和只读数据rodata段(.rodata)
// 全局区分为已初始化的data段(.data)和未初始化的bss段(.bss)(Block Started by Symbol)
// 堆区向下增长，栈区向上增长
//------------------------------------
// 推荐的理解：根据数据的生命周期
// 1、静态生命周期：代码区、全局区
// 2、动态生命周期：堆区
// 3、自动声明周期：栈区  
//
// 自动生命周期：
// 内存的申请和释放完全自动 
// 这种只在容器的顶部进行操作的数据结构称为栈
// 栈的大小一般1-8MB
// 如果递归深度很深，容易栈溢出
// int[2 * 1024 * 1024] = 8MB也会栈溢出
// 此时就需要依赖另外两块内存 ： 代码区和全局区
// 代码区的内容我们无法操作，只讨论全局区
int a = 1;//全局变量不初始化，值也都是0
//静态变量 。。。
//-----------------------------------------
// 动态生命周期：需要手动管理
// C语言 可以通过<stdlib.h>中malloc来申请内存(memory allocation)
// void* malloc(size_t size);//参数是需要申请的内存大小，
// 返回的是void指针指向这块内存的首地址,因此可以转换成任意类型的指针
// int main() {
//   int* p1 = (int*)malloc(4);
//   //-------------释放-----------------
//   free(p1);
//   int* p2 = (int*)malloc(20);
//   //-------------释放-----------------
//   free(p2);
//   for (int i = 0; i < 5; ++i) {
//     cin >> p2[i];
//   }
//   int (*parr)[5] = (int(*)[5])malloc(20);
//   for (int &x : *parr) {
//     cin >> x;
//   }
//   using Array5 = int[5];
//   Array5* parr = (Array5*)malloc(20);
// }
// -----------------------------------------
// CPP中，新增了一个new关键字来申请内存
// 可以在申请的时候直接声明这块内存做什么用
// 如申请单个元素，直接写new int
#include <memory>
// int main() {
//   int* p1 = new int;//->undefined
//   //---------------释放----------------
//   delete p1;
//   int* p2 = new int[5]();//->0, 0, 0, 0, 0  这不是数组，后文详细分析
//   delete[] p2;//申请的是多个元素，则释放的时候也要加[]   
//   int (*p3)[5] = (int(*)[5])new int [5]();//->0, 0, 0, 0, 0
//   int* p4 = new int(5); 
//   int* p5 = new int[5]{1, 2, 3, 4, 5};//-> 1, 2, 3, 4, 5
//   vector<int>* p6 = new vector<int>;//-> []
//   vector<int>* p7 = new vector<int>(5, 1);//-> 1,1,1,1,1
//   vector<int>* p8 = new vector<int>{5, 1};//-> 5, 1
// //-----------------------悬挂指针---------------------
// // 常见错误  指向内存已经被释放的指针
//   int *p1 = new int[6];
//   for (int i = 0; i < 6; i++) {
//     p1[i] = i;
//   }
//   delete[] p1;
//   double *p2 = new double[3];
//   for (int i = 0; i < 3; i ++) {
//     p2[i] = i;
//   }
//   for (int i = 0; i < 6; i ++) {
//     cout << p1[i] << endl;
//   }
// //因此释放后建议 p1 = nullptr
// //--------------------------智能指针--------------------------------
// // CPP11 增加了智能指针 在<memory>头文件
//   shared_ptr<int> p1 = make_shared<int>(1);//申请的地址销毁后自动释放

//   unique_ptr<int> up = make_unique<int>(1);//无法赋值，申请内存销毁后直接释放
//   //shared_ptr<int> sp = up;
//   //unique_ptr<int> up2 = up;
//   weak_ptr<int> wp;
//   {
//     shared_ptr<int> sp = make_shared<int>(1);
//     wp = sp;
//     if (auto p = wp.lock(); p) {
//       cout << *p << endl;
//     }
//   }
//   if (auto p = wp.lock(); !p) {
//     cout << "deleted" << endl; 
//   }
//   //shared_ptr   共享所有权，可以多个shared_ptr管理同一资源
//   //unique_ptr   独占所有权，不允许拷贝
//   //weak_ptr     弱引用所有权，不影响资源的生命周期，常用于解决循环引用

//   // new Type[]
//   int (*p)[4][5] = new int [3][4][5];
//   for (int i = 0; i < 3; i ++) {
//     for (auto &line : p[i]) {
//       for (auto &x : line) {
         
//       }
//     }
//   }



// } 
//
//
//
//
//
//
//
// 内存
// 内存条
// 8 bit = 1 字节
// int x;
// cout << &x << endl;
// 就能获得地址
// 一个很大的十六进制数
// 在64位系统下，是一个64位无符号整数
// cout << (unsigned long long)&x << endl;就能变成10进制数
//
//指针
//*(ptr+1) == ptr[1]
//没有提供新能力，但方便书写--> 语法糖
//
// C++内存模型
// int* p1 = new int
//
// 类的前身 -- 结构体
// 将多个类型结合成一个新类型
// struct Student {
//   int score;
//   string name;
// };
// Student stu, stus[100];//单个变量or数组都行

// struct Student2 {//这种方式定义甚至可以不写类型名
//   int score;
//   string name;
// } stu, stus[10];//直接在结构体后面跟上变量名也可以
//结构化绑定
// auto [score, name] = stu;
// auto& [score, name] = stu;
// for范围循环
// for (auto &[score, _] : arr) {
//   cin >> score;
// }
//pair<int, string> a{99, "小明"};
//auto &[f, s] = a;
//auto b = make_pair(80, "");
//pair可以进行大小比较
// #include <tuple>
// int main() {
//   string name;
//   tuple<int, int, string> a{99, 7, "kk"};
//   auto &[score, id, name] = a;
//   auto b = make_tuple(80, 8, "kkl");
//   // 如果不结构化绑定
//   get<0>(a);
//   get<1>(a);
//   vector<pair<int, string>> vec;
//   vec.push_back(make_pair(99, "小明"));
//   vec.push_back({95, "小郭"});
//   vec.emplace_back(80, "小赵");
// }
//-----------------------------------------------
//类的封装性
//举例：高精度大数类
// class BigInt {
//   int* digits = nullptr;
//   int size = 0;//长度
//   int sign = 0;//符号
//  public:
//  //------------------构造函数--------------------------------
//   // 数据全部private，连正常的初始化都做不到了，该如何使用？
//   // 需要对外暴露相应的函数，需要在public
//   // BigInt(const string &str, int _sign) {
//   //   sign = _sign;
//   //   size = str.size();
//   //   digits = new int[size];
//   // }
//   //--------------------or---------------------------------
//   BigInt(const string &str, int sign): sign(sign), size(str.size()) {
//     digits = new int[size];//构造函数中申请了内存，但对象的生命周期结束后内存不释放会造成内存泄漏
//   }
//   //-------------------------圆括号和花括号中间加上冒号和初始值--------
//   BigInt(long long x) {}
//   BigInt() {}
//   BigInt(const BigInt &x) {
//     sign = x.sign;
//     size = x.size;
//     digits = new int[size];
//     memcpy(digits, x.digits, 4 * size);
//   }
//   ~BigInt() {
//     if (digits == nullptr) return ;
//     delete[] digits;
//     digits = nullptr;
//   }
// };

// int main() {
//   BigInt a("123"s/*string*/, 1);
//   BigInt* ptr = new BigInt("345"s, -1);
//   BigInt b = 1000;
//   BigInt c = {"789", 1};
//   BigInt d;
//   BigInt e(a);//有了析构函数，默认的构造函数还会出问题，他只会用目标对象的值来进行赋值给新对象
//   //他们的digits会指向同一块内存，所以需要重载默认构造函数
// }

// class BigInt {
//   int* digits = nullptr;
//   int size = 0;
//  public:
//   BigInt(const BigInt &x) {}
//   BigInt(const string &str) {}
//   BigInt(long long x = 0) {}
//   ~BigInt() {}
//   BigInt add(const BigInt &x) {
//     BigInt ret;
//     //bulabula.........
//     return ret;
//   }
//   void self_add(const BigInt &x) {
//     //add x to self
//   }
//   //--------------------------运算符重载---------------------------
//   BigInt operator+(const BigInt &x) {}
//   BigInt& operator+=(const BigInt &x) {}
//   //-----------------------------
//   auto operator-(const Type &rhs) {}
//   auto operator-() {}//无参数代表负号取反
//   BigInt &operator++() {}//自增自减返回自身
//   BigInt &operator--() {}//
//   bool operator!() {}//逻辑非返回布尔
//   BigInt operator~() {}
//   BigInt operator+() {}
//   //自增自减分前置和后置两种，默认重载的是前置，返回的是自身
//   //重载后置，则需要填一个哑元参数int
    


// int main() {
//   string x, y;
//   cin >> x >> y;
//   BigInt X = x, Y = y;
//   BigInt Z = X.add(Y);
//   //X.self_add(Y).self_add(Y);//用this指针能实现链式调用

// }
//
//--------------------------------------------------------
// 第九章 第三节：继承与多态
// 需要创建很多类时，每个类各自有不同和相同处
// 各自创建会有太多重复代码量
// class Obj {
//   double x, y, w, h;
//   int life, attack;
//  public:
//   bool test(Obj* other);
// };
// //↑父类/基类     ↓子类/派生类
// class Plant : Obj {
//   int coolDown;
// };

// class Base {
//   int a;
//  protected:
//   int b;
//  public:
//   int c;
// };
// class Derived : Base {
//   void test() {
//     a = 1;//子类不能访问父类的private 
//     b = 2;//可以访问父类的public 和 protected
//     c = 3;
//   }
// }
// class Derived : public Base {

// };
//                  成员在父类中的权限
//                public        protected        private
// 继  public     public        protected        no access
// 承  protected  protected     protected        no access
// 方式private    private        private         no access
//
// class A final {};
// class B : A {};//加了final的类不能被继承，保护代码健壮性
//
//构造函数和析构函数无法被继承
// 
// 为了方便管理已生成的对象，希望将所有的对象都存到一个容器中
// 但各个对象类型不同，该如何用一个容器来管理呢
// 只要是public继承  子类就可以直接转换成父类
// is-a-kind-if继承：
// class X {};
// class Y : public X {};
// int main() {
//   Y y;
//   X x;
//   X& xRef = y;
//   X* xPtr = &y;
// }
// Y is-a X 亲儿子
// 而 peotected 和 private 继承，只是利用了父类的能力来实现自身，Y只是义父
// Y is-implemented-in-terms-of X
// class Zombie {
//  public:
//   virtual void attack() {};//虚函数
// };
// class LadderZombie : public Zombie {};
// class Gargantuar : public Zombie {
//  public:
//   void attack() override {}//重写
// };
// int main() {
//   vector<Zombie*> zombies;
//   zombies.push_back(new LadderZombie());
//   zombies.push_back(new Gargantuar());
//   for (Zombie* z : zombies) {
//     z -> attack();
//   }
// }
// 虚函数？？？？？？？？？？？？？？？？？？？？？？？
// 根本听不懂  跳跳跳
// 
// ---------------------------算法与数据结构导论--------------------------
// 针对某类特定问题快速的解决办法
// 

#include <algorithm>
#include <iostream>
#include <chrono>
#include <format>
#include <random>
using namespace std;

mt19937 rnd(time(0));//mt19937:random库中一种随机数的类型

//计时器
void benchmark(const string &name, const auto &func) {
  auto start = chrono::high_resolution_clock::now();
  func();
  auto end = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
  cout << format("{} execution time: {} ms\n", name, duration.count());
}
// =========================常见算法==============================
/* ==========================sort==========================
 * sort(Iterator begin, Iterator end, Function comp)
 * 从小到大排序
 * 复杂度 O(nlogn)
 * [选择排序] execution time: 2916 ms
 * [sort] execution time: 6 ms
*/
// int main() {
//   int n = 100000;
//   vector<int> vec(n);
//   for (int i = 0; i < n; i++) vec[i] = rnd();
//   vector<int> vec2 = vec;

//   benchmark("[选择排序]", [&]() {//O(n^2)
//     for (int i = 0; i < n; i++) {
//       int minId = i;
//       for (int j = i + 1; j < n; j ++) {
//         if (vec[j] < vec[minId]) minId = j;
//       }
//       swap(vec[i], vec[minId]);
//     }
//   });

//   benchmark("[sort]", [&]() {//O(nlogn)
//     sort(vec2.begin(), vec2.end());
//   });

//   //从大到小
//   //sort(vec2.begin(), vec2.end(), greater<int>());

//   for (int i = 0; i < n; i++) {
//     if (vec[i] != vec2[i]) {
//       cout << "error" << endl;
//       break;
//     }
//     cout << vec[i] << endl;
//   }
// }
//  
/* =====================nth_element============================
 * nth_element(Iterator begin, Iterator nth, Iterator end, Function comp)
 * 将第 nth 小的数移动到第 nth 位
 * 复杂度 O(n)
 * [sort] execution time: 994 ms
 * [nth_element] execution time: 90 ms
 */
// int main() {
//   int n = 10000000;
//   vector<int> a(n);
//   for (int i = 0; i < n; i ++) a[i] = rnd();
//   vector<int> b = a;
//   int k = rnd() % n;

//   benchmark("[sort]", [&]() {
//     ranges::sort(a);
//     cout << a[k] << endl;
//   });

//   benchmark("[nth_element]", [&]() {
//     nth_element(b.begin(), b.begin() + k, b.end());
//     cout << b[k] << endl;
//   });
// }
//
/* =================lower_bound/upper_bound=================================
 * lower_bound(Iterator begin, Iterator end, Type v, Function comp)
 * [在有序数组中]找到第一个大于等于 v 的迭代器
 * upper_bound(Iterator begin, Iterator end, Type v, Function comp)
 * [在有序数组中]找到第一个大于 v 的迭代器
 * e.p.:
 * 1 1 2 2 2 2 3 3 3  -> 2
 *     l       u
 * 1 1 1 3 3 3 3 4    -> 2
 *     [l,u]
 * 复杂度:O(logn)快快快快
 * [for] execution time: 2191 ms
 * [lower_bound] execution time: 1 ms
*/
// int main() {
//   int n = 10000000;
//   vector<int> a(n);
//   for (int i = 0; i < n; i ++) a[i] = rnd();
//   ranges::sort(a);
//   vector<int> b = a;
//   vector<int> targets(1000);
//   for (auto &x : targets) x = rnd(); 

//   vector<int> ans1, ans2;
//   benchmark("[for]", [&]() {
//     for (auto &x : targets) {
//       for (int i = 0; i < n; i ++) {
//         if (a[i] >= x) {
//           ans1.push_back(i);
//           break;
//         }
//       }
//     }
//   });
  
//   benchmark("[lower_bound]", [&]() {
//     for (auto &x : targets) {
//       ans2.push_back(ranges::lower_bound(a, x) - a.begin());
//     }
//   });
// }
//
/* =================next_permutation=============================
 * bool next_permutation(Iterator begin, Iterator end)
 * 生成下一个排列， 在原数组中直接修改
 * 如果已经是最后一个排列，则修改为最小的排列后，则返回 false
 * 
 * bool prev_permutation(Iterator begin, Iterator end)
 * 和 next_permutation 反过来
 * 复杂度O(n)
*/
// int main() {
//   vector<int> a = {4, 1, 2, 3};
//   do {
//     for (auto x : a) cout << x << ' ';
//     cout << endl;
//   } while (next_permutation(a.begin(), a.end()));
// }
//
/* ===================unique=============================
 * unique(Iterator begin, Iterator end, Function matcher)
 * [移除]相邻的相同元素，并返回新序列的尾部
 * 不会直接删除，需要自行删除
 * 还可以自定义[相同]
 * 
 * 复杂度O(n)
 * 
 */
// int main() {
//   vector<int> vec = {1,1,1,1,2,2,2,1,1,1,1};
//   ranges::unique(vec);
//   vec.erase(unique(vec.begin(), vec.end(), [](int a, int b) {
//     return abs(a - b) <= 10;
//   }), vec.end());
//   for (auto &x : vec) cout << x << ' ';
//   cout << endl;
// }
//
/* ==============min/max_element===================
 * pair<Iterator, Iterator> min/max_element(Iterator begin, Iterator end, Function comp)
 * 返回最小最大值的迭代器，可自定义比较函数
 * Iterator min_element(Iterator begin, Iterator end, Function comp)
 * Iterator max_element(Iterator begin, Iterator end, Function comp)
 * 
 * 复杂度 O(n)
 */
// int main() {
//   int n = 10000000;
//   vector<int> a(n);
//   for (int i = 0; i < n; i ++) a[i] = rnd();
//   auto [minIter, maxIter] = ranges::minmax_element(a);
//   cout << *minIter << endl;
//   cout << *maxIter << endl;
//   cout << *ranges:: min_element(a) << endl;
//   cout << *ranges:: max_element(a) << endl;
//   //等效
//   int minId = 0, maxId = 0;
//   for (int i = 0; i < n; i ++) {
//     if (a[i] < a[minId]) minId = i;
//     if (a[i] > a[maxId]) maxId = i;
//   } 
//   cout << a[minId] << endl;
//   cout << a[maxId] << endl;
// }
//
/* ====================accumulate===========================
 * Type accumulate(Iterator begin, Iterator end, Type init, Function Operator)
 * 对范围内的数据进行累加，可以修改累加函数
 * 
 * 
 * 复杂度 O(n)
 */
// int main() {
//   int n = 100;
//   vector<int> a(n);
//   for (int i = 0; i < n; i ++) a[i] = i + 1;

//   long long init = 1;
//   auto sub = [](long long prev, int item) {
//     return prev - item;
//   };

//   auto sum = 0;
//   for (auto &item : a) sum += item;
//   cout << sum << endl;

//   cout << accumulate(a.begin(), a.end(), 0/*或0ll*/, sub/*可以自己设定是累加还是递减*/) << endl; 
// }
// ===========================常见STL容器===========================
/* ==============================vector======================
 * push_back/emplace_back O(1)
 * pop_back O(1)
 * insert O(n)
 * erase  O(n)
 * 
 */
// int main() {
//   int n = 100000000;
//   benchmark("push_back", [&]() {
//     vector<int> vec;
//     for (int i = 0; i < n; i ++) vec.push_back(rnd());
//   });
//   benchmark("push_back_when_initialed", [&]() {
//     vector<int> vec(n);
//     for (int i = 0; i < n; i ++) vec[i] = rnd();
//   });//赋值比插入新元素效率高高高
//   benchmark("reserve", [&]() {
//     vector<int> vec;
//     vec.reserve(n);
//     for (int i = 0; i < n; i ++) vec.push_back(rnd());
//   });//实在要插入新元素用reserve,和初始化后赋值差不多快
//   benchmark("new", [&]() {
//     int* arr = new int[n];
//     for (int i = 0; i < n; i ++) arr[i] = rnd();
//   });
//   benchmark("pop_back", [&]() {
//     for (int i = 0; i < n; i ++) vec.pop_back();
//   });
//   vector<int> vec2;
//   benchmark("insert", [&]() {
//     for (int i = 0; i < n; i ++) {
//       vec2.insert(vec2.begin(), rnd());
//     }
//   });
//   benchmark("erase", [&]() {
//     for (int i = 0; i < n; i ++) {
//       vec2.erase(vec2.begin());
//     }
//   });
// }
//
/* ====================queue=====================
 * push 在后面
 * pop  在前面
 * 
 * front
 * empty
 * size
 * 
 * 无法下标访问
 */
// #include <queue>
// int main() {
//   queue<int> que;
//   for (int i = 0; i < 10; i ++) {
//     que.push(i);
//   }
//   while (!que.empty()) {
//     int front = que.front();
//     que.pop();
//     cout << front << endl;
//   }
//   int n = 100000000;
//   benchmark("push", [&]() {
//     for (int i = 0; i < n; i ++) que.push(rnd());
//   });
//   benchmark("pop", [&]() {
//     for (int i = 0; i < n; i ++) que.pop();
//   });
//   // 无法下标访问
// }
//
/* =====================stack==========================
 * push在后面
 * pop也在后面
 * 
 * top
 * empty
 * size
 * 
 * 无法下标访问
 */
// #include <stack>
// int main() {
//   stack<int> stk;
//   for (int i = 0; i < 10; i ++) {
//     stk.push(i);
//   }
//   while (!stk.empty()) {
//     int top = stk.top();
//     stk.pop();
//     cout << top << endl;
//   } 
//   int n = 100000000;
//   benchmark("push", [&]() {
//     for (int i = 0; i < n; i ++) stk.push(rnd());
//   });
//   benchmark("pop", [&]() {
//     for (int i = 0; i < n; i ++) stk.pop();
//   });
//   vector<int> vec; 
//   //vec.reserve(n);
//   benchmark("vector push", [&]() {
//     for (int i = 0; i < n; i ++) vec.push_back(rnd());
//   });
//   benchmark("vector pop", [&]() {
//     for (int i = 0; i < n; i ++) vec.pop_back();
//   });
// }
//
/* ======================deque==========================
 * push_back/emplace_back
 * pop_back
 * push_front/emplace_front
 * pop_front
 * 
 * front
 * back
 * empty
 * size
 * 
 * 可以下标访问
 * 
 * deque push_back 速度比 vector 快
 * 但 vector 下标访问比 deque 快很多
 */
// #include <deque>
// int main() {
//   deque<int> deq;
//   int n = 100000000;
//   benchmark("push_back", [&]() {
//     for (int i = 0; i < n; i ++) deq.push_back(rnd());
//   });
//   vector<int> vec;
//     benchmark("push_back", [&]() {
//     for (int i = 0; i < n; i ++) vec.push_back(rnd());
//   });
//   benchmark("access", [&]() {
//     for (int i = 0; i < n; i ++) deq[i] = i;
//   });
//   benchmark("access", [&]() {
//     for (int i = 0; i < n; i ++) vec[i] = i;
//   });
//   // benchmark("pop_back", [&]() {
//   //   for (int i = 0; i < n; i ++) deq.pop_back();
//   // });
//   // benchmark("push_back", [&]() {
//   //   for (int i = 0; i < n; i ++) deq.push_front(rnd());
//   // });
//   // benchmark("pop_front", [&]() {
//   //   for (int i = 0; i < n; i ++) deq.pop_front();
//   // });
// }
//
/* ======================priority queue=========================
 * push/emplace
 * pop
 * 
 * top
 * empty
 * size
 * 
 * pop <- [3 2 100 0] <- push
 * 100 3 2 0
 * 
 * 堆 大顶堆/小顶堆
 */
// #include <queue>
// int main() {
//   priority_queue<int, /*内部使用什么数据结构来承载队列*/vector<int>, /*自定义比较大小, 或者写匿名函数，前面加decltype获取匿名函数的类型*/greater<int>> que;
//   int n = 10000000;
//   vector<int> vec(n);
//   for (int i = 0; i < n; i ++) vec[i] = rnd();
//   vector<int> sorted(n);
//   benchmark("push & pop", [&]() {
//     for (int i = 0; i < n; i ++) que.push(vec[i]);
//     for (int i = 0; i < n; i ++) {
//       sorted[i] = que.top();
//       que.pop();
//     }
//   });
//   benchmark("sort", [&]() {
//     ranges::sort(vec/*, greater<int>()*/);
//   });
//   for (int i = 0; i < n; i ++) {
//     if (sorted[i] != vec[i]) {
//       cout << "error" << endl;
//     }
//   }
// }
//
/* =======================set==============================
 * set 有序、唯一性
 * multiset 有序、不保证唯一
 * unordered_set 无序、唯一
 * 
 * insert  对set和multiset4个都是O(logn)           对unordered_set 是 O(1) * C 但会加上一个固定常数
 * erase
 * find
 * count   对multiset会退化成O(n)
 * 
 * 有序 元素支持 <
 * 无序 元素支持 hash
 * 
 */
#include <set>
#include <unordered_set>
// int main() {
  // multiset<int> ms{1,2,3,4,9,16,77};
  // auto iter = ms.lower_bound(9);
  // if (iter != ms.end()) {
  //   ;
  // }
  // set<int> s;
  // s.insert(1);
  // s.emplace(2);
  // if (auto iter = s.find(1); iter != s.end()) {
  //   cout << *iter << endl;
  // }
  // if (s.count(1)) {
  //   cout << "found" << endl;
  // }
  // s.erase(1);
  // if (s.count(1)) {
  //   cout << "found" << endl;
  // }

  // multiset<int> ms;
  // ms.insert(1);
  // ms.insert(1);
  // ms.erase(ms.find(1));
  // cout << ms.count(1) << endl;
  // ms.erase(ms.find(1));
  // cout << ms.count(1) << endl;
  // // ms.erase(ms.find(1));//找不到1则返回ms.end(),但end不确定，所以程序卡住
  // // cout << ms.count(1) << endl;
  // if (ms.find(1) != ms.end()) //所以删之前要判断是否等于end
  //   ms.erase(ms.find(1));
  // cout << ms.count(1) << endl;
  // ms.erase(1);

  // set<int> s{1, 1, 8, 4, 2, 2, 4, 8};//1 2 4 8 
  // multiset<int> ms{1, 1, 8, 4, 2, 2, 4, 8};//1 1 2 2 4 4 8 8
  // unordered_set<int> us{1, 1, 8, 4, 2, 2, 4, 8};//2 4 8 1
  // for (auto &x : s) cout << x << ' ';
  // cout << endl;
  // for (auto &x : ms) cout << x << ' ';
  // cout << endl;
  // for (auto &x : us) cout << x << ' ';
  // cout << endl;

//   int n = 1000000;
//   set<int> s;
//   unordered_set<int> us;
//   vector<int> vec;
//   benchmark("vec push", [&]() {
//     for (int i = 0; i < n; i ++) {
//       vec.push_back(rnd());
//     }
//   });
//   benchmark("set insert", [&]() { // nlogn
//     for (int i = 0; i < n; i ++) {
//       s.insert(vec[i]);
//     }
//   });
//   benchmark("unordered set insert", [&]() {  // O(n) * C
//     for (int i = 0; i < n; i ++) {
//       us.insert(vec[i]);
//     }
//   });

//   vector<int> targets(1000);
//   for (auto &x : targets) x = rnd();
//   vector<int> ans1, ans2, ans3;
//   benchmark("vec find", [&]() {
//     for (int target : targets) {
//       for (int i = 0; i < n; i ++) {
//         if (vec[i] == target) {
//           ans1.push_back(target);
//           break;
//         }
//       }
//     }
//   });
//   benchmark("set find", [&]() { // O(logn)
//     for (int target : targets) {
//       if (s.find(target) != s.end()) {
//         ans2.push_back(target);
//       }
//     }
//   });
//   benchmark("unordered set find", [&]() {  // O(1)  C
//     for (int target : targets) {
//       if (us.count(target)) {
//         ans3.push_back(target);
//       }
//     }
//   });
//   for (size_t i = 0; i < ans1.size(); i ++) {
//     if (ans1[i] != ans2[i]  || ans1[i] != ans3[i]) {
//       cout << "error" << endl;
//     }
//   }
// }
//
/* ======================map==========================
 * insert/emplace
 * erase 
 * find
 * []
 * 
 */
// #include <string>
// #include <map>
// #include <unordered_map>
// int main() {
//   map<string, int> mp;
//   multimap<string, int> mmp;
//   unordered_map<string, int> ump;
//   mp.insert(make_pair("zhugeliang", 99));
//   mp.insert({"yuanfang", 95});
//   mp.emplace("guojia", 92);
//   auto iter = mp.find("guojia");
//   cout << (*iter).first << ' ' << iter->second << endl;
//   for (auto &[key, value] : mp) {
//     cout << key << ' ' << value << endl;
//   }
//   cout << mp["guojia"] << endl;
//   auto get = [&](string key) {
//     auto iter = mp.find(key);
//     if (iter == mp.end()) {
//       bool _;
//      tie(iter, _) = mp.emplace(key, 0);
//     }
//     return iter->second;
//   };
//   cout << mp["unknown"] << endl;
//   cout << get("unknown2") << endl;
//   cout << mp.size() << endl;
// }
//

// =======================位运算===========================
// &  按位与
// |  按位或
// ^  按位异或
// ~  按位取反
// << 左移
// >> 右移
/* x ^ x -> 0
 * x ^ 0 -> x
 * 交换两个整型
 * x = x ^ y;
 * y = x ^ y;
 * x = x ^ y; 
 */
// #include <bitset>
// int main() {
//   bitset<8000> bs;
//   cout << sizeof(bs) << endl;
//   bitset<8> bsi(123);
//   bitset<8> bsb(0b1111011);
//   bitset<8> bss("10111000"); 
//   bss[0];//false,顺序从低位到高位
//   bss.count();//数1的个数
//   bss.test(7);//看是不是1
//   bss.set(0);//将某一位设置为1
//   bss.reset(7);//将某一位设置为0
//   bss.flip(2);//将某一位取反、
//   bss.to_ulong();//转成unsigned long long
//   bss.to_string();//"01111011"转成字符串

//   vector<bool> vec;//CPP对vector<bool>做了特殊优化，一个数字占一个比特，缩小8倍空间，但随机访问效率差很多
// }
// =========================模版============================

// =========================约束词============================
// 用于限定或改变变量、函数、类、对象等行为或属性的关键字或符号 =约束行为
// 保护程序的健壮性
// const 只读、不可修改
// 
// #define 宏定义
#define FF(n) for (int i = 0; i < n; i ++) //可读性差
//
//
//
//
//
//
// ====================编译运行===============================
// linux环境下 .sh
// c++ A.cpp -o A -o2 --std=c++17 
// 编写
// c++ "$1.cpp" -o "$1" -O2 --std=c++17
// if [ $# -ge 2 ]; then
//   ./$1 < $2
// else 
//   ./$1
// fi
//
// windows环境下  .ps1
// 在powershell中 ： Set-ExecutionPolicy RemoteSigned
// 编写
// param([string]$f, [string]$i)
// c++ "$f.cpp" -o "$f.exe" -O2 --std=c++20
// if ($i) { 
//   Get-Content $i | & "./$f.exe"
// } else {
//   & "./$f.exe"
// }
// Remove-Item "$f.exe"
// ===================wa了怎么办====================
// watool  之后再看
// ==================配置调试环境====================
// 
// 
// 
//
//
//
//











