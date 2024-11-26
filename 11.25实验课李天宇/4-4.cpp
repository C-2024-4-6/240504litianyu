#include<iostream>
using namespace std;
void merge(int a, int b, int m[])
{
	for (int i = 0; i < a + b; i++)
	{
		for (int j = 0; j < a + b - i - 1; j++)
		{
			if (m[j] > m[j + 1])
			{
				int temp;
				temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
			}
		}
	}
}
int a[80];
int b[80];
int c[160];
int size_1, size_2;
int main()
{
	cin >> size_1;
	for (int i = 0; i < size_1; i++)
	{
		cin >> a[i];
	}
	cin >> size_2;
	for (int i = 0; i < size_2; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < size_1 + size_2; i++)
	{
		if (i < size_1)
		{
			c[i] = a[i];
		}
		else { c[i] = b[i - size_1]; }
	}
	merge(size_1, size_2, c);

	for (int i = 0; i < size_1 + size_2; i++) {
		cout << c[i];
	}

	return 0;
}