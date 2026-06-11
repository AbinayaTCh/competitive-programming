#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,m,c=0,ans=0;
    cin>>n>>k>>m;

    vector<pair<long long,long long>>p;
    unordered_set<long long>s;

    for(long long i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;
        p.push_back({b,a});
    }

    sort(p.begin(),p.end(),greater<pair<long long,long long>>());

    vector<int> used(n,0);

    for(long long i=0;i<n;i++)
    {
        if(s.find(p[i].second)==s.end())
        {
            c++;
            s.insert(p[i].second);
            ans+=p[i].first;
            used[i]=1;
        }

        if(c==m)
        {
            break;
        }
    }

    for(long long i=0;i<n;i++)
    {
        if(c==k)
        {
            break;
        }

        if(!used[i])
        {
            ans+=p[i].first;
            c++;
        }
    }

    cout<<ans<<endl;
}