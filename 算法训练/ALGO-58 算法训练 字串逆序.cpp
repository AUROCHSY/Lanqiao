 算法训练 字串逆序  
 问题描述
　　给定一个字符串，将这个串的所有字母逆序后输出。
输入格式
　　输入包含一个字符串，长度不超过100，字符串中不含空格。
输出格式
　　输出包含一个字符串，为上面字符串的逆序。
样例输入
tsinsen
样例输出
nesnist


#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = s.length() - 1; i >= 0; i--) {
		cout << s[i];
	}
	return 0;
}