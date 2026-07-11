#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    vector<ll>a(t),ssum(t),psum(t);
    for(ll i=0;i<t;i++)
    {
        cin>>a[i];
    }
    psum[0]=a[0];
    for(ll i=1 ;i<t;i++)
    {
        psum[i]=psum[i-1]+a[i];
    }
sort(a.begin(),a.end());
ssum[0]=a[0];
for(ll i=1;i<t;i++)
{
    ssum[i]=ssum[i-1]+a[i];
}
ll n;
cin>>n;
    while(n--)
    {
        ll x,l,r;
        cin>>x>>l>>r;
        if(x==1)
        {
            ll ans=psum[r-1];

           if(l==1)
           { cout<<ans<<endl;

           }
           else
           {
            ans-=psum[l-2];
            cout<<ans<<endl;
           }

        }
        else
        {
            ll ans=ssum[r-1];
            if(l==1)
            {
                cout<<ans<<endl;
            }
            else
            {
                ans-=ssum[l-2];
                cout<<ans<<endl;
            }
;
        }
    }
}