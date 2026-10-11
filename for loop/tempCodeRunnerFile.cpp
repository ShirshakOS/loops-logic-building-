// find and print the sum of all odd numbers from 1 to n
// using for loop
#include<iostream>
using namespace std;
int main()
{
    int range=100;
    int sum=0;
    for(int i=1;i<=range;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<"SUM OF ODD: "<<sum<<endl;
    return 0;
}