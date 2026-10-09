// print all the factors of a given numbers
#include<iostream>
using namespace std;
void printallfactors(int a);
int main()
{
    int a;
    cout<<"Number: ";
    cin>>a;
    printallfactors(a);
    return 0;
}
void printallfactors(int a)
{
    int i=1;
    while(i<=a)
    {
        if(a%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
}