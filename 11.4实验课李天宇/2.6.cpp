#include <iostream>

using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b) {
	return (a / gcd(a, b)) * b; //最小公倍数*最大公约数=a*b
}

int main() {
	int num1, num2;

	cout << "请输入两个整数: ";
	cin >> num1 >> num2;

	int g = gcd(num1, num2);
	int l = lcm(num1, num2);

	cout << "最大公约数: " << g << endl;
	cout << "最小公倍数: " << l << endl;

	return 0;
}