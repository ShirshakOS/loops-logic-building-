// sum of even number and sum of odd number using do while loop
#include <iostream>
using namespace std;
int main()
{
    int a = 1234;
    int sumeven = 0, sumodd = 0;
    int i;
    do
    {
        if ((a % 10) % 2 == 0)
        {
            sumeven += (a % 10);
        }
        else
        {
            sumodd += (a % 10);
        }
        a /= 10;
    } while (a != 0);
    cout << "Sum of even digits: " << sumeven << endl;
    cout << "Sum of odd digits: " << sumodd << endl;
    return 0;
}