// keep reading number from the user until negative number is entered and count how many positive numbers were entered
#include <iostream>
using namespace std;
int main()
{
    int a, count = 0;
    cout << "Enter: " << endl;
    do
    {
        cin >> a;
        if (a > 0)
            count++;
    } while (a > 0);
    cout << "COUNT: " << count << endl;
    return 0;
}