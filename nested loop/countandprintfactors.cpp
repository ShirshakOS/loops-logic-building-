// for every numbers from 1 to n, count and print the total number of its factor
// nested loop
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int count;
    for (i = 1; i <= 20; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        cout << "Number of factors of " << i << ": " << count << endl;
    }
    return 0;
}