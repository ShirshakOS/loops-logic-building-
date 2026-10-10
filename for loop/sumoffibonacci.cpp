// print the sum of the fibonacci series
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int accumulate = 0, sum, a = 0, b = 1, range;
    cout << "Fibonacci series upto how many terms?: ";
    cin >> range;
    if (range <= 2)
    {
        cout << "Must be greater than 2";
        return 1;
    }
    int i;
    for (i = 1; i <= range - 2; i++)
    {
        sum = a + b;
        cout << sum << " ";
        accumulate += sum;
        a = b;
        b = sum;
    }
    cout << "SUM: " << accumulate + 1 << endl;
    return 0;
}