// print the multiplication table of a given number
// using for loop
#include<iostream>
using namespace std;
int main()
{
    int i;
    int a=2;
    int range=10;
    for(i=1;i<=range;i++)
    {
        cout<<a<<"*"<<i<<"="<<(a*i)<<endl;
    }
    return 0;
}
