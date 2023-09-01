#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n=4,k=2,l=2;
        //cin>>n>>k>>l;
        vector<int>arr={3 ,8 ,6 ,14};
        /*for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }*/
        sort(arr.begin(), arr.end());
        reverse(arr.begin(),arr.end());
        int sum=0;
        while(l<=n)
        {
            sum+=arr[l-1];
            cout<<sum;
            l+=k;
        }
        
        
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
