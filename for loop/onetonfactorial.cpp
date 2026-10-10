// calculate and print the factorial of every number from one to n
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int range = 6;
    int i, j;
    for (i = 1; i <= range; i++)
    {
        int fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        cout << i << "! = " << fact << endl;
    }
    return 0;
}