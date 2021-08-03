/**
Create a class that contains four member functions,
with 0, 1, 2, and 3 int arguments, respectively.
Create a main( ) that makes an object of your class and
calls each of the member functions. Now modify the class
so it has instead a single member function with all the
arguments defaulted. Does this change your main( )?
**/

#include <iostream>

using namespace std;

class Test{
public:
    // void func();
    // void func(int);
    // void func(int, int);
    // void func(int, int, int);
    void func(int i = 0, int x = 1, int y = 2, int z = 3);
};

// void Test::func(){
    
// }

// void Test::func(int x){
    
// }

// void Test::func(int x, int y){
    
// }
// void Test::func(int x, int y, int z){
    
// }

void Test::func(int i, int x, int y, int z){
    
}
int main(){
    Test tt;
    tt.func();
    tt.func(1);
    tt.func(1,2);
    tt.func(1,2,3);
    return 0;
}