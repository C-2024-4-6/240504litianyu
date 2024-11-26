#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<char, int>a = { {'A',10}, {'B',11 }, {'C',12 } ,{'D',13 } ,{'E',14 }, {'F',15 },{'1',1},{'2',2},{'3',3 },
	{'4',4},{'5',5},{'6',6},{'7',7},{'8',8} ,{'9',9} };
int parseHex(const char* const hexString)
{
	int result = 0;
	for (int i = 0, j = 1; i < strlen(hexString); i++, j *= 16) {
		result += a[hexString[strlen(hexString) - i - 1]] * j;
	}

	return result;
}

int main()
{
	const char* const hexString = "A5";
	cout << parseHex(hexString);
	return 0;
}