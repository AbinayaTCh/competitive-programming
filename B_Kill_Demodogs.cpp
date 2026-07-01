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
    {  ll n;
        cin>>n;
        ll ans=1;
        ll a=n;
        ll b=n+1;
        ll c=4*n-1;
        ll mod=1000000007;
        ans=((a%mod)*(b%mod)*(c%mod))%mod;
        ans=(ans*2022)/6;
        ans%=mod;
        cout<<ans<<endl;
    }
}