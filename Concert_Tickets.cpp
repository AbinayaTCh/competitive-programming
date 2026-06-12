#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;

    vector<long long> b(m);
    multiset<long long> a;

    for(long long i=0;i<n;i++)
    {
        long long x;
        cin >> x;
        a.insert(x);
    }

    for(long long i=0;i<m;i++)
    {
        cin >> b[i];
    }

    for(auto &v : b)
    {
        auto it = a.upper_bound(v);

        if(it == a.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            --it;
            cout << *it << endl;
            a.erase(it);
        }
    }

    return 0;
}