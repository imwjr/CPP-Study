#include <iostream>
#include <string>
using namespace std;

class Building;
class goodGay
{
public:

	goodGay();
	void visit(); // �ιۺ��� ����buliding�е�����

private:
	Building *building;
};


class Building
{
	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
	friend class goodGay;

public:
	Building();

public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;//����
};

// ����ʵ�ֳ�Ա����
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
	cout << "�û��������ڷ���" << building->m_SittingRoom << endl;
	cout << "�û��������ڷ���" << building->m_BedRoom << endl;
}

void test01()
{
	goodGay gg;
	gg.visit();

}

int main(){

	test01();

	return 0;
}