/**
Create a class and a global friend function that manipulates the private data in the class.
**/
#include <iostream>

using namespace std;


class Test {
    private:
        int p;

    public:
        friend void g_func(Test&, int);     // 声明在类里，但不一定就是类的成员函数。可以是friend全局函数
        int getP(){return p;}
};

// friend关键字只在声明时使用，定义时无需写friend
/*friend*/ void g_func(Test& test, int x){        // 没写Test::g_func(), 说明g_func()是一个全局函数，不属于Test类
    test.p = x;
}


int main(){
    Test t;
    g_func(t, 100);
    cout << "t.p = " << t.getP() << endl;
    return 0;
}