  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
for(ll i=1;i<n;i++)
{
    if(a[i]==0)
    {
        for(ll j=i;j>=1;j--)
        {
            swap(a[j],a[j-1]);
        }
    }
}
for(auto & it:a)
cout<<it<<" ";
cout<<endl;
    

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
    

 

