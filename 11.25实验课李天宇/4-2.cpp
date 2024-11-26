#include<iostream>
using namespace std;

int main()
{
	double a[12];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	//ц╟ещеепР
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				double temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		{
			for (int k = 0; k < 10; k++)
			{
				cout << a[k] << " ";
			}
			cout << endl;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}