// skip all odd numbers and print only the even numbers
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}