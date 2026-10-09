// find and return the least common multiple of two numbers
#include<iostream>
using namespace std;
int lcm(int a, int b);
int main()
{
    int a=4, b=5;
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm(a,b)<<endl;
    return 0;
}
int lcm(int a, int b)
{
    int i=1;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            return i;
            break;
        }
        i++;
    }
}