// 创建一个vector<float>, 并用一个for循环向它输入25个浮点数，显示vector的结果

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<float> v;

    for (int i = 0; i < 25; i++){
        v.push_back(i * 0.313);
    }
    for (int j = 0; j < v.size(); j++){
        cout << v[j] << endl;
    }
}