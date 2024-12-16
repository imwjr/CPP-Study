#include <iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "您输入的分数为： " << score << endl;

	if (score > 90)
	{
		cout << "成绩优秀！" << endl;
	}
    else if(score > 70)
    {
        cout << "成绩良好！" << endl;
    }
    else if(score > 60)
    {
        cout << "成绩合格！" << endl;
    }
    else
    {
        cout << "成绩不合格！" << endl;
    }

	system("pause");
	return 0;
}