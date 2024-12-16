#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void test01()
{
    //创建文件流对象
	ifstream ifs;
	//打开文件
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

    //读取文件内容

	//第一种方式
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	//string buf;
	//while (getline(ifs, buf))
	//{
	//	cout << buf << endl;
	//}

	//第四种（不推荐，逐个字符读取）
	char c;
	while ((c = ifs.get()) != EOF)  //EOF是文件结束符，end of file
	{
		cout << c;
	}

	ifs.close();


}

int main() {

	test01();

	return 0;
}