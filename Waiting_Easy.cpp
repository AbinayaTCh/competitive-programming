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
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll m=a[0];
        ll ans=0;
        for(ll i=1;i<n;i++)
        {
            if(a[i]>=m)
            {
            m=a[i];

            }
            else
            {
                ans+=(m-a[i]);
            }
        }
        cout<<ans<<endl;
    }
}