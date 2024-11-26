#include<iostream>
using namespace std;
int main()
{
	int a[11] = { 0 };
	int count = 0;

	cout << "enter ten numbers:";
	for (int i = 0; i < 10; i++) {
		int b;
		int feature = 0;
		cin >> b;
		for (int j = 0; j < count + 1; j++)
		{
			if (b == a[j])
			{
				feature = 1;
				break;
			}
		}
		if (!feature)
		{
			a[count] = b;
			count++;
		}
	}
	cout << "the distinct numbers are:";
	for (int i = 0; i < count; i++)
	{
		cout << a[i];
	}

	return 0;
}