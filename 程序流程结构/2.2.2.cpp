#include<iostream>
using namespace std;
 
int main()
{
	//��λ���ִ�100��ʼ����999����
	int num = 100;
 
	do
	{
		//ȡ����λ��ʮλ����λ
		int ones_place = 0; //��λ
		int tens_place = 0; //ʮλ
		int hundreds_place = 0; //��λ
 
		ones_place = num % 10;
		tens_place = (num / 10) % 10;
		hundreds_place = num / 100;
 
		//�ж��Ƿ�Ϊˮ�ɻ��� 
		if (num == ones_place* ones_place* ones_place + tens_place* tens_place* tens_place + hundreds_place* hundreds_place* hundreds_place)
		{
			cout << num << endl;
		}
 
		num++;
	} while (num < 1000);
 
	system("pause");
	return 0;
}	