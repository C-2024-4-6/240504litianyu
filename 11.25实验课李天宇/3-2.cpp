//3-2
#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	if (num == 2)
	{
		return true;
	}
	else
	{
		for (int i = 2; i < sqrt(num) + 1; i++)
		{
			if (num % i == 0)
			{
				return false;
				break;
			}
		}
	}
	return true;
}
int main()
{
	int line = 0;
	int sum = 0;
	for (int i = 2; i < 1000000; i++)
	{
		if (sum == 200)
		{
			break;
		}
		else
		{
			if (line == 10)
			{
				cout << endl;
				line = 0;
			}
			else {
				if (is_prime(i))
				{
					cout << i << " ";
					line++;
					sum++;
				}
			}

		}

	}
	return 0;
}