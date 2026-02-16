#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(7);
    long long sum = 0;

    for(int i = 0; i < 7; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    n = n % sum;

    if(n == 0)
        n = sum;

    for(int i = 0; i < 7; i++)
    {
        n -= a[i];
        if(n <= 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
