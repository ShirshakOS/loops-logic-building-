// print all the numbers from one to hundred and skip all the numbers that are divisable by 5 and continue printing the rest
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}