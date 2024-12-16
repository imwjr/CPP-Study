#include<iostream>
using namespace std;
 
int main()
{
	//三位数字从100开始，到999结束
	int num = 100;
 
	do
	{
		//取出百位、十位、个位
		int ones_place = 0; //个位
		int tens_place = 0; //十位
		int hundreds_place = 0; //百位
 
		ones_place = num % 10;
		tens_place = (num / 10) % 10;
		hundreds_place = num / 100;
 
		//判断是否为水仙花数 
		if (num == ones_place* ones_place* ones_place + tens_place* tens_place* tens_place + hundreds_place* hundreds_place* hundreds_place)
		{
			cout << num << endl;
		}
 
		num++;
	} while (num < 1000);
 
	system("pause");
	return 0;
}	