// 创建三个vector<float>对象， 与第8题一样填写前两个对象。
// 编一个for循环，把前2个vector的每一个元素相加起来，结果放入第三个vector的相应元素中，
// 显示这三个vector的结果

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<float> v1;
    vector<float> v2;
    vector<float> v3;

    //填写v1, v2
    for (int i = 0; i < 25; i++){
        v1.push_back(i + 0.2);
        v2.push_back(i + 0.4);
    }
    // 填写v3
    for (int i = 0; i < 25; i++){
        v3.push_back(v1[i] + v2[i]);
    }
    // 横向打印
    cout << "v1 = ";
    for (int i = 0; i < 25; i++){
         cout << v1[i] << " ";
    }
    cout << endl;
    cout << "v2 = ";
    for (int i = 0; i < 25; i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "v3 = ";
    for (int i = 0; i < 25; i++){
        cout << v3[i] << " ";
    }
    cout << endl;

    // Prints all three vectors in vertical columns
    cout << "Vec1\tVec2\tVec3" << endl;

    for (int i = 0; i < 25; i++)
        cout << v1[i] << '\t' << v2[i] << '\t' << v3[i] << endl;

}