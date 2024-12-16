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

//公共继承
class Son1 :public Base1
{
public:
	void func()
	{
		m_A; //父类中的公共权限成员，到子类中仍然是公共权限
		m_B; //父类中的保护权限成员，到子类中仍然是保护权限
		//m_C; //父类中的私有权限成员，到子类中无法访问
	}
};

void test01()
{
	Son1 s1;
	s1.m_A; //其他类只能访问到公共权限
    // s1.m_B; //到Son1中是保护权限，类外无法访问
	//s1.m_C; //其他类无法访问
}

//保护继承
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
		m_A; //父类中的公共权限成员，到子类中变为保护权限
		m_B; //父类中的保护权限成员，到子类中仍然是保护权限
		//m_C; //不可访问
	}
};
void test02()
{
	Son2 s;
	//s.m_A; //在Son2中，m_A变为保护权限，类外无法访问
	//s.m_B; //在Son2中，m_B变为保护权限，类外无法访问
}

//私有继承
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
		m_A; //父类中的公共权限成员，到子类中变为私有权限
		m_B; //父类中的保护权限成员，到子类中变为私有权限
		//m_C; //不可访问
	}
};

void test03()
{
	Son3 s;
	//s.m_A; //在Son3中，m_A变为私有权限，类外无法访问
	//s.m_B; //在Son3中，m_B变为私有权限，类外无法访问
}

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
		//m_A;
		//m_B;
		//m_C;
	}
};