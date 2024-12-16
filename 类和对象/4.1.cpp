#include <iostream>
#include <string>
using namespace std;

//设计一个 Building类， 包含客厅( public) 和卧室( private)，
class Building
{
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay(Building * building);

public:

	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};

//全局函数 访问 Building类中的私有内容
void goodGay(Building * building)
{
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << building->m_BedRoom << endl;// 私有内容
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