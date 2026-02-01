#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int ce = 0;              
        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0) ce++;

            
             
            ans = min(ans, (k - a[i] % k) % k);
        }

        
        if (k == 4)
        {
            

        
            if (n >= 2)
                cout << min(ans, max(0, 2 - ce)) << endl;
            else
                cout << ans << endl;
        }
    
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
