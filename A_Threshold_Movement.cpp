 #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
if(n%2==1)
{
    cout<<"No"<<endl;
    return;
}
else
{
    ll ma=0,mi=INT_MAX;
    for(ll i=1;i<n;i+=2)
    {
        ma=max(ma,a[i]);
    }
    bool check=true;
    for(ll i=0;i<n;i+=2)
    {
        mi=min(mi,a[i]);
        
        
           
        
    }
    if(mi-ma>1)
    cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
 
}
    
    
    
    
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
    
 
 