#include <iostream>
using namespace std;

//��ָ����ʳ�Ա����

class Person {
public:

	void ShowClassName() {
		cout << "����Person��!" << endl;
	}

	void ShowPerson() {
        // ���û��if���ᱨ��ԭ���Ǵ����ָ��Ϊ��ָ��
		if (this == NULL) {
			return;
		}
		cout << mAge << endl;
	}

public:
	int mAge;
};

void test01()
{
	Person * p = NULL;
	p->ShowClassName(); //��ָ�룬���Ե��ó�Ա����
	p->ShowPerson();  //���������Ա�������õ���thisָ�룬�Ͳ�������
}

int main() {

	test01();

	return 0;
}