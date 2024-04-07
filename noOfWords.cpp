#include<bits/stdc++.h>
using namespace std;

int countwords(string s)
{
    int word=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]==' ' && s[i-1]!=' ')
        {
            word++;
        }
        else if(s[i]==','||s[i]=='.')
        {
            word++;
        }
    }
    return word;
}

int main()
{
    string s="This is rucha.";
    cout<<countwords(s);
}