#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll c0=0,c1=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                c0++;
            }
            else
            c1++;
        }
        if(c0<k||c1<k)
        {
            cout<<s<<endl;
            continue;

        }
        else if(c0==k && c1==k)
        {
            string d;
            for(ll i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    d+='1';

                }
                else
                d+='0';
            }
            if(d<s)
            cout<<d<<endl;
            else 
        cout<<s<<endl;
        }
        else
        {
            for(ll i=0;i<c0;i++)
            {
                cout<<'0';
            }
            for(ll i=0;i<c1;i++)
            cout<<'1';
        cout<<endl;
        }
    }
}
