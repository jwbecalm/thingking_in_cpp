// 输入圆的半径，计算圆的面积
#include <iostream>
#define PI 3.14 

using namespace std; 

int main() {
    cout <<"please input the radius of the circle:";
    float r, s;
    cin >>r;
    s = PI*r*r;
    cout << "the square of the circle is: " << s <<endl;
}
