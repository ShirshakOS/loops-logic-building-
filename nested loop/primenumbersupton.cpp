// print all the prime numbers upto n using nested loop checking
// nested loop
#include <iostream>
using namespace std;
int main()
{
    int n = 100;
    int i, j, count;
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