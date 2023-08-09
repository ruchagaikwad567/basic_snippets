//Reverse words in given string
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans;
    stack<string>s1;
    string temp;
    for(int i=0;i<s.size();i++)
    {
        
        if(s[i]=='.')
            {
                s1.push(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
    }
    s1.push(temp);

    while(!s1.empty())
        {
            ans+=s1.top();
            s1.pop();

           if(!s1.empty()){
               ans+=".";
           }
            
        }
        return ans;
}

int main()
{
    string s1="i.like.this.program.very.much";
    cout<<reverseWords(s1)<<endl;
    return 0;

}