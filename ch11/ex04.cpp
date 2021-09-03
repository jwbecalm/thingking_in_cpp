/**
Write a function that takes a pointer argument, modifies
what the pointer points to, and then returns the destination
of the pointer as a reference.
**/


#include<iostream>
using namespace std;

int& refReturn(int* p){
    cout << "*p = " << *p << endl;
    (*p)++;
    cout << "*p = " << *p << endl;
    int& i = *p;
    
    return i;
}

int main(){
    int i = 10;
    int j = refReturn(&i);
    cout << j << endl;
    return 0;
}