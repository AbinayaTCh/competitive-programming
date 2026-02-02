#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t;
    string s = "";

    cin >> n >> t;

    if(t == 10)
    {
        if(n == 1)
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            for(int i = 0; i < n - 1; i++)
            {
                s += '1';
            }
            s += '0';
        }
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            s += char(t + '0');
        }
    }

    cout << s << endl;
}
