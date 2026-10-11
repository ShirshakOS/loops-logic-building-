// print the number from 1 to 100 and stop the loop as soon as a number divisable by 17 occurs
// break and continue;
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        cout << i << " ";
        if (i % 17 == 0)
        {
            break;
        }
    }
    return 0;
}