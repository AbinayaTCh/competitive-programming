#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(vector<ll> & a,ll n,ll m,ll mid)
{
    ll ans=0;

    for(ll i=0;i<n;i++)
    {
ans+=(mid)/a[i];
    }
    if(ans>=m)
    {
        return true;
    }
    else
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   ll n,m;
   cin>>n>>m;
   vector<ll>a(n);
   for(ll i=0;i<n;i++)
   {
    cin>>a[i];
   }
   ll l=*min_element(a.begin(),a.end());
   ll r=m*(*min_element(a.begin(),a.end()));
   ll ans=r;
   while(l<=r)
   {
    ll mid=l+(r-l)/2;
    if(check(a,n,m,mid))
    {
        ans=mid;
        r=mid-1;
    }
    else

    {
        l=mid+1;
    }

   }

   cout<<ans;
}