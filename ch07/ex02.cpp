/**
Create a Message class with a constructor that takes a single
string with a default value. Create a private member string,
and in the constructor simply assign the argument string to
your internal string. Create two overloaded member functions
called print( ): one that takes no arguments and simply prints
the message stored in the object, and one that takes a
string argument, which it prints in addition to the internal
message. Does it make sense to use this approach instead of
the one used for the constructor?
**/

#include <iostream>
#include <string>

using namespace std;

class Message{
private:
    string msg;

public:
    Message(string msg = "default value");
    void print();
    void print(string s);
};

Message::Message(string msg){
    this->msg = msg;
}
void Message::print(){
    cout << msg << endl;
}
void Message::print(string s){
    cout << s << msg << endl;
}

int main(){
    Message m1;
    m1.print();
    m1.print("hello: ");

    Message m2("specific value");
    m2.print();
    m2.print("hello: ");

    return 0;
}