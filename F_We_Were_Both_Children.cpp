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
        ll n;
        cin>>n;
        vector<ll>a(n),b(n+1,0),f(n+1,0);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=n)
            {
                f[a[i]]++;
            }
        }
        for(ll i=1;i<=n;i++)
        {
            if(f[i]==0)
            {
                continue;
            }
            for(ll j=i;j<=n;j+=i)
            {
                b[j]+=f[i];
            }
        }
       cout<<*max_element(b.begin(),b.end())<<endl;
    }
}