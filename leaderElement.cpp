#include<bits/stdc++.h>
using namespace std;
//element is leader element if it is greater than all the elements to its right


class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        vector<int>ans;
        int x=arr[n-1];
        ans.push_back(x);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=x)
            {
                x=arr[i];
                ans.push_back(x);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        // Code here
        
    }

    int leaderSum(int arr[],int n)
    {
        int x=arr[n-1];
        int sum=x;

        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>x)
            {
                x=arr[i];
                sum+=x;
            }
        }
        return sum;
    }
};

int main()
{
    int arr[]={16,17,4,3,5,2};
    Solution obj;
    vector<int>res=obj.leaders(arr,6);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    cout<<endl<<obj.leaderSum(arr,6);

}