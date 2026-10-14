// find and print the sum of first n odd numbers
#include <iostream>
using namespace std;
int main()
{
    cout<<"hie";
    int n = 10;
    int count = 0, sum = 0, i = 1;
    while (count != n)
    {
        if (i % 2 != 0)
        {
            cout << i << " "; // print the odd number
            sum += i;
            count++;
        }
        i++;
    }
    cout << "Sum of first " << n << " odd numbers: " << sum << endl;
    return 0;
}