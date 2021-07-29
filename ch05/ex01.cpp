/**
Create a class with public, private, and protected data members and function members.
Create an object of this class and see what kind of compiler messages you get when
you try to access all the class members.
**/

#include <iostream>
using namespace std;

class Test {
    public:
        Test(): pub(0), pri(0), pro(0){}    // 构造函数一般是public，供类的外部创建对象时使用。私有构造函数通常用于Singleton模式
    public:
        int pub;
    private:
        int pri;
    protected:
        int pro;
    
};

int main(){
    Test t1;
    t1.pub = 1;
    // t2.pri = 2;      // 在类的外部，通过对象无法访问私有成员。编译报错
    // t3.pro = 3;      // 在类的外部，通过对象无法访问保护成员。编译报错
    return 0;
}