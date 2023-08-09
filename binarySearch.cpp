#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(target<arr[mid])
        {
            end=mid-1;
        }
        else if(target==arr[mid])
        {
            return mid;
        }
        else{
            start=mid+1;
        }
    }
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,9,23};
    cout<< binarySearch(arr,23);

}