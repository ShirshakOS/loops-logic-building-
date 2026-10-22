// print all the numbers from one to hundred whose sum of digits is even

#include <iostream>
using namespace std;

void show()
{
    int i, j, sum, lastdigit;
    for (i = 1; i <= 100; i++)
    {
        j = i;
        sum = 0;
        while (j != 0)
        {
            lastdigit = j % 10;
            sum += lastdigit;
            j /= 10;
        }
        if (sum % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    show();
    return 0;
}