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
	return (a / gcd(a, b)) * b; //��С������*���Լ��=a*b
}

int main() {
	int num1, num2;

	cout << "��������������: ";
	cin >> num1 >> num2;

	int g = gcd(num1, num2);
	int l = lcm(num1, num2);

	cout << "���Լ��: " << g << endl;
	cout << "��С������: " << l << endl;

	return 0;
}