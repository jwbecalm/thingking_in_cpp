/**
Create a function with two arguments and call it from main( ).
Now make one of the arguments a "placeholder" (no identifier)
and see if your call in main( ) changes.
**/

#include <iostream>

using namespace std;

// void placeholder(int x, int y){
//     cout << "x= " << x << " y = " << y << endl;;
// }

void placeholder(int , int y){
    cout << " y = " << y << endl;;
}

int main(){
    placeholder(10,20);
    return 0;
}