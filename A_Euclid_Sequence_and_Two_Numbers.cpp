#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        
        sort(a.begin(),a.end(),greater<int>());
        if(n==2)
        {
            cout<<a[0]<<" "<<a[1]<<endl;
            continue;
        }
        for(long long i=0;i<n-2;i++)
        {
            if(a[i]%a[i+1]!=a[i+2])
            { c=1;

            }
        }
        if(!c)
        {
            cout<<a[0]<<" "<<a[1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
}