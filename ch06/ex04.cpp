/**
Demonstrate that destructors are still called even when goto is used to jump out of a loop.
**/
#include <iostream>

using namespace std;

class Simple {
    int i;  // 默认为private

    public:
    Simple(int x){
        i = x;
        cout << "in Simple::Simple(), i = " << i <<  endl;
    }
    ~Simple(){
        cout << "in Simple::~Simple(),i = " << i <<  endl;
    }

};

int main(){
    for (int i = 0; i < 4; i++) {
        Simple s(i);

        // if (i == 2)
        //     goto end;
    }

    end:
    return 0;
}