// check whether a given number is prime number or not
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int a = 7, count = 0, i;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            count++;
    }
    if (count == 2)
        cout << "PRIME\n";
    else
        cout << "COMPOSITE";
}