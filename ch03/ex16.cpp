/**
Create a program that uses an enumeration of colors. Create a variable
of this enum type and print out all the numbers that correspond with
the color names, using a for loop.
**/

#include <iostream>

using namespace std;

enum colors {   // 创建一个名为colors的数据类型
    BLACK,      // 0
    RED,        // 1
    GREEN,      // 2
    BLUE,       // 3
    WHITE,      // 4
    END
};

int main(){
    colors cv;
    cout << "1、用新创建的枚举类型创建一个枚举变量" << endl;
    for (cv = BLACK; cv < END; cv =(colors) (cv + 1)){  //如果不做强制类型转化，会编译错误error: invalid conversion from ‘int’ to ‘colors’
        cout << cv << endl;
    }

    cout << "2、也可以直接使用枚举的数据类型，而不实际创建该类型的任何变量" << endl;
    for (int color = BLACK; color < END; color++){      
        cout << color << endl;
    }
    return 0;
}