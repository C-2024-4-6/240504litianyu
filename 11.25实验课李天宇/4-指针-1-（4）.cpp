#include<iostream>
using namespace std;
int* f()
{
	int* plist = new int[4];
	for (int i = 1; i < 5; i++) {
		plist[i - 1] = i;
	}
	return plist;
}
int main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;
	return 0;
}