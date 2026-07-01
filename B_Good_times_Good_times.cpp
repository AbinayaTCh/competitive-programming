#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    { 
        ll x;
        cin>>x;
    int c=0;
    while(x!=0)
    {
        x=x/10;
        c++;
    }
    ll ans=1;
    for(ll i=0;i<c;i++)
    { 
        ans=ans*10;

    }
    cout<<ans+1<<endl;
        
    }
}