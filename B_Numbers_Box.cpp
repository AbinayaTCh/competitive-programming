#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, c = 0, mi = INT_MAX;
        cin >> n >> m;
        int a[n][m];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if(a[i][j] < 0)
                {
                    c++;
                }
                mi = min(mi, abs(a[i][j]));
            }
        }

        int s = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                s += abs(a[i][j]);
            }
        }

        if(c % 2 == 0)
            cout << s << endl;
        else
            cout << s - 2 * mi << endl;
    }
}
