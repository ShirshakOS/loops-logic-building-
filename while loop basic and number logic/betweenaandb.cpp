// print all the numbers beween a and b that are divisable by 7
#include <iostream>
using namespace std;
void show(int a, int b);
int main()
{
    int a = 9, b = 100;
    cout << "Numbers between " << a << " and " << b << " that are divisable by 7 are: \n";
    show(a, b);
    return 0;
}
void show(int a, int b)
{
    int start = a < b ? a : b;
    int end = a > b ? a : b;
    while (start <= end)
    {
        if (start % 7 == 0)
        {
            cout << start << " ";
        }
        start++;
    }
}