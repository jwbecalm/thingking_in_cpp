/**
Create a struct declaration with a single member function, then create a
definition for that member function. Create an object of your new data type,
and call the member function.
**/

#include <iostream>
using namespace std;

struct myStruct
{
    void test();
};

void myStruct::test(){
    cout << "in myStruct::test()" << endl;
    //return;
}

int main(){
    myStruct ms;
    ms.test();
    return 0;
}