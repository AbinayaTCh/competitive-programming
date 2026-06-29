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
        ll n,c,ans=0,soln=0,r=0,s=0,d=INT_MAX;
        cin>>n>>c;
        vector<ll>a(n),b(n);
        
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
      
    }
     for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        
        
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=b[i])
        {
            ans+=(a[i]-b[i]);
        }
        else
        {
            s=1;
            break;
        }
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(ll i=0;i<n;i++)
    {
        if(a[i]>=b[i])
        {
            soln+=(a[i]-b[i]);


        }
        

        
        else
        {
            r=1;
            break;
        }
    }
     if(!s)
     {
        d=min(d,ans);
     }
     if(!r)
     {
        d=min(d,soln+c);
     }
     if(d==INT_MAX)
     cout<<-1<<endl;
     else
     cout<<d<<endl;
     
    

    }
}
