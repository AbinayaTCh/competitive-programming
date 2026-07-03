#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<vector<ll>> a(n, vector<ll>(n));

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        vector<vector<ll>> b(n, vector<ll>(n));

        ll r = 0, c = 0;

        for (ll i = n - 1; i >= 0; i--)
        {
            for (ll j = n - 1; j >= 0; j--)
            {
                b[r][c] = a[i][j];
                c++;
            }
            c = 0;
            r++;
        }

        ll ct = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (a[i][j] != b[i][j])
                    ct++;
            }
        }

        ct = ct / 2;

        if (ct > k)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                if ((k - ct) % 2 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    
}