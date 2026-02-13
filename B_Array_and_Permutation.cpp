#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1);  // 1-indexed
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            p[x] = i + 1;  // store position
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool valid = true;
        for (int i = 0; i < n - 1; i++) {
            if (p[a[i]] > p[a[i + 1]]) {
                valid = false;
                break;
            }
        }

        if (valid)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
