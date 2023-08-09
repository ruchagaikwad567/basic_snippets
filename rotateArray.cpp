#include<bits/stdc++.h>
using namespace std;



void leftSwap(vector<int>nums)//helper function
{
    int n=nums.size();
    int temp=nums[0];
    for(int i=0;i<nums.size()-1;i++ )
    {
        nums[i]=nums[i+1];
    }
    nums[n-1]=temp;

}

void rotate(vector<int>arr,int k)
{
    for(int i=0;i<=k;i++)
    {
        leftSwap(arr);
    }

}

int main()
{
    vector<int>nums={2,4,5,6,8,6,4,9,0,7};
    rotate(nums,3);

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }

}
