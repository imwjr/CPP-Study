#include <iostream>
using namespace std;
#include <string>

//��ֵ
void test01()
{
    //char*�����ַ��� ��ֵ����ǰ���ַ���
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

    //���ַ���s������ǰ���ַ���
	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

    //�ַ���ֵ����ǰ���ַ���
	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

    //���ַ���s������ǰ���ַ���
	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

    //���ַ���s��ǰn���ַ�������ǰ���ַ���
	string str5;
	str5.assign("hello c++",5);
	cout << "str5 = " << str5 << endl;

    //���ַ���s������ǰ�ַ���
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

    //��n���ַ�c������ǰ�ַ���
	string str7;
	str7.assign(5, 'x');
	cout << "str7 = " << str7 << endl;
}

int main() {

	test01();

	return 0;
}