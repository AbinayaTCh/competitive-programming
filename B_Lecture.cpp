#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> a(m),b(m),c(n),d(m);
    map<string,int>mp;
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
        mp[a[i]]=i;
    }
    for(int j=0;j<n;j++)
    {
        cin>>c[j];
    }
    for(int i=0;i<m;i++)
    {
        if(a[i].size()>b[i].size())
        {
            d[i]=b[i];
        }
        else
        {
            d[i]=a[i];
        }

    }
    for(int i=0;i<n;i++)
    {
        int id=mp[c[i]];
        cout<<d[id]<<" ";
    }
    cout<<endl;



}