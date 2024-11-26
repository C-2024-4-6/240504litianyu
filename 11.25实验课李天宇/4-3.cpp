#include<iostream>
using namespace std;
int a[100] = { 0 };
void change(int k, int b[])
{
	for (int i = k; i < 101; i += k)
	{
		if (b[i] == 0)
		{
			b[i] = 1;
		}
		else
		{
			b[i] = 0;
		}
	}
}

int main()
{
	for (int i = 1; i < 101; i++)
	{
		change(i, a);
	}
	for (int i = 1; i < 101; i++)
	{
		if (a[i] == 1)
		{
			cout << i << " ";
		}
	}
	return 0;
}