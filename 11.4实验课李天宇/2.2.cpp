#include<iostream>
using namespace std;
int main()
{
	double x, y;
	int a;
	cout << "请为x赋值";
	cin >> x;
	if (x < 0 || x ==0)
		a = 1;
	else if (x < 1)
		a = 2;
	else if (x < 5)
		a = 3;
	else if (x < 10)
		a = 4;
	else
		a = 5;


	switch (a)
	{
	case 2:y = 3 - 2 * x;
		break;
	case 3:y = 2 / (4 * x) + 1;
		break;
	case 4:y = x * x;
		break;

	case 1:
	case 5:cout << "您输入的值不在定义区间内";
		break;
	}

	cout << y;
	return 0;
}
