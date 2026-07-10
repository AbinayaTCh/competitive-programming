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
    { ll r,y;
    cin>>r>>y;
    if(r==0)
    cout<<y/2<<endl;
    else if(r<y)
    {
        cout<<r+((y-r)/2)<<endl;
    }
    else
    cout<<r<<endl;
}
}