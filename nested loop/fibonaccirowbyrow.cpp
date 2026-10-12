// print the fibonacci pattern row by row where each row prints the next fibonacci number
// nested loop
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int sum = 0;
    int a = 0, b = 1;
    int temp;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1)
            {
                cout << a << " ";
            }
            else if (i == 2 && j == 1)
            {
                cout << b << " ";
            }
            else
            {
                sum = a + b;
                cout << sum << " ";
                a = b;
                b = sum;
            }
        }
        cout << endl;
    }
}