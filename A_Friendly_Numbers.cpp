#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        long long count = 0;

        
        for (long long y = x + 1; y <= x + 100; y++) {
            if (y -sum(y) == x) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
