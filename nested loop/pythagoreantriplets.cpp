// pythagorean triplets
//  nested loop
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    int n = 20;
    for (i = 1; i <= n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            for (k = j + 1; k <= n; k++)
            {
                if ((i * i + j * j) == (k * k))
                {
                    cout << "(" << i << "," << j << "," << k << ")" << endl;
                }
            }
        }
    }
    return 0;
}