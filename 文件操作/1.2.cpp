#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    //�����ļ�������
	ifstream ifs;
	//���ļ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

    //��ȡ�ļ�����

	//��һ�ַ�ʽ
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//������
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//�����֣����Ƽ�������ַ���ȡ��
	char c;
	while ((c = ifs.get()) != EOF)  //EOF���ļ���������end of file
	{
		cout << c;
	}

	ifs.close();


}

int main() {

	test01();

	return 0;
}