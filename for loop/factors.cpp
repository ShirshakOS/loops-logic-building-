// print all factors of a given numbers
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;
    if (num <= 0)
    {
        cout << "Number must be greater than zero\n";
        return 1;
    }
    int i;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}