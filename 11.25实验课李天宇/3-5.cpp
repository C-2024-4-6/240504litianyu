#include<iostream>
using namespace std;
int bad_monkey(int a, int b)
{
	for (; b > 1; )
	{
		return (bad_monkey(a, --b) + 1) * 2;
	}
}
int main()
{

	cout << bad_monkey(1, 10);
	return 0;
}