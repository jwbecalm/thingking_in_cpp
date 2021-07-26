#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED

#include <iostream>
#include <string>
using std::string;

struct Video {

    Video() :           // member initialization list
        //cout << "in member initialization list." << endl;     // 不能有该语句，否则编译不过
        id(0),
        length(0),
        price(0),
        name("-") {}    // c++11 允许在声明时对成员赋值（也叫就地初始化。英语是：member initialization list.）
        
    Video(int i, int len, int p, string str) :      // member initialization list
        id(i), length(len), price(p), name(str) {}


    int id;
    int length;
    int price;
    string name;

    void print();

    void setId(int x) { id = x; }
    int getId() { return id; }

    void setLength(int x) { length = x; }
    int getLength() { return length; }

    void setPrice(int x) { price = x; }
    int getPrice() { return price; }

    void setName(string x) { name = x; }
    string getName() { return name; }
};

#endif // VIDEO_H_INCLUDED