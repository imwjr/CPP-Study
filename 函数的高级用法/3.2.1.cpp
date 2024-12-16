#include <iostream>
using namespace std;

//函数重载注意事项
//1、引用作为重载条件

void func(int &a)
{
	cout << "func (int &a) 调用 " << endl;
}

void func(const int &a)
{
	cout << "func (const int &a) 调用 " << endl;
}

int main() {
	
	int a = 10;
	func(a); //调用无const
	func(10);//调用有const

	system("pause");
	return 0;
}