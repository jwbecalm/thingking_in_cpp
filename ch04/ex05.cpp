/**
Repeat Exercise 4 but move the functions so they are member functions of the struct, and test again.
**/

#include <iostream>
using namespace std;

struct myStruct {
    int x;

    void init(int x);       // 把函数放在struct内后，不用再显示传递myStruct* st,c++由编译器自动完成 

    void display();         // 把函数放在struct内后，不用再显示传递myStruct* st,c++由编译器自动完成 

};

void myStruct::init(int i){
    x = i;          // 在成员函数内部，可以直接使用成员。c++ 编译器优先寻找struct内的局部成员
    this->x = i;    // 也可以冗余的调用this关键字，执行数据成员选择
}

void myStruct::display(){
    cout << "x = " << x << endl;
    cout << "this->x = " << this->x << endl;
}

int main(){
    myStruct st;
    st.init(100);
    st.display();
    return 0;
}
