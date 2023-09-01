#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={3,7,4,7,8,6,1};
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }

    sort(odd.rbegin(),odd.rend());
    sort(even.rbegin(),even.rend());
    cout<<odd[1]+even[1];
}