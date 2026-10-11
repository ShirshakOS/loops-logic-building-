// sum of all even numbers
// using for loop
#include<iostream>
using namespace std;
int main()
{
    int range=100, sum=0;
    for(int i=1;i<=range;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"Sum: "<<sum;
    return 0;
}