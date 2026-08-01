  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = LLONG_MAX;
const ll  neginf = LLONG_MIN;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)
    cin>>a[i];
for(ll i=0;i<m;i++)
cin>>b[i];
while(true)
{
    ll c=0;
    for(ll i=0;i<m;i++)
    {
        
            if(a[b[i]-1]>a[b[i]])
            {
                swap(a[b[i]],a[b[i]-1]);
            }
            else
            {
                c++;
            }
        
    }
    if(c==m)
    break;
}
ll ans=0;
for(ll i=0;i<n-1;i++)
{
    if(a[i]<=a[i+1])
    {
        ans++;
    }
}
if(ans==n-1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
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
  
    

 

