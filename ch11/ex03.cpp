/**
Write a program in which you try to
    (1) Create a reference that is not initialized when it is created.
    (2) Change a reference to refer to another object after it is initialized.
    (3) Create a NULL reference.
**/

#include <iostream>

using namespace std;

int main() {
    // 1 引用在声明时必须初始化
    //int& ref1;      // compile error: 'ref1' declared as reference but not initialized

    int x = 10;
    int& ref2 = x;
    cout << "x = " << x << endl;
    cout << "ref2 = " << ref2 << endl << endl;

    // 2 一旦一个引用被初始化指向一个对象，它就不能改变为另一个对象的引用

    int y = 20;
    ref2 = y;   // 这里没有编译错误，ref2的指向并未改变，其指向的空间由10改变为20
    cout << "ref2 = " << ref2 << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl << endl;

    int z = 30;
    ref2 = z;
    cout << "ref2 = " << ref2 << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    // 3 不可能有NULL引用。必须保证引用指向一块合法的存储单元
    //int& ref3 = NULL;   // compile error: initial value of reference to non-const must be an lvalueC/C++(461)
    return 0;
}