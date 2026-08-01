  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll mid,ll n,ll x,ll y)
{
    ll ans=0;
    ll mi=min(x,y);
    mid-=mi;
    ans++;
    ans+=(mid/x)+(mid/y);
    if(ans>=n)
    return true;
else 
return false;

}
void solve()
{
    
    ll n,x,y;
    cin>>n>>x>>y;
    ll ma=max(x,y);
    ll mi=min(x,y);
    ll l=mi,r=ma*n;
    ll answer=l;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(check(mid,n,x,y))
        {
            answer=mid;
            r=mid-1;

        }
        else
        {
            l=mid+1;
        }
    }
    cout<<answer;

}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   
    
   

    
   solve();
    }
  
    

 

