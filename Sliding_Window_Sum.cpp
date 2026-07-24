#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a,b,c,x;
    cin>>x>>a>>b>>c;
    vector<ll>v(n);
    v[0]=x;
    for(ll i=1;i<n;i++)
    {
        v[i]=(a*v[i-1]+b)%c;
    }
    ll ans=0;
   ll  sum=accumulate(v.begin(),v.begin()+k,0ll);
    ans^=sum;
    for(ll i=k;i<n;i++)
    {
        sum=sum-v[i-k]+v[i];
        ans=ans^sum;

    }
    cout<<ans;
  
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   
    

    
   solve();
    }

    
