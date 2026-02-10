#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;

    for (char c : s) {
        c = tolower(c);
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')) {
            t.push_back('.');
            t.push_back(c);
        }
    }

    cout << t << endl;
    return 0;
}
