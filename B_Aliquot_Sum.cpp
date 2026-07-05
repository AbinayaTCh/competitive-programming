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
        ll sum=0;
        unordered_set<ll>st;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                st.insert(i);
              st.insert(n/i);
            }
        }
       for(auto  & it:st)
       {
        sum+=it;
       }
       sum-=n;
       if(sum>n)
       {
        cout<<"abundant"<<endl;
       }
       else if(sum<n)
       {
        cout<<"deficient"<<endl;
       }
       else
       {
        cout<<"perfect"<<endl;
       }
    }
}