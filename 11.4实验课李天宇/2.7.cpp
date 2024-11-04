#include<iostream>
using namespace std;
int main()
{
	char a = '*';
	for (int j = 1; j < 6; j++)
	{
		for (int i = 1; i < j+1; i++)
		{
			cout << a ;
		}
		cout << endl;
	}
	
	return 0;
}