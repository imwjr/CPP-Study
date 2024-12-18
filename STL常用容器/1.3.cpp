#include <iostream>
using namespace std;
#include <string>

//赋值
void test01()
{
    //char*类型字符串 赋值给当前的字符串
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

    //把字符串s赋给当前的字符串
	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

    //字符赋值给当前的字符串
	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

    //把字符串s赋给当前的字符串
	string str4;
	str4.assign("hello c++");
	cout << "str4 = " << str4 << endl;

    //把字符串s的前n个字符赋给当前的字符串
	string str5;
	str5.assign("hello c++",5);
	cout << "str5 = " << str5 << endl;

    //把字符串s赋给当前字符串
	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

    //用n个字符c赋给当前字符串
	string str7;
	str7.assign(5, 'x');
	cout << "str7 = " << str7 << endl;
}

int main() {

	test01();

	return 0;
}