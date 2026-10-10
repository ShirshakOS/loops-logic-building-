// sum of digits of a given number
// do while loop use case
#include <iostream>
using namespace std;
int main()
{
    int a = 123;
    int rem, sum = 0;
    do
    {
        rem = a % 10;
        sum += rem;
        a /= 10;
    } while (a != 0);
    cout << "SUM: " << sum;
    return 0;
}
