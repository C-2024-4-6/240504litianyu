#include<iostream>
using namespace std;
class xy 
{
private:
	int x;
	int y;
public:
	void csh(int a,int b)
	{
		x = a; y = b;
	}
	void change(int i,int j)
	{
		x += i; y += j;
	}
	void show()
	{
		cout << '(' << x << ',' << y << ')' << endl;
	}
};
int main()
{
	xy xyy;
	xyy.csh(60, 80);
	xyy.change(1, 2);
	xyy.show();
	return 0;
}
