//it gives two's multiplication table
#include<iostream>
using namespace std;

int recursive(int x);
int main()
{
    int i,ans;
    for(i=0;i<21;i++)
    {
        ans=recursive(i);
        cout<<ans<<" ";
    }
    return 0;
}

int recursive(int x)
{
    if(x==0)
    {
        return 0;
    }

    else
    {
        return (recursive(x-1)+2);
    }
}