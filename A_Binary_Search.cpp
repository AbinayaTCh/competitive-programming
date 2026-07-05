#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,t;
    cin>>n>>t;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(t--)
    {ll x,b=0;
        cin>>x;
        ll l=0,h=n-1;
        while(l<=h)
        {
            ll mid=l+(h-l)/2;
            if(a[mid]==x)
            {
                b=1;
                break;
            }
            else if(a[mid]<x)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
if(b)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
        
    }
}