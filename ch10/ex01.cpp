/**
Create a function with a static variable that is a pointer (with a default argument of zero).
When the caller provides a value for this argument it is used to point at the beginning of
an array of int. If you call the function with a zero argument (using the default argument),
the function returns the next value in the array, until it sees a "-1" value in the array
(to act as an end-of-array indicator). Exercise this function in main( ).
**/

#include <iostream>
using namespace std;

int next(int* addr = 0){
    static int* p;

    // 入参不为0，即赋予首地址时
    if(addr){
        // 给静态变量赋值
        p = addr;
        return *p;
    }
    // 没有入参时，即addr为0时
    if (addr == 0){
        if (*p == -1) return 0;     //如果是最后一个元素-1, 则返回0
        // 返回数组下一个值
        return *p++;        // 先取出指针p指向的地址单元的数据，之后再将该值加1
    }

}

int main(){
    int array[] = {10, 20, 30, 0};

    next(array);    //赋予array首地址, 这里的返回值没使用，无所谓。


    int x ;
    while ((x= next()) != 0){     // 遍历array进行打印, 直到遇到最后一个元素-1
        cout << x << endl;
    }
    return 0;
}