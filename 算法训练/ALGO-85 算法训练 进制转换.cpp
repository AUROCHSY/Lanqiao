ALGO-85 算法训练 进制转换
问题描述
　　编写一个程序，输入一个二进制的字符串（长度不超过32），然后计算出相应的十进制整数，并把它打印出来。
　　输入格式：输入为一个字符串，每个字符都是’0’或’1’，字符串的长度不超过32。
　　输出格式：输出一个整数。
　　输入输出样例
样例输入
1101
样例输出
13

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length() - 1;
    int cnt = 0;
    for(int i = len; i >= 0; i--) {
        if(s[i] == '1') {
            cnt += pow(2, len - i);
        }
    }
    cout << cnt;
    return 0;
}