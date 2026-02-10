#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;


    int x = (n + 1) / 2;

    
    int k = ((x + m - 1) / m) * m;

    if (k <= n) {
        cout << k << endl;
    } else {
        cout << -1 << endl;
    }

    
}
