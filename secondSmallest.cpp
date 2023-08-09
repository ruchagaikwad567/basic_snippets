#include<bits/stdc++.h>
using namespace std;

int findSecondSmallest(vector<int>v)
{
    int n=v.size();
    if(n<2)
    {
        cout<<"Min two elements required";
        return -1;
    }
    int firstSmallest=min(v[0],v[1]);
    int secondSmallest=max(v[0],v[1]);

    for(int i=0;i<n;i++)
    {
        if(v[i]<firstSmallest)
        {
            secondSmallest=firstSmallest;
            firstSmallest=v[i];
            
        }
        else if( v[i]<secondSmallest &&v[i]!=firstSmallest )
        {
            secondSmallest=v[i];
        }
    }
    return secondSmallest;



}

int main()
{

    vector<int>arr={2,4,3,5,1,0,7,6,5};
    cout<<findSecondSmallest(arr);

}