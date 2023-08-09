#include<bits/stdc++.h>
using namespace std;
//find second largest element


int findSecondLargest(vector<int>v)
{
    int n=v.size();
    if(n<2)
    {
        cout<<"Min two elements required";

    }
    int firstLargest=max(v[0],v[1]);
    int secondLargest=min(v[0],v[1]);

    for(int i=2;i<n;i++)
    {
        if(v[i]>firstLargest)
        {
            secondLargest=firstLargest;
            firstLargest=v[i];
        }
        else if(v[i]>secondLargest&&v[i]!=firstLargest)
        {
            secondLargest=v[i];
                    }
    }
    return secondLargest;
    
}

int main()
{
    vector<int>arr={2,6,4,5,7,9,9,9,7,6,8,8,5};
    //sort(arr.begin(),arr.end());
    cout<<findSecondLargest(arr);
    
}