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
		cout << "�ܳ�Ϊ" << d << endl;
	}
	else
	{
		cout << "���߲�����������";
	}
	if (a == b || b == c || c == a)
		cout << "����������ǵ���������";
	return 0;
}