/**
Experiment with Union.cpp by removing various union elements to see the
effects on the size of the resulting union. Try assigning to one element
(thus one type) of the union and printing out a via a different element
(thus a different type) to see what happens.
**/

#include <iostream>
using namespace std;

union Packed {
    char c;
    short s;
    int i;
    long l;
    //float f;
    double d;
};

int main() {
    cout << "sizeof(Packed) = " << sizeof(Packed) << endl;
    
    Packed x;
    x.c = 'c';
    cout << "x.c = " << x.c << endl;
    
    x.d = 1.23;
    cout << "x.d = " << x.d << endl;

    x.s = 2;
    cout << "x.s = " << x.s << endl;
    
    cout << x.i << ' ' << x.l << endl; // 尝试输出未赋值的成员 
}