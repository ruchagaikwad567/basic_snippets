#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    int n=s.size();
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        st.push(s[i]);
    }
    string ans="";
    while(!st.empty())
    {
        char c=st.top();
        ans+=c;
        st.pop();
    }
    return ans;

    
}

int main()
{
    string s="rucha";
    cout<<reverse(s);
}