// 遍一个程序，一次显示文件的一行，然后等待用户按回车键后显示下一行

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(){
    ifstream in("ex07.cpp");
    string line;
    vector<string> v;

    //读入文件所有行
    while(getline(in,line)){
        v.push_back(line);
    }

    // 遍历输出每行
    for(int i = 0; i < v.size(); i++){
        //按条件输出每行
        if (cin.get() == "\n"){     //这里不能和"\n"进行比较，原因：TODO
            cout << i << v[i];
        }
        //默认cin会忽略空格、回车，下面的实现永远进不了if语句
        /*
        string enter;
        cin << enter;
        if (enter == '\n'){
            cout << i << v[i] << endl;
        }
        */
    }
}