#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        ll x,ans=n;
        cin>>x;
    ll l=0,r=n-1;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(a[mid]>=x)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;        }
    }
    cout<<ans+1<<endl;
    }

}