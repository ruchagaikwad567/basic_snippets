#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)//using euclidean's algorithm
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int lcm(int a,int b)
{
    return a*b/(gcd(a,b));
}

void simple(int &num3,int &den3)//to get fraction in its simplest form divide numerator and denominator by their gcd
{
    int x=gcd(num3,den3);
    num3=num3/x;
    den3=den3/x;
}

//add 3/4 + 1/7
int main()
{
    int num1=3,den1=4,num2=1,den2=7;
    int num3,den3;//numerator and denominator of ans

    den3=lcm(den1,den2);//denominator of answer is equal to lcm of den1 and den2

    num3=num1*(den3/den1)+num2*(den3/den2);

    simple(num3,den3);

    cout<<num3<<"/"<<den3;



}