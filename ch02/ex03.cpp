// 编程实现：打开一个文件并统计文件中单词的个数
#include <fstream>
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    // 定义input file stream 对象
    ifstream in("ex03.txt");
    //定义vector string类型对象，用于存放读入的所有单词
    vector<string> words;
    //定义临时字符串,存放单个单词
    string temp;

    while (in >> temp)
    {
        words.push_back(temp);
    }
    //统计单词总数
    cout << "words count: " << words.size() << endl;
    //打印所有单词
    for (int i  = 0; i < words.size(); i++)
    {
        cout << words[i] << endl;     
    }
    //用auto变量遍历
    cout << endl;
    for(auto x : words)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;     
}
