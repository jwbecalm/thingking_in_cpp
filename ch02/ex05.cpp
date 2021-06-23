// 修改Fillvector.cpp, 使它能从后向前打印各行

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream in("ex05.cpp");
    string line;
    vector<string> v;

    while(getline(in,line)){
        v.push_back(line);
    }
    //从前向后打印
    cout << "从前向后打印" << endl;
    for(int i = 0; i < v.size(); i++){
        cout << i << v[i] << endl;
    }
    //从后向前打印
    cout << "从后向前打印" << endl;

    for(int i = (v.size()-1); i >= 0; i--) {
        cout << i << v[i] << endl;
    }
}