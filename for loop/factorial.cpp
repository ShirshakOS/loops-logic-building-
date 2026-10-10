// calculate and print the factorial of a given number
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout << "FACTORIAL: " << fact;
    return 0;
}