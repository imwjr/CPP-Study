#include <iostream>
#include <string>
using namespace std;

//���һ�� Building�࣬ ��������( public) ������( private)��
class Building
{
	//���߱����� goodGayȫ�ֺ��� �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay(Building * building);

public:

	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
};

//ȫ�ֺ��� ���� Building���е�˽������
void goodGay(Building * building)
{
	cout << "�û������ڷ��ʣ� " << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << building->m_BedRoom << endl;// ˽������
}


void test01()
{
	Building b;
	goodGay(&b);
}

int main(){

	test01();

	return 0;
}