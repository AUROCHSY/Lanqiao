算法训练 成绩的等级输出 
　输入一个百分制的成绩t后，按下式输出它的等级。等级为：90~100为A，80~89为B，70~79为C，60~69为D，0~59为E。
样例输入
98
样例输出
A

#include <iostream>
using namespace std;
int main() {
	double n;
	if(n >= 90) {
		cout << "A";
	} else if(n >= 80) {
		cout << "B";
	} else if(n >= 70) {
		cout << "C";
	} else if(n >= 60) {
		cout << "D";
	} else {
		cout << "E";
	}
	return 0;
}