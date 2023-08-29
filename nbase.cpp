#include<bits/stdc++.h>
using namespace std;

string nbase(int n, int num)
{
    string res="";
    int quo=num/n;
    vector<int>rem;
    rem.push_back(num%n);
    while(quo!=0)
    {
        rem.push_back(quo%n);
        quo=quo/n;
        //convert string to int use stoi() function
        //convert int to string use to_string();
    }

    for(int i=0;i<rem.size();i++)
    {
        if(rem[i]>9)
        {
            res=(char)(rem[i]-10+65)+res;
        }
        else{
            res=to_string(rem[i])+res;
        }
    }
    return res;
}
int main()
{
    int n=21;
    int num=5678;
    cout<<nbase(n,num);

}