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
        }
        for(long long i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                a[i+1]=a[i];
            }
        }
        for(auto & it:a)
        {
            c+=it;
        }
        cout<<c<<endl;

    }
}