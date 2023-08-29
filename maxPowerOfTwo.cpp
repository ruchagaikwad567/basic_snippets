#include<bits/stdc++.h>
using namespace std;

int count(int n)
{
    int count=0;
    while(n%2==0 && n!=0)
    {
        count++;
        n=n/2;

    }
    return count;
}

int maxExp(int a, int b)
{
    int num=0;
    int max=0;
    int temp=0;
    for(int i=a;i<=b;i++)
    {
        temp=count(i);
        if(temp>max)
        {
            max=temp;
            num=i;
        }
        
    }
    return num;
}

int main()
{
    cout<<maxExp(7,12);
}