#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,ans=0,ct=0;
        cin>>n;
        vector<long long>a(n);
        
      vector<ll> msb(32,0);
      for(ll i=0;i<n;i++)
      {
        ll x;
        cin>>x;
       ll pos= 63 - __builtin_clzll(x);
        msb[pos]++;
      }
      for(auto & it:msb)
      {
        if(it>=2)
        {
            ans+=it*(it-1)/2;

        }
      }
      cout<<ans<<endl;
    }
}