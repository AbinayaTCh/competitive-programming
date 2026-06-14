#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long c=0,ans=*min_element(a.begin(),a.end());
    for(long long i=0;i<n;i++)
    {
        c=max(c+a[i],a[i]);
        ans=max(c,ans);
    }
cout<<ans<<endl;    
}