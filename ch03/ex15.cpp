/**
Create a struct that holds two string objects and one int. Use a typedef
for the struct name. Create an instance of the struct, initialize all
three values in your instance, and print them out. Take the address of
your instance and assign it to a pointer to your struct type. Change the
three values in your instance and print them out, all using the pointer.
**/

#include <iostream>
#include <string>

using namespace std;

typedef struct St{
    string s1;
    string s2;
    int i;
}St;

int main(){
    St st1;
    st1.s1 = "hello";
    st1.s2 = "world";
    st1.i = 100;
    cout << "st1.s1 = " << st1.s1 << endl;
    cout << "st1.s2 = " << st1.s2 << endl;
    cout << "st1.i = " << st1.i << endl;

    St *st2 = &st1;
    st2->s1 = "new hello";
    st2->s2 = "new world";
    st1.i = 200;
    cout << "st2->s1 = " << st2->s1 << endl;
    cout << "st2->s2 = " << st2->s2 << endl;
    cout << "st2->i = " << st2->i << endl;
}