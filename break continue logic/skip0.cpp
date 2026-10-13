// take 5 numbers as input , skip any number that is 0 using continue and add the remaining numbers
#include <iostream>
using namespace std;
int main()
{
    int a[5], i;
    cout << "Enter: \n";
    for (i = 0; i < 5; i++)
    {
        cout << "NUM " << i + 1 << ": ";
        cin >> a[i];
    }
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == 0)
        {
            continue;
        }
        else
        {
            sum += a[i];
        }
    }
    cout << "SUM: " << sum << endl;
    return 0;
}