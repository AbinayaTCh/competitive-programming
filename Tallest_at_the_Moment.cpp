#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
   vector<ll>a(n),t(n);
   for(ll i=0;i<n;i++)
   {
    cin>>a[i]>>t[i];
   }
   for(ll i=n-2;i>=0;i--)
   {
    a[i]=max(a[i],a[i+1]);
   }
   ll q;
   cin>>q;

   while(q--)
   {
    ll x;
    cin>>x;
    ll id=upper_bound(t.begin(),t.end(),x)-t.begin();
    cout<<a[id]<<endl;

   }


    }

