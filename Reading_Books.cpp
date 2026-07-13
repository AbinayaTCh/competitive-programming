#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll ans=accumulate(a.begin(),a.end(),-a[n-1]);
    if(a[n-1]>=ans)
    {
        cout<<2*a[n-1];
    }
    else
    cout<<ans+a[n-1];
}