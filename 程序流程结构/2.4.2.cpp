#include <iostream>
using namespace std;
 
int main()
{
 
    for (int a = 1; a < 10; a++) {
 
        for (int b = 1; b <= a; b++) {
        
            cout << a << " * " << b << " = " << a*b << "  ";
 
        }
        cout << endl;
    }
 
    system("pause"); 
    return 0;
 
}