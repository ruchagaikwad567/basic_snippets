#include<bits/stdc++.h>
using namespace std;

string next(string s)
{
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        int ascii=(int)(s[i]);

        if(ascii==90)
        {
            s[i]=(char)(65);
        }
        else if(ascii==122)
        {
            s[i]=(char)(97);
        }
        else{
            s[i]=char(ascii+1);
        }
    }
    return s;
}

int main()
{
    string str="abcdxyz";
    cout<<next(str);
}