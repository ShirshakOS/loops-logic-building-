// keep taking numbers from the user and print them all untill a negative number appears then stop the loop
#include <iostream>
using namespace std;
int main()
{
    int num;
    do
    {
        cout << "Enter: ";
        cin >> num;
        if (num < 0)
            break;
        cout << "NUM: " << num << endl;

    } while (true);
    return 0;
}