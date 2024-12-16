#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    //创建流对象
	ofstream ofs;
    //指定打开文件方式
	ofs.open("test.txt", ios::out);
    //写文件
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;
    //关闭文件
	ofs.close();
}

int main() {

	test01();

	return 0;
}