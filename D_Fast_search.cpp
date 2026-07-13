#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll  n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll k;
    cin>>k;
    sort(a.begin(),a.end());
    while(k--)
    {
    ll l,r;
    cin>>l>>r;
    ll up=upper_bound(a.begin(),a.end(),r)-a.begin();
    ll lo=lower_bound(a.begin(),a.end(),l)-a.begin();
    cout<<up-lo<<" ";
    }
}