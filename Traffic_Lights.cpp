#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin>>n>>k;

    set<long long> s;
    multiset<long long> m;

    s.insert(0);
    s.insert(n);
    m.insert(n);

    while(k--)
    {
        long long p;
        cin>>p;

        auto it=s.lower_bound(p);
        auto i=prev(it);

        long long r=*it;
        long long l=*i;

        m.erase(m.find(r-l));

        m.insert(p-l);
        m.insert(r-p);
        s.insert(p);

        cout<<*m.rbegin()<<" ";
    }
}