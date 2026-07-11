#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    string s;
    cin >> s;

    deque<ll> dq;
    bool rev = false;

    for (ll i = 1; i <= n; i++)
    {
        if (rev)
            dq.push_front(i);
        else
            dq.push_back(i);

        if (s[i - 1] == 'o')
            rev = !rev;
    }

    if (rev)
        reverse(dq.begin(), dq.end());

    for (auto &it : dq)
        cout << it << " ";

    cout << endl;
}