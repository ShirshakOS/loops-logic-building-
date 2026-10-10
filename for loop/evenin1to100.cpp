// print all even numbers from 1 to 100
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}