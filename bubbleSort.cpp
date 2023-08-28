#include<bits/stdc++.h>
using namespace std;

//array gets sorted from end

void bubbleSort(vector<int>&a)
{
    int n=a.size();
    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                swapped=true;
                swap(a[j],a[j+1]);
                cout<<a[j]<<" and "<<a[j+1]<<" swapped ";
                cout<<endl;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}

int main()
{
    vector<int>a={1,2,3,4};
    bubbleSort(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }
}