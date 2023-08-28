#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,5,10,15,10,5};
    unordered_map<int,int>m;
    for(int i=0;i<6;i++)
    {
        m[arr[i]]++;
    }

    for(auto it:m)
    {
        cout<<it.first<<" occured "<<it.second<<" times ";
        cout<<endl;
    }
}