// sum of the first n even numbers
#include <iostream>
using namespace std;
int main()
{
    int n = 6; // 2,4,6,8,10,12
    int count = 0, i = 1, sum = 0;
    while (count != n)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" "; // print the even numbers in console
            count++;
            sum += i;
        }
        i++;
    }
    cout << "Sum of first " << n << " even numbers: " << sum << endl;
    return 0;
}