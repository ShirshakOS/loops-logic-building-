// print all possible pairs (i,j) where i and j ranges to n
// nested loop
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "(" << i << "," << j << ")";
            if (i != 5 || j != 5)
            {
                cout << ",";
            }
        }
    }
    return 0;
}