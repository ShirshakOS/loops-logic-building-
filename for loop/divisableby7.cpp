// print all numbers between a and b that are divisable by 7
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Start: ";
    cin >> a;
    cout << "End: ";
    cin >> b;
    int i;
    for (i = a; i <= b; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}