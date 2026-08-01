  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0;

    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 && i<=k )
        {
        ans=max(ans,i);
        if((n/i)<=k)
        {
            ans=max(ans,n/i);
        }

        
        }

    }
    cout<<n/ans<<endl;
    

}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {

    
   

    
   solve();
    }
  }
    

 

