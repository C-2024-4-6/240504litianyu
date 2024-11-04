#include<iostream>
using namespace std;
const float pi = 3.14;
int main()
{
	double a, b;
	cout << "请依次输入圆锥的底半径和高";
	cin >> a >> b;
	cout << "圆锥的体积是" << (1 / 3) * pi * a * a * b;
	return 0;
}