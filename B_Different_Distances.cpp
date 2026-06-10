#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t;
cin>>t;
while(t--)
{
    long long n;
    cin>>n;
    cout<<1<<" ";
    for(long long i=2;i<=n;i++)
    {
        cout<<i<<" "<< i<<" ";
    }
    cout<<1<<" ";
   for(long long i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    for(long long i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
}