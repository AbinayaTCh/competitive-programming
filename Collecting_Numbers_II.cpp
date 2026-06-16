#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,mp;
    cin>>n>>mp;

    vector<long long> m(n+1);
    vector<long long> v(n);

    long long c=1;

    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]=i;
    }

    for(long long i=1;i<n;i++)
    {
        if(m[i]>m[i+1])
        {
            c++;
        }
    }

    while(mp--)
    {
        long long a,b;
        cin>>a>>b;

        long long x=v[a-1];
        long long y=v[b-1];

        set<pair<long long,long long>> s;

        auto ins=[&](long long z)
        {
            if(z>=1 && z<n)
            {
                s.insert({z,z+1});
            }
        };

        ins(x-1);
        ins(x);
        ins(y-1);
        ins(y);

       
        for(auto [u,w]:s)
        {
            if(m[u]>m[w])
            {
                c--;
            }
        }

        swap(v[a-1],v[b-1]);
        swap(m[x],m[y]);

        
        for(auto [u,w]:s)
        {
            if(m[u]>m[w])
            {
                c++;
            }
        }

        cout<<c<<"\n";
    }
}