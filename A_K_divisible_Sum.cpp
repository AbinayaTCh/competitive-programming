#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,k;
        cin>>n>>k;
    long  long s=((k+n-1)/k)*k;
    long long ans=(s+n-1)/n;
    cout<<ans<<endl;

    }
}