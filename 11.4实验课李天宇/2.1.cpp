#include <iostream>
#include <cctype> // ���� islower �� toupper ����
using namespace std;
int main() {
	char ch;
	cout << "������һ���ַ�: ";
	cin >> ch;
	if (islower(ch)) {
		cout << "ת��Ϊ��д: " << static_cast<char>(toupper(ch)) << endl;
	}
	else {
		char nextChar = ch + 1;
		cout << "����ַ���ASCII��ֵ: " << static_cast<int>(nextChar) << endl;
	}

	return 0;
}
