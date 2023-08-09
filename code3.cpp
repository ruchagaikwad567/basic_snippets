#include<bits/stdc++.h>
using namespace std;
const int N=1e9+7;

int maxPieces(int n)
{
    long long res=(n*n+n+2)/2;
    return res%N;
}

int main()
{
    int n;
    cin>>n;
    cout<<maxPieces(n)<<endl;

}