#include <iostream>
#include <cctype> // ���� isalpha, isspace, isdigit ����
using namespace std;
int main() {
	char ch;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	cout << "������һ���ַ�: ";
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
	cout << "Ӣ����ĸ����: " << letters << endl;
	cout << "�ո����: " << spaces << endl;
	cout << "�����ַ�����: " << digits << endl;
	cout << "�����ַ�����: " << others << endl;
	return 0;
}
