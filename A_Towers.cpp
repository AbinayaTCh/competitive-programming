#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, h = 0;
    cin >> n;

    vector<long long> a(n);
    set<long long> s;
    map<long long,long long>m;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        m[a[i]]++;         
    }

    for(auto it :m)
    {
        h = max(h, it.second);
    }

    cout << h <<" ";      
    cout << s.size() << endl; 
}
