#include<bits/stdc++.h>
using namespace std;

string remove(string s)
{
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
            ans+=s[i];
        }
    }
    return ans;
}

int main()
{
    string s="rucha is in pccoer";
    cout<<remove(s);
}