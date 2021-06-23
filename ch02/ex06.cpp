// 修改Fillvector.cpp, 使它能把vector中的所有元素连接成一个单独的字符串，并打印，但不要加行号

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(){
    ifstream in("ex06.cpp");
    string line;
    string combString;

    while(getline(in,line)){
        combString += line + "\n";
    }
    cout << combString << endl; 
}