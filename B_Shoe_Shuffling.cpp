#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[s[i]].push_back(i);
        }

        vector<int> result(n, -1);
        int  ok = 1;

        for (auto &g : groups) {
            if (g.second.size() == 1) {
                ok = 0;
                break;
            }

            int k = g.second.size();
            for (int i = 0; i < k; i++) {
                result[g.second[i]] = g.second[(i + 1) % k];
            }
        }

        if (!ok) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            cout << result[i] + 1 << " ";
        }
        cout << endl;
    }

    
}
