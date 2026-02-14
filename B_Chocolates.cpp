#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m = 0;
    cin >> n;

    vector<long long> a(n+1);

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for(int i = n-1; i >= 1; i--)
    {
        a[i] = min(a[i+1] - 1, a[i]);

        if(a[i] < 0)
            a[i] = 0;
    }

    for(int i = 1; i <= n; i++)
    {
        m += a[i];
    }

    cout << m << endl;
}
