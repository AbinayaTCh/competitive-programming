#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<int,int> pos;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int q;
    cin >> q;

    long long v = 0, s = 0;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
         
        v += pos[x];
        s += (n - pos[x]+ 1);
    }

    cout << v << " " << s << endl;
    return 0;
}
