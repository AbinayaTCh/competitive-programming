#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c=1;
        cin>>n;

        long long r=sqrt(n);
if(r<2||r*r!=n )
cout<<"NO"<<endl;
else
{
    for(long long i=2;i*i<=r;i++)
    {
        if((r)%i==0)
        {
            c=0;
            break;

        }
    }
    if(c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

    }}