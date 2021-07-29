/**
Part 1:
Write a struct called Lib that contains three string objects a, b, and c.
In main( ) create a Lib object called x and assign to x.a, x.b, and x.c.
Print out the values. Now replace a, b, and c with an array of string s[3].
Show that your code in main( ) breaks as a result of the change.
Part 2:
Now create a class called Libc, with private string objects a, b, and c,
and member functions seta( ), geta( ), setb( ), getb( ), setc( ), and getc( )
to set and get the values. Write main( ) as before. Now change the
private string objects a, b, and c to a private array of string s[3].
Show that the code in main( ) does not break as a result of the change.
**/

#include <iostream>
#include <string>
using namespace std;

// Part1
struct Lib {
    string a;
    string b;
    string c;
    //string abc[3];    // 编译不通过：error: ‘struct Lib’ has no member named ‘a’ .
};

// Part 2:

// struct Libc {
// private:
//     string a;
//     string b;
//     string c;
// public:
//     void seta(string str)   { a = str; }
//     string geta()           { return a; }
//     void setb(string str)   { b = str; }
//     string getb()           { return b; }
//     void setc(string str)   { c = str; }
//     string getc()           { return c; }
// };

struct Libc {
private:
    string s[3];
public:
    void seta(string str)   { s[0] = str; }
    string geta()           { return s[0]; }
    void setb(string str)   { s[1] = str; }
    string getb()           { return s[1]; }
    void setc(string str)   { s[2] = str; }
    string getc()           { return s[2]; }
};


int main(){
    // Part1:
    Lib x;
    x.a = "hello";      
    x.b = "world";
    x.c = "welcome";
    cout << x.a << " " << x.b << " " << x.c << endl;
   
    /* string class test ---------------------
    x.a = 256;      // 编译提示warning: overflow in implicit constant conversion 
    x.b = 255;      // = 这里是operator overload， 匹配的char那一个。https://www.cplusplus.com/reference/string/string/operator=/
    x.c = 255;
    
    // string test = 1;        // 如果直接创建一个string对象赋值为1则编译不过。因为这里调用的是构造函数，overload的构造函数中没有char参数的
    
    string t2;
    t2 = "test";
    cout << "t2 = " << t2 << endl;

    string t3;
    t3 = 100;
    cout << "t3 = " << t3 << endl;
    string class test ----------------------*/

    // Part2:
    Libc y;

    y.seta("four");
    y.setb("five");
    y.setc("six");

    cout << "\ny.a = " << y.geta()
         << "\ny.b = " << y.getb()
         << "\ny.c = " << y.getc() << endl;
    return 0;
}