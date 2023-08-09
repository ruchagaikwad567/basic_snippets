#include<bits/stdc++.h>
using namespace std;
//find palindromic numbers between l and u



int main()
{
    int l,u;
    cin>>l>>u;
    vector<int>ans;
    for(int i=l;i<=u;i++)
    {
        int temp=i;
        int r=0;
        while(temp>0)
        {
            r=(r*10)+temp%10;
            temp=temp/10;
        }
            if(i==r) 
            {
                ans.push_back(i);
            }
        
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";

    }

}