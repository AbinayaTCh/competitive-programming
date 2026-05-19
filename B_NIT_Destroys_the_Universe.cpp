#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        long long c = 0;
        for(long long i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 0)
            {
                c++;
            }
        }

        long long l = 0, r = n - 1;
        while(l < n && a[l] == 0)
        {
            l++;
        }
        while(r >= 0 && a[r] == 0)
        {
            r--;
        }

        long long b = 0;
        for(long long i = l; i <= r; i++)
        {
            if(a[i] == 0)
            {
                b++;
            }
        }

        if(c == n)
        {
            cout << 0 << endl;
        }
        else if(b == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}