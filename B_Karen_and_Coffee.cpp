#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>l(n),r(n);
    for(ll i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
    }    
    ll ma=*max_element(r.begin(),r.end());
    ll mi=*min_element(l.begin(),l.end());
     vector<ll>enterleave(ma+1,0);
    
    for(ll i=0;i<n;i++) 
    {
        enterleave[l[i]]++;
        enterleave[r[i]+1]--;

    }
    ll c=enterleave[mi];
    for(ll i=mi+1;i<=ma;i++)
    {
       
        enterleave[i]=enterleave[i]+c;
        c=enterleave[i];
    }
    vector<ll>p(ma+2,0);
    for(ll i=mi;i<=ma;i++)
    {
        if(enterleave[i]>=k)
        {
        enterleave[i]=1;
        }
        else
        enterleave[i]=0;
    }
    p[mi]=enterleave[mi];
    for(ll i=mi+1;i<=ma;i++)
    {
        p[i]=p[i-1]+enterleave[i];
    }



    while(q--)
    {
       
        ll a,b;
        cin>>a>>b;
      ll c=max(a,mi);
    ll d=min(b,ma);
   if(c>d)
   {
    cout<<0<<endl;
    continue;
   }
    cout<<p[d]-p[c-1]<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    
        solve();
    }

     