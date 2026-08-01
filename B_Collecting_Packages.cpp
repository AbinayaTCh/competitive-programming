  #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{ ll n;
cin>>n;
vector<pair<ll,ll>>a(n+1);
for(ll i=1;i<=n;i++)
{
    cin>>a[i].first>>a[i].second;


}
sort(a.begin(),a.end());
bool check=false;
for(ll i=1;i<n;i++)
{
    if(a[i].first>a[i+1].first||a[i].second>a[i+1].second)
    {
        check=true;
        break;
    }
}
if(check)
cout<<"NO"<<endl;
else
{
    cout<<"YES"<<endl;
    ll x=0,y=0;
    for(ll i=1;i<=n;i++)
    {
        ll c=abs(a[i].first-x);
ll d=abs(a[i].second-y);
        while(c--)
        cout<<"R";
    while(d--)
    cout<<"U";
x=a[i].first;
y=a[i].second;
    }
    cout<<endl;
}
    

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
  
    

 

