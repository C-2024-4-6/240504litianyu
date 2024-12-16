#include<iostream>
using namespace std;
class student
{
private:
	int num;
	int score;
public:
	student(int n, int s) :num(n), score(s){}
	int  getnum()
	{
		return num;
	}
	int getscore()
	{
		return score;
	}
	void max(student *p)
	{
		int highest=p[0].getscore();
		int numm=p[0].getnum();
		for (int i = 1; i < 5; i++)
		{
			if (highest < p[i].getscore())
			{
				highest = p[i].getscore();
				numm = p[i].getnum();
			}
		}
			cout << numm;
	}
};
	int main()
	{
		student stu[5] = { student(1,20),student(2,40),student(3,35),student(4,10),student(5,20) };
		student* ptr = stu;
		stu[0].max(ptr);
		return 0;
	}
