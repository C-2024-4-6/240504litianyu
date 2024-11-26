#include<iostream>
#include"mytemperature.h"

using namespace std;
int main()
{
	double result_1, result_2;
	cout << "Celsius   Fahrenheit   |   Fahrenheit   Celsius" << endl;
	for (double i = 40.0 ,j=120.0; i > 30; i--,j-=10)
	{
		result_1 = celsius_to_fah(i);
		result_2 = fahrenheit_to_cels(j);
		cout << i<<"   " << result_1 << "   |   " << j <<"   "<< result_2 << endl;
	}
	return 0;
}