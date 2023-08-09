#include<bits/stdc++.h>
using namespace std;

int removeDup1(vector<int>v)
{
    int j=1;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i]!=v[i+1])
        {
            v[j]=v[i+1];
            j++;
        }
    }
    return j;
}

vector<int> removeDup2(vector<int>v)
{
    vector<int>ans;
    set<int>s;
    for(int i:v)
    {
        s.insert(i);
    }
    for (int i:s)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    vector<int>v={1,1,1,2,2,2,2,3,3,3,6,7};
    vector<int>ans=removeDup2(v);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    cout<<removeDup1(v);
}