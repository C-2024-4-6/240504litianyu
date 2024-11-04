#include<iostream>
using namespace std;
int main()
{
	const double apple = 0.8;
	double sum = 0;
	int day = 0;
	for (int i = 2; i < 100; i *= 2)
	{
		sum += i;
		day++;
	}
	cout << sum * apple / day;
	return 0;
}