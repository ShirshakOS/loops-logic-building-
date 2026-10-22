// count the total number from 1 to 500 that are divisable by 7 but not 5
#include <iostream>
using namespace std;

void show()
{
    int i, count = 0;
    for (i = 1; i <= 500; i++)
    {
        if (i % 7 == 0 && i % 5 != 0) // use case of && operator
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    show();
    return 0;
}