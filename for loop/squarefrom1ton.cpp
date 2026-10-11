// print the square of each number from 1 to n
// using for loop
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int range;
    cout << "Enter range: ";
    cin >> range;
    int i;
    for (i = 1; i <= range; i++)
    {
        cout << pow(i, 2) << " ";
    }
    return 0;
}