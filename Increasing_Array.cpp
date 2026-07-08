#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long n,c=0;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
        if(a[i]<=a[i-1])
        {
           
            ans+=a[i-1]-a[i];
            a[i]=a[i-1];
        }

    }
    cout<<ans<<"\n";

}