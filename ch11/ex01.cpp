/**
Turn the “bird & rock” code fragment at the beginning of this chapter
into a C program (using structs for the data types), and show that it
compiles. Now try to compile it with the C++ compiler and see what happens.
**/

struct bird
{
    /* data */
};

struct rock
{
    /* data */
};

int main(){
    bird* b;
    rock* r;
    void* v;
    v = r;
    b = v;      // c++的类型检查比C 更严格： compile error:
                // a value of type "void *" cannot be assigned to an entity of type "bird *"C/C++(513)
}

