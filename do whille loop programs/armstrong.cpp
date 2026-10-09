// armstrong
// using do while loop
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a = 153, temp = a;
    int count, pal = 0;
    count = (int)log10(a) + 1;
    do
    {
        pal += pow(a % 10, count);
        a /= 10;
    } while (a != 0);
    if (temp == pal)
        cout << "ARMSTRONG";
    else
        cout << "NOT ARMSTRONG";
    return 0;
}