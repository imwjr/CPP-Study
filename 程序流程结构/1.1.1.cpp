#include <iostream>
using namespace std;

int main() {

	//ѡ��ṹ-����if���
	//����һ�������������������60�֣���Ϊ�ɼ��ϸ񣬲�����Ļ�ϴ�ӡ
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ�� " << score << endl;

	//if���
	//ע�������if�ж������棬��Ҫ�ӷֺ�
	if (score > 60)
	{
		cout << "�ɼ��ϸ�" << endl;
	}

	system("pause");
	return 0;
}