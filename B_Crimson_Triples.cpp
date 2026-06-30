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
    { ll n;
        cin>>n;
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            ans+=(n/i)*(n/i);

        }
        cout<<ans<<endl;
    }
}
