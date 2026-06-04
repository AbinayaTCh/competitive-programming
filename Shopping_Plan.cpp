#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,s=0,c=0;
    cin>>n>>m;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
map<long long ,long long >mp;
for(long long i=0;i<m;i++)
{
    long long x,y;
    cin>>x>>y;
    if(mp.find(x)!=mp.end())
    {
        mp[x]=min(mp[x],y);
    }
    else
    {
        mp[x]=y;
    }
}
for(long long i=0;i<n;i++)
{
    if(mp.find(a[i])!=mp.end())
    {
        s+=mp[a[i]];
    }
    else
    {
        c=1;
    }
}
if(c==1)
{
    cout<<"-1"<<endl;
}
else
{
    cout<<s<<endl;
}
}