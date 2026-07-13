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
    if(n==1)
    {
        cout<<1<<endl;
        continue;
    }
    else if(n==2)
    {
        cout<<-1<<endl;
    }
    else
    {
        vector<ll>a(n);
        a[0]=2;
        a[1]=4;
        a[2]=6;

        ll s=12;
        for(ll  i=3;i<n;i++)
        {
            a[i]=s;
            s*=2;
        }
        for(auto & x:a)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
}