#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int i;
    for(i=1;i*i<x;i++)
    {
        if(x%i==0)
        {
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--)
    {
        if(x%i==0)
        {
            cout<<x/i<<" ";
        }
    }
    
    return 0;
}