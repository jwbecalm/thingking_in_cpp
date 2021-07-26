/**
Create a Stack object to hold the Video objects from Exercise 13. Create several Video objects,
store them in the Stack, then display them using Video::print( ).
**/

// 编译时，使用c++11选项，否则nullptr编译不过：g++ -std=c++11 *.cpp *.h

#include <iostream>
#include "video.h"
#include "stack.h"

using namespace std;

int main() {

    Stack videoStack;
    videoStack.initialize();

    videoStack.push(new Video(1,  75, 200, "Title #1"));
    videoStack.push(new Video(2, 100, 221, "Title #2"));
    videoStack.push(new Video(2, 100, 221, "Title #3"));

    Video *vPtr;

    while ( (vPtr = (Video*) videoStack.pop()) != nullptr) {
        vPtr->print();
        delete vPtr;
    }

return 0;
}