// print the multiplication table of a given number
#include <iostream>
using namespace std;
int main()
{
    int a = 9, i = 1,range=20;
    do
    {
        cout << a << " x " << i << " = " << a * i << endl;
        i++;
    } while (i <= range);
    return 0;
}