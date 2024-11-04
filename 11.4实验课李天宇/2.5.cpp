#include <iostream>
#include <cctype> // 用于 isalpha, isspace, isdigit 函数
using namespace std;
int main() {
	char ch;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "请输入一行字符: ";
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch)) {
			letters++;
		}
		else if (isspace(ch)) {
			spaces++;
		}
		else if (isdigit(ch)) {
			digits++;
		}
		else {
			others++;
		}
	}
	cout << "英文字母个数: " << letters << endl;
	cout << "空格个数: " << spaces << endl;
	cout << "数字字符个数: " << digits << endl;
	cout << "其他字符个数: " << others << endl;
	return 0;
}
