#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll prexor(ll n)
{
    if(n%4==0)
    return n;
    else if(n%4==1)
    return 1;
    else if(n%4==2)
    return n+1;
    else
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
       ll pre=prexor(a-1);
       if(pre==b)
       {
        cout<<a<<endl;
       }
       else if((pre^b)!=a)
       {
        cout<<a+1<<endl;
       }
       else
       cout<<a+2<<endl;
    }
}
