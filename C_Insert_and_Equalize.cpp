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
        ll n,sum=0;
        cin>>n;
        vector<ll>a(n);
        unordered_set<ll>s;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll ma=*max_element(a.begin(),a.end());
        
        ll x=0;
        for(ll i=0;i<n;i++)
        {
            x=__gcd(x,ma-a[i]);
            
        }
        if(n==1 )
        {
            cout<<1<<endl;
            continue;
        }
        if(x==0)
        {
            x=1;
        } 
        sort(a.begin(),a.end());
        ll j=n-1;
        ll k=ma;
        while(true)
        {
            while(j>=0 && a[j]>k)
            {
                j--;
            }

            if(a[j]!=k || j<0)
            {
                break;
            }
            k-=x;
        }
        cout<<(ma*(n+1)-(sum+k))/x<<endl;
        
        

   
   
}}
        