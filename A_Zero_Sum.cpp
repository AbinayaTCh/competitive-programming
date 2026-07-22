#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        c++;
    }
    if(n%2==1)
    cout<<"NO"<<endl;
else if((c%2)==(n/2)%2)
{
    cout<<"YES"<<endl;
}
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
     