#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long i=0;i<n;i++)
    {
        long long b;
        cin>>b;
        if(a[b-1]!=i+1)
        {
            cout<<"No";
            return 0;
            
        }
    }
    cout<<"Yes";
}