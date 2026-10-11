// find and print the sum of first n natural numbers
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0, range;
    cout << "Range: ";
    cin >> range;
    for (i = 1; i <= range; i++)
    {
        sum += i;
    }
    cout << "SUM: " << sum;
    return 0;
}