#include <iostream>
using namespace std;

//��������ע������
//1��������Ϊ��������

void func(int &a)
{
	cout << "func (int &a) ���� " << endl;
}

void func(const int &a)
{
	cout << "func (const int &a) ���� " << endl;
}

int main() {
	
	int a = 10;
	func(a); //������const
	func(10);//������const

	system("pause");
	return 0;
}