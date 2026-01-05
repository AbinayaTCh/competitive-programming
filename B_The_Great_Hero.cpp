#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long p, h, n, m = 0;
        cin >> p >> h >> n;

        vector<long long> a(n), b(n);
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(long long i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        long long total = 0;   
        for(long long i = 0; i < n; i++)
        {
            total += a[i] * ((b[i] + p - 1) / p);
        }

        for(long long i = 0; i < n; i++)
        {
            long long hk = h - total + a[i];
            m = max(m, hk);
        }

        if(m > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
