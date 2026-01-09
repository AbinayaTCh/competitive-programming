#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long a;
    cin >> a;

    vector<int> r(n);

    for (long long i = n - 1; i >= 0; i--) {
        r[i] = a % 10;
        a /= 10;
    }

    if (n == 1 && k > 0) {
        r[0] = 0; 
    } else {
        for (long long i = 0; i < n && k > 0; i++) {
            if (i == 0) {
                if (r[i] != 1) {
                    r[i] = 1;
                    k--;
                }
            } else {
                if (r[i] != 0) {
                    r[i] = 0;
                    k--;
                }
            }
        }
    }

    for (long long i = 0; i < n; i++) {
        cout << r[i];
    }
    cout << endl;

    return 0;
}
