ALGO-63 算法训练 乘法表
问题描述
　　输出九九乘法表。
输出格式
　　输出格式见下面的样例。乘号用“*”表示。
样例输出
下面给出输出的前几行：
1*1=1
2*1=2 2*2=4
3*1=3 3*2=6 3*3=9
4*1=4 4*2=8 4*3=12 4*4=16
……


#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << "*" << j << "=" << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}