// reverse the given number and print the reversed value
#include <iostream>
using namespace std;
int main()
{
    int a = 4321;
    int rev = 0, rem;
    do
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a /= 10;
    } while (a != 0);
    cout << "The reversed value is: " << rev << endl;
    return 0;
}