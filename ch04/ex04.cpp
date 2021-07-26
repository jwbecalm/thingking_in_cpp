/**
Create a struct with a single int data member, and two global functions,
each of which takes a pointer to that struct. The first function has
a second int argument and sets the struct’s int to the argument value,
the second displays the int from the struct. Test the functions.
**/

#include <iostream>
using namespace std;


struct myStruct {
    int x;
};


void init(myStruct* st, int x){
    st->x = x;
}

void display(myStruct* st){
    cout << "st->x = " << st->x << endl;
}

int main(){
    myStruct st;
    init(&st, 100);
    display(&st);
    return 0;
}
