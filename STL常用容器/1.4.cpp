#include <iostream>
using namespace std;
#include <string>

//�ַ���ƴ��
void test01()
{
	string str1 = "��";

    //string& operator+=(const char* str); ����+=������
	str1 += "������Ϸ"; 
	cout << "str1 = " << str1 << endl;
	
    //string& operator+=(const char c); ����+=������
	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";
    //string& operator+=(const string& str); ����+=������
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
    //string& append(const char *s); ���ַ���s���ӵ���ǰ�ַ�����β
	str3.append(" love ");
    cout << "str3 = " << str3 << endl;

    //string& append(const char *s, int n); ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	str3.append("game abcde", 4);
    cout << "str3 = " << str3 << endl;

    //string& append(const string &s); ͬoperator+=(const string& str)
	str3.append(str2);
    cout << "str3 = " << str3 << endl;
    
    //string& append(const string &s, int pos, int n);` �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
	str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	cout << "str3 = " << str3 << endl;
}
int main() {

	test01();

	return 0;
}