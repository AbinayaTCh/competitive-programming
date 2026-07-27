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
vector<ll>b;
ll c=0;
ll ma=*max_element(a.begin(),a.end());
for(ll i=0;i<n;i++)
{
    if(a[i]==ma)
    c++;


    
}
cout<<c<<endl;
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
    