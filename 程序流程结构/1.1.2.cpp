#include <iostream>
using namespace std;

int main() {

	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ�� " << score << endl;

	if (score > 60)
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