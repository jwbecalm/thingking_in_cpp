/*
Modify YourPets2.cpp so that it uses various different data types
(char, int, float, double, and their variants). Run the program
and create a map of the resulting memory layout
*/

#include <iostream>
using namespace std;

char dog, cat, bird,fish;

void f(char pet) {
    cout << "pet id number: " << pet << endl;
}

int main() {
    char i, j, k;
    cout << "f(): " << (long)&f << endl;
    cout << "dog: " << (long)&dog << endl;
    cout << "cat: " << (long)&cat << endl;
    cout << "bird: " << (long)&bird << endl;
    cout << "fish: " << (long)&fish << endl;
    cout << "i: " << (long)&i << endl;
    cout << "j: " << (long)&j << endl;
    cout << "k: " << (long)&k << endl;
}

// 参考： https://www.zhihu.com/question/36103513

/*
先确认一下这里“低地址高地址”的定义，这里并不是指的大端小端中的地址高低，而是内存中的地址

1、全局变量

先定义的全局变量位于低地址，后定义的位于高地址。 

 

2、栈中变量

（栈中变量指的是由编译器自动分配释放的变量）

由于栈是往低地址生长的，所以先声明的变量位于高地址。

 

3、堆中变量

（堆中变量指的是由程序员分配释放的变量，例如new,malloc）

结论：由于堆是往高地址生长的，所以先声明的变量位于低地址。
*/