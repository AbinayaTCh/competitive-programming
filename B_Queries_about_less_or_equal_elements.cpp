  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
bool check(ll mid,vector<ll>&a,ll k)
{
    if(a[mid]<=k)
    {
        return true;
    }
    else
    return false;
}
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)
    cin>>a[i];
sort(a.begin(),a.end());
for(ll j=0;j<m;j++)
cin>>b[j];
for(ll j=0;j<m;j++)
{
    ll lo=0,hi=n-1;
    ll ans=0,c=0;
    while(hi>=lo)
    {
        ll mid=lo+(hi-lo)/2;
        if(check(mid,a,b[j]))
        {
            c=1;
            ans=mid;
            lo=mid+1;

        }
        else
        {
            hi=mid-1;
        }
    }
    if(!c)
    cout<<ans<<" ";
else
    cout<<ans+1<<" ";
}
    

}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   

    
   solve();
    }
  
    

 

