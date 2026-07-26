#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll mid,ll w,ll h,ll n)
{
ll a=(mid/w);
ll b=(mid/h);
if(a==0||b==0)
return false;
ll ma=max(a,b);
ll mi=min(a,b);
if(ma<(n+mi-1)/mi)
{
    return false;
}
return true;
}
void solve()
{
    ll w,h,n;
    cin>>w>>h>>n;
    ll ma=max(h,w);
    ll mi=min(h,w);
    ll l=1,r=n*ma;
    ll ans;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(check(mid,w,h, n))
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    

    
   solve();
    }

    
