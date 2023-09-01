#include<bits/stdc++.h>
using namespace std;

void printLargestDivisible(int n,int a[])
{
    int c0=0;
    int c5=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c0++;
        }
        else
        {
            c5++;
        }
    }

    c5=floor(c5/9)*9;

    if(c0==0)
    {
        cout<<-1;
    }
    else if(c5==0)
    {
        cout<<0;
    }
    else
    {
        for(int i=0;i<c5;i++)
        {
            cout<<5;
        }
        for(int i=0;i<c0;i++)
        {
            cout<<0;
        }
    }
}

int main()
{
    int a[]={0,5};
    int n=sizeof(a)/sizeof(a[0]);
    printLargestDivisible(n,a);

}