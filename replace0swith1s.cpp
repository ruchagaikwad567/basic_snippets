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


int replace2(int n)
{
    string s=to_string(n);
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s[i]='1';
        }
    }
    int w=stoi(s);
    return w;
}

int main()
{
    int n=204;
    cout<<replace2(n);
}