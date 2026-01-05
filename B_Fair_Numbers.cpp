#include <bits/stdc++.h>
using namespace std;

int  check(long long n) {
    string s = to_string(n);
    for (char c : s) {
        int digit = c - '0';
        if (digit != 0 && n % digit != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (!check(n)) {
            n++;
        }
        cout << n << endl;
    }
}
