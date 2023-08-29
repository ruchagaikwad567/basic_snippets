#include<bits/stdc++.h>
using namespace std;






void FindAutoCount(string s)
{
    int n = s.size();
    int v[n];
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        v[i] = x;
    }
    bool caught = false;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == i)
                ++cnt;
        }
        if (cnt != v[i])
        {
            caught = true;
            break;
        }
    }
    if (caught)
    {
        cout << -1 << endl;
    }
    else
    {
        unordered_set<int> temp;
        for (auto it : v)
            temp.insert(it);
        cout << temp.size() << endl;
    }
}

int finndAutoCount(string s)
{
    int n=s.size();
    int sum=0;
    set<char>st;
    for(int i=0;i<n;i++)
    {
        sum+=s[i]-'0';
        st.insert(s[i]);

    }

    if(sum!=s.size())
    {
        return 0;
    }
    else{
        return st.size();
    }

}
int main ()
{
  string n;
  cin >> n;
   FindAutoCount (n);
  return 0;
}