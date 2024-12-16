#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void c_hour()
	{
		cin >> hour;
	}
	void c_minute()
	{
		cin >> minute;
	}
	void c_sec()
	{
		cin >> sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec<<endl;
	}
};
int main()
{
	Time t1;
	cout << "请设置小时" << endl;
	t1.c_hour();
	cout << "请设置分钟" << endl;
	t1.c_minute();
	cout << "请设置秒" << endl;
	t1.c_sec();
	t1.show();
	return 0;
}
