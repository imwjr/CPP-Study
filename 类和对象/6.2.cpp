#include <iostream>
using namespace std;

class Base1
{
public: 
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//�����̳�
class Son1 :public Base1
{
public:
	void func()
	{
		m_A; //�����еĹ���Ȩ�޳�Ա������������Ȼ�ǹ���Ȩ��
		m_B; //�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		//m_C; //�����е�˽��Ȩ�޳�Ա�����������޷�����
	}
};

void test01()
{
	Son1 s1;
	s1.m_A; //������ֻ�ܷ��ʵ�����Ȩ��
    // s1.m_B; //��Son1���Ǳ���Ȩ�ޣ������޷�����
	//s1.m_C; //�������޷�����
}

//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2:protected Base2
{
public:
	void func()
	{
		m_A; //�����еĹ���Ȩ�޳�Ա���������б�Ϊ����Ȩ��
		m_B; //�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		//m_C; //���ɷ���
	}
};
void test02()
{
	Son2 s;
	//s.m_A; //��Son2�У�m_A��Ϊ����Ȩ�ޣ������޷�����
	//s.m_B; //��Son2�У�m_B��Ϊ����Ȩ�ޣ������޷�����
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3:private Base3
{
public:
	void func()
	{
		m_A; //�����еĹ���Ȩ�޳�Ա���������б�Ϊ˽��Ȩ��
		m_B; //�����еı���Ȩ�޳�Ա���������б�Ϊ˽��Ȩ��
		//m_C; //���ɷ���
	}
};

void test03()
{
	Son3 s;
	//s.m_A; //��Son3�У�m_A��Ϊ˽��Ȩ�ޣ������޷�����
	//s.m_B; //��Son3�У�m_B��Ϊ˽��Ȩ�ޣ������޷�����
}

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//Son3��˽�м̳У����Լ̳�Son3��������GrandSon3�ж��޷����ʵ�
		//m_A;
		//m_B;
		//m_C;
	}
};