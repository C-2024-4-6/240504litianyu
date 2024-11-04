#include <iostream>
#include <cctype> // 用于 islower 和 toupper 函数
using namespace std;
int main() {
	char ch;
	cout << "请输入一个字符: ";
	cin >> ch;
	if (islower(ch)) {
		cout << "转换为大写: " << static_cast<char>(toupper(ch)) << endl;
	}
	else {
		char nextChar = ch + 1;
		cout << "后继字符的ASCII码值: " << static_cast<int>(nextChar) << endl;
	}

	return 0;
}
