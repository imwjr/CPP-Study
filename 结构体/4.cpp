#include <iostream>
using namespace std;

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};


int main() {
	
	struct student stu = { "����",18,100, };
	struct student * p = &stu;
	
	p->score = 80; //ָ��ͨ�� -> ���������Է��ʳ�Ա

	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	system("pause");
	return 0;
}