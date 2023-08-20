#include<bits/stdc++.h>
using namespace std;
//DUTCH FLAG ALGORITHM
//to segregate an array consisting of 3 numbers in linear time complexity

void sort012(int a[],int n)
{
    int lo=0;
    int mid=0;
    int hi=n-1;

    while(mid<=hi)
    {
        if(a[mid]==0)
        {
            swap(a[lo],a[mid]);
            lo++;
            mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else if(a[mid]==2)
        {
            swap(a[hi],a[mid]);
            hi--;
            
        }
    }
}

int main()
{
    int arr[]={0,0,1,1,0,2,1,0,2,1,2,2};
    int n=12;

    sort012(arr,n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}