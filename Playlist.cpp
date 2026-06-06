#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0, id=0;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<long long,long long>m;
    for(long long i=0;i<n;i++)
    {
        if(m.count(a[i]))
        {
id=max(id,m[a[i]]+1);
        }
        ans=max(ans,i+1-id);

        m[a[i]]=i;
    }
    cout<<ans<<endl;
 
 
}
