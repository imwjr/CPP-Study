#include <iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ�� " << score << endl;

	if (score > 90)
	{
		cout << "�ɼ����㣡" << endl;
	}
    else if(score > 70)
    {
        cout << "�ɼ����ã�" << endl;
    }
    else if(score > 60)
    {
        cout << "�ɼ��ϸ�" << endl;
    }
    else
    {
        cout << "�ɼ����ϸ�" << endl;
    }

	system("pause");
	return 0;
}