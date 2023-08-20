#include<bits/stdc++.h>
using namespace std;
//Given an integer n, for every integer i <= n, the task is to print “FizzBuzz” if i is divisible by 3 and 5, “Fizz” if i is divisible by 3, “Buzz” if i is divisible by 5 or i (as a string) if none of the conditions are true.

vector<string> fizzbuzz(int n)
{
    vector<string>v;
    for(int i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            v.push_back("fizzbuzz");

        }
        else if(i%3==0)
        {
            v.push_back("fizz");
        }
        else if(i%5==0)
        {
            v.push_back("buzz");
        }
        else 
        {
            v.push_back(to_string(i));
        }
    }
    return v;
}

int main()
{
    vector<string>s=fizzbuzz(10);
    for(int i=1;i<=s.size();i++)
    {
        cout<<s[i]<<" ";
    }
}