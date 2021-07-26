/**
Dynamically create pieces of storage of the following types, using new:
int, long, an array of 100 chars, an array of 100 floats.
Print the addresses of these and then free the storage using delete.
**/

#include <iostream>

using namespace std;

int main() {

    int *intPtr = new int(1);
    long *longPtr = new long(123);
    char *charPtr = new char[100];
    float *floatPtr = new float[100];
    //charPtr = "hello";

    int x = 0;

    cout << "Addresses: "
         << "\nstack var x: \t\t" << &x                 // 栈地址
         << "\nInt pointer: \t\t" << intPtr             // 堆地址
         << "\nLong pointer: \t\t" << longPtr
         << "\nChar[] pointer: \t" << (void*)charPtr    // cout在输出char* 时，默认已被重载为null-terminated string，会输出整个字符串。这里要输出首地址，必须强制转换为void*
         << "\nFloat[] pointer: \t" << floatPtr << endl;

    delete intPtr;
    delete longPtr;
    delete []charPtr;       // 有一个new操作，就需要一个delete操作;有一个new []操作，就需要一个delete[]操作，否则内存泄漏
    delete []floatPtr;


return 0;
}