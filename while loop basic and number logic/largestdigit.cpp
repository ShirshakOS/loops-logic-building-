// find the largest digit in the given number
#include<iostream>
using namespace std;
int largestdigit(int a);
int main()
{
    int a=9128;
    cout<<"The largest digit: "<<largestdigit(a);
    return 0;
}
int largestdigit(int a)
{
    int lastdigit=a%10, last;
    a/=10;
    while(a!=0)
    {
        last=a%10;
        if(last>lastdigit)
        {
            lastdigit=last;
        }
        a/=10;
    }
    return lastdigit;
}