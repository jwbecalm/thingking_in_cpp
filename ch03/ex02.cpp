/*
 Write a program that uses two nested for loops and the 
modulus operator (%) to detect and print prime numbers 
(integral numbers that are not evenly divisible by any 
other numbers except for themselves and 1).
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int limit;
    cout << "please input a integer to find the prime number less than: ";
    cin >> limit;

    vector<int> v_prime;

    // 寻找limit以内的所有质数
    for (int i = 1; i < limit; i++){
        // 对每一个遍历的数，设置一个计数变量，初始为0
        int count = 0; 
        for (int j = 1; j <= i; j++){
            if (i % j == 0){
                count++;
            }
        }
        // 能被1整除和被自己整除，计数变量为2
        if (2 == count){
            v_prime.push_back(i);
        } 
    }
    for (int i = 0 ; i < v_prime.size(); i++){
        cout << v_prime[i] << " ";
        if (i == v_prime.size() -1)
            cout << endl;
    }
    return 0;
}