#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n,d;
        cin>>n>>d;
        vector<pair<ll,ll>>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        sort(a.begin(),a.end());
       ll r=0;
       ll ans=0,sum=0;
     for(ll i=0;i<n;i++)
     {
        sum+=a[i].second;
        while(a[i].first-a[r].first>=d)
        {
            sum-=a[r].second;
            r++;
        }
        ans=max(ans,sum);
     }
       cout<<ans<<endl;
    }
