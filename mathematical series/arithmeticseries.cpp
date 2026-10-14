// print the first n terms of an arithmetic series for the given first term and the common difference
#include <iostream>
using namespace std;
int main()
{
    int a = 2, // the first term 
    d = 5, // common difference
    n = 10; // number of terms 
    for (int i = 1; i <= 10; i++)
    {
        cout << a + (i - 1) * d << " ";
    }
    return 0;
}