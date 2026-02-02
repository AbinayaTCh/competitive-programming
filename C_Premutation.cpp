#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> seq(n, vector<int>(n - 1));
        map<int, int> freq;

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> seq[i][j];
            }
            freq[seq[i][0]]++;
        }

        int x;
        vector<int> pi;

    
        for (int i = 0; i < n; i++) {
            if (freq[seq[i][0]] == 1) {
            
                pi = seq[i];
            } else {
                x = seq[i][0];
            }
        }

        
        cout << x << " ";
        for (int v : pi) cout << v << " ";
        cout << endl;
    }

    return 0;
}
