#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll check(vector<ll>a, ll x,ll l,ll r )
{
    
    while(l<r)
    {
        if(a[l]==a[r])
        {
            l++;
            r--;
        }
        else if(a[l]==x)
        {
            l++;
        }
        else if(a[r]==x)
        {
            r--;
        }
        else
        return 1;
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll l=0,r=n-1,ans=0,b,c;
        unordered_set<ll>s;
        
    while(l<r)
    {
        if(a[l]==a[r])
        {
            l++;
            r--;


        }
        else
break;
    }
    if(l>=r)
    {
    cout<<"YES"<<endl;
    continue;
}
            
       
    if(check(a,a[l],l,r)  && check(a,a[r],l,r))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
}