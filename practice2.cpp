#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&v,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    reverse(v,start+1,end-1);
}

void rev2(vector<int>&v,int i)
{
    int n=v.size();
    if(i>=n/2) return;
    swap(v[i],v[n-i-1]);
    cout<<"swapped"<<v[i]<<" and "<<v[n-i-1]<<endl;
    rev2(v,i+1);



}

int main()
{
    vector<int>v={1,2,3,3,2,9};
    rev2(v,0);
    for(auto i:v)
    {
        cout<<i<<" ";
    }
}