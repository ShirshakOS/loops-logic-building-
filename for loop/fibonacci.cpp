// print the fibonacci series upto the required number of terms
//  using for loop
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum;
    int i, n;
    cout << "Fibonacci series upto how many terms?: ";
    cin >> n;
    if (n <= 2)
    {
        cout << "Must be greater than 2";
        return 1;
    }
    cout << a << " , " << b << " , ";
    for (i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        cout << sum;
        if (i != n-2)
        {
            cout << " , ";
        }
        a = b;
        b = sum;
    }
    return 0;
}