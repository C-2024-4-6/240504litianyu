#include <iostream>             //��������ͷ�ļ���������
#include <string>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value();
	void set_value(int a,const string b, char c);
private:
	int num;
	string name;
	char sex;
};

void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value()
{
    cout << "�����������š��������Ա�";
    cin >> num >> name >> sex;
}
void Student::set_value(int a, const string b, char c)
{
    num = a;
	name = b;
    sex = c;
}

int main()
{
	Student stud;                //�������
	Student stud1;
	stud.set_value();
	stud1.set_value(7,"tcg",'m');
	stud.display();              //ִ��stud�����display����
	stud1.display();
	return 0;
}
