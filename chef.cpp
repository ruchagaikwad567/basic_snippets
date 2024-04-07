#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int l,v1,v2;
        cin>>l>>v1>>v2;
        
        //int ceil(l/v1)=ceil(l/v1);
        //cout<<ceil(l/v1)<<endl;
        
        //int ceil(l/v2)=ceil(l/v2);
        //cout<<ceil(l/v2)<<endl;
        
        
        if(ceil(l/v1)-ceil(l/v2)==0)
        {
            cout<<-1<<endl;
        }
        
        else if(ceil(l/v1)-ceil(l/v2)==1)
        {
            cout<<0<<endl;
        }
        
        else
        {
            cout<<ceil(l/v1)-ceil(l/v2)-1<<endl;
        }

        cout<<endl;
    }
	// your code goes here
	return 0;
}
