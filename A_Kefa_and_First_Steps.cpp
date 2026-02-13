#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    long long current = 1;
    long long maximum = 1;

    for(long long i = 1; i < n; i++)
    {
        if(a[i] >= a[i - 1])
        {
            current++;
        }
        else
        {
            maximum = max(maximum, current);
            current = 1;
        }
    }

    maximum = max(maximum, current);

    cout << maximum << endl;
}
