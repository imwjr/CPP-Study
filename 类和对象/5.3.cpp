#include <iostream>
using namespace std;

// �Զ�������
class MyInteger {

	friend ostream& operator<<(ostream& out, MyInteger myint);

public:
	MyInteger() {
		m_Num = 0;
	}
	//ǰ��++����������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++() {
		//��++
		m_Num++;
		//�ٷ���
		return *this;
	}

	//����++��intΪռλ��������������ǰ��++�ͺ���++
    //����ֵ����������Ϊ���ص��Ǿֲ����������ؾֲ������󣬾ֲ������������ˣ����Է���ֵ������
	MyInteger operator++(int) {
		//�ȷ���
		MyInteger temp = *this; //��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

//����<<����������Զ�����������
ostream& operator<<(ostream& out, MyInteger myint) {
	out << myint.m_Num;
	return out;
}


//ǰ��++ ��++ �ٷ���
void test01() {
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt << endl;
}

//����++ �ȷ��� ��++
void test02() {

	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

int main() {

	test01();
	test02();

	return 0;
}