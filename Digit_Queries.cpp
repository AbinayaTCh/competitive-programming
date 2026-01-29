#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        long long k;
        cin >> k;

        long long d = 1;
        long long count = 9;
        long long start = 1;

        
        while (k > count * d) {
            k -= count * d;
            d++;
            count *= 10;
            start *= 10;
        }

    
        long long index = (k - 1) / d;
        long long num = start + index;

    
        int digitIndex = (k - 1) % d;
        string s = to_string(num);

        cout << s[digitIndex] << '\n';
    }

    return 0;
}
