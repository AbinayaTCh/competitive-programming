#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    ll n;
    cin>>n;
vector<ll>a(n),b(n);
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}
b=a;
sort(a.begin(),a.end());
ll c=0;
for(ll i=0;i<n;i++)
{
    if(a[i]!=b[i])
    {
        c++;
    }
}
if(c>2)
{
    cout<<"NO";
}
else
cout<<"YES";
}

