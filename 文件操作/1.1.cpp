#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    //����������
	ofstream ofs;
    //ָ�����ļ���ʽ
	ofs.open("test.txt", ios::out);
    //д�ļ�
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;
    //�ر��ļ�
	ofs.close();
}

int main() {

	test01();

	return 0;
}