// count and print the number of digits in the given number
#include <iostream>
using namespace std;
int main()
{
    int a = 129803, count = 0;
    do
    {
        count++;
        a /= 10;
    } while (a != 0);
    cout << "Number of digits: " << count << endl;
    return 0;
}