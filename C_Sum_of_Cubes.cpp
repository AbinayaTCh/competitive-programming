#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        int  c = 0;
        cin >> n;

        for(long long i = 1; i * i * i < n; i++)
        {
            long long r = n - i * i * i;
            m = round(cbrt(r));

            if(m >= 1 && m * m * m == r)
            {
                c = 1;
                break;
            }
        }

        if(c)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
