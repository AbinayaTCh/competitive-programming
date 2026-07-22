#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{ ll n;
    cin>>n;
    ll t=0,ans=0;
    while(n--)
    {
         ll a,b;
         cin>>a>>b;
         string s;
         cin>>s;
        t+=(b-a);
       if(s=="take")
        {
            ans+=b-a;
        }
    }
    cout<<t-ans;

    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
     