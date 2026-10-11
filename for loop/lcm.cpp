// find the lowest common multiple of two numbers
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Num1: ";
    cin >> num1;
    cout << "Num2: ";
    cin >> num2;
    int i;
    bool flag = false;
    for (i = 1;; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            cout << "LCM: " << i;
            break;
        }
    }
    return 0;
}