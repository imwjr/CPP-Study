#include <iostream>
using namespace std;

int main()
{
    // 7的倍数：num%7=0
    // 个位有7：num%10=7
    // 十位有7：num/10=7
	for (int i = 1;i <= 100; i++)
    {
		if(i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
        {
			cout << "敲桌子，过!、";
		}else
        {
			cout << i << "、";
		}
		
	}
}