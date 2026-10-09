// find and print the sum of all the factors of a number
#include <iostream>
using namespace std;
int sumfactors(int a);
int main()
{
    int a;
    cout << "NUMBER: ";
    cin >> a;
    cout << "Sum of all the factors of " << a << " is: " << sumfactors(a);
    return 0;
}
int sumfactors(int a)
{
    int i = 1, sum = 0;
    while (i <= a)
    {
        if (a % i == 0)
        {
            sum += i;
        }
        i++;
    }
    return sum;
}