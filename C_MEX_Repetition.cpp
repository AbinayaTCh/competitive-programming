#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        // Prepare a sorted copy for MEX
        b = a;
        sort(b.begin(), b.end());

        
        long long mex = 0;
        for (long long x : b) {
            if (x == mex)
                mex++;
            
        }

    
        vector<long long> ext(n + 1);
        for (int i = 0; i < n; i++)
            ext[i] = a[i];
        ext[n] = mex;

        
        long long shift = k % (n + 1);
        long long start = (n + 1 - shift) % (n + 1);


        for (int i = 0; i < n; i++) {
            cout << ext[(start + i) % (n + 1)] << " ";
        }
        cout << "\n";
    }
    return 0;
}
