// print the fibonacci series upto the required number of terms
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum;
    int i = 1, n = 8;
    cout << a << " " << b << " ";
    do
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << " ";
        i++;
    } while (i <= n - 2);
    return 0;
}