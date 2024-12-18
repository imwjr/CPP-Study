#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		m_A = 0;
		m_B = 0;
	}

	//this指针的本质是一个指针常量，指针的指向不可修改
	//如果想让指针指向的值也不可以修改，需要声明常函数
    //在成员函数后面加const，修饰的是this指针指向的内存空间，让其中的成员变量不可修改
	void ShowPerson() const {
		//const Type* const pointer;
		//this = NULL; //不能修改指针的指向 Person* const this;
		//this->m_A = 100; //但是this指针指向的对象的数据是可以修改的

		//const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
		this->m_B = 100;
	}

	void MyFunc() {
		//m_A = 10000;
	}

public:
	int m_A;
	mutable int m_B; //可修改 可变的
};


//const修饰对象  常对象
void test01() {

	const Person person; //常量对象  
	cout << person.m_A << endl;
	//person.mA = 100; //常对象不能修改成员变量的值,但是可以访问
	person.m_B = 20; //但是常对象可以修改mutable修饰成员变量
    cout << person.m_B << endl;

	//常对象访问成员函数
    person.ShowPerson();//常对象只能调用常函数
	// person.MyFunc(); //常对象不可以调用普通成员函数，因为普通成员函数可能会修改对象的数据

}

int main() {

	test01();

	return 0;
}