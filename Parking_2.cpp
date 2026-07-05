#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x,y,l,r,a,b,ans=0;
    cin>>x>>y>>l>>r>>a>>b;
    if(a>=r||b<=l)
    {
       cout<<(b-a)*y<<endl;
       return 0;
    }
    if(l>a)
    {
        ans+=(l-a)*y;
        a=l;
    
    }
    if(r<b)
    {
        ans+=(b-r)*y;
      b=r;
    
    }
    ans+=(b-a)*x;
    cout<<ans<<endl;
}