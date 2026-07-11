#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    ll ans=0,t=0;
    for(ll i=0;i<n;i++)
    {
        t+=a[i].first;
        ans+=(a[i].second-t);
    }
    cout<<ans<<endl;
}