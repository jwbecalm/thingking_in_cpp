/**
Demonstrate automatic counting and aggregate initialization with
an array of objects of the class you created in Exercise 3.
Add a member function to that class that prints a message.
Calculate the size of the array and move through it,
calling your new member function.
**/
#include <iostream>

using namespace std;

class Simple {
    public:
    Simple(int x){
        i = x;
        cout << "in Simple::Simple(), i = " << i <<  endl;
    }
    ~Simple(){
        cout << "in Simple::~Simple(),i = " << i <<  endl;
    }
    void display(){
        cout << "in Simple::display()" << endl;
    }
    private:
    int i;
};

int main(){
    Simple sa[] = {Simple(100), Simple(200), Simple(300)};  //创建对象数组，数组里每一个成员都是一个Simple对象
    int size_of_sa = sizeof(sa)/ sizeof(*sa);
    cout << "size_of_sa = " << size_of_sa << endl;
    for (int i = 0; i< size_of_sa; i++){
        sa[i].display();
    }
    return 0;
}