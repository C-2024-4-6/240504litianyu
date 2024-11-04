#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	int d;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))

	{
		d = a + b + c;
		cout << "周长为" << d << endl;
	}
	else
	{
		cout << "三边不构成三角形";
	}
	if (a == b || b == c || c == a)
		cout << "这个三角形是等腰三角形";
	return 0;
}