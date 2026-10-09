// keep taking inputs from the users until 0  and display the sum of all the entered number
#include <iostream>
using namespace std;
int main()
{
    int a, sum = 0;
    cout << "Enter:\n";
    do
    {
        cin >> a;
        sum += a;
    } while (a != 0);
    cout << "The sum is: " << sum << endl;
    return 0;
}