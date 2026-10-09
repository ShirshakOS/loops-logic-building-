// find whether the given number is palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int a = 321, temp = a, rem, rev = 0;
    do
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a /= 10;
    } while (a != 0);
    if (temp == rev)
    {
        cout << "PALINDROME\n";
    }
    else
    {
        cout << "NOT PALINDROME\n";
    }
    return 0;
}