#include<bits/stdc++.h>
using namespace std;
//CODE 19
//find max element in array
void findmax(int arr[],int length)
{
    int max=INT_MIN;
    int index=0;
    for(int i=0;i<length;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }
    }
    cout<<max<<endl;
    cout<<index<<endl;
}

//CODE 18
//calculate sum of distance between 3 points
int calculateDist(int x1,int x2,int x3,int y1,int y2,int y3)
{
    float diff1= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float diff2= sqrt(pow(x2-3,2)+pow(y2-y3,2));
    float diff3= sqrt(pow(x3-x1,2)+pow(y3-y1,2));

    return diff1+diff2+diff3;
}

//CODE 17
//take upper limit and lower limit and print all the palindrome numbers between them
//helper function needed
bool isPalindrome(int num)
{
    int original=num;
    int reverse=0;
    while(num!=0)
    {
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;

    }
    return original==reverse;
}

void allPalindrome(int lower,int upper)
{
    for(int i=lower;i<=upper;i++)
    {
        if(isPalindrome(i))
        {
            cout<<i<<" ";
        }
    }
}


//CODE16
//display table of number and print sum of all multiples

void table(int n)
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        cout<<n*i<<" ";
        sum+=n*i;
    }
    cout<<endl;
    cout<<sum<<endl;
}

//CODE 14
//The function accepts 2 positive integer ‘m’ and ‘n’ as its arguments.You are required to calculate the sum of numbers divisible both by 3 and 5, between ‘m’ and ‘n’ both inclusive and return the same.

void divisible(int m,int n)
{
    int sum=0;
    for(int i=m;i<=n;i++)
    {
      if(i%3==0 && i%5==0)
      {
        sum+=i;
      }
    }
    cout<<sum;
}

int main()
{
    //function to convert string to int
    string n="12345";
    int converted=stoi(n);

   // allPalindrome(10,80);

   //table(5);

   divisible(12,50);

    

    
}