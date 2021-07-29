/**
Create three classes. The first class contains private data, and grants friendship
to the entire second class and to a member function of the third class. In main( ),
demonstrate that all of these work correctly.
**/
#include <iostream>
using namespace std;

class First;    // 前向声明

class Second {
    public:
        // 由于Second 在First类中被声明为class frind。所有Second类的所有member function都可以访问First类的private成员或函数
        void mFunc1(First* f);
        void mFunc2(First* f);
};

class Third {
    public:
        // Third类只有mFunc1被声明为friend。
        void mFunc1(First* f);
        //void mFunc2(First* f);
};

class First{
    private:
        int p;
        friend class Second;                    // 整个Second类都是friend。
        friend void Third::mFunc1(First* f);    // Third类只有mFunc1()是friend

    public:
        First():p(100){}
};

void Second::mFunc1(First* f) {
    cout << "in Second::mFunc1()" << endl;
    cout << "f->p = " << f->p << endl;  //在First类的外部，通过friend访问First类的私有成员
}
void Second::mFunc2(First* f) {
    cout << "in Second::mFunc2()" << endl;
    cout << "f->p = " << f->p << endl;  //在First类的外部，通过friend访问First类的私有成员
}

void Third::mFunc1(First* f){
    cout << "in Third::mFunc1()" << endl;
    cout << "f->p = " << f->p << endl;  //在First类的外部，通过friend访问First类的私有成员
}

// void Third::mFunc2(First* f){
//     cout << "in Third::mFunc2()" << endl;
//     cout << "f->p = " << f->p << endl;
// }


int main(){
    First f;
    //cout << f.p;        // 编译错误: error: ‘int First::p’ is private. 但下面用friend可以访问
    
    Second s;
    s.mFunc1(&f);         // 把需要访问的类对象，作为参数（指针）传递给friend。
    s.mFunc2(&f);

    Third t;
    t.mFunc1(&f);
    //t.mFunc2(&f);       // 编译错误，Third::mFunc2()不是friend函数
    return 0;
}
