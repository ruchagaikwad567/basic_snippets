/*
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number*/

#include<bits/stdc++.h>
using namespace std;

int checkPassword(string str,int n)
{
    //at least 4 characters
    if(n<4) return 0;

    //starting char must not be number
    if(str[0]-'0'>=0 && str[0]-'0'<=9) return 0;


    int i=0;int cap=0;int num=0;

    while(i<n)
    {
        //must not have space or slash
        if(str[i]==' ' || str[i]=='/') return 0;

        //counting capital letters
        if(str[i]>=65 && str[i]<=90)
        {
            cap++;
        }

        //counting numeric digits
        if(str[i]>=48 && str[i]<=57)
        {
            num++;

        }
        i++;

    }

    return cap>0 && num>0;

}

int main()
{
    string str="a_097Ku";
    int x=checkPassword(str,7);
    x==1?cout<<"yes":cout<<"no";


}