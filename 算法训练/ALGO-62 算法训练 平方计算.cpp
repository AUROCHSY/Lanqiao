算法训练 平方计算
问题描述
　　输入正整数a, m，输出a^2%m，其中^表示乘方，即a^2表示a的平方，%表示取余。
输入格式
　　输入包含两个整数a, m，a不超过10000。
输出格式
　　输出一个整数，即a^2%m的值。
样例输入
5 6
样例输出
1

#include <iostream>
using namespace std;
int main() {
	int a, m;
	cin >> a >> m;
	cout << (a * a) % m << endl;
	return 0;
}