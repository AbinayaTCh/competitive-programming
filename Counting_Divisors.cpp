#include <bits/stdc++.h>
using namespace std;
using ll = long long;


    ll countDiv(ll n)
{
    ll ans = 1;
    ll cnt = 0;

    while (n % 2 == 0)
    {
        cnt++;
        n /= 2;
    }
    ans *= (cnt + 1);

    for (ll i = 3; i * i <= n; i += 2)
    {
        cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        ans *= (cnt + 1);
    }

    if (n > 1)
        ans *= 2;

    return ans;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        cout << countDiv(n) << '\n';
    }
}