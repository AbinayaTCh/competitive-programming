#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c=INT_MAX;
        cin>>n;
        map<long long,long long>m;
        for(long long i=0;i<n*n;i++)
        {
            long long a;
            cin>>a;
            m[a]++;
        }
        

        for(auto & it:m )
        {
            c=min(c,n*n-it.second);
            
        }
        if(c<n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}