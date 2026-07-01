#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    { 
        ll n;
        cin>>n;
        string s,t;
        cin>>s;
        char c=s[0];
        t=s[0];
        for(ll i=1;i<n;i++)
        {
            if(s[i]!=c)
            { t+=s[i];
                c=s[i];

            }

        }
        ll ct=0;
        for(ll i=0;i<t.size();i++)
        {
            if(t[i]=='1')
            {
                ct++;
            }

        }
        if(ct==0||ct==t.size())
        {
            cout<<1<<endl;

        }
        else
        {
            if(t.size()==2)
            {
                cout<<2<<endl;
            }
            else
            cout<<1<<endl;
        }
    }
}