#include <bits/stdc++.h>
using namespace std;

int main() {


    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

    
        int  ans = INT_MAX;

    
        for (int y = 0; y <= 30; y++) {
            long long bb = b + y;

            
            if (bb <= 1) continue;

            long long c = a;
            int cnt = y; 

        
            while (c> 0) {
                c /= bb;
                cnt++;
            }

            ans = min(ans, cnt);
        }

        cout << ans << endl;
    }

    return 0;
}
