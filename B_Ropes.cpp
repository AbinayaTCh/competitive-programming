  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(double  mid, vector<ll> & a,ll k)
{
    ll n=a.size();
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        c+=(ll)(a[i]/mid);
        
    }
    if(c>=k)
    return true;
else
return false;
}
void solve()
{ ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
double l=0.0;
double hi=*max_element(a.begin(),a.end());
while(hi-l>1e-6)
{
    double mid=l+(hi-l)/2;
    if(check(mid,a,k))
    l=mid;
//length badyo pieces gatcha length gatyo pieces badcha no 
else
hi=mid;
}
cout<<fixed<<setprecision(6)<<l;
    

}
    
    
    
    


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   

    
   

    
   solve();
    }
  
    

 

