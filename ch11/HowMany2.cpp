//: C11:HowMany2.cpp
// From Thinking in C++, 2nd Edition
// Available at http://www.BruceEckel.com
// (c) Bruce Eckel 2000
// Copyright notice in Copyright.txt
// The copy-constructor
#include <fstream>
#include <string>
using namespace std;
ofstream out("HowMany2.out");

class HowMany2
{
  string name; // Object identifier
  static int objectCount;

public:
  HowMany2(const string &id = "") : name(id)
  {
    ++objectCount;
    print("HowMany2()");
  }
  ~HowMany2()
  {
    --objectCount;
    print("~HowMany2()");
  }
  // The copy-constructor:
  HowMany2(const HowMany2 &h) : name(h.name)
  {
    name += " copy";
    ++objectCount;
    print("HowMany2(const HowMany2&)");
  }
  void print(const string &msg = "") const
  {
    if (msg.size() != 0)
      out << msg << endl;
    out << '\t' << name << ": "
        << "objectCount = "
        << objectCount << endl;
  }
};

int HowMany2::objectCount = 0;

// Pass and return BY VALUE:
HowMany2 f(HowMany2 x)
{
  // 在下面的语句执行前，函数f的参数值传递， 会第一次调用拷贝构造函数

  x.print("x argument inside f()");   // 此时x的名字为h copy， 仅在函数内生效。
  out << "Returning from f()" << endl;
  
  // 在return前，x会被销毁。所以需要把x赋值给h2，第二次调用拷贝构造函数：h copy -->h copy copy
  return x;//第二次调用f(h)时，忽略了返回值，但是仍会生成一个临时的对象h copy copy， 在离开函数后立即销毁
}
// 第一次调用f(h)结束后，x(h copy)被销毁，调用h copy的析构函数。
// 第二次调用f(h)结束后，由于忽略了返回值，先销毁临时对象 h copy copy, 再销毁h copy

int main()
{
  HowMany2 h("h");
  out << "Before enter f(), return value needed." << endl;
  HowMany2 h2 = f(h);   // 用已有对象h,创建一个新的对象h2, 会调用拷贝构造函数


  h2.print("h2 after call to f()");
  out << "Before enter f(h), no return value" << endl;

  f(h);   //再次调用f, 参数仍为h, 但这次忽略了返回值。

  out << "After call to f()" << endl;
} ///:~
