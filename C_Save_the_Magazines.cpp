#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = "0" + s;  

        vector<long long> a(n + 1);
        a[0] = 0; 
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        long long ans = 0;
        int i = 0;

        while(i <= n) {
            long long mn = a[i];
            long long sm = a[i];
            int j = i + 1;
            while(j <= n && s[j] == '1') {
                mn = min(mn, a[j]);
                sm += a[j];
                j++;
            }
            ans += sm - mn;
            i = j;
        }

        cout << ans << endl;
    }
}
