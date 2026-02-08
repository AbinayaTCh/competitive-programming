#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,t=0;
    cin>>n>>m;
    vector<long long>a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    t=t+a[0]-1;
    for(int i=1;i<m;i++)
    {
        if(a[i]>a[i-1])
        {
            t+=a[i]-a[i-1];

        }
        else if(a[i]<a[i-1])
        {
            t=t+n-a[i-1]+a[i];

        }


    }
    cout<<t<<endl;
}