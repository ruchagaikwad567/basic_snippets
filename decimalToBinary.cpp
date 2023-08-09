#include<bits/stdc++.h>
using namespace std;

void convert(int n)
{
    stack<int>st;

    while(n>0)
    {
        int rem=n%2;
        st.push(rem);
        n=n/2;
    }

    while(!st.empty())
    {
        int x=st.top();
        cout<<x;
        st.pop();
    }


}

int main()
{
    convert(11);
    
}