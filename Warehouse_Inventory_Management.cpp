#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,c=0;
    cin>>n>>m;
    vector<long long>a(n),b(n);
        for(long long i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];

    }
    for(long long i=0;i<m;i++)
    {
        long long x,y;
        cin>>x>>y;
        a[x-1]+=y;
    }
    for(long long i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
    }
    cout<<c<<endl;
}