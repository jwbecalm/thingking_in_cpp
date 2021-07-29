/**
Write two classes, each of which has a member function that takes a pointer
to an object of the other class. Create instances of both objects in main( )
and call the aforementioned member function in each class.
**/
#include <iostream>

using namespace std;

// When two classes refer to each other, it is necessary to forward-declare at least one of them
// or you’ll truly find yourself in a chicken-and-egg fix
class A;    // 前向声明， 编译器只需要知道如何传递一个地址，这个地址有固定的大小，而不管传递的是什么对象。

class B {
    public:
    void mFunc(A*);     // 这里只能用指针，不能用引用
    int b = 10;
};

class A {
    public:
    void mFunc(B*);
    int a = 20;
};



void A::mFunc(B* b){
    cout << "in A::mFunc()" << endl;
    cout << "b->b = " << b->b << endl;

}

void B::mFunc(A* a){
    cout << "in B::mFunc()" << endl;
    cout << "a->a = " << a->a << endl;
}

int main(){
    A a;
    B b;
    a.mFunc(&b);
    b.mFunc(&a);
    return 0;
}