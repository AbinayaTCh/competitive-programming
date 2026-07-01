#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod=1000000007;
ll power(ll a,ll b)
{
    ll ans=1;
    b=b%mod;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b>>=1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
}