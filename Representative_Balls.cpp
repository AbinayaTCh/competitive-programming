#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vector<ll>a(m+1,-1);
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        ll y;
        cin>>y;
        if(a[x]<y)
        {
            a[x]=y;        }
    }
    for(ll i=1;i<=m;i++)
    {
        cout<<a[i]<<" ";
    }
}