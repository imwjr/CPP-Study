#include <iostream>
using namespace std;

int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

int main() {

	cout << "ret = " << func(20,20,20) << endl;
    cout << "ret = " << func(20,20) << endl;
	cout << "ret = " << func(20) << endl;

	system("pause");
	return 0;
}