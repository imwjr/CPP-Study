#include <iostream>
using namespace std;

class Person
{

public:

	//��̬��Ա�����ص㣺
	//1 ������һ������
	//2 ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	
	static void func()
	{
		cout << "func����" << endl;
		m_A = 100;   //��̬��Ա�������Է��ʾ�̬��Ա��������Ϊ��̬��Ա�����ǹ����
		//m_B = 100; //���󣬲����Է��ʷǾ�̬��Ա�������޷�ȷ�������ĸ�����
	}

	static int m_A; //��̬��Ա����
	int m_B; // 
private:

	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2()
	{
		cout << "func2����" << endl;
	}
};
int Person::m_A = 10;


void test01()
{
	//��̬��Ա�������ַ��ʷ�ʽ

	//1��ͨ������
	Person p1;
	p1.func();
    cout << p1.m_A << endl;

	//2��ͨ������
	Person::func();

	//Person::func2(); //˽��Ȩ�޷��ʲ���
}

int main() {

	test01();

	return 0;
}