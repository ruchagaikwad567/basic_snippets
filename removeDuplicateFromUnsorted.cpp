#include<bits/stdc++.h>
using namespace std;

vector<int> removeDup(vector<int>arr)
{
    vector<int>ans;
    map<int,int>m;
    for(int i=0;i<arr.size();i++)
    {
        if(m.find(arr[i])==m.end())
        {
            ans.push_back(arr[i]);
            m[arr[i]]++;
        }
    }
    return ans;
}

int main()
{
    vector<int>v={3,4,5,6,12,3,4,4,9,7,6,7,7,90};
    vector<int>res=removeDup(v);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

}