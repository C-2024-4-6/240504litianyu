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
	cout << "������Сʱ" << endl;
	t1.c_hour();
	cout << "�����÷���" << endl;
	t1.c_minute();
	cout << "��������" << endl;
	t1.c_sec();
	t1.show();
	return 0;
}
