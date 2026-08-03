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
ll l=0,r=0;
ll ans=0;
while(l<n && r<m)
{
    if(a[l]==b[r])
    {
        ll c1=1,c2=1;
while(l<n-1 && a[l+1]==a[l])
{
    c1++;
    l++;
}
while(r<m-1 && b[r+1]==b[r])
{
    c2++;
    r++;
}
ans+=(c1)*c2;
l++;
r++;
    }
    else if(a[l]<b[r])
    {
        l++;
    }
    else
    {
        r++;;
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


 

