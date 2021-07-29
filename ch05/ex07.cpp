
/**
Modify Exercise 6 so that Nest and Egg each contain private data.
Grant friendship to allow the enclosing classes access to this private data.
Ex 6:
Create a Hen class. Inside this, nest a Nest class. Inside Nest, place an Egg class.
Each class should have a display( ) member function. In main( ), create an instance
of each class and call the display( ) function for each one.
**/

#include <iostream>

using namespace std;


class Hen {
public:
    class Nest{
        int n;  // private data
        friend class Hen;   // grant Hen to access it's private data: n;
        public:
            class Egg {
                int e;  // private data
                friend class Nest;   // grant Nest to access Egg's private data: e;
                public:
                    void display(){cout  << "in Hen::Nest::Egg:display(), e = " << e << endl;}
                };
        
            void display(){cout  << "in Hen::Nest::display(), n= " << n << endl;}
            void initEgg(Egg* egg){
                egg->e = 200;
                cout << "in Hen::Nest::initEgg(), egg->e = " << egg->e << endl;
            }
    }; 
    
    void display(){cout  << "in Hen::display()" << endl;}
    
    void initNest(Nest* nest){
        nest->n = 100;
        cout << "in Hen::initNest, nest->n = " << nest->n << endl;
    }

    
};

int main(){
    Hen h;
    Hen::Nest n;
    Hen::Nest::Egg e;
    
    h.initNest(&n);
    n.initEgg(&e);

    h.display();
    n.display();
    e.display();

    
    return 0;
}