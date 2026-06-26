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
        ll a,b,k;
        cin>>a>>b>>k;
        ll o=__gcd(a,b);
        ll dx=a/o;
        ll dy=b/o;
        if(dx> k || dy>k)
        cout<<2<<endl;
        else
        cout<<1<<endl;

        
    }

}