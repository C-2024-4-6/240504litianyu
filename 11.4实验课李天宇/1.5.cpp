#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cin >> a;
	b = (a - 32) / 1.8;

	cout << fixed << setprecision(2) << b;
	return 0;
}