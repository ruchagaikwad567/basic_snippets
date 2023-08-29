#include<bits/stdc++.h>
using namespace std;

int revNum(int num)
{
    int ans=0;
    while(num>0)
    {
        ans=(ans*10)+num%10;
        num=num/10;
    }
    return ans;
}

int main()
{
    int num=1234;
    cout<<revNum(num);

}