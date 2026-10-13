// keep taking numbers from user and add them until the sum is greater than 100
#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0, num;
    cout << "Enter ";
    while (true)
    {
        cout << "Enter 1 to enter and add 0 to exit: ";
        cin >> a;
        if (a == 1)
        {
            cout << "NUM: ";
            cin >> num;
            sum += num;
            if (sum > 100)
            {
                break;
            }
        }
        else if (a == 0)
            break;
    }
    cout << "SUM: " << sum << endl;
}