算法训练 奇偶判断
问题描述
　　能被2整除的数称为偶数，不能被2整除的数称为奇数。给一个整数x，判断x是奇数还是偶数。
输入格式
　　输入包括一个整数x，0<=x<=100000000。
输出格式
　　如果x是奇数，则输出“odd”，如果是偶数，则输出“even”。
样例输入
10
样例输出
even
样例输入
2009
样例输出
odd

#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if(a % 2 == 0) {
		cout << "even";
	} else {
		cout << "odd";
	}
	return 0;
}