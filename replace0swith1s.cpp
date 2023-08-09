#include<bits/stdc++.h>
using namespace std;

int replace(int n)
{
    int ans=0;
    int temp=1;

    while(n>0)
    {
        if(n==0) return 1;

        int rem=n%10;
        if(rem==0)
        {
            rem=1;
        }
        ans=ans+(temp*rem);
        temp=temp*10;
        n=n/10;

        

    }

    return ans;
}

int main()
{
    int n=204;
    cout<<replace(n);
}