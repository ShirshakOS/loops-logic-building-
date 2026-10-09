// keep reading number from user until 0 and display the largest entered number
#include <iostream>
using namespace std;
int main()
{
    int num, largest = 0;
    cout << "Enter:\n";
    do
    {
        cin >> num;
        if(num>largest)
        {
            largest=num;
        }
    } 
    while (num != 0);
    cout << "The largest is: " << largest << endl;
    return 0;
}