#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,c=0;
    cin>>n;
    vector<ll>a(n);
    ll g=0;
    set<long long>s;
    for(long long i=0;i<n;i++)
    {
cin>>a[i];
g=__gcd(g,a[i]);
    }
    for(ll i=1;i*i<=g;i++)
    {
        if(g%i==0)
        {
            s.insert(i);
            s.insert(g/i);
            

        }
    }
    cout<<s.size()<<endl;
}