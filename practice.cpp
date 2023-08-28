#include<bits/stdc++.h>
using namespace std;

int FindsecondLargest(vector<int>arr)
{
    int firstLargest=max(arr[0],arr[1]);
    int secondLargest=min(arr[0],arr[1]);

    for(int i=2;i<arr.size();i++)
    {
        if(arr[i]>firstLargest)
        {
            secondLargest=firstLargest;
            firstLargest=arr[i];
            
        }

        else if(arr[i]>secondLargest&&arr[i]!=firstLargest)
        {
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}
int FindsecondSmallest(vector<int>arr)
{
    int firstSmallest=min(arr[0],arr[1]);
    int secondSmallest=max(arr[0],arr[1]);
    for(int i=2;i<arr.size();i++)
    {
        if(arr[i]<firstSmallest)
        {
            secondSmallest=firstSmallest;
            firstSmallest=arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!=firstSmallest)
        {
            secondSmallest=arr[i];
        }
    }
    return secondSmallest;
}
int main()
{
    vector<int>arr={2,6,4,5,7,9,9,3,7,6,8,8,5};
    //sort(arr.begin(),arr.end());
    cout<<FindsecondSmallest(arr);
}