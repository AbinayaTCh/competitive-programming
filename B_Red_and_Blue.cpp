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
        ll n,ans=0;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll m;
        cin>>m;
        vector<ll>b(m);
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
        }
        ll s1=0,s2=0,c=0,d=0;
        for(ll i=0;i<n;i++)
        {
            c+=a[i];
            s1=max(s1,c);
        }
        for(ll i=0;i<m;i++)
        {
            d+=b[i];
            s2=max(s2,d);
        }
        ans=max(ans,s1+s2);
       cout<<ans<<endl;

    }
}