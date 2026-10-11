// print the multiplication table for all numbers from 1 to 10
// nested loop
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        cout << "Multiplication table of " << i << ":\n";
        for (j = 1; j <= 10; j++)
        {
            cout << i << "*" << j << "=" << (i * j) << endl;
        }
    }
    return 0;
}