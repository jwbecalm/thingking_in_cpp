/**
Create two functions, one that takes a string* and one that
takes a string&. Each of these functions should modify the
outside string object in its own unique way. In main( ),
create and initialize a string object, print it, then pass
it to each of the two functions, printing the results.
**/

#include <iostream>
#include <string>

using namespace std;

//通过指针修改外部对象
void func1(string* px){
    *px = "modified by pointer";    // 修改px指针变量所指向的内容为新的值
}

//通过引用修改外部对象
void func2(string& ry){             //与传值相比，传递的参数是引用。
    ry = "modified by reference";   // modify directly
}

int main(){
    string st = "initial value";
    cout << "st = " << st << endl;

    func1(&st);
    cout << "st = " << st << endl;

    func2(st);  //Looks like pass-by-value, is actually pass by reference
    cout << "st = " << st << endl;

    return 0;
}