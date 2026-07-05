
       
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
        vector<ll>a(n);
        unordered_set<ll>st;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
 
        for(ll i=0;i<n-1;i++)
        {
            if(a[i+1]%a[i]!=0)
            {
                st.insert((a[i])/__gcd(a[i],a[i+1]));
            }
        }
        ll ans = 1;
for (auto &it : st)
{
    ans = ans / __gcd(ans, it) * it;
}
cout << ans << endl;
 
    }
}
