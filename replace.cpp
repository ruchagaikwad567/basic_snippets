#include<bits/stdc++.h>
using namespace std;

/*
 Given an array of N integers, the task is to replace each element of the array by its rank in the array.

Examples:

Example 1:
Input: 20 15 26 2 98 6
Output: 4 3 5 1 6 2
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so…
*/

int main()
{
    vector<int>v={2,20,13,16,8};
    int n=v.size();
    int temp=1;
    map<int,int>mp;

    vector<int>dummy;
    for(int i=0;i<n;i++)
    {
        dummy[i]=v[i];
    }
    sort(dummy.begin(),dummy.end());
    cout<<dummy[0];

    for(int i=0;i<n;i++)
    {
        if(mp[dummy[i]]==0)
        {
            mp[dummy[i]]=temp;
            temp++;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<mp[v[i]]<<" ";
    }
}