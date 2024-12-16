#include <iostream>
using namespace std;

// 成员变量和成员函数是分开存储的

class Person {
public:
	Person() {
		mA = 0;
	}
	//非静态成员变量占对象空间，属于类的对象上
	int mA;
	//静态成员变量不占对象空间，不属于类的对象上
	static int mB; 
	//函数也不占对象空间，所有函数共享一个函数实例，不属于类的对象上
	void func() {
		cout << "mA:" << this->mA << endl;
	}
	//静态成员函数也不占对象空间，不属于类的对象上
	static void sfunc() {
	}
};

// 空对象占用内存空间为1
// C++编译器会给空对象分配一个字节的内存空间，是为了区分空对象占内存的位置
// 每个空对象也会有一个独一无二的内存地址

int main() {

	cout << sizeof(Person) << endl;

	return 0;
}