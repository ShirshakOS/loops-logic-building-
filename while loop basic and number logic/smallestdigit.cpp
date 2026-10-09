// find the smallest digit of a number
#include <iostream>
using namespace std;
int smallestdigit(int a);
int main()
{
    int a = 4;
    cout << "The smallest digit of " << a << " is: " << smallestdigit(a);
    return 0;
}
int smallestdigit(int a)
{
    int lastdigit = a % 10;
    a /= 10;
    while (a != 0)
    {
        if ((a % 10) < lastdigit)
        {
            lastdigit = a % 10;
        }
        a /= 10;
    }
    return lastdigit;
}