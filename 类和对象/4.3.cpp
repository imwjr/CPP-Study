#include <iostream>
#include <string>
using namespace std;

class Building;
class goodGay
{
public:

	goodGay();
	void visit(); //ֻ��visit������ΪBuilding�ĺ����ѣ����Է�����Building��˽������
	void visit2(); //���Ǻ����ѣ����ܷ���Building��˽������

private:
	Building *building;
};


class Building
{
	//���߱�����  goodGay���е�visit��Ա���� ��Building�����ѣ����Է���˽������
	friend void goodGay::visit();

public:
	Building();

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;//����
};

//����ʵ�ֳ�Ա����
Building::Building()
{
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "visit���ڷ���" << building->m_SittingRoom << endl;
	cout << "visit���ڷ���" << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
	cout << "visit2���ڷ���" << building->m_SittingRoom << endl;
	//cout << "�û������ڷ���" << building->m_BedRoom << endl; //�޷�����
}

void test01()
{
	goodGay  gg;
	gg.visit();
    gg.visit2();

}

int main(){
    
	test01();

	return 0;
}