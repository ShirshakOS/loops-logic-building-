// find the highest common factor of two given numbers
// using for loop
#include <iostream>
using namespace std;
int main()
{
    int hcf, i, num1, num2;
    cout << "NUM1: ";
    cin >> num1;
    cout << "NUM2: ";
    cin >> num2;
    for (i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;
    return 0;
}