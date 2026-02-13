#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m=0;
        cin>>n;
        vector<long long>p(n),a(n);
        string s;
        set<char>ch;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            ch.insert(s[i]);
            p[i]=ch.size();
        }
        ch.clear();
        for(int i=n-1;i>=0;i--)
        {
            ch.insert(s[i]);
            s[i]=ch.size();

        }
        for(int i=0;i<n;i++)
        {
            m=max(m,p[i]+s[i+1]);
        }
    
        
        cout<<m<<endl;

    }
}