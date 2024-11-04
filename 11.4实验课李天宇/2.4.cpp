#include <iostream>
using namespace std;
double calculate(double a, double b, char op) {
	switch (op) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		if (b == 0) {
			cout << "´íÎó" << endl;
			return 0; 
		}
		return a / b;
	case '%':
		if (b == 0) {
			cout << "´íÎó" << endl;
			return 0;
		}
		return static_cast<int>(a) % static_cast<int>(b);
	default:
		cout << "´íÎó" << endl;
		return 0; 
	}
}
int main() {
	double num1, num2;
	char op;
	cout << "ÇëÊäÈë±í´ïÊ½ (ÀýÈç: 5 + 3): ";
	if (!(cin >> num1 >> op >> num2)) {
		cout << "´íÎó" << endl;
		return 1;
	}
	double result = calculate(num1, num2, op);
	if (result != 0) {
		cout << "½á¹û: " << result << endl;
	}
	return 0;
}