// number triangle pattern
// nested loop
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (int k = 4; k >= i; k--)
        {
            cout << " ";
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}