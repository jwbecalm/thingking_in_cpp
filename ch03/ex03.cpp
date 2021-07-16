/*
Write a program that uses a while loop to read words 
from standard input (cin) into a string. This is an 
“infinite” while loop, which you break out of (and exit 
the program) using a break statement. For each word 
that is read, evaluate it by first using a sequence of if
statements to “map” an integral value to the word, and 
then use a switch statement that uses that integral value 
as its selector (this sequence of events is not meant to be 
good programming style; it’s just supposed to give you 
exercise with control flow). Inside each case, print 
something meaningful. You must decide what the 
“interesting” words are and what the meaning is. You 
must also decide what word will signal the end of the 
program. Test the program by redirecting a file into the 
program’s standard input (if you want to save typing, 
this file can be your program’s source file).
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int choice;    
    // 用无限循环接收输入，直到输入"exit"为止
    do{
        cout << "please input a word: ";
        cin >> word;
        if (word == "one")
            choice = 1;
        else if (word == "two")
            choice = 2;
        else if (word == "three")
            choice = 3;
        else if (word == "exit")
            break;   
        else choice = -1;

        // 根据输入，进入不同的case分支，打印
        switch (choice)
        {
        case 1:
            cout << "receive one" << endl;
            break;
        case 2:
            cout << "receive two" << endl;
            break;
        case 3:
            cout << "receive three" << endl;
            break;
        default: // -1
            cout << "wrong input!" << endl;
            break;
        } 
    } while (true);

    return 0;
}