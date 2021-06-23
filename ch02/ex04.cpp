// 统计文件中特定单词的出现次数（要求使用string类的运算符==）
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string searchWord;
    cout << "enter a word for count: ";
    cin >> searchWord;
    string file = "ex04.txt";
    ifstream in(file);      //-std=c++11, 可以编译通过，否则编译不过
    
    vector<string> v_words;

    int count = 0;
    string tmp;
    while(in >> tmp)
    {
        if (tmp == searchWord)
        {
            count++;
        }
    }
    cout << "count of " << searchWord << " : " << count <<endl;
}