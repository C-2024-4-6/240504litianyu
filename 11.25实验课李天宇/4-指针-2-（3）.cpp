#include<iostream>
using namespace std;
void paopao(int* a, int n)
{
	for (int m = 0; m < n; m++)
	{
		cin >> a[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}
int main()
{
	int n;
	cin >> n;
	int* pa = new int[n];
	paopao(pa, n);
	for (int i = 0; i < n; i++)
	{
		cout << pa[i];
	}
	delete[]pa;
	return 0;
}