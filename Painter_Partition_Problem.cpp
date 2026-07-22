#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll mid, vector<ll>&a,ll k)
{
    ll sum=0;
    ll c=1;
    for(ll i=0;i<a.size();i++)
    {
        sum+=a[i];
        if(sum>mid)
        {
            sum=a[i];
            c++;
        }
        
    }
    if(c>k)
    {
        return false;
    }
    else 
    return true;
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]; 
    }
    ll l=*max_element(a.begin(),a.end());
    ll r=accumulate(a.begin(),a.end(),0);
    ll mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(check(mid, a,k))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
     