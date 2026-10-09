// factorial of a given number
// using do while loop
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int i = 1, fact = 1;
    do
    {
        fact = fact * i;
        i++;
    } while (i <= a);
    cout << "Factorial of " << a << " is: " << fact << endl;
    return 0;
}