// pythagorean triplets
//  nested loop
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    int n = 30;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                if((pow(j,2)+pow(k,2)==pow(i,2))
                {
                    cout << "(" << j << "," << k << "," << i << ")" << endl;
                }
            }
        }
    }
    return 0;
}