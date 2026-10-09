#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    int i = 1, hcf;
    do
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
        i++;
    } while (i <= a && i <= b);
    cout << "HCF: " << hcf;
    return 0;
}