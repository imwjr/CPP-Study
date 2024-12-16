#include <iostream>
using namespace std;

int main() {

	int arr[9] = {3,8,6,9,5,7,1,2,0};

    cout << "ÅÅĞòÇ°£º";
    for (int i = 0; i < 9; i++)
	{
		cout << arr[i];
        if (i < 8) {
            cout << ",";
        }
	}

	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

    cout << endl;
    cout << "ÅÅĞòºó£º";
    for (int i = 0; i < 9; i++)
	{
		cout << arr[i];
        if (i < 8) {
            cout << ",";
        }
	}
    
    cout << endl;
	system("pause");
	return 0;
}