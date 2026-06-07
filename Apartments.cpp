#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,k,c=0;
    cin>>n>>m>>k;

    vector<long long>a(n),b(m);

    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(long long i=0;i<m;i++)
    {
        cin>>b[i];
    }

    sort(a.begin(),a.end());
    long long i=0,j=0;
sort(b.begin(),b.end());
    while(i<=n-1 && j<=m-1)
    {
        if(abs(a[i]-b[j])<=k)
        {
            i++;
            j++;
            c++;
        }
        else if(a[i]+k>b[j])
        {
j++;
        }
        else{
            i++;
            
        }
    }

    cout<<c<<endl;
}