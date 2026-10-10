// Print all prime numbers between 1 and 100
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int i, count, j;
    for (i = 2; i <= 100; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}