#include <iostream>
using namespace std;

//函数重载注意事项
//2、函数重载碰到函数默认参数

void func2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) 调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a) 调用" << endl;
}

int main() {
	
	int a = 10;

	func2(10); //碰到默认参数产生歧义，需要避免

	system("pause");
	return 0;
}