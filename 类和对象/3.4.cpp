#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}

	//thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	//�������ָ��ָ���ֵҲ�������޸ģ���Ҫ����������
    //�ڳ�Ա���������const�����ε���thisָ��ָ����ڴ�ռ䣬�����еĳ�Ա���������޸�
	void ShowPerson() const {
		//const Type* const pointer;
		//this = NULL; //�����޸�ָ���ָ�� Person* const this;
		//this->m_A = 100; //����thisָ��ָ��Ķ���������ǿ����޸ĵ�

		//const���γ�Ա��������ʾָ��ָ����ڴ�ռ�����ݲ����޸ģ�����mutable���εı���
		this->m_B = 100;
	}

	void MyFunc() {
		//m_A = 10000;
	}

public:
	int m_A;
	mutable int m_B; //���޸� �ɱ��
};


//const���ζ���  ������
void test01() {

	const Person person; //��������  
	cout << person.m_A << endl;
	//person.mA = 100; //���������޸ĳ�Ա������ֵ,���ǿ��Է���
	person.m_B = 20; //���ǳ���������޸�mutable���γ�Ա����
    cout << person.m_B << endl;

	//��������ʳ�Ա����
    person.ShowPerson();//������ֻ�ܵ��ó�����
	// person.MyFunc(); //�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա�������ܻ��޸Ķ��������

}

int main() {

	test01();

	return 0;
}