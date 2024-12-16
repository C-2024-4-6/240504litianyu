#include<iostream>
using namespace std;
class changfangti
{
private:
	int length;
	int width;
	int height;
	int v;
public:
	void tapein()
	{
		cout << "请输入长方体的长宽高" << endl;
		cin >> length >> width >> height;
	}
	void calcu()
	{
		v = length * width * height;
	}
	void show()
	{
		cout << "长方体的体积是" << v<<endl;
	}
};
int main()
{
	changfangti cft_1;
	changfangti cft_2; 
	changfangti cft_3;
	cft_1.tapein();
	cft_2.tapein();
	cft_3.tapein();
	cft_1.calcu();
	cft_2.calcu();
	cft_3.calcu();
	cft_1.show();
	cft_2.show();
	cft_3.show();
	return 0;
}
