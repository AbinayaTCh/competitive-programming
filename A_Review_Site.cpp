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
        long long n,c=0;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)
        {
cin>>a[i];
if(a[i]==1||a[i]==3)
c++;
        }
        cout<<c<<endl;
    }
}