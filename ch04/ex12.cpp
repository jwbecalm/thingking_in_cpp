
/**
Write a program that uses assert( ) with an argument that is always
false (zero) to see what happens when you run it. Now compile it with
#define NDEBUG and run it again to see the difference.
**/

#include <iostream>
#include <cassert>

using namespace std;

int main() {

    assert(0);      // 当使用g++ -DNDEBUG ex12.cpp  编译后并运行，不会出现assert打印。

return 0;
}