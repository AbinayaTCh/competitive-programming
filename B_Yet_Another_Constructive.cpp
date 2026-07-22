#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m,k;
    cin>>n>>k>>m;
    ll c=m-(k-1)%m;
    if(k>m)
    {
        cout<<"NO"<<endl;
        return ;
    }
    else
    {
        cout<<"YES"<<endl;
        for(ll i=0;i<k-1;i++)
        {
            cout<<1<<" ";
        }
        cout<<c<<" ";
        for(ll i=k;i<n;i++)
        {
            cout<<1<<" ";
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
     