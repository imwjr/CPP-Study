#include <iostream>
using namespace std;

//��������ע������
//2������������������Ĭ�ϲ���

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) ����" << endl;
}

void func2(int a)
{
	cout << "func2(int a) ����" << endl;
}

int main() {
	
	int a = 10;

	func2(10); //����Ĭ�ϲ����������壬��Ҫ����

	system("pause");
	return 0;
}