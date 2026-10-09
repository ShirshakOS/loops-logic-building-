// find the highest common factors of two numbers
#include <iostream>
using namespace std;
int HCF(int a, int b);
int main()
{
    int a = 80, b = 124;
    cout << "HCF of " << a << " and " << b << " is: " << HCF(a, b);
    return 0;
}
int HCF(int a, int b)
{
    int i = 1;
    int gcd;
    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        i++;
    }
    return gcd;
}