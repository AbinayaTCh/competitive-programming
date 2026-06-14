#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<pair<long long,long long>>v;
    vector<long long>c;
    for(long long i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        for(long long j=0;j<k;j++)
        {
            long long x;
            cin>>x;
            v.push_back({x,i+1});
        }
    }
    sort(v.begin(),v.end());
    map<long long,long long>m;
    for(long long i=1;i<=n;i++)
    {
        m[i]=0;
    }
    for(auto & it:v)
    {
        m[it.first]++;

    }

    for(auto & it:m)
    {
        if(it.second==0)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<it.second<<" ";
        for(auto & p:v)
        {
            if(p.first==it.first)
            {
                cout<< p.second<<" ";
            }
            

        }
        cout<<endl;
    }
    
    }
