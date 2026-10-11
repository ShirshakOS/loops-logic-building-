// find and print the sum of all factors of a given number
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, n, i;
    cout << "Number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    cout << "SUM of FACTORS: " << sum << endl;
    return 0;
}