// search a number in a list of inputs and terminate the loop immediately when the number is found
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i, n = 10;
    bool flag = false;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            flag = true;
            cout << "Terminating the loop...\n";
            break;
        }
    }
    if (!flag)
    {
        cout << "...NUMBER NOT FOUND...\n";
    }
}