#include<bits/stdc++.h>
using namespace std;

int ceiling(vector<int>arr,int target)
{
    //return number greater than or equal to given target
    int start=0;
    int end=arr.size()-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(target<mid)
        {
            end=mid-1;
        }
        else if(target==mid)
        {
            return mid;
        }
        else
        {
            start=mid+1;
        }
        return start;

    }
}

int main()
{
    vector<int>arr={2,5,8,9,11,23,45,66,67,77};
    cout<<ceiling(arr,67);

}