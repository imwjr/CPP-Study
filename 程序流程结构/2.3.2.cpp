#include <iostream>
using namespace std;

int main()
{
    // 7�ı�����num%7=0
    // ��λ��7��num%10=7
    // ʮλ��7��num/10=7
	for (int i = 1;i <= 100; i++)
    {
		if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
			cout << "�����ӣ���!��";
		}else
        {
			cout << i << "��";
		}
		
	}
}